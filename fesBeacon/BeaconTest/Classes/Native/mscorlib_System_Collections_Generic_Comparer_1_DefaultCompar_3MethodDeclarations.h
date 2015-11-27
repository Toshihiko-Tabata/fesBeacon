#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2299;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m12688_gshared (DefaultComparer_t2299 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12688(__this, method) (( void (*) (DefaultComparer_t2299 *, const MethodInfo*))DefaultComparer__ctor_m12688_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m12689_gshared (DefaultComparer_t2299 * __this, Guid_t16  ___x, Guid_t16  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m12689(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2299 *, Guid_t16 , Guid_t16 , const MethodInfo*))DefaultComparer_Compare_m12689_gshared)(__this, ___x, ___y, method)
