#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2293;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m12659_gshared (DefaultComparer_t2293 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12659(__this, method) (( void (*) (DefaultComparer_t2293 *, const MethodInfo*))DefaultComparer__ctor_m12659_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12660_gshared (DefaultComparer_t2293 * __this, DateTime_t90  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12660(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2293 *, DateTime_t90 , const MethodInfo*))DefaultComparer_GetHashCode_m12660_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12661_gshared (DefaultComparer_t2293 * __this, DateTime_t90  ___x, DateTime_t90  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12661(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2293 *, DateTime_t90 , DateTime_t90 , const MethodInfo*))DefaultComparer_Equals_m12661_gshared)(__this, ___x, ___y, method)
