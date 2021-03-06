﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2201;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t334;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t2424;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Byte>
struct KeyCollection_t2204;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Byte>
struct ValueCollection_t2208;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2017;
// System.Collections.Generic.IDictionary`2<System.Object,System.Byte>
struct IDictionary_2_t2425;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2426;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>>
struct IEnumerator_1_t2427;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor()
extern "C" void Dictionary_2__ctor_m11932_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11932(__this, method) (( void (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2__ctor_m11932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11933_gshared (Dictionary_2_t2201 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11933(__this, ___comparer, method) (( void (*) (Dictionary_2_t2201 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11933_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11935_gshared (Dictionary_2_t2201 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11935(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2201 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11935_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11937_gshared (Dictionary_2_t2201 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11937(__this, ___capacity, method) (( void (*) (Dictionary_2_t2201 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11939_gshared (Dictionary_2_t2201 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11939(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2201 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11939_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11941_gshared (Dictionary_2_t2201 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11941(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2201 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2__ctor_m11941_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11943_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11943(__this, method) (( Object_t* (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11943_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11945_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11945(__this, method) (( Object_t* (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11945_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11947_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11947(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11947_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11949_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11949(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2201 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11949_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11951_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11951(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2201 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11951_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11953_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11953(__this, ___key, method) (( bool (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11953_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11955_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11955(__this, ___key, method) (( void (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11955_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11957_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11957(__this, method) (( Object_t * (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11959_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11959(__this, method) (( bool (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11959_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11961_gshared (Dictionary_2_t2201 * __this, KeyValuePair_2_t2202  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11961(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2201 *, KeyValuePair_2_t2202 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11961_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11963_gshared (Dictionary_2_t2201 * __this, KeyValuePair_2_t2202  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11963(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2201 *, KeyValuePair_2_t2202 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11963_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11965_gshared (Dictionary_2_t2201 * __this, KeyValuePair_2U5BU5D_t2426* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11965(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2201 *, KeyValuePair_2U5BU5D_t2426*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11965_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11967_gshared (Dictionary_2_t2201 * __this, KeyValuePair_2_t2202  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11967(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2201 *, KeyValuePair_2_t2202 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11967_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11969_gshared (Dictionary_2_t2201 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11969(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2201 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11969_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11971_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11971(__this, method) (( Object_t * (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11971_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11973_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11973(__this, method) (( Object_t* (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11973_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11975_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11975(__this, method) (( Object_t * (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11975_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11977_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11977(__this, method) (( int32_t (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_get_Count_m11977_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Item(TKey)
extern "C" uint8_t Dictionary_2_get_Item_m11979_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11979(__this, ___key, method) (( uint8_t (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11979_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11981_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11981(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2201 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_set_Item_m11981_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11983_gshared (Dictionary_2_t2201 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11983(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2201 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11983_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11985_gshared (Dictionary_2_t2201 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11985(__this, ___size, method) (( void (*) (Dictionary_2_t2201 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11985_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11987_gshared (Dictionary_2_t2201 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11987(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2201 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11987_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2202  Dictionary_2_make_pair_m11989_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11989(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2202  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_make_pair_m11989_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11991_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11991(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_key_m11991_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::pick_value(TKey,TValue)
extern "C" uint8_t Dictionary_2_pick_value_m11993_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11993(__this /* static, unused */, ___key, ___value, method) (( uint8_t (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_pick_value_m11993_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11995_gshared (Dictionary_2_t2201 * __this, KeyValuePair_2U5BU5D_t2426* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11995(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2201 *, KeyValuePair_2U5BU5D_t2426*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11995_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Resize()
extern "C" void Dictionary_2_Resize_m11997_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11997(__this, method) (( void (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_Resize_m11997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11999_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11999(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2201 *, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_Add_m11999_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Clear()
extern "C" void Dictionary_2_Clear_m12001_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12001(__this, method) (( void (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_Clear_m12001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12003_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12003(__this, ___key, method) (( bool (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12003_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12005_gshared (Dictionary_2_t2201 * __this, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12005(__this, ___value, method) (( bool (*) (Dictionary_2_t2201 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsValue_m12005_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12007_gshared (Dictionary_2_t2201 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12007(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2201 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2_GetObjectData_m12007_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12009_gshared (Dictionary_2_t2201 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12009(__this, ___sender, method) (( void (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12009_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12011_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12011(__this, ___key, method) (( bool (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12011_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12013_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, uint8_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12013(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2201 *, Object_t *, uint8_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12013_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Keys()
extern "C" KeyCollection_t2204 * Dictionary_2_get_Keys_m12015_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12015(__this, method) (( KeyCollection_t2204 * (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_get_Keys_m12015_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::get_Values()
extern "C" ValueCollection_t2208 * Dictionary_2_get_Values_m12017_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12017(__this, method) (( ValueCollection_t2208 * (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_get_Values_m12017_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12019_gshared (Dictionary_2_t2201 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12019(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12019_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ToTValue(System.Object)
extern "C" uint8_t Dictionary_2_ToTValue_m12021_gshared (Dictionary_2_t2201 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12021(__this, ___value, method) (( uint8_t (*) (Dictionary_2_t2201 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12021_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12023_gshared (Dictionary_2_t2201 * __this, KeyValuePair_2_t2202  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12023(__this, ___pair, method) (( bool (*) (Dictionary_2_t2201 *, KeyValuePair_2_t2202 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12023_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::GetEnumerator()
extern "C" Enumerator_t2206  Dictionary_2_GetEnumerator_m12025_gshared (Dictionary_2_t2201 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12025(__this, method) (( Enumerator_t2206  (*) (Dictionary_2_t2201 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12025_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t675  Dictionary_2_U3CCopyToU3Em__0_m12027_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint8_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12027(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t675  (*) (Object_t * /* static, unused */, Object_t *, uint8_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12027_gshared)(__this /* static, unused */, ___key, ___value, method)
