#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2301;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12697_gshared (DefaultComparer_t2301 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12697(__this, method) (( void (*) (DefaultComparer_t2301 *, const MethodInfo*))DefaultComparer__ctor_m12697_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12698_gshared (DefaultComparer_t2301 * __this, Guid_t16  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12698(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2301 *, Guid_t16 , const MethodInfo*))DefaultComparer_GetHashCode_m12698_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12699_gshared (DefaultComparer_t2301 * __this, Guid_t16  ___x, Guid_t16  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12699(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2301 *, Guid_t16 , Guid_t16 , const MethodInfo*))DefaultComparer_Equals_m12699_gshared)(__this, ___x, ___y, method)
