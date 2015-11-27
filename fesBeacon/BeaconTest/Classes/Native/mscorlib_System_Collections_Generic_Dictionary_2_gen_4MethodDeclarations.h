#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t226;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t333;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t334;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t371;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t372;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1948;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t328;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t335;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t337;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_10MethodDeclarations.h"
#define Dictionary_2__ctor_m1454(__this, method) (( void (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2__ctor_m9618_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10976(__this, ___comparer, method) (( void (*) (Dictionary_2_t226 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9619_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define Dictionary_2__ctor_m10977(__this, ___dictionary, method) (( void (*) (Dictionary_2_t226 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9621_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m10978(__this, ___capacity, method) (( void (*) (Dictionary_2_t226 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9623_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m10979(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t226 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9625_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m10980(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t226 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2__ctor_m9627_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m10981(__this, method) (( Object_t* (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m9629_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m10982(__this, method) (( Object_t* (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m9631_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10983(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9633_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t226 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9635_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m10985(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t226 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9637_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Contains(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Contains_m10986(__this, ___key, method) (( bool (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9639_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m10987(__this, ___key, method) (( void (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9641_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10988(__this, method) (( Object_t * (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10989(__this, method) (( bool (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9645_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10990(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t226 *, KeyValuePair_2_t336 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9647_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10991(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t226 *, KeyValuePair_2_t336 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9649_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10992(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t226 *, KeyValuePair_2U5BU5D_t335*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9651_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10993(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t226 *, KeyValuePair_2_t336 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9653_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10994(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t226 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9655_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10995(__this, method) (( Object_t * (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9657_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10996(__this, method) (( Object_t* (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9659_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10997(__this, method) (( Object_t * (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9661_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m10998(__this, method) (( int32_t (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_get_Count_m9663_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m10999(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t226 *, String_t*, const MethodInfo*))Dictionary_2_get_Item_m9665_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m11000(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t226 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9667_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m11001(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t226 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9669_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m11002(__this, ___size, method) (( void (*) (Dictionary_2_t226 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9671_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m11003(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t226 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9673_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
#define Dictionary_2_make_pair_m11004(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t336  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9675_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m11005(__this /* static, unused */, ___key, ___value, method) (( String_t* (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m9677_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m11006(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9679_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m11007(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t226 *, KeyValuePair_2U5BU5D_t335*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9681_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m11008(__this, method) (( void (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_Resize_m9683_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m11009(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t226 *, String_t*, Object_t *, const MethodInfo*))Dictionary_2_Add_m9685_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m11010(__this, method) (( void (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_Clear_m9687_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m11011(__this, ___key, method) (( bool (*) (Dictionary_2_t226 *, String_t*, const MethodInfo*))Dictionary_2_ContainsKey_m9689_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m11012(__this, ___value, method) (( bool (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9691_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m11013(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t226 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2_GetObjectData_m9693_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m11014(__this, ___sender, method) (( void (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9695_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m11015(__this, ___key, method) (( bool (*) (Dictionary_2_t226 *, String_t*, const MethodInfo*))Dictionary_2_Remove_m9697_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m11016(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t226 *, String_t*, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9699_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m1456(__this, method) (( KeyCollection_t371 * (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_get_Keys_m9701_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m1457(__this, method) (( ValueCollection_t372 * (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_get_Values_m9702_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m11017(__this, ___key, method) (( String_t* (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9704_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m11018(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t226 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9706_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
#define Dictionary_2_ContainsKeyValuePair_m11019(__this, ___pair, method) (( bool (*) (Dictionary_2_t226 *, KeyValuePair_2_t336 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9708_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
#define Dictionary_2_GetEnumerator_m1455(__this, method) (( Enumerator_t370  (*) (Dictionary_2_t226 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9710_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m11020(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t675  (*) (Object_t * /* static, unused */, String_t*, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9712_gshared)(__this /* static, unused */, ___key, ___value, method)
