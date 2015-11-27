#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2006;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t266;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9512_gshared (ShimEnumerator_t2006 * __this, Dictionary_2_t266 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9512(__this, ___host, method) (( void (*) (ShimEnumerator_t2006 *, Dictionary_2_t266 *, const MethodInfo*))ShimEnumerator__ctor_m9512_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9513_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9513(__this, method) (( bool (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_MoveNext_m9513_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t675  ShimEnumerator_get_Entry_m9514_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9514(__this, method) (( DictionaryEntry_t675  (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Entry_m9514_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9515_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9515(__this, method) (( Object_t * (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Key_m9515_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9516_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9516(__this, method) (( Object_t * (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Value_m9516_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9517_gshared (ShimEnumerator_t2006 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9517(__this, method) (( Object_t * (*) (ShimEnumerator_t2006 *, const MethodInfo*))ShimEnumerator_get_Current_m9517_gshared)(__this, method)
