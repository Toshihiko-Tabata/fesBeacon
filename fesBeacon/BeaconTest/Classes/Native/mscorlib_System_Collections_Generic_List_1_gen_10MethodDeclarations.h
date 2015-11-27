#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t404;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t2408;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Type[]
struct TypeU5BU5D_t234;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_10.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m1501(__this, method) (( void (*) (List_1_t404 *, const MethodInfo*))List_1__ctor_m1453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m11707(__this, ___capacity, method) (( void (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1__ctor_m9134_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m11708(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9136_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11709(__this, method) (( Object_t* (*) (List_1_t404 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m11710(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t404 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m11711(__this, method) (( Object_t * (*) (List_1_t404 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m11712(__this, ___item, method) (( int32_t (*) (List_1_t404 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1621_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m11713(__this, ___item, method) (( bool (*) (List_1_t404 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1623_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m11714(__this, ___item, method) (( int32_t (*) (List_1_t404 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1624_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m11715(__this, ___index, ___item, method) (( void (*) (List_1_t404 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1625_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m11716(__this, ___item, method) (( void (*) (List_1_t404 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m11717(__this, method) (( bool (*) (List_1_t404 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1628_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m11718(__this, method) (( Object_t * (*) (List_1_t404 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m11719(__this, ___index, method) (( Object_t * (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1619_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m11720(__this, ___index, ___value, method) (( void (*) (List_1_t404 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1620_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m11721(__this, ___item, method) (( void (*) (List_1_t404 *, Type_t *, const MethodInfo*))List_1_Add_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m11722(__this, ___newCount, method) (( void (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9151_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m11723(__this, method) (( void (*) (List_1_t404 *, const MethodInfo*))List_1_Clear_m1622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m11724(__this, ___item, method) (( bool (*) (List_1_t404 *, Type_t *, const MethodInfo*))List_1_Contains_m1630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m11725(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t404 *, TypeU5BU5D_t234*, int32_t, const MethodInfo*))List_1_CopyTo_m1631_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m11726(__this, method) (( Enumerator_t2180  (*) (List_1_t404 *, const MethodInfo*))List_1_GetEnumerator_m9156_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m11727(__this, ___item, method) (( int32_t (*) (List_1_t404 *, Type_t *, const MethodInfo*))List_1_IndexOf_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11728(__this, ___start, ___delta, method) (( void (*) (List_1_t404 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9159_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11729(__this, ___index, method) (( void (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m11730(__this, ___index, ___item, method) (( void (*) (List_1_t404 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m1635_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m11731(__this, ___item, method) (( bool (*) (List_1_t404 *, Type_t *, const MethodInfo*))List_1_Remove_m1632_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11732(__this, ___index, method) (( void (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1627_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m1502(__this, method) (( TypeU5BU5D_t234* (*) (List_1_t404 *, const MethodInfo*))List_1_ToArray_m9165_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m11733(__this, method) (( int32_t (*) (List_1_t404 *, const MethodInfo*))List_1_get_Capacity_m9167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11734(__this, ___value, method) (( void (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9169_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m11735(__this, method) (( int32_t (*) (List_1_t404 *, const MethodInfo*))List_1_get_Count_m1616_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m11736(__this, ___index, method) (( Type_t * (*) (List_1_t404 *, int32_t, const MethodInfo*))List_1_get_Item_m1636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m11737(__this, ___index, ___value, method) (( void (*) (List_1_t404 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m1637_gshared)(__this, ___index, ___value, method)
