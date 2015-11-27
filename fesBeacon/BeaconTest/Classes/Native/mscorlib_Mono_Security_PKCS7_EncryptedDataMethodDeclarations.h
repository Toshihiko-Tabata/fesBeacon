#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t986;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t985;
// System.Byte[]
struct ByteU5BU5D_t141;
// Mono.Security.ASN1
struct ASN1_t973;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m5033 (EncryptedData_t986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m5034 (EncryptedData_t986 * __this, ASN1_t973 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t985 * EncryptedData_get_EncryptionAlgorithm_m5035 (EncryptedData_t986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t141* EncryptedData_get_EncryptedContent_m5036 (EncryptedData_t986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
