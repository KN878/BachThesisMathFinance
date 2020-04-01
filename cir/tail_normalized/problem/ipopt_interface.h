//
// Created by kn on 04.01.2020.
//

#ifndef IPOPT_MLE_IPOPT_INTERFACE_H
#define IPOPT_MLE_IPOPT_INTERFACE_H

#include <IpTNLP.hpp>
#include <vector>
#include <string>
#include <filesystem>

#include "file reader/CSVReader.h"

namespace fs = std::filesystem;

class CIR_MLE_NLP : public Ipopt::TNLP {
public:
    CIR_MLE_NLP();

    virtual ~CIR_MLE_NLP();

    /**@name Overloaded from TNLP */
    //@{
    /** Method to return some info about the nlp */
    virtual bool get_nlp_info(Ipopt::Index &n,
                              Ipopt::Index &m,
                              Ipopt::Index &nnz_jac_g,
                              Ipopt::Index &nnz_h_lag,
                              Ipopt::TNLP::IndexStyleEnum &index_style);

    /** Method to return the bounds for my problem */
    virtual bool get_bounds_info(Ipopt::Index n,
                                 Ipopt::Number *x_l,
                                 Ipopt::Number *x_u,
                                 Ipopt::Index m,
                                 Ipopt::Number *g_l,
                                 Ipopt::Number *g_u);

    /** Method to return the starting point for the algorithm */
    virtual bool get_starting_point(Ipopt::Index n,
                                    bool init_x,
                                    Ipopt::Number *x,
                                    bool init_z,
                                    Ipopt::Number *z_L,
                                    Ipopt::Number *z_U,
                                    Ipopt::Index m,
                                    bool init_lambda,
                                    Ipopt::Number *lambda);

    /** Method to return the objective value */
    virtual bool eval_f(Ipopt::Index n,
                        const Ipopt::Number *x,
                        bool new_x,
                        Ipopt::Number &obj_value);

    /** Method to return the gradient of the objective */
    virtual bool eval_grad_f(Ipopt::Index n,
                             const Ipopt::Number *x,
                             bool new_x,
                             Ipopt::Number *grad_f);

    /** Method to return the constraint residuals */
    virtual bool eval_g(Ipopt::Index n,
                        const Ipopt::Number *x,
                        bool new_x,
                        Ipopt::Index m,
                        Ipopt::Number *g);

    /** Method to return:
     *   1) The structure of the jacobian (if "values" is NULL)
     *   2) The values of the jacobian (if "values" is not NULL)
     */
    virtual bool eval_jac_g(Ipopt::Index n,
                            const Ipopt::Number *x,
                            bool new_x,
                            Ipopt::Index m,
                            Ipopt::Index nele_jac,
                            Ipopt::Index *iRow,
                            Ipopt::Index *jCol,
                            Ipopt::Number *values);

    /** Method to return:
     *   1) The structure of the hessian of the lagrangian (if "values" is NULL)
     *   2) The values of the hessian of the lagrangian (if "values" is not NULL)
     */
    virtual bool eval_h(Ipopt::Index n,
                        const Ipopt::Number *x,
                        bool new_x,
                        Ipopt::Number obj_factor,
                        Ipopt::Index m,
                        const Ipopt::Number *lambda,
                        bool new_lambda,
                        Ipopt::Index nele_hess,
                        Ipopt::Index *iRow,
                        Ipopt::Index *jCol,
                        Ipopt::Number *values);

    //@}

    /** @name Solution Methods */
    //@{
    /** This method is called when the algorithm is complete so the TNLP can store/write the solution */
    virtual void finalize_solution(Ipopt::SolverReturn status,
                                   Ipopt::Index n,
                                   const Ipopt::Number *x,
                                   const Ipopt::Number *z_L,
                                   const Ipopt::Number *z_U,
                                   Ipopt::Index m,
                                   const Ipopt::Number *g,
                                   const Ipopt::Number *lambda,
                                   Ipopt::Number obj_value,
                                   const Ipopt::IpoptData *ip_data,
                                   Ipopt::IpoptCalculatedQuantities *ip_cq);
    //@}

private:
    /**@name Methods to block default compiler methods.
     * The compiler automatically generates the following three methods.
     *  Since the default compiler implementation is generally not what
     *  you want (for all but the most simple classes), we usually
     *  put the declarations of these methods in the private section
     *  and never implement them. This prevents the compiler from
     *  implementing an incorrect "default" behavior without us
     *  knowing. (See Scott Meyers book, "Effective C++")
     *
     */
    //@{
    CIR_MLE_NLP(const CIR_MLE_NLP &);

    CIR_MLE_NLP &operator=(const CIR_MLE_NLP &);

    std::vector<double> *marketData;
    WolframLibraryData libData;
    const int SIGMA = 0, THETA = 1, KAPPA = 2;
    const double TAU = 5.0 / (365 * 24 * 60);
    //@}

};


#endif //IPOPT_MLE_IPOPT_INTERFACE_H
