#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Beacon>
struct List_1_t6;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<Beacon>
struct IEnumerator_1_t2306;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// Beacon[]
struct BeaconU5BU5D_t1961;
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"
// System.Collections.Generic.List`1/Enumerator<Beacon>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<Beacon>::.ctor()
extern "C" void List_1__ctor_m56_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1__ctor_m56(__this, method) (( void (*) (List_1_t6 *, const MethodInfo*))List_1__ctor_m56_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Beacon>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9075_gshared (List_1_t6 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9075(__this, ___capacity, method) (( void (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1__ctor_m9075_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<Beacon>::.cctor()
extern "C" void List_1__cctor_m9076_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9076(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9076_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Beacon>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9077_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9077(__this, method) (( Object_t* (*) (List_1_t6 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9077_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Beacon>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9078_gshared (List_1_t6 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9078(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9078_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Beacon>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9079_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9079(__this, method) (( Object_t * (*) (List_1_t6 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9079_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Beacon>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9080_gshared (List_1_t6 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9080(__this, ___item, method) (( int32_t (*) (List_1_t6 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9080_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Beacon>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9081_gshared (List_1_t6 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9081(__this, ___item, method) (( bool (*) (List_1_t6 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9081_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<Beacon>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9082_gshared (List_1_t6 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9082(__this, ___item, method) (( int32_t (*) (List_1_t6 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9082_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Beacon>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9083_gshared (List_1_t6 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9083(__this, ___index, ___item, method) (( void (*) (List_1_t6 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9083_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<Beacon>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m9084_gshared (List_1_t6 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m9084(__this, ___item, method) (( void (*) (List_1_t6 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m9084_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Beacon>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9085_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9085(__this, method) (( bool (*) (List_1_t6 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9085_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Beacon>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m9086_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m9086(__this, method) (( Object_t * (*) (List_1_t6 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m9086_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<Beacon>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m9087_gshared (List_1_t6 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m9087(__this, ___index, method) (( Object_t * (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m9087_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Beacon>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m9088_gshared (List_1_t6 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m9088(__this, ___index, ___value, method) (( void (*) (List_1_t6 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m9088_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<Beacon>::Add(T)
extern "C" void List_1_Add_m9089_gshared (List_1_t6 * __this, Beacon_t5  ___item, const MethodInfo* method);
#define List_1_Add_m9089(__this, ___item, method) (( void (*) (List_1_t6 *, Beacon_t5 , const MethodInfo*))List_1_Add_m9089_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Beacon>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m9090_gshared (List_1_t6 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m9090(__this, ___newCount, method) (( void (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9090_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<Beacon>::Clear()
extern "C" void List_1_Clear_m9091_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_Clear_m9091(__this, method) (( void (*) (List_1_t6 *, const MethodInfo*))List_1_Clear_m9091_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<Beacon>::Contains(T)
extern "C" bool List_1_Contains_m9092_gshared (List_1_t6 * __this, Beacon_t5  ___item, const MethodInfo* method);
#define List_1_Contains_m9092(__this, ___item, method) (( bool (*) (List_1_t6 *, Beacon_t5 , const MethodInfo*))List_1_Contains_m9092_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Beacon>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m9093_gshared (List_1_t6 * __this, BeaconU5BU5D_t1961* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m9093(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t6 *, BeaconU5BU5D_t1961*, int32_t, const MethodInfo*))List_1_CopyTo_m9093_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Beacon>::GetEnumerator()
extern "C" Enumerator_t22  List_1_GetEnumerator_m64_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m64(__this, method) (( Enumerator_t22  (*) (List_1_t6 *, const MethodInfo*))List_1_GetEnumerator_m64_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Beacon>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m9094_gshared (List_1_t6 * __this, Beacon_t5  ___item, const MethodInfo* method);
#define List_1_IndexOf_m9094(__this, ___item, method) (( int32_t (*) (List_1_t6 *, Beacon_t5 , const MethodInfo*))List_1_IndexOf_m9094_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Beacon>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m9095_gshared (List_1_t6 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m9095(__this, ___start, ___delta, method) (( void (*) (List_1_t6 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9095_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<Beacon>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m9096_gshared (List_1_t6 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m9096(__this, ___index, method) (( void (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9096_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Beacon>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m9097_gshared (List_1_t6 * __this, int32_t ___index, Beacon_t5  ___item, const MethodInfo* method);
#define List_1_Insert_m9097(__this, ___index, ___item, method) (( void (*) (List_1_t6 *, int32_t, Beacon_t5 , const MethodInfo*))List_1_Insert_m9097_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<Beacon>::Remove(T)
extern "C" bool List_1_Remove_m9098_gshared (List_1_t6 * __this, Beacon_t5  ___item, const MethodInfo* method);
#define List_1_Remove_m9098(__this, ___item, method) (( bool (*) (List_1_t6 *, Beacon_t5 , const MethodInfo*))List_1_Remove_m9098_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<Beacon>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m9099_gshared (List_1_t6 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m9099(__this, ___index, method) (( void (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1_RemoveAt_m9099_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<Beacon>::ToArray()
extern "C" BeaconU5BU5D_t1961* List_1_ToArray_m9100_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_ToArray_m9100(__this, method) (( BeaconU5BU5D_t1961* (*) (List_1_t6 *, const MethodInfo*))List_1_ToArray_m9100_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<Beacon>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m9101_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m9101(__this, method) (( int32_t (*) (List_1_t6 *, const MethodInfo*))List_1_get_Capacity_m9101_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Beacon>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m9102_gshared (List_1_t6 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m9102(__this, ___value, method) (( void (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9102_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<Beacon>::get_Count()
extern "C" int32_t List_1_get_Count_m9103_gshared (List_1_t6 * __this, const MethodInfo* method);
#define List_1_get_Count_m9103(__this, method) (( int32_t (*) (List_1_t6 *, const MethodInfo*))List_1_get_Count_m9103_gshared)(__this, method)
// T System.Collections.Generic.List`1<Beacon>::get_Item(System.Int32)
extern "C" Beacon_t5  List_1_get_Item_m9104_gshared (List_1_t6 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m9104(__this, ___index, method) (( Beacon_t5  (*) (List_1_t6 *, int32_t, const MethodInfo*))List_1_get_Item_m9104_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<Beacon>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m9105_gshared (List_1_t6 * __this, int32_t ___index, Beacon_t5  ___value, const MethodInfo* method);
#define List_1_set_Item_m9105(__this, ___index, ___value, method) (( void (*) (List_1_t6 *, int32_t, Beacon_t5 , const MethodInfo*))List_1_set_Item_m9105_gshared)(__this, ___index, ___value, method)
