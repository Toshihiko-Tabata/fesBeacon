﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2132;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t334;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2130;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2327;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m11086_gshared (ThreadSafeDictionary_2_t2132 * __this, ThreadSafeDictionaryValueFactory_2_t2130 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m11086(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, ThreadSafeDictionaryValueFactory_2_t2130 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m11086_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11088_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11088(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m11088_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m11090_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m11090(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m11090_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m11092_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m11092(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m11092_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m11094_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11094(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m11094_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m11096_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m11096(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m11096_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool ThreadSafeDictionary_2_Remove_m11098_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11098(__this, ___key, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Remove_m11098_gshared)(__this, ___key, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m11100_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m11100(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m11100_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m11102_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m11102(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m11102_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m11104_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m11104(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m11104_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m11106_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m11106(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m11106_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m11108_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2_t2020  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m11108(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2_t2020 , const MethodInfo*))ThreadSafeDictionary_2_Add_m11108_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m11110_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m11110(__this, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m11110_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m11112_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2_t2020  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m11112(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2_t2020 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m11112_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m11114_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2U5BU5D_t2152* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m11114(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2U5BU5D_t2152*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m11114_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m11116_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m11116(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m11116_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m11118_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m11118(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m11118_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m11120_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2_t2020  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m11120(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2_t2020 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m11120_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m11122_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m11122(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m11122_gshared)(__this, method)
