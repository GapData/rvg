// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// DOCX_
bool DOCX_(std::string file, std::string bg_, double width, double height, int pointsize, std::string fontname_serif, std::string fontname_sans, std::string fontname_mono, std::string fontname_symbol, bool editable, int id, std::string raster_prefix, int next_rels_id, int standalone);
RcppExport SEXP rvg_DOCX_(SEXP fileSEXP, SEXP bg_SEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP pointsizeSEXP, SEXP fontname_serifSEXP, SEXP fontname_sansSEXP, SEXP fontname_monoSEXP, SEXP fontname_symbolSEXP, SEXP editableSEXP, SEXP idSEXP, SEXP raster_prefixSEXP, SEXP next_rels_idSEXP, SEXP standaloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg_(bg_SEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_serif(fontname_serifSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_sans(fontname_sansSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_mono(fontname_monoSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_symbol(fontname_symbolSEXP);
    Rcpp::traits::input_parameter< bool >::type editable(editableSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< std::string >::type raster_prefix(raster_prefixSEXP);
    Rcpp::traits::input_parameter< int >::type next_rels_id(next_rels_idSEXP);
    Rcpp::traits::input_parameter< int >::type standalone(standaloneSEXP);
    __result = Rcpp::wrap(DOCX_(file, bg_, width, height, pointsize, fontname_serif, fontname_sans, fontname_mono, fontname_symbol, editable, id, raster_prefix, next_rels_id, standalone));
    return __result;
END_RCPP
}
// DSVG_
bool DSVG_(std::string file, double width, double height, std::string bg, int pointsize, bool standalone, int canvas_id, std::string fontname_serif, std::string fontname_sans, std::string fontname_mono, std::string fontname_symbol);
RcppExport SEXP rvg_DSVG_(SEXP fileSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP bgSEXP, SEXP pointsizeSEXP, SEXP standaloneSEXP, SEXP canvas_idSEXP, SEXP fontname_serifSEXP, SEXP fontname_sansSEXP, SEXP fontname_monoSEXP, SEXP fontname_symbolSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< int >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type standalone(standaloneSEXP);
    Rcpp::traits::input_parameter< int >::type canvas_id(canvas_idSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_serif(fontname_serifSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_sans(fontname_sansSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_mono(fontname_monoSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_symbol(fontname_symbolSEXP);
    __result = Rcpp::wrap(DSVG_(file, width, height, bg, pointsize, standalone, canvas_id, fontname_serif, fontname_sans, fontname_mono, fontname_symbol));
    return __result;
END_RCPP
}
// set_tracer_on
bool set_tracer_on(int dn);
RcppExport SEXP rvg_set_tracer_on(SEXP dnSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type dn(dnSEXP);
    __result = Rcpp::wrap(set_tracer_on(dn));
    return __result;
END_RCPP
}
// set_tracer_off
bool set_tracer_off(int dn);
RcppExport SEXP rvg_set_tracer_off(SEXP dnSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type dn(dnSEXP);
    __result = Rcpp::wrap(set_tracer_off(dn));
    return __result;
END_RCPP
}
// collect_id
Rcpp::IntegerVector collect_id(int dn);
RcppExport SEXP rvg_collect_id(SEXP dnSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type dn(dnSEXP);
    __result = Rcpp::wrap(collect_id(dn));
    return __result;
END_RCPP
}
// add_attribute
bool add_attribute(int dn, Rcpp::IntegerVector id, std::vector< std::string > str, std::string name);
RcppExport SEXP rvg_add_attribute(SEXP dnSEXP, SEXP idSEXP, SEXP strSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type dn(dnSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type str(strSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    __result = Rcpp::wrap(add_attribute(dn, id, str, name));
    return __result;
END_RCPP
}
// PPTX_
bool PPTX_(std::string file, std::string bg_, double width, double height, double offx, double offy, int pointsize, std::string fontname_serif, std::string fontname_sans, std::string fontname_mono, std::string fontname_symbol, bool editable, int id, std::string raster_prefix, int next_rels_id, int standalone);
RcppExport SEXP rvg_PPTX_(SEXP fileSEXP, SEXP bg_SEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP offxSEXP, SEXP offySEXP, SEXP pointsizeSEXP, SEXP fontname_serifSEXP, SEXP fontname_sansSEXP, SEXP fontname_monoSEXP, SEXP fontname_symbolSEXP, SEXP editableSEXP, SEXP idSEXP, SEXP raster_prefixSEXP, SEXP next_rels_idSEXP, SEXP standaloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg_(bg_SEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type offx(offxSEXP);
    Rcpp::traits::input_parameter< double >::type offy(offySEXP);
    Rcpp::traits::input_parameter< int >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_serif(fontname_serifSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_sans(fontname_sansSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_mono(fontname_monoSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_symbol(fontname_symbolSEXP);
    Rcpp::traits::input_parameter< bool >::type editable(editableSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< std::string >::type raster_prefix(raster_prefixSEXP);
    Rcpp::traits::input_parameter< int >::type next_rels_id(next_rels_idSEXP);
    Rcpp::traits::input_parameter< int >::type standalone(standaloneSEXP);
    __result = Rcpp::wrap(PPTX_(file, bg_, width, height, offx, offy, pointsize, fontname_serif, fontname_sans, fontname_mono, fontname_symbol, editable, id, raster_prefix, next_rels_id, standalone));
    return __result;
END_RCPP
}
// XLSX_
bool XLSX_(std::string file, std::string bg_, double width, double height, double offx, double offy, int pointsize, std::string fontname_serif, std::string fontname_sans, std::string fontname_mono, std::string fontname_symbol, bool editable, int id, std::string raster_prefix, int next_rels_id, int standalone);
RcppExport SEXP rvg_XLSX_(SEXP fileSEXP, SEXP bg_SEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP offxSEXP, SEXP offySEXP, SEXP pointsizeSEXP, SEXP fontname_serifSEXP, SEXP fontname_sansSEXP, SEXP fontname_monoSEXP, SEXP fontname_symbolSEXP, SEXP editableSEXP, SEXP idSEXP, SEXP raster_prefixSEXP, SEXP next_rels_idSEXP, SEXP standaloneSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type bg_(bg_SEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type offx(offxSEXP);
    Rcpp::traits::input_parameter< double >::type offy(offySEXP);
    Rcpp::traits::input_parameter< int >::type pointsize(pointsizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_serif(fontname_serifSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_sans(fontname_sansSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_mono(fontname_monoSEXP);
    Rcpp::traits::input_parameter< std::string >::type fontname_symbol(fontname_symbolSEXP);
    Rcpp::traits::input_parameter< bool >::type editable(editableSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< std::string >::type raster_prefix(raster_prefixSEXP);
    Rcpp::traits::input_parameter< int >::type next_rels_id(next_rels_idSEXP);
    Rcpp::traits::input_parameter< int >::type standalone(standaloneSEXP);
    __result = Rcpp::wrap(XLSX_(file, bg_, width, height, offx, offy, pointsize, fontname_serif, fontname_sans, fontname_mono, fontname_symbol, editable, id, raster_prefix, next_rels_id, standalone));
    return __result;
END_RCPP
}
