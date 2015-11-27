#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2234;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t611;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12308_gshared (ShimEnumerator_t2234 * __this, Dictionary_2_t611 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12308(__this, ___host, method) (( void (*) (ShimEnumerator_t2234 *, Dictionary_2_t611 *, const MethodInfo*))ShimEnumerator__ctor_m12308_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12309_gshared (ShimEnumerator_t2234 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12309(__this, method) (( bool (*) (ShimEnumerator_t2234 *, const MethodInfo*))ShimEnumerator_MoveNext_m12309_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t675  ShimEnumerator_get_Entry_m12310_gshared (ShimEnumerator_t2234 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12310(__this, method) (( DictionaryEntry_t675  (*) (ShimEnumerator_t2234 *, const MethodInfo*))ShimEnumerator_get_Entry_m12310_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12311_gshared (ShimEnumerator_t2234 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12311(__this, method) (( Object_t * (*) (ShimEnumerator_t2234 *, const MethodInfo*))ShimEnumerator_get_Key_m12311_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12312_gshared (ShimEnumerator_t2234 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12312(__this, method) (( Object_t * (*) (ShimEnumerator_t2234 *, const MethodInfo*))ShimEnumerator_get_Value_m12312_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12313_gshared (ShimEnumerator_t2234 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12313(__this, method) (( Object_t * (*) (ShimEnumerator_t2234 *, const MethodInfo*))ShimEnumerator_get_Current_m12313_gshared)(__this, method)
