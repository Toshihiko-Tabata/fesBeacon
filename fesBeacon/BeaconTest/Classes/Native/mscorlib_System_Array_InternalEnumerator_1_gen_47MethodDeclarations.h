#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct InternalEnumerator_1_t2203;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m12028_gshared (InternalEnumerator_1_t2203 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m12028(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2203 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m12028_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12029_gshared (InternalEnumerator_1_t2203 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12029(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2203 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12029_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m12030_gshared (InternalEnumerator_1_t2203 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m12030(__this, method) (( void (*) (InternalEnumerator_1_t2203 *, const MethodInfo*))InternalEnumerator_1_Dispose_m12030_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m12031_gshared (InternalEnumerator_1_t2203 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m12031(__this, method) (( bool (*) (InternalEnumerator_1_t2203 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m12031_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>::get_Current()
extern "C" KeyValuePair_2_t2202  InternalEnumerator_1_get_Current_m12032_gshared (InternalEnumerator_1_t2203 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m12032(__this, method) (( KeyValuePair_2_t2202  (*) (InternalEnumerator_1_t2203 *, const MethodInfo*))InternalEnumerator_1_get_Current_m12032_gshared)(__this, method)
