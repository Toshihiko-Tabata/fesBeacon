#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.Guid>
struct GenericComparer_1_t1486;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern "C" void GenericComparer_1__ctor_m8269_gshared (GenericComparer_1_t1486 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m8269(__this, method) (( void (*) (GenericComparer_1_t1486 *, const MethodInfo*))GenericComparer_1__ctor_m8269_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m12683_gshared (GenericComparer_1_t1486 * __this, Guid_t16  ___x, Guid_t16  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m12683(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1486 *, Guid_t16 , Guid_t16 , const MethodInfo*))GenericComparer_1_Compare_m12683_gshared)(__this, ___x, ___y, method)
