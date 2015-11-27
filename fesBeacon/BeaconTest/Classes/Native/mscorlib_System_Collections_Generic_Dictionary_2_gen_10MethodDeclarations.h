﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2019;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t334;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2022;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2026;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2017;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2326;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2152;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2327;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m9618_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9618(__this, method) (( void (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2__ctor_m9618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9619_gshared (Dictionary_2_t2019 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9619(__this, ___comparer, method) (( void (*) (Dictionary_2_t2019 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9619_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m9621_gshared (Dictionary_2_t2019 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m9621(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2019 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9621_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9623_gshared (Dictionary_2_t2019 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9623(__this, ___capacity, method) (( void (*) (Dictionary_2_t2019 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9625_gshared (Dictionary_2_t2019 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9625(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2019 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9625_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9627_gshared (Dictionary_2_t2019 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9627(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2019 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2__ctor_m9627_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9629_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9629(__this, method) (( Object_t* (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9629_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9631_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9631(__this, method) (( Object_t* (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9631_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9633_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9633(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9633_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9635_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9635(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2019 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9635_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9637_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9637(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2019 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9637_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9639_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9639(__this, ___key, method) (( bool (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9639_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9641_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9641(__this, ___key, method) (( void (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9641_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9643_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9643(__this, method) (( Object_t * (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9645_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9645(__this, method) (( bool (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9647_gshared (Dictionary_2_t2019 * __this, KeyValuePair_2_t2020  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9647(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2019 *, KeyValuePair_2_t2020 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9647_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9649_gshared (Dictionary_2_t2019 * __this, KeyValuePair_2_t2020  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9649(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2019 *, KeyValuePair_2_t2020 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9649_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9651_gshared (Dictionary_2_t2019 * __this, KeyValuePair_2U5BU5D_t2152* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9651(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2019 *, KeyValuePair_2U5BU5D_t2152*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9651_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9653_gshared (Dictionary_2_t2019 * __this, KeyValuePair_2_t2020  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9653(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2019 *, KeyValuePair_2_t2020 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9653_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9655_gshared (Dictionary_2_t2019 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9655(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2019 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9655_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9657_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9657(__this, method) (( Object_t * (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9657_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9659_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9659(__this, method) (( Object_t* (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9659_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9661_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9661(__this, method) (( Object_t * (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9661_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9663_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9663(__this, method) (( int32_t (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_get_Count_m9663_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9665_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9665(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9667_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9667(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2019 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9667_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9669_gshared (Dictionary_2_t2019 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9669(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2019 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9669_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9671_gshared (Dictionary_2_t2019 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9671(__this, ___size, method) (( void (*) (Dictionary_2_t2019 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9671_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9673_gshared (Dictionary_2_t2019 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9673(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2019 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9673_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2020  Dictionary_2_make_pair_m9675_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9675(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2020  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9675_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m9677_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m9677(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9677_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9679_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9679(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9679_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9681_gshared (Dictionary_2_t2019 * __this, KeyValuePair_2U5BU5D_t2152* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9681(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2019 *, KeyValuePair_2U5BU5D_t2152*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9681_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9683_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9683(__this, method) (( void (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_Resize_m9683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9685_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9685(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2019 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m9685_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9687_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9687(__this, method) (( void (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_Clear_m9687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9689_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9689(__this, ___key, method) (( bool (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9689_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9691_gshared (Dictionary_2_t2019 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9691(__this, ___value, method) (( bool (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9691_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9693_gshared (Dictionary_2_t2019 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9693(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2019 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2_GetObjectData_m9693_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9695_gshared (Dictionary_2_t2019 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9695(__this, ___sender, method) (( void (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9695_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9697_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9697(__this, ___key, method) (( bool (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9699_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9699(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2019 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9699_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2022 * Dictionary_2_get_Keys_m9701_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m9701(__this, method) (( KeyCollection_t2022 * (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_get_Keys_m9701_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2026 * Dictionary_2_get_Values_m9702_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9702(__this, method) (( ValueCollection_t2026 * (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_get_Values_m9702_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9704_gshared (Dictionary_2_t2019 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9704(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9704_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9706_gshared (Dictionary_2_t2019 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9706(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2019 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9706_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9708_gshared (Dictionary_2_t2019 * __this, KeyValuePair_2_t2020  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9708(__this, ___pair, method) (( bool (*) (Dictionary_2_t2019 *, KeyValuePair_2_t2020 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9708_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2024  Dictionary_2_GetEnumerator_m9710_gshared (Dictionary_2_t2019 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9710(__this, method) (( Enumerator_t2024  (*) (Dictionary_2_t2019 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t675  Dictionary_2_U3CCopyToU3Em__0_m9712_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9712(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t675  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9712_gshared)(__this /* static, unused */, ___key, ___value, method)
