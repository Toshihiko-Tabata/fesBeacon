#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t140;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t141;
// System.Collections.Generic.IEnumerator`1<System.Byte[]>
struct IEnumerator_1_t2342;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t888;
// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_4.h"

// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1420(__this, method) (( void (*) (List_1_t140 *, const MethodInfo*))List_1__ctor_m1453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor(System.Int32)
#define List_1__ctor_m10164(__this, ___capacity, method) (( void (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1__ctor_m9134_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.cctor()
#define List_1__cctor_m10165(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9136_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10166(__this, method) (( Object_t* (*) (List_1_t140 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10167(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t140 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10168(__this, method) (( Object_t * (*) (List_1_t140 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10169(__this, ___item, method) (( int32_t (*) (List_1_t140 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1621_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10170(__this, ___item, method) (( bool (*) (List_1_t140 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1623_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10171(__this, ___item, method) (( int32_t (*) (List_1_t140 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1624_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10172(__this, ___index, ___item, method) (( void (*) (List_1_t140 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1625_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10173(__this, ___item, method) (( void (*) (List_1_t140 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10174(__this, method) (( bool (*) (List_1_t140 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1628_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10175(__this, method) (( Object_t * (*) (List_1_t140 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10176(__this, ___index, method) (( Object_t * (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1619_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10177(__this, ___index, ___value, method) (( void (*) (List_1_t140 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1620_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
#define List_1_Add_m10178(__this, ___item, method) (( void (*) (List_1_t140 *, ByteU5BU5D_t141*, const MethodInfo*))List_1_Add_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10179(__this, ___newCount, method) (( void (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9151_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Clear()
#define List_1_Clear_m10180(__this, method) (( void (*) (List_1_t140 *, const MethodInfo*))List_1_Clear_m1622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Contains(T)
#define List_1_Contains_m10181(__this, ___item, method) (( bool (*) (List_1_t140 *, ByteU5BU5D_t141*, const MethodInfo*))List_1_Contains_m1630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10182(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t140 *, ByteU5BU5DU5BU5D_t888*, int32_t, const MethodInfo*))List_1_CopyTo_m1631_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
#define List_1_GetEnumerator_m10183(__this, method) (( Enumerator_t2055  (*) (List_1_t140 *, const MethodInfo*))List_1_GetEnumerator_m9156_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::IndexOf(T)
#define List_1_IndexOf_m10184(__this, ___item, method) (( int32_t (*) (List_1_t140 *, ByteU5BU5D_t141*, const MethodInfo*))List_1_IndexOf_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m10185(__this, ___start, ___delta, method) (( void (*) (List_1_t140 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9159_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m10186(__this, ___index, method) (( void (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Insert(System.Int32,T)
#define List_1_Insert_m10187(__this, ___index, ___item, method) (( void (*) (List_1_t140 *, int32_t, ByteU5BU5D_t141*, const MethodInfo*))List_1_Insert_m1635_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Byte[]>::Remove(T)
#define List_1_Remove_m10188(__this, ___item, method) (( bool (*) (List_1_t140 *, ByteU5BU5D_t141*, const MethodInfo*))List_1_Remove_m1632_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m10189(__this, ___index, method) (( void (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1627_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Byte[]>::ToArray()
#define List_1_ToArray_m10190(__this, method) (( ByteU5BU5DU5BU5D_t888* (*) (List_1_t140 *, const MethodInfo*))List_1_ToArray_m9165_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Capacity()
#define List_1_get_Capacity_m10191(__this, method) (( int32_t (*) (List_1_t140 *, const MethodInfo*))List_1_get_Capacity_m9167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m10192(__this, ___value, method) (( void (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9169_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
#define List_1_get_Count_m10193(__this, method) (( int32_t (*) (List_1_t140 *, const MethodInfo*))List_1_get_Count_m1616_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
#define List_1_get_Item_m10194(__this, ___index, method) (( ByteU5BU5D_t141* (*) (List_1_t140 *, int32_t, const MethodInfo*))List_1_get_Item_m1636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Byte[]>::set_Item(System.Int32,T)
#define List_1_set_Item_m10195(__this, ___index, ___value, method) (( void (*) (List_1_t140 *, int32_t, ByteU5BU5D_t141*, const MethodInfo*))List_1_set_Item_m1637_gshared)(__this, ___index, ___value, method)
