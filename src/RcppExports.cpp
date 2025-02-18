// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// compute_densities
Rcpp::NumericVector compute_densities(Rcpp::NumericVector z, int j, Rcpp::String family);
RcppExport SEXP _iregnet_compute_densities(SEXP zSEXP, SEXP jSEXP, SEXP familySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type family(familySEXP);
    rcpp_result_gen = Rcpp::wrap(compute_densities(z, j, family));
    return rcpp_result_gen;
END_RCPP
}
// iregnet_compute_gradients
Rcpp::List iregnet_compute_gradients(Rcpp::NumericMatrix X, Rcpp::NumericMatrix y, Rcpp::NumericVector eta, double scale, Rcpp::String family);
RcppExport SEXP _iregnet_iregnet_compute_gradients(SEXP XSEXP, SEXP ySEXP, SEXP etaSEXP, SEXP scaleSEXP, SEXP familySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type family(familySEXP);
    rcpp_result_gen = Rcpp::wrap(iregnet_compute_gradients(X, y, eta, scale, family));
    return rcpp_result_gen;
END_RCPP
}
// fit_cpp
Rcpp::List fit_cpp(Rcpp::NumericMatrix X, Rcpp::NumericMatrix y, Rcpp::String family, Rcpp::NumericVector lambda_path, int debug, Rcpp::IntegerVector out_status, bool intercept, double alpha, double scale_init, bool estimate_scale, bool unreg_sol, bool flag_standardize_x, double max_iter, double threshold, int num_lambda, double eps_lambda);
RcppExport SEXP _iregnet_fit_cpp(SEXP XSEXP, SEXP ySEXP, SEXP familySEXP, SEXP lambda_pathSEXP, SEXP debugSEXP, SEXP out_statusSEXP, SEXP interceptSEXP, SEXP alphaSEXP, SEXP scale_initSEXP, SEXP estimate_scaleSEXP, SEXP unreg_solSEXP, SEXP flag_standardize_xSEXP, SEXP max_iterSEXP, SEXP thresholdSEXP, SEXP num_lambdaSEXP, SEXP eps_lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type family(familySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type lambda_path(lambda_pathSEXP);
    Rcpp::traits::input_parameter< int >::type debug(debugSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type out_status(out_statusSEXP);
    Rcpp::traits::input_parameter< bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type scale_init(scale_initSEXP);
    Rcpp::traits::input_parameter< bool >::type estimate_scale(estimate_scaleSEXP);
    Rcpp::traits::input_parameter< bool >::type unreg_sol(unreg_solSEXP);
    Rcpp::traits::input_parameter< bool >::type flag_standardize_x(flag_standardize_xSEXP);
    Rcpp::traits::input_parameter< double >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type num_lambda(num_lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type eps_lambda(eps_lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(fit_cpp(X, y, family, lambda_path, debug, out_status, intercept, alpha, scale_init, estimate_scale, unreg_sol, flag_standardize_x, max_iter, threshold, num_lambda, eps_lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_iregnet_compute_densities", (DL_FUNC) &_iregnet_compute_densities, 3},
    {"_iregnet_iregnet_compute_gradients", (DL_FUNC) &_iregnet_iregnet_compute_gradients, 5},
    {"_iregnet_fit_cpp", (DL_FUNC) &_iregnet_fit_cpp, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_iregnet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
