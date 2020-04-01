//
// Created by kn on 04.01.2020.
//

#include <cassert>
#include <iostream>
#include <numeric>
#include <WolframRTL.h>
#include <algorithm>

#include "ipopt_interface.h"
#include "model.h"
#include "../matrices/grad.h"
#include "../matrices/hess.h"

CIR_MLE_NLP::CIR_MLE_NLP() {
    openPrices = new std::vector<double>;
    closePrices = new std::vector<double>;
    CSVReader csvReader = CSVReader{fs::current_path().parent_path().string() + "/data/XBTUSD-5m-data.csv"};
    csvReader.readDataColumn("close", closePrices);
    csvReader.readDataColumn("open", openPrices);
    libData = WolframLibraryData_new(WolframLibraryVersion);
}

CIR_MLE_NLP::~CIR_MLE_NLP() {
    delete closePrices;
    WolframLibraryData_free(libData);
}

bool CIR_MLE_NLP::get_nlp_info(Ipopt::Index &n,
                               Ipopt::Index &m,
                               Ipopt::Index &nnz_jac_g,
                               Ipopt::Index &nnz_h_lag,
                               Ipopt::TNLP::IndexStyleEnum &index_style) {
    n = 3;
    m = 0;
    nnz_jac_g = 0;
    nnz_h_lag = 6;
    index_style = Ipopt::TNLP::C_STYLE;
    return true;
}

bool CIR_MLE_NLP::get_bounds_info(Ipopt::Index n,
                                  Ipopt::Number *x_l,
                                  Ipopt::Number *x_u,
                                  Ipopt::Index m,
                                  Ipopt::Number *g_l,
                                  Ipopt::Number *g_u) {
    assert(n == 3);
    assert(m == 0);

    x_l[SIGMA] = 0.1;
    x_l[THETA] = 0;
    x_l[KAPPA] = 0;

    x_u[SIGMA] = 2e19;
    x_u[THETA] = 2e19;
    x_u[KAPPA] = 2e19;

    return true;
}

bool CIR_MLE_NLP::get_starting_point(Ipopt::Index n,
                                     bool init_x,
                                     Ipopt::Number *x,
                                     bool init_z,
                                     Ipopt::Number *z_L,
                                     Ipopt::Number *z_U,
                                     Ipopt::Index m,
                                     bool init_lambda,
                                     Ipopt::Number *lambda) {
    assert(init_x);
    assert(!init_z);
    assert(!init_lambda);

    x[SIGMA] = 0.3;
    x[THETA] = std::accumulate(closePrices->begin(), closePrices->end(), 0.0) / closePrices->size();
    x[KAPPA] = 5;
    return true;
}

bool CIR_MLE_NLP::eval_f(Ipopt::Index n,
                         const Ipopt::Number *x,
                         bool new_x,
                         Ipopt::Number &obj_value) {
    assert(n == 3);
    obj_value = 0;
    Initialize_model(libData);
    mreal res;
    for (Ipopt::Index i = 0; i < closePrices->size(); i++) {
        int err = model(libData,
                        closePrices->at(i),
                        openPrices->at(i),
                        x[SIGMA],
                        x[THETA],
                        x[KAPPA],
                        TAU,
                        &res);

        if (err != 0) {
            throw std::runtime_error(&"Compute model error:"[err]);
        }

        obj_value += res;
    }
    Uninitialize_model(libData);
    return true;
}

bool CIR_MLE_NLP::eval_grad_f(Ipopt::Index n,
                              const Ipopt::Number *x,
                              bool new_x,
                              Ipopt::Number *grad_f) {
    assert(n == 3);
    grad_f[SIGMA] = 0;
    grad_f[THETA] = 0;
    grad_f[KAPPA] = 0;
    Initialize_grad1(libData);
    mreal sigmaGrad, thetaGrad, kappaGrad;
    for (Ipopt::Index i = 0; i < closePrices->size(); i++) {
        grad1(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
              &sigmaGrad);
        grad2(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
              &thetaGrad);
        grad3(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
              &kappaGrad);

        grad_f[SIGMA] += sigmaGrad;
        grad_f[THETA] += thetaGrad;
        grad_f[KAPPA] += kappaGrad;
    }
    Uninitialize_grad1(libData);
    return true;
}

bool CIR_MLE_NLP::eval_g(Ipopt::Index n,
                         const Ipopt::Number *x,
                         bool new_x,
                         Ipopt::Index m,
                         Ipopt::Number *g) {
    return true;
}

bool CIR_MLE_NLP::eval_jac_g(Ipopt::Index n,
                             const Ipopt::Number *x,
                             bool new_x,
                             Ipopt::Index m,
                             Ipopt::Index nele_jac,
                             Ipopt::Index *iRow,
                             Ipopt::Index *jCol,
                             Ipopt::Number *values) {
    return true;
}

bool CIR_MLE_NLP::eval_h(Ipopt::Index n,
                         const Ipopt::Number *x,
                         bool new_x,
                         Ipopt::Number obj_factor,
                         Ipopt::Index m,
                         const Ipopt::Number *lambda,
                         bool new_lambda,
                         Ipopt::Index nele_hess,
                         Ipopt::Index *iRow,
                         Ipopt::Index *jCol,
                         Ipopt::Number *values) {
    if (values == nullptr) {
        Ipopt::Index idx = 0;
        for (Ipopt::Index row = 0; row < 3; row++) {
            for (Ipopt::Index col = 0; col <= row; col++, idx++) {
                iRow[idx] = row;
                jCol[idx] = col;
            }
        }

        assert(idx == nele_hess);
    } else {
        for (Ipopt::Index i = 0; i < nele_hess; i++) {
            values[i] = 0;
        }
        Initialize_hess1_1(libData);
        mreal hes1_1, hes2_1, hes2_2, hes3_1, hes3_2, hes3_3;
        for (Ipopt::Index i = 0; i < closePrices->size(); i++) {
            hess1_1(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes1_1);
            hess2_1(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes2_1);
            hess2_2(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes2_2);
            hess3_1(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes3_1);
            hess3_2(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes3_2);
            hess3_3(libData, closePrices->at(i), openPrices->at(i), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes3_3);

            values[0] += obj_factor * hes1_1;
            values[1] += obj_factor * hes2_1;
            values[2] += obj_factor * hes2_2;
            values[3] += obj_factor * hes3_1;
            values[4] += obj_factor * hes3_2;
            values[5] += obj_factor * hes3_3;
        }
        Uninitialize_hess1_1(libData);
    }
    return true;
}

void CIR_MLE_NLP::finalize_solution(Ipopt::SolverReturn status,
                                    Ipopt::Index n,
                                    const Ipopt::Number *x,
                                    const Ipopt::Number *z_L,
                                    const Ipopt::Number *z_U,
                                    Ipopt::Index m,
                                    const Ipopt::Number *g,
                                    const Ipopt::Number *lambda,
                                    Ipopt::Number obj_value,
                                    const Ipopt::IpoptData *ip_data,
                                    Ipopt::IpoptCalculatedQuantities *ip_cq) {
    std::cout << std::endl << std::endl << "Solution of the primal variables, x" << std::endl;
    for (Ipopt::Index i = 0; i < n; i++) {
        std::cout << "x[" << i << "] = " << x[i] << std::endl;
    }

    mreal unbiasedKappa = closePrices->size() / (closePrices->size() + 3.0) * (x[KAPPA] - 8);
    std::cout << "Unbiased kappa: " << unbiasedKappa << std::endl;

    //mreal unbiasedSigma = x[SIGMA] / (1 - (closePrices->size() / 2.0 - 17.0 * unbiasedKappa / 24.0));
    //std::cout << "Unbiased sigma: " << unbiasedSigma << std::endl;

}
