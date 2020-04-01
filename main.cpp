#include <iostream>
#include <IpIpoptApplication.hpp>
#include <WolframRTL.h>

#include "cir/three_variate/problem/ipopt_interface.h"

int main() {



    // Create a new instance of your nlp
    //  (use a SmartPtr, not raw)
    Ipopt::SmartPtr<Ipopt::TNLP> mynlp = new CIR_MLE_NLP();

    // Create a new instance of IpoptApplication
    //  (use a SmartPtr, not raw)
    // We are using the factory, since this allows us to compile this
    // example with an Ipopt Windows DLL
    Ipopt::SmartPtr<Ipopt::IpoptApplication> app = IpoptApplicationFactory();
    app->RethrowNonIpoptException(true);

    // Change some options
    // Note: The following choices are only examples, they might not be
    //       suitable for your optimization problem.
    //app->Options()->SetNumericValue("tol", 1e-6);
    app->Options()->SetStringValue("mu_strategy", "adaptive");
    app->Options()->SetStringValue("linear_solver", "ma27");
    app->Options()->SetStringValue("derivative_test", "second-order");
    //app->Options()->SetStringValue("hessian_approximation", "limited-memory");
    app->Options()->SetNumericValue("derivative_test_perturbation", 1e-6);
    app->Options()->SetStringValue("output_file", "ipopt.out");
    // The following overwrites the default name (ipopt.opt) of the
    // options file
    // app->Options()->SetStringValue("option_file_name", "hs071.opt");

    // Initialize the IpoptApplication and process the options
    Ipopt::ApplicationReturnStatus status;
    status = app->Initialize();
    if (status != Ipopt::Solve_Succeeded) {
        std::cout << std::endl << std::endl << "*** Error during initialization!" << std::endl;
        return (int) status;
    }

    // Ask Ipopt to solve the problem
    status = app->OptimizeTNLP(mynlp);

    if (status == Ipopt::Solve_Succeeded) {
        std::cout << std::endl << std::endl << "*** The problem solved!" << std::endl;
    }
    else {
        std::cout << std::endl << std::endl << "*** The problem FAILED!" << std::endl;
    }

    // As the SmartPtrs go out of scope, the reference count
    // will be decremented and the objects will automatically
    // be deleted.

    return (int) status;
}
