#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2297;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m12676_gshared (DefaultComparer_t2297 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12676(__this, method) (( void (*) (DefaultComparer_t2297 *, const MethodInfo*))DefaultComparer__ctor_m12676_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12677_gshared (DefaultComparer_t2297 * __this, DateTimeOffset_t393  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12677(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2297 *, DateTimeOffset_t393 , const MethodInfo*))DefaultComparer_GetHashCode_m12677_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12678_gshared (DefaultComparer_t2297 * __this, DateTimeOffset_t393  ___x, DateTimeOffset_t393  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12678(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2297 *, DateTimeOffset_t393 , DateTimeOffset_t393 , const MethodInfo*))DefaultComparer_Equals_m12678_gshared)(__this, ___x, ___y, method)
