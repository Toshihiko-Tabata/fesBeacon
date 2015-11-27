#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2076;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t334;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t2346;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t2080;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t2084;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2017;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t2350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t2351;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>
struct IEnumerator_1_t2352;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor()
extern "C" void Dictionary_2__ctor_m10385_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10385(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2__ctor_m10385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10387_gshared (Dictionary_2_t2076 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10387(__this, ___comparer, method) (( void (*) (Dictionary_2_t2076 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10387_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m10389_gshared (Dictionary_2_t2076 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m10389(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2076 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10389_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10391_gshared (Dictionary_2_t2076 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10391(__this, ___capacity, method) (( void (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10391_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10393_gshared (Dictionary_2_t2076 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10393(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2076 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10393_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10395_gshared (Dictionary_2_t2076 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10395(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2076 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2__ctor_m10395_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10397_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10397(__this, method) (( Object_t* (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10397_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10399_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10399(__this, method) (( Object_t* (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10399_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10401_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10401(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10401_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10403_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10403(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10403_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10405_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10405(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10405_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10407_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10407(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10407_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10409_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10409(__this, ___key, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10409_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10411_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10411(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10411_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10413_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10413(__this, method) (( bool (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10413_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10415_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2077  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10415(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2077 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10415_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10417_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2077  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10417(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2077 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10417_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10419_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2U5BU5D_t2351* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10419(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2U5BU5D_t2351*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10419_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10421_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2077  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10421(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2077 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10421_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10423_gshared (Dictionary_2_t2076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10423(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10423_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10425_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10425(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10425_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10427_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10427(__this, method) (( Object_t* (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10427_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10429_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10429(__this, method) (( Object_t * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10429_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10431_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10431(__this, method) (( int32_t (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Count_m10431_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Item(TKey)
extern "C" int64_t Dictionary_2_get_Item_m10433_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10433(__this, ___key, method) (( int64_t (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10433_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10435_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10435(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_set_Item_m10435_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10437_gshared (Dictionary_2_t2076 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10437(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2076 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10437_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10439_gshared (Dictionary_2_t2076 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10439(__this, ___size, method) (( void (*) (Dictionary_2_t2076 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10439_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10441_gshared (Dictionary_2_t2076 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10441(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10441_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2077  Dictionary_2_make_pair_m10443_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10443(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2077  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_make_pair_m10443_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m10445_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m10445(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_key_m10445_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::pick_value(TKey,TValue)
extern "C" int64_t Dictionary_2_pick_value_m10447_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10447(__this /* static, unused */, ___key, ___value, method) (( int64_t (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_pick_value_m10447_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10449_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2U5BU5D_t2351* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10449(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2076 *, KeyValuePair_2U5BU5D_t2351*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10449_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Resize()
extern "C" void Dictionary_2_Resize_m10451_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10451(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_Resize_m10451_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10453_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10453(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, int64_t, const MethodInfo*))Dictionary_2_Add_m10453_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Clear()
extern "C" void Dictionary_2_Clear_m10455_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10455(__this, method) (( void (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_Clear_m10455_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10457_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10457(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10457_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10459_gshared (Dictionary_2_t2076 * __this, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10459(__this, ___value, method) (( bool (*) (Dictionary_2_t2076 *, int64_t, const MethodInfo*))Dictionary_2_ContainsValue_m10459_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10461_gshared (Dictionary_2_t2076 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10461(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2076 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2_GetObjectData_m10461_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10463_gshared (Dictionary_2_t2076 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10463(__this, ___sender, method) (( void (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10463_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10465_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10465(__this, ___key, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10465_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10467_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, int64_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10467(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2076 *, Object_t *, int64_t*, const MethodInfo*))Dictionary_2_TryGetValue_m10467_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Keys()
extern "C" KeyCollection_t2080 * Dictionary_2_get_Keys_m10469_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m10469(__this, method) (( KeyCollection_t2080 * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Keys_m10469_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Values()
extern "C" ValueCollection_t2084 * Dictionary_2_get_Values_m10471_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10471(__this, method) (( ValueCollection_t2084 * (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_get_Values_m10471_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10473_gshared (Dictionary_2_t2076 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10473(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10473_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ToTValue(System.Object)
extern "C" int64_t Dictionary_2_ToTValue_m10475_gshared (Dictionary_2_t2076 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10475(__this, ___value, method) (( int64_t (*) (Dictionary_2_t2076 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10475_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10477_gshared (Dictionary_2_t2076 * __this, KeyValuePair_2_t2077  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10477(__this, ___pair, method) (( bool (*) (Dictionary_2_t2076 *, KeyValuePair_2_t2077 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10477_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::GetEnumerator()
extern "C" Enumerator_t2082  Dictionary_2_GetEnumerator_m10479_gshared (Dictionary_2_t2076 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10479(__this, method) (( Enumerator_t2082  (*) (Dictionary_2_t2076 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10479_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t675  Dictionary_2_U3CCopyToU3Em__0_m10481_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int64_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10481(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t675  (*) (Object_t * /* static, unused */, Object_t *, int64_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10481_gshared)(__this /* static, unused */, ___key, ___value, method)
