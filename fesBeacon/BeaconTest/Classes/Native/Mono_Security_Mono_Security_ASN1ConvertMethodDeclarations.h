﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t767;
// Mono.Security.ASN1
struct ASN1_t678;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C" ASN1_t678 * ASN1Convert_FromInt32_m2625 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C" ASN1_t678 * ASN1Convert_FromOid_m2927 (Object_t * __this /* static, unused */, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" int32_t ASN1Convert_ToInt32_m2621 (Object_t * __this /* static, unused */, ASN1_t678 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" String_t* ASN1Convert_ToOid_m2673 (Object_t * __this /* static, unused */, ASN1_t678 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" DateTime_t90  ASN1Convert_ToDateTime_m2928 (Object_t * __this /* static, unused */, ASN1_t678 * ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
