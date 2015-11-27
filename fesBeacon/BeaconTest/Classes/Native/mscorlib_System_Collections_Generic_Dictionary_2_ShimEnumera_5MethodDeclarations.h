#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t2212;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2201;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12103_gshared (ShimEnumerator_t2212 * __this, Dictionary_2_t2201 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12103(__this, ___host, method) (( void (*) (ShimEnumerator_t2212 *, Dictionary_2_t2201 *, const MethodInfo*))ShimEnumerator__ctor_m12103_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12104_gshared (ShimEnumerator_t2212 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12104(__this, method) (( bool (*) (ShimEnumerator_t2212 *, const MethodInfo*))ShimEnumerator_MoveNext_m12104_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t675  ShimEnumerator_get_Entry_m12105_gshared (ShimEnumerator_t2212 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12105(__this, method) (( DictionaryEntry_t675  (*) (ShimEnumerator_t2212 *, const MethodInfo*))ShimEnumerator_get_Entry_m12105_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12106_gshared (ShimEnumerator_t2212 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12106(__this, method) (( Object_t * (*) (ShimEnumerator_t2212 *, const MethodInfo*))ShimEnumerator_get_Key_m12106_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12107_gshared (ShimEnumerator_t2212 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12107(__this, method) (( Object_t * (*) (ShimEnumerator_t2212 *, const MethodInfo*))ShimEnumerator_get_Value_m12107_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12108_gshared (ShimEnumerator_t2212 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12108(__this, method) (( Object_t * (*) (ShimEnumerator_t2212 *, const MethodInfo*))ShimEnumerator_get_Current_m12108_gshared)(__this, method)
