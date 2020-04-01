//
// Created by kn on 04.01.2020.
//

#include <cassert>
#include <iostream>
#include <numeric>
#include <WolframRTL.h>
#include <algorithm>
#include <cmath>

#include "ipopt_interface.h"
#include "model.h"
#include "../matrices/grad.h"
#include "../matrices/hess.h"

CIR_MLE_NLP::CIR_MLE_NLP() {
    marketData = new std::vector<double>;
    CSVReader csvReader = CSVReader{fs::current_path().parent_path().string() + "/data/XBTUSD-5m-data.csv"};
    csvReader.readDataColumn("close", marketData);
    std::cout << std::accumulate(marketData->begin(), marketData->end(), 0.0) / marketData->size() << std::endl;
    libData = WolframLibraryData_new(WolframLibraryVersion);
}

CIR_MLE_NLP::~CIR_MLE_NLP() {
    delete marketData;
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

    //x_u[SIGMA] = 1000000;
    //x_u[THETA] = 1000000;
    //x_u[KAPPA] = 1000000;


    x_u[SIGMA] = 2e19;
    x_u[THETA] = 2e19;
    //x_u[THETA] = std::accumulate(marketData->begin(), marketData->end(), 0.0) / marketData->size() + 2000;
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
    x[THETA] = std::accumulate(marketData->begin(), marketData->end(), 0.0) / marketData->size();
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
    for (Ipopt::Index i = 1; i < marketData->size(); i++) {
//        res = pow(marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1)), 2);
//        res /= 2 * marketData->at(i - 1) * pow(x[SIGMA], 2) * TAU;
//        res += log(sqrt(2 * M_PI * marketData->at(i - 1) * TAU) * x[SIGMA]);

        int err = model(libData,
                        marketData->at(i),
                        marketData->at(i - 1),
                        x[SIGMA],
                        x[THETA],
                        x[KAPPA],
                        TAU,
                        &res);
//        std::cout << std::endl << "Eval f" << std::endl;
//        std::cout << x[SIGMA] << std::endl;
//        std::cout << x[THETA] << std::endl;
//        std::cout << x[KAPPA] << std::endl;
//        std::cout << x[BETA] << std::endl;
//        std::cout << res << std::endl << std::endl;
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
    for (Ipopt::Index i = 1; i < marketData->size(); i++) {
//        sigmaGrad = 1 / x[SIGMA];
//        sigmaGrad -=
//                pow(marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1)),
//                    2) / (marketData->at(i - 1) * TAU * pow(x[SIGMA], 3));
//        thetaGrad = -x[KAPPA] *
//                    (marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1))) /
//                    (marketData->at(i - 1) * pow(x[SIGMA], 2));
//        kappaGrad = -(x[THETA] - marketData->at(i - 1)) *
//                    (marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1))) /
//                    (marketData->at(i - 1) * pow(x[SIGMA], 2));
        grad1(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
              &sigmaGrad);
        grad2(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
              &thetaGrad);
        grad3(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
              &kappaGrad);
//        std::cout << std::endl << "Grad sum" << std::endl;
//        std::cout << grad_f[SIGMA] << std::endl;
//        std::cout << grad_f[THETA] << std::endl;
//        std::cout << grad_f[KAPPA] << std::endl;
//        std::cout << grad_f[BETA] << std::endl;
//        std::cout << TAU << std::endl;
//
//
//        std::cout << std::endl << "Grad";
//        std::cout << std::endl << marketData->at(i) << " " << marketData->at(i - 1) << std::endl;
//        std::cout << sigmaGrad << std::endl;
//        std::cout << thetaGrad << std::endl;
//        std::cout << kappaGrad << std::endl;
//        std::cout << betaGrad << std::endl;

        grad_f[SIGMA] += sigmaGrad;
        grad_f[THETA] += thetaGrad;
        grad_f[KAPPA] += kappaGrad;

//        std::cout << std::endl << "Grad sum" << std::endl;
//        std::cout << grad_f[SIGMA] << std::endl;
//        std::cout << grad_f[THETA] << std::endl;
//        std::cout << grad_f[KAPPA] << std::endl;
//        std::cout << grad_f[BETA] << std::endl;

        // return false;
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
        for (Ipopt::Index i = 1; i < marketData->size(); i++) {
//            hes1_1 = -1 / pow(x[SIGMA], 2);
//            hes1_1 +=
//                    3 *
//                    pow(marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1)),
//                        2) / (marketData->at(i - 1) * TAU * pow(x[SIGMA], 4));
//            hes2_1 = 2 * x[KAPPA] *
//                     (marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1))) /
//                     (marketData->at(i - 1) * pow(x[SIGMA], 3));
//            hes2_2 = (pow(x[KAPPA], 2) * TAU) / (marketData->at(i - 1) * pow(x[SIGMA], 2));
//            hes3_1 = 2 * (x[THETA] - marketData->at(i - 1)) *
//                     (marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1))) /
//                     (marketData->at(i - 1) * pow(x[SIGMA], 3));
//            hes3_2 = (x[THETA] - marketData->at(i - 1)) * x[KAPPA] * TAU / (marketData->at(i - 1) * pow(x[SIGMA], 2)) -
//                     (marketData->at(i) - marketData->at(i - 1) - x[KAPPA] * TAU * (x[THETA] - marketData->at(i - 1))) /
//                     (marketData->at(i - 1) * pow(x[SIGMA], 2));
//            hes3_3 = pow(x[THETA] - marketData->at(i - 1), 2) * TAU / (marketData->at(i - 1) * pow(x[SIGMA], 2));
            hess1_1(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes1_1);
            hess2_1(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes2_1);
            hess2_2(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes2_2);
            hess3_1(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes3_1);
            hess3_2(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes3_2);
            hess3_3(libData, marketData->at(i), marketData->at(i - 1), x[SIGMA], x[THETA], x[KAPPA], TAU,
                    &hes3_3);

//            std::cout << marketData->at(i) << " " << marketData->at(i - 1)<< " " <<
//                        x[SIGMA]<< " " <<x[THETA]<< " " <<x[KAPPA]<< " " <<x[BETA]<< " " <<TAU<<std::endl;
//            std::cout << hes1_1 << ", "<< hes1_2 << ", "<<hes1_3 << ", "<<hes1_4 <<std::endl;
//            std::cout << hes2_1 << ", "<< hes2_2 << ", "<<hes2_3 << ", "<<hes2_4 <<std::endl;
//            std::cout << hes3_1 << ", "<< hes3_2 << ", "<<hes3_3 << ", "<<hes3_4 <<std::endl;
//            std::cout << hes4_1 << ", "<< hes4_2 << ", "<<hes4_3 << ", "<<hes4_4 <<std::endl;
//            return false;

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

    mreal unbiasedKappa = marketData->size() / (marketData->size() + 3.0) * (x[KAPPA] - 8);
    std::cout << "Unbiased kappa: " << unbiasedKappa << std::endl;

    //mreal unbiasedSigma = x[SIGMA] / (1 - (marketData->size() / 2.0 - 17.0 * unbiasedKappa / 24.0));
    //std::cout << "Unbiased sigma: " << unbiasedSigma << std::endl;

}
