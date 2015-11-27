#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t555;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t553;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t552;
// System.Security.Cryptography.Oid
struct Oid_t554;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t563;
// System.Byte[]
struct ByteU5BU5D_t141;
// System.Security.Cryptography.DSA
struct DSA_t676;
// System.Security.Cryptography.RSA
struct RSA_t677;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m1870 (PublicKey_t555 * __this, X509Certificate_t563 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t553 * PublicKey_get_EncodedKeyValue_m1871 (PublicKey_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t553 * PublicKey_get_EncodedParameters_m1872 (PublicKey_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t552 * PublicKey_get_Key_m1873 (PublicKey_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t554 * PublicKey_get_Oid_m1874 (PublicKey_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t141* PublicKey_GetUnsignedBigInteger_m1875 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t676 * PublicKey_DecodeDSA_m1876 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___rawPublicKey, ByteU5BU5D_t141* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t677 * PublicKey_DecodeRSA_m1877 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
