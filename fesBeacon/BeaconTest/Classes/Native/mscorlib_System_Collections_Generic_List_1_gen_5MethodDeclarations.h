#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t189;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2343;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t325;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m10236_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1__ctor_m10236(__this, method) (( void (*) (List_1_t189 *, const MethodInfo*))List_1__ctor_m10236_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m1427_gshared (List_1_t189 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m1427(__this, ___capacity, method) (( void (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1__ctor_m1427_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m10237_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10237(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10237_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10238_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10238(__this, method) (( Object_t* (*) (List_1_t189 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10238_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10239_gshared (List_1_t189 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10239(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t189 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10239_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10240_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10240(__this, method) (( Object_t * (*) (List_1_t189 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10240_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10241_gshared (List_1_t189 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10241(__this, ___item, method) (( int32_t (*) (List_1_t189 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10241_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10242_gshared (List_1_t189 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10242(__this, ___item, method) (( bool (*) (List_1_t189 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10242_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10243_gshared (List_1_t189 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10243(__this, ___item, method) (( int32_t (*) (List_1_t189 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10243_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10244_gshared (List_1_t189 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10244(__this, ___index, ___item, method) (( void (*) (List_1_t189 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10244_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10245_gshared (List_1_t189 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10245(__this, ___item, method) (( void (*) (List_1_t189 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10245_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10246_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10246(__this, method) (( bool (*) (List_1_t189 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10246_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10247_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10247(__this, method) (( Object_t * (*) (List_1_t189 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10247_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10248_gshared (List_1_t189 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10248(__this, ___index, method) (( Object_t * (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10248_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10249_gshared (List_1_t189 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10249(__this, ___index, ___value, method) (( void (*) (List_1_t189 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10249_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m10250_gshared (List_1_t189 * __this, UIVertex_t196  ___item, const MethodInfo* method);
#define List_1_Add_m10250(__this, ___item, method) (( void (*) (List_1_t189 *, UIVertex_t196 , const MethodInfo*))List_1_Add_m10250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10251_gshared (List_1_t189 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10251(__this, ___newCount, method) (( void (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10251_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m10252_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_Clear_m10252(__this, method) (( void (*) (List_1_t189 *, const MethodInfo*))List_1_Clear_m10252_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m10253_gshared (List_1_t189 * __this, UIVertex_t196  ___item, const MethodInfo* method);
#define List_1_Contains_m10253(__this, ___item, method) (( bool (*) (List_1_t189 *, UIVertex_t196 , const MethodInfo*))List_1_Contains_m10253_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10254_gshared (List_1_t189 * __this, UIVertexU5BU5D_t325* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10254(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t189 *, UIVertexU5BU5D_t325*, int32_t, const MethodInfo*))List_1_CopyTo_m10254_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t2063  List_1_GetEnumerator_m10255_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10255(__this, method) (( Enumerator_t2063  (*) (List_1_t189 *, const MethodInfo*))List_1_GetEnumerator_m10255_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10256_gshared (List_1_t189 * __this, UIVertex_t196  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10256(__this, ___item, method) (( int32_t (*) (List_1_t189 *, UIVertex_t196 , const MethodInfo*))List_1_IndexOf_m10256_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10257_gshared (List_1_t189 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10257(__this, ___start, ___delta, method) (( void (*) (List_1_t189 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10257_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10258_gshared (List_1_t189 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10258(__this, ___index, method) (( void (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10258_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10259_gshared (List_1_t189 * __this, int32_t ___index, UIVertex_t196  ___item, const MethodInfo* method);
#define List_1_Insert_m10259(__this, ___index, ___item, method) (( void (*) (List_1_t189 *, int32_t, UIVertex_t196 , const MethodInfo*))List_1_Insert_m10259_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m10260_gshared (List_1_t189 * __this, UIVertex_t196  ___item, const MethodInfo* method);
#define List_1_Remove_m10260(__this, ___item, method) (( bool (*) (List_1_t189 *, UIVertex_t196 , const MethodInfo*))List_1_Remove_m10260_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10261_gshared (List_1_t189 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10261(__this, ___index, method) (( void (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10261_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t325* List_1_ToArray_m10262_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_ToArray_m10262(__this, method) (( UIVertexU5BU5D_t325* (*) (List_1_t189 *, const MethodInfo*))List_1_ToArray_m10262_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10263_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10263(__this, method) (( int32_t (*) (List_1_t189 *, const MethodInfo*))List_1_get_Capacity_m10263_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10264_gshared (List_1_t189 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10264(__this, ___value, method) (( void (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10264_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m10265_gshared (List_1_t189 * __this, const MethodInfo* method);
#define List_1_get_Count_m10265(__this, method) (( int32_t (*) (List_1_t189 *, const MethodInfo*))List_1_get_Count_m10265_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t196  List_1_get_Item_m10266_gshared (List_1_t189 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10266(__this, ___index, method) (( UIVertex_t196  (*) (List_1_t189 *, int32_t, const MethodInfo*))List_1_get_Item_m10266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10267_gshared (List_1_t189 * __this, int32_t ___index, UIVertex_t196  ___value, const MethodInfo* method);
#define List_1_set_Item_m10267(__this, ___index, ___value, method) (( void (*) (List_1_t189 *, int32_t, UIVertex_t196 , const MethodInfo*))List_1_set_Item_m10267_gshared)(__this, ___index, ___value, method)
