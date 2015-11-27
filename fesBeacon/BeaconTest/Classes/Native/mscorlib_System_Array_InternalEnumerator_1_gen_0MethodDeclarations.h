#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<Beacon>
struct InternalEnumerator_1_t1962;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"

// System.Void System.Array/InternalEnumerator`1<Beacon>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9106_gshared (InternalEnumerator_1_t1962 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9106(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1962 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9106_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<Beacon>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9107_gshared (InternalEnumerator_1_t1962 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9107(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1962 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9107_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<Beacon>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9108_gshared (InternalEnumerator_1_t1962 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9108(__this, method) (( void (*) (InternalEnumerator_1_t1962 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9108_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<Beacon>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9109_gshared (InternalEnumerator_1_t1962 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9109(__this, method) (( bool (*) (InternalEnumerator_1_t1962 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9109_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<Beacon>::get_Current()
extern "C" Beacon_t5  InternalEnumerator_1_get_Current_m9110_gshared (InternalEnumerator_1_t1962 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9110(__this, method) (( Beacon_t5  (*) (InternalEnumerator_1_t1962 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9110_gshared)(__this, method)
