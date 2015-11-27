#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>
struct InternalEnumerator_1_t2004;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m9503_gshared (InternalEnumerator_1_t2004 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m9503(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2004 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m9503_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9504_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9504(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m9504_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m9505_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m9505(__this, method) (( void (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_Dispose_m9505_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m9506_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m9506(__this, method) (( bool (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m9506_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t675  InternalEnumerator_1_get_Current_m9507_gshared (InternalEnumerator_1_t2004 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m9507(__this, method) (( DictionaryEntry_t675  (*) (InternalEnumerator_1_t2004 *, const MethodInfo*))InternalEnumerator_1_get_Current_m9507_gshared)(__this, method)
