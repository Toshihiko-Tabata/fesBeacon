﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t546;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t333;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t2420;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t2217;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t2218;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1948;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t2421;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2422;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t2423;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_20.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Boolean>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_19MethodDeclarations.h"
#define Dictionary_2__ctor_m11931(__this, method) (( void (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2__ctor_m11932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m2590(__this, ___comparer, method) (( void (*) (Dictionary_2_t546 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11933_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m11934(__this, ___dictionary, method) (( void (*) (Dictionary_2_t546 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11935_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Int32)
#define Dictionary_2__ctor_m11936(__this, ___capacity, method) (( void (*) (Dictionary_2_t546 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11937_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m11938(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t546 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11939_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m11940(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t546 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2__ctor_m11941_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11942(__this, method) (( Object_t* (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11943_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11944(__this, method) (( Object_t* (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11945_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11946(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t546 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11947_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11948(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t546 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11949_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m11950(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t546 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11951_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m11952(__this, ___key, method) (( bool (*) (Dictionary_2_t546 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11953_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m11954(__this, ___key, method) (( void (*) (Dictionary_2_t546 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11955_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11956(__this, method) (( Object_t * (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11957_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11958(__this, method) (( bool (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11959_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11960(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t546 *, KeyValuePair_2_t2216 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11961_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11962(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t546 *, KeyValuePair_2_t2216 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11963_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11964(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t546 *, KeyValuePair_2U5BU5D_t2422*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11965_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11966(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t546 *, KeyValuePair_2_t2216 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11967_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11968(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t546 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11969_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11970(__this, method) (( Object_t * (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11971_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11972(__this, method) (( Object_t* (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11973_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11974(__this, method) (( Object_t * (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11975_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Count()
#define Dictionary_2_get_Count_m11976(__this, method) (( int32_t (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_get_Count_m11977_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Item(TKey)
#define Dictionary_2_get_Item_m11978(__this, ___key, method) (( bool (*) (Dictionary_2_t546 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m11979_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m11980(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t546 *, String_t*, bool, const MethodInfo*))Dictionary_2_set_Item_m11981_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m11982(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t546 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11983_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m11984(__this, ___size, method) (( void (*) (Dictionary_2_t546 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11985_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m11986(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t546 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11987_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m11988(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2216  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_make_pair_m11989_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m11990(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_key_m11991_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m11992(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_pick_value_m11993_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m11994(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t546 *, KeyValuePair_2U5BU5D_t2422*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11995_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Resize()
#define Dictionary_2_Resize_m11996(__this, method) (( void (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_Resize_m11997_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Add(TKey,TValue)
#define Dictionary_2_Add_m11998(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t546 *, String_t*, bool, const MethodInfo*))Dictionary_2_Add_m11999_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Clear()
#define Dictionary_2_Clear_m12000(__this, method) (( void (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_Clear_m12001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m12002(__this, ___key, method) (( bool (*) (Dictionary_2_t546 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m12003_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m12004(__this, ___value, method) (( bool (*) (Dictionary_2_t546 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m12005_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m12006(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t546 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2_GetObjectData_m12007_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m12008(__this, ___sender, method) (( void (*) (Dictionary_2_t546 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12009_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::Remove(TKey)
#define Dictionary_2_Remove_m12010(__this, ___key, method) (( bool (*) (Dictionary_2_t546 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m12011_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m12012(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t546 *, String_t*, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m12013_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Keys()
#define Dictionary_2_get_Keys_m12014(__this, method) (( KeyCollection_t2217 * (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_get_Keys_m12015_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::get_Values()
#define Dictionary_2_get_Values_m12016(__this, method) (( ValueCollection_t2218 * (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_get_Values_m12017_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m12018(__this, ___key, method) (( String_t* (*) (Dictionary_2_t546 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12019_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m12020(__this, ___value, method) (( bool (*) (Dictionary_2_t546 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12021_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m12022(__this, ___pair, method) (( bool (*) (Dictionary_2_t546 *, KeyValuePair_2_t2216 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12023_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m12024(__this, method) (( Enumerator_t2219  (*) (Dictionary_2_t546 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12025_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m12026(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t675  (*) (Object_t * /* static, unused */, String_t*, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12027_gshared)(__this /* static, unused */, ___key, ___value, method)
