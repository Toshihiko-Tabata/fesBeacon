#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Beacon>
struct DefaultComparer_t1965;
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Beacon>::.ctor()
extern "C" void DefaultComparer__ctor_m9125_gshared (DefaultComparer_t1965 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m9125(__this, method) (( void (*) (DefaultComparer_t1965 *, const MethodInfo*))DefaultComparer__ctor_m9125_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Beacon>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m9126_gshared (DefaultComparer_t1965 * __this, Beacon_t5  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m9126(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1965 *, Beacon_t5 , const MethodInfo*))DefaultComparer_GetHashCode_m9126_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Beacon>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m9127_gshared (DefaultComparer_t1965 * __this, Beacon_t5  ___x, Beacon_t5  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m9127(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1965 *, Beacon_t5 , Beacon_t5 , const MethodInfo*))DefaultComparer_Equals_m9127_gshared)(__this, ___x, ___y, method)
