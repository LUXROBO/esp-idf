#ifndef __MBEDTLS_USER_CONFIG_H__
#define __MBEDTLS_USER_CONFIG_H__

#define MBEDTLS_SSL_CIPHERSUITES MBEDTLS_TLS_RSA_WITH_AES_256_CBC_SHA384, \
                                 MBEDTLS_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384

#endif // __MBEDTLS_USER_CONFIG_H__