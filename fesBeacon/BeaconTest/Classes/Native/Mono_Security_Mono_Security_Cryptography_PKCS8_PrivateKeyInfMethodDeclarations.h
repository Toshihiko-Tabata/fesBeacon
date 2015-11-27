#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t780;
// System.Byte[]
struct ByteU5BU5D_t141;
// System.Security.Cryptography.RSA
struct RSA_t677;
// System.Security.Cryptography.DSA
struct DSA_t676;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C" void PrivateKeyInfo__ctor_m2979 (PrivateKeyInfo_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C" void PrivateKeyInfo__ctor_m2980 (PrivateKeyInfo_t780 * __this, ByteU5BU5D_t141* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C" ByteU5BU5D_t141* PrivateKeyInfo_get_PrivateKey_m2981 (PrivateKeyInfo_t780 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C" void PrivateKeyInfo_Decode_m2982 (PrivateKeyInfo_t780 * __this, ByteU5BU5D_t141* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C" ByteU5BU5D_t141* PrivateKeyInfo_RemoveLeadingZero_m2983 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t141* PrivateKeyInfo_Normalize_m2984 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C" RSA_t677 * PrivateKeyInfo_DecodeRSA_m2985 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C" DSA_t676 * PrivateKeyInfo_DecodeDSA_m2986 (Object_t * __this /* static, unused */, ByteU5BU5D_t141* ___privateKey, DSAParameters_t699  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
