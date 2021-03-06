// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// S3Connect
void S3Connect(const char* access_key, const char* secret_key);
RcppExport SEXP RS3_S3Connect(SEXP access_keySEXP, SEXP secret_keySEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type access_key(access_keySEXP );
        Rcpp::traits::input_parameter< const char* >::type secret_key(secret_keySEXP );
        S3Connect(access_key, secret_key);
    }
    return R_NilValue;
END_RCPP
}
// test_bucket
void test_bucket(const char* bucketName);
RcppExport SEXP RS3_test_bucket(SEXP bucketNameSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        test_bucket(bucketName);
    }
    return R_NilValue;
END_RCPP
}
// create_bucket
int create_bucket(const char* bucketName, const char* acl = "private");
RcppExport SEXP RS3_create_bucket(SEXP bucketNameSEXP, SEXP aclSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type acl(aclSEXP );
        int __result = create_bucket(bucketName, acl);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// delete_bucket
void delete_bucket(const char* bucketName);
RcppExport SEXP RS3_delete_bucket(SEXP bucketNameSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        delete_bucket(bucketName);
    }
    return R_NilValue;
END_RCPP
}
// list_bucket
int list_bucket(const char* bucketName, const char* prefix = "", int allDetails = 0);
RcppExport SEXP RS3_list_bucket(SEXP bucketNameSEXP, SEXP prefixSEXP, SEXP allDetailsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type prefix(prefixSEXP );
        Rcpp::traits::input_parameter< int >::type allDetails(allDetailsSEXP );
        int __result = list_bucket(bucketName, prefix, allDetails);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// delete_object
int delete_object(const char* bucketName, const char* key);
RcppExport SEXP RS3_delete_object(SEXP bucketNameSEXP, SEXP keySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type key(keySEXP );
        int __result = delete_object(bucketName, key);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// put_object
int put_object(const char* bucketName, const char* storage_location, const char* filename, const char* contentType = 0);
RcppExport SEXP RS3_put_object(SEXP bucketNameSEXP, SEXP storage_locationSEXP, SEXP filenameSEXP, SEXP contentTypeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type storage_location(storage_locationSEXP );
        Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP );
        Rcpp::traits::input_parameter< const char* >::type contentType(contentTypeSEXP );
        int __result = put_object(bucketName, storage_location, filename, contentType);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// copy_object
int copy_object(const char* sourceBucketName, const char* sourceKey, const char* destinationBucketName, const char* destinationKey);
RcppExport SEXP RS3_copy_object(SEXP sourceBucketNameSEXP, SEXP sourceKeySEXP, SEXP destinationBucketNameSEXP, SEXP destinationKeySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type sourceBucketName(sourceBucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type sourceKey(sourceKeySEXP );
        Rcpp::traits::input_parameter< const char* >::type destinationBucketName(destinationBucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type destinationKey(destinationKeySEXP );
        int __result = copy_object(sourceBucketName, sourceKey, destinationBucketName, destinationKey);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_object
int get_object(const char* bucketName, const char* key, const char* filename = 0);
RcppExport SEXP RS3_get_object(SEXP bucketNameSEXP, SEXP keySEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type key(keySEXP );
        Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP );
        int __result = get_object(bucketName, key, filename);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// head_object
int head_object(const char* bucketName, const char* key);
RcppExport SEXP RS3_head_object(SEXP bucketNameSEXP, SEXP keySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type key(keySEXP );
        int __result = head_object(bucketName, key);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_acl
int get_acl(const char* bucketName, const char* key, const char* filename = 0);
RcppExport SEXP RS3_get_acl(SEXP bucketNameSEXP, SEXP keySEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type key(keySEXP );
        Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP );
        int __result = get_acl(bucketName, key, filename);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// set_acl
int set_acl(const char* bucketName, const char* key, const char* filename);
RcppExport SEXP RS3_set_acl(SEXP bucketNameSEXP, SEXP keySEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type key(keySEXP );
        Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP );
        int __result = set_acl(bucketName, key, filename);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_logging
int get_logging(const char* bucketName, const char* filename);
RcppExport SEXP RS3_get_logging(SEXP bucketNameSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP );
        int __result = get_logging(bucketName, filename);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// set_logging
int set_logging(const char* bucketName, const char* targetBucket, const char* filename);
RcppExport SEXP RS3_set_logging(SEXP bucketNameSEXP, SEXP targetBucketSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const char* >::type bucketName(bucketNameSEXP );
        Rcpp::traits::input_parameter< const char* >::type targetBucket(targetBucketSEXP );
        Rcpp::traits::input_parameter< const char* >::type filename(filenameSEXP );
        int __result = set_logging(bucketName, targetBucket, filename);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
