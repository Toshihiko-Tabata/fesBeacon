#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2305;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m12714_gshared (DefaultComparer_t2305 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12714(__this, method) (( void (*) (DefaultComparer_t2305 *, const MethodInfo*))DefaultComparer__ctor_m12714_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12715_gshared (DefaultComparer_t2305 * __this, TimeSpan_t579  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12715(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2305 *, TimeSpan_t579 , const MethodInfo*))DefaultComparer_GetHashCode_m12715_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12716_gshared (DefaultComparer_t2305 * __this, TimeSpan_t579  ___x, TimeSpan_t579  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12716(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2305 *, TimeSpan_t579 , TimeSpan_t579 , const MethodInfo*))DefaultComparer_Equals_m12716_gshared)(__this, ___x, ___y, method)
