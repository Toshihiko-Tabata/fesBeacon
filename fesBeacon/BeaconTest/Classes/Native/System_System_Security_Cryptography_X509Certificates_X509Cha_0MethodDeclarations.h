﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t574;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t564;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t572;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509ChainElement__ctor_m1972 (X509ChainElement_t574 * __this, X509Certificate2_t564 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
extern "C" X509Certificate2_t564 * X509ChainElement_get_Certificate_m1973 (X509ChainElement_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::get_ChainElementStatus()
extern "C" X509ChainStatusU5BU5D_t572* X509ChainElement_get_ChainElementStatus_m1974 (X509ChainElement_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::get_StatusFlags()
extern "C" int32_t X509ChainElement_get_StatusFlags_m1975 (X509ChainElement_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::set_StatusFlags(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509ChainElement_set_StatusFlags_m1976 (X509ChainElement_t574 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElement::Count(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" int32_t X509ChainElement_Count_m1977 (X509ChainElement_t574 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::Set(System.Security.Cryptography.X509Certificates.X509ChainStatus[],System.Int32&,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509ChainElement_Set_m1978 (X509ChainElement_t574 * __this, X509ChainStatusU5BU5D_t572* ___status, int32_t* ___position, int32_t ___flags, int32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::UncompressFlags()
extern "C" void X509ChainElement_UncompressFlags_m1979 (X509ChainElement_t574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
