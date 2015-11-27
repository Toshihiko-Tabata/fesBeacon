#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t21;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2307;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.String[]
struct StringU5BU5D_t20;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
#define List_1__ctor_m61(__this, method) (( void (*) (List_1_t21 *, const MethodInfo*))List_1__ctor_m1453_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m9133(__this, ___capacity, method) (( void (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1__ctor_m9134_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m9135(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9136_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9137(__this, method) (( Object_t* (*) (List_1_t21 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1633_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m9138(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t21 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m1618_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9139(__this, method) (( Object_t * (*) (List_1_t21 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m1615_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m9140(__this, ___item, method) (( int32_t (*) (List_1_t21 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m1621_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m9141(__this, ___item, method) (( bool (*) (List_1_t21 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m1623_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m9142(__this, ___item, method) (( int32_t (*) (List_1_t21 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m1624_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m9143(__this, ___index, ___item, method) (( void (*) (List_1_t21 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m1625_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m9144(__this, ___item, method) (( void (*) (List_1_t21 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m1626_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m9145(__this, method) (( bool (*) (List_1_t21 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1628_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m9146(__this, method) (( Object_t * (*) (List_1_t21 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m1617_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m9147(__this, ___index, method) (( Object_t * (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m1619_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m9148(__this, ___index, ___value, method) (( void (*) (List_1_t21 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m1620_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m9149(__this, ___item, method) (( void (*) (List_1_t21 *, String_t*, const MethodInfo*))List_1_Add_m1629_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m9150(__this, ___newCount, method) (( void (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m9151_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m9152(__this, method) (( void (*) (List_1_t21 *, const MethodInfo*))List_1_Clear_m1622_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m9153(__this, ___item, method) (( bool (*) (List_1_t21 *, String_t*, const MethodInfo*))List_1_Contains_m1630_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m9154(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t21 *, StringU5BU5D_t20*, int32_t, const MethodInfo*))List_1_CopyTo_m1631_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m9155(__this, method) (( Enumerator_t1970  (*) (List_1_t21 *, const MethodInfo*))List_1_GetEnumerator_m9156_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m9157(__this, ___item, method) (( int32_t (*) (List_1_t21 *, String_t*, const MethodInfo*))List_1_IndexOf_m1634_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m9158(__this, ___start, ___delta, method) (( void (*) (List_1_t21 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m9159_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m9160(__this, ___index, method) (( void (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1_CheckIndex_m9161_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m9162(__this, ___index, ___item, method) (( void (*) (List_1_t21 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m1635_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m9163(__this, ___item, method) (( bool (*) (List_1_t21 *, String_t*, const MethodInfo*))List_1_Remove_m1632_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m9164(__this, ___index, method) (( void (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1_RemoveAt_m1627_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m8256(__this, method) (( StringU5BU5D_t20* (*) (List_1_t21 *, const MethodInfo*))List_1_ToArray_m9165_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m9166(__this, method) (( int32_t (*) (List_1_t21 *, const MethodInfo*))List_1_get_Capacity_m9167_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m9168(__this, ___value, method) (( void (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1_set_Capacity_m9169_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m9170(__this, method) (( int32_t (*) (List_1_t21 *, const MethodInfo*))List_1_get_Count_m1616_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m9171(__this, ___index, method) (( String_t* (*) (List_1_t21 *, int32_t, const MethodInfo*))List_1_get_Item_m1636_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m9172(__this, ___index, ___value, method) (( void (*) (List_1_t21 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m1637_gshared)(__this, ___index, ___value, method)
