// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// startSocsimWithFile
int startSocsimWithFile(String supfile, String seed, String compatibility_mode);
RcppExport SEXP _rsocsim_startSocsimWithFile(SEXP supfileSEXP, SEXP seedSEXP, SEXP compatibility_modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type supfile(supfileSEXP);
    Rcpp::traits::input_parameter< String >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< String >::type compatibility_mode(compatibility_modeSEXP);
    rcpp_result_gen = Rcpp::wrap(startSocsimWithFile(supfile, seed, compatibility_mode));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rsocsim_startSocsimWithFile", (DL_FUNC) &_rsocsim_startSocsimWithFile, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_rsocsim(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
