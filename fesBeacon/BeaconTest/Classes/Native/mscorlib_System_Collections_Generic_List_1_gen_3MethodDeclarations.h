#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t97;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t96;
// System.Collections.Generic.IEnumerator`1<UnityEngine.GUILayoutEntry>
struct IEnumerator_1_t2321;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// UnityEngine.GUILayoutEntry[]
struct GUILayoutEntryU5BU5D_t2014;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.GUILayoutEntry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1389(__this, method) (( void (*) (List_1_t97 *, const MethodInfo*))List_1__ctor_m1453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.ctor(System.Int32)
#define List_1__ctor_m9581(__this, ___capacity, method) (( void (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1__ctor_m9134_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::.cctor()
#define List_1__cctor_m9582(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9136_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9583(__this, method) (( Object_t* (*) (List_1_t97 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9584(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t97 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9585(__this, method) (( Object_t * (*) (List_1_t97 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9586(__this, ___item, method) (( int32_t (*) (List_1_t97 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1621_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9587(__this, ___item, method) (( bool (*) (List_1_t97 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1623_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9588(__this, ___item, method) (( int32_t (*) (List_1_t97 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1624_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9589(__this, ___index, ___item, method) (( void (*) (List_1_t97 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1625_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9590(__this, ___item, method) (( void (*) (List_1_t97 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9591(__this, method) (( bool (*) (List_1_t97 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1628_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9592(__this, method) (( Object_t * (*) (List_1_t97 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9593(__this, ___index, method) (( Object_t * (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1619_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9594(__this, ___index, ___value, method) (( void (*) (List_1_t97 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1620_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Add(T)
#define List_1_Add_m9595(__this, ___item, method) (( void (*) (List_1_t97 *, GUILayoutEntry_t96 *, const MethodInfo*))List_1_Add_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9596(__this, ___newCount, method) (( void (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9151_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Clear()
#define List_1_Clear_m9597(__this, method) (( void (*) (List_1_t97 *, const MethodInfo*))List_1_Clear_m1622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Contains(T)
#define List_1_Contains_m9598(__this, ___item, method) (( bool (*) (List_1_t97 *, GUILayoutEntry_t96 *, const MethodInfo*))List_1_Contains_m1630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9599(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t97 *, GUILayoutEntryU5BU5D_t2014*, int32_t, const MethodInfo*))List_1_CopyTo_m1631_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::GetEnumerator()
#define List_1_GetEnumerator_m1384(__this, method) (( Enumerator_t356  (*) (List_1_t97 *, const MethodInfo*))List_1_GetEnumerator_m9156_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::IndexOf(T)
#define List_1_IndexOf_m9600(__this, ___item, method) (( int32_t (*) (List_1_t97 *, GUILayoutEntry_t96 *, const MethodInfo*))List_1_IndexOf_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9601(__this, ___start, ___delta, method) (( void (*) (List_1_t97 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9159_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9602(__this, ___index, method) (( void (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Insert(System.Int32,T)
#define List_1_Insert_m9603(__this, ___index, ___item, method) (( void (*) (List_1_t97 *, int32_t, GUILayoutEntry_t96 *, const MethodInfo*))List_1_Insert_m1635_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::Remove(T)
#define List_1_Remove_m9604(__this, ___item, method) (( bool (*) (List_1_t97 *, GUILayoutEntry_t96 *, const MethodInfo*))List_1_Remove_m1632_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9605(__this, ___index, method) (( void (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1627_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::ToArray()
#define List_1_ToArray_m9606(__this, method) (( GUILayoutEntryU5BU5D_t2014* (*) (List_1_t97 *, const MethodInfo*))List_1_ToArray_m9165_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Capacity()
#define List_1_get_Capacity_m9607(__this, method) (( int32_t (*) (List_1_t97 *, const MethodInfo*))List_1_get_Capacity_m9167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9608(__this, ___value, method) (( void (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9169_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Count()
#define List_1_get_Count_m9609(__this, method) (( int32_t (*) (List_1_t97 *, const MethodInfo*))List_1_get_Count_m1616_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::get_Item(System.Int32)
#define List_1_get_Item_m9610(__this, ___index, method) (( GUILayoutEntry_t96 * (*) (List_1_t97 *, int32_t, const MethodInfo*))List_1_get_Item_m1636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>::set_Item(System.Int32,T)
#define List_1_set_Item_m9611(__this, ___index, ___value, method) (( void (*) (List_1_t97 *, int32_t, GUILayoutEntry_t96 *, const MethodInfo*))List_1_set_Item_m1637_gshared)(__this, ___index, ___value, method)
