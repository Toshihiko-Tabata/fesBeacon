#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t611;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2309;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2227;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2231;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1990;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2432;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2433;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2434;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t674;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12188_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12188(__this, method) (( void (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2__ctor_m12188_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12189_gshared (Dictionary_2_t611 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12189(__this, ___comparer, method) (( void (*) (Dictionary_2_t611 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12189_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m12190_gshared (Dictionary_2_t611 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m12190(__this, ___dictionary, method) (( void (*) (Dictionary_2_t611 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12190_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12191_gshared (Dictionary_2_t611 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12191(__this, ___capacity, method) (( void (*) (Dictionary_2_t611 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12191_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12192_gshared (Dictionary_2_t611 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12192(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t611 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12192_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12193_gshared (Dictionary_2_t611 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12193(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t611 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2__ctor_m12193_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12194_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12194(__this, method) (( Object_t* (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m12194_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12195_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12195(__this, method) (( Object_t* (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m12195_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12196_gshared (Dictionary_2_t611 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12196(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t611 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12196_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12197_gshared (Dictionary_2_t611 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12197(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t611 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12197_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12198_gshared (Dictionary_2_t611 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12198(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t611 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12198_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12199_gshared (Dictionary_2_t611 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12199(__this, ___key, method) (( bool (*) (Dictionary_2_t611 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12199_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12200_gshared (Dictionary_2_t611 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12200(__this, ___key, method) (( void (*) (Dictionary_2_t611 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12200_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12201_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12201(__this, method) (( Object_t * (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12201_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12202_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12202(__this, method) (( bool (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12202_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12203_gshared (Dictionary_2_t611 * __this, KeyValuePair_2_t2225  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12203(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t611 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12203_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12204_gshared (Dictionary_2_t611 * __this, KeyValuePair_2_t2225  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12204(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t611 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12204_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12205_gshared (Dictionary_2_t611 * __this, KeyValuePair_2U5BU5D_t2433* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12205(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t611 *, KeyValuePair_2U5BU5D_t2433*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12205_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12206_gshared (Dictionary_2_t611 * __this, KeyValuePair_2_t2225  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12206(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t611 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12206_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12207_gshared (Dictionary_2_t611 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12207(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t611 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12207_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12208_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12208(__this, method) (( Object_t * (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12208_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12209_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12209(__this, method) (( Object_t* (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12209_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12210_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12210(__this, method) (( Object_t * (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12210_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12211_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12211(__this, method) (( int32_t (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_get_Count_m12211_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12212_gshared (Dictionary_2_t611 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12212(__this, ___key, method) (( int32_t (*) (Dictionary_2_t611 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12212_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12213_gshared (Dictionary_2_t611 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12213(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t611 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12213_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12214_gshared (Dictionary_2_t611 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12214(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t611 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12214_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12215_gshared (Dictionary_2_t611 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12215(__this, ___size, method) (( void (*) (Dictionary_2_t611 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12215_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12216_gshared (Dictionary_2_t611 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12216(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t611 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12216_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2225  Dictionary_2_make_pair_m12217_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12217(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2225  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12217_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m12218_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12218(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m12218_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12219_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12219(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12219_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12220_gshared (Dictionary_2_t611 * __this, KeyValuePair_2U5BU5D_t2433* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12220(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t611 *, KeyValuePair_2U5BU5D_t2433*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12220_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12221_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12221(__this, method) (( void (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_Resize_m12221_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12222_gshared (Dictionary_2_t611 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12222(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t611 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m12222_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12223_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12223(__this, method) (( void (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_Clear_m12223_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12224_gshared (Dictionary_2_t611 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12224(__this, ___key, method) (( bool (*) (Dictionary_2_t611 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12224_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12225_gshared (Dictionary_2_t611 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12225(__this, ___value, method) (( bool (*) (Dictionary_2_t611 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12225_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12226_gshared (Dictionary_2_t611 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12226(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t611 *, SerializationInfo_t346 *, StreamingContext_t347 , const MethodInfo*))Dictionary_2_GetObjectData_m12226_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12227_gshared (Dictionary_2_t611 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12227(__this, ___sender, method) (( void (*) (Dictionary_2_t611 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12227_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12228_gshared (Dictionary_2_t611 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12228(__this, ___key, method) (( bool (*) (Dictionary_2_t611 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12228_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12229_gshared (Dictionary_2_t611 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12229(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t611 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12229_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2227 * Dictionary_2_get_Keys_m12230_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12230(__this, method) (( KeyCollection_t2227 * (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_get_Keys_m12230_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2231 * Dictionary_2_get_Values_m12231_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12231(__this, method) (( ValueCollection_t2231 * (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_get_Values_m12231_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12232_gshared (Dictionary_2_t611 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12232(__this, ___key, method) (( int32_t (*) (Dictionary_2_t611 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12232_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12233_gshared (Dictionary_2_t611 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12233(__this, ___value, method) (( int32_t (*) (Dictionary_2_t611 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12233_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12234_gshared (Dictionary_2_t611 * __this, KeyValuePair_2_t2225  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12234(__this, ___pair, method) (( bool (*) (Dictionary_2_t611 *, KeyValuePair_2_t2225 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12234_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2229  Dictionary_2_GetEnumerator_m12235_gshared (Dictionary_2_t611 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12235(__this, method) (( Enumerator_t2229  (*) (Dictionary_2_t611 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12235_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t675  Dictionary_2_U3CCopyToU3Em__0_m12236_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12236(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t675  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12236_gshared)(__this /* static, unused */, ___key, ___value, method)
