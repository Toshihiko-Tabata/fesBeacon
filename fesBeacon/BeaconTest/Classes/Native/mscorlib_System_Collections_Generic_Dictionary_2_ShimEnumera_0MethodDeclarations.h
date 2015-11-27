#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2029;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2019;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9784_gshared (ShimEnumerator_t2029 * __this, Dictionary_2_t2019 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9784(__this, ___host, method) (( void (*) (ShimEnumerator_t2029 *, Dictionary_2_t2019 *, const MethodInfo*))ShimEnumerator__ctor_m9784_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9785_gshared (ShimEnumerator_t2029 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9785(__this, method) (( bool (*) (ShimEnumerator_t2029 *, const MethodInfo*))ShimEnumerator_MoveNext_m9785_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t675  ShimEnumerator_get_Entry_m9786_gshared (ShimEnumerator_t2029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9786(__this, method) (( DictionaryEntry_t675  (*) (ShimEnumerator_t2029 *, const MethodInfo*))ShimEnumerator_get_Entry_m9786_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9787_gshared (ShimEnumerator_t2029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9787(__this, method) (( Object_t * (*) (ShimEnumerator_t2029 *, const MethodInfo*))ShimEnumerator_get_Key_m9787_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9788_gshared (ShimEnumerator_t2029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9788(__this, method) (( Object_t * (*) (ShimEnumerator_t2029 *, const MethodInfo*))ShimEnumerator_get_Value_m9788_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9789_gshared (ShimEnumerator_t2029 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9789(__this, method) (( Object_t * (*) (ShimEnumerator_t2029 *, const MethodInfo*))ShimEnumerator_get_Current_m9789_gshared)(__this, method)
