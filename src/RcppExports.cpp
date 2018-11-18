// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// risk_parity_portfolio_nn
Eigen::VectorXd risk_parity_portfolio_nn(const Eigen::MatrixXd& Sigma, const Eigen::VectorXd& b, const double tol, const int maxiter);
RcppExport SEXP _riskParityPortfolio_risk_parity_portfolio_nn(SEXP SigmaSEXP, SEXP bSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(risk_parity_portfolio_nn(Sigma, b, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// gradient_log_formulation
Eigen::VectorXd gradient_log_formulation(const Eigen::MatrixXd& Sigma, const Eigen::VectorXd& xk, const Eigen::VectorXd& b);
RcppExport SEXP _riskParityPortfolio_gradient_log_formulation(SEXP SigmaSEXP, SEXP xkSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type xk(xkSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(gradient_log_formulation(Sigma, xk, b));
    return rcpp_result_gen;
END_RCPP
}
// hessian_log_formulation
Eigen::MatrixXd hessian_log_formulation(const Eigen::MatrixXd& Sigma, const Eigen::VectorXd& xk, const Eigen::VectorXd& b);
RcppExport SEXP _riskParityPortfolio_hessian_log_formulation(SEXP SigmaSEXP, SEXP xkSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type xk(xkSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(hessian_log_formulation(Sigma, xk, b));
    return rcpp_result_gen;
END_RCPP
}
// obj_function_log_formulation
double obj_function_log_formulation(const Eigen::MatrixXd& Sigma, const Eigen::VectorXd& xk, const Eigen::VectorXd& b);
RcppExport SEXP _riskParityPortfolio_obj_function_log_formulation(SEXP SigmaSEXP, SEXP xkSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type xk(xkSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(obj_function_log_formulation(Sigma, xk, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_riskParityPortfolio_risk_parity_portfolio_nn", (DL_FUNC) &_riskParityPortfolio_risk_parity_portfolio_nn, 4},
    {"_riskParityPortfolio_gradient_log_formulation", (DL_FUNC) &_riskParityPortfolio_gradient_log_formulation, 3},
    {"_riskParityPortfolio_hessian_log_formulation", (DL_FUNC) &_riskParityPortfolio_hessian_log_formulation, 3},
    {"_riskParityPortfolio_obj_function_log_formulation", (DL_FUNC) &_riskParityPortfolio_obj_function_log_formulation, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_riskParityPortfolio(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}