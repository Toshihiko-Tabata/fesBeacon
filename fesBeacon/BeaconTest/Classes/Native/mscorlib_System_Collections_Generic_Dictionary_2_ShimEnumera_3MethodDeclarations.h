﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t2118;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2106;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10882_gshared (ShimEnumerator_t2118 * __this, Dictionary_2_t2106 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10882(__this, ___host, method) (( void (*) (ShimEnumerator_t2118 *, Dictionary_2_t2106 *, const MethodInfo*))ShimEnumerator__ctor_m10882_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10883_gshared (ShimEnumerator_t2118 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10883(__this, method) (( bool (*) (ShimEnumerator_t2118 *, const MethodInfo*))ShimEnumerator_MoveNext_m10883_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t675  ShimEnumerator_get_Entry_m10884_gshared (ShimEnumerator_t2118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10884(__this, method) (( DictionaryEntry_t675  (*) (ShimEnumerator_t2118 *, const MethodInfo*))ShimEnumerator_get_Entry_m10884_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10885_gshared (ShimEnumerator_t2118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10885(__this, method) (( Object_t * (*) (ShimEnumerator_t2118 *, const MethodInfo*))ShimEnumerator_get_Key_m10885_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10886_gshared (ShimEnumerator_t2118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10886(__this, method) (( Object_t * (*) (ShimEnumerator_t2118 *, const MethodInfo*))ShimEnumerator_get_Value_m10886_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10887_gshared (ShimEnumerator_t2118 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10887(__this, method) (( Object_t * (*) (ShimEnumerator_t2118 *, const MethodInfo*))ShimEnumerator_get_Current_m10887_gshared)(__this, method)
