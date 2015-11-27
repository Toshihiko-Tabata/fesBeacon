#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t682;
// System.Byte[]
struct ByteU5BU5D_t141;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t706;
// Mono.Security.ASN1
struct ASN1_t678;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C" void X509CrlEntry__ctor_m3094 (X509CrlEntry_t682 * __this, ASN1_t678 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C" ByteU5BU5D_t141* X509CrlEntry_get_SerialNumber_m3095 (X509CrlEntry_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C" DateTime_t90  X509CrlEntry_get_RevocationDate_m2666 (X509CrlEntry_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C" X509ExtensionCollection_t706 * X509CrlEntry_get_Extensions_m2672 (X509CrlEntry_t682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
