#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2088;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2076;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10562_gshared (ShimEnumerator_t2088 * __this, Dictionary_2_t2076 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10562(__this, ___host, method) (( void (*) (ShimEnumerator_t2088 *, Dictionary_2_t2076 *, const MethodInfo*))ShimEnumerator__ctor_m10562_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10563_gshared (ShimEnumerator_t2088 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10563(__this, method) (( bool (*) (ShimEnumerator_t2088 *, const MethodInfo*))ShimEnumerator_MoveNext_m10563_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t675  ShimEnumerator_get_Entry_m10564_gshared (ShimEnumerator_t2088 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10564(__this, method) (( DictionaryEntry_t675  (*) (ShimEnumerator_t2088 *, const MethodInfo*))ShimEnumerator_get_Entry_m10564_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10565_gshared (ShimEnumerator_t2088 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10565(__this, method) (( Object_t * (*) (ShimEnumerator_t2088 *, const MethodInfo*))ShimEnumerator_get_Key_m10565_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10566_gshared (ShimEnumerator_t2088 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10566(__this, method) (( Object_t * (*) (ShimEnumerator_t2088 *, const MethodInfo*))ShimEnumerator_get_Value_m10566_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10567_gshared (ShimEnumerator_t2088 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10567(__this, method) (( Object_t * (*) (ShimEnumerator_t2088 *, const MethodInfo*))ShimEnumerator_get_Current_m10567_gshared)(__this, method)
