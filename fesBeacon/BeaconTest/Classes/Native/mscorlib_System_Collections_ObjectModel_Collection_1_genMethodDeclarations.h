﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2254;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Object[]
struct ObjectU5BU5D_t17;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t461;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t468;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m12417_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1__ctor_m12417(__this, method) (( void (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1__ctor_m12417_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12418_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12418(__this, method) (( bool (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12418_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m12419_gshared (Collection_1_t2254 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m12419(__this, ___array, ___index, method) (( void (*) (Collection_1_t2254 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m12419_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m12420_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m12420(__this, method) (( Object_t * (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m12420_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m12421_gshared (Collection_1_t2254 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m12421(__this, ___value, method) (( int32_t (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m12421_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m12422_gshared (Collection_1_t2254 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m12422(__this, ___value, method) (( bool (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m12422_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m12423_gshared (Collection_1_t2254 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m12423(__this, ___value, method) (( int32_t (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m12423_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m12424_gshared (Collection_1_t2254 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m12424(__this, ___index, ___value, method) (( void (*) (Collection_1_t2254 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m12424_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m12425_gshared (Collection_1_t2254 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m12425(__this, ___value, method) (( void (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m12425_gshared)(__this, ___value, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m12426_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m12426(__this, method) (( Object_t * (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m12426_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m12427_gshared (Collection_1_t2254 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m12427(__this, ___index, method) (( Object_t * (*) (Collection_1_t2254 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m12427_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m12428_gshared (Collection_1_t2254 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m12428(__this, ___index, ___value, method) (( void (*) (Collection_1_t2254 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m12428_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m12429_gshared (Collection_1_t2254 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m12429(__this, ___item, method) (( void (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_Add_m12429_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m12430_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_Clear_m12430(__this, method) (( void (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_Clear_m12430_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m12431_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m12431(__this, method) (( void (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_ClearItems_m12431_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m12432_gshared (Collection_1_t2254 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m12432(__this, ___item, method) (( bool (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_Contains_m12432_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m12433_gshared (Collection_1_t2254 * __this, ObjectU5BU5D_t17* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m12433(__this, ___array, ___index, method) (( void (*) (Collection_1_t2254 *, ObjectU5BU5D_t17*, int32_t, const MethodInfo*))Collection_1_CopyTo_m12433_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m12434_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m12434(__this, method) (( Object_t* (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_GetEnumerator_m12434_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m12435_gshared (Collection_1_t2254 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m12435(__this, ___item, method) (( int32_t (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m12435_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m12436_gshared (Collection_1_t2254 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m12436(__this, ___index, ___item, method) (( void (*) (Collection_1_t2254 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m12436_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m12437_gshared (Collection_1_t2254 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m12437(__this, ___index, ___item, method) (( void (*) (Collection_1_t2254 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m12437_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m12438_gshared (Collection_1_t2254 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m12438(__this, ___item, method) (( bool (*) (Collection_1_t2254 *, Object_t *, const MethodInfo*))Collection_1_Remove_m12438_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m12439_gshared (Collection_1_t2254 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m12439(__this, ___index, method) (( void (*) (Collection_1_t2254 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m12439_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m12440_gshared (Collection_1_t2254 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m12440(__this, ___index, method) (( void (*) (Collection_1_t2254 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m12440_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m12441_gshared (Collection_1_t2254 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m12441(__this, method) (( int32_t (*) (Collection_1_t2254 *, const MethodInfo*))Collection_1_get_Count_m12441_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m12442_gshared (Collection_1_t2254 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m12442(__this, ___index, method) (( Object_t * (*) (Collection_1_t2254 *, int32_t, const MethodInfo*))Collection_1_get_Item_m12442_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m12443_gshared (Collection_1_t2254 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m12443(__this, ___index, ___value, method) (( void (*) (Collection_1_t2254 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m12443_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m12444_gshared (Collection_1_t2254 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m12444(__this, ___index, ___item, method) (( void (*) (Collection_1_t2254 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m12444_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m12445_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m12445(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m12445_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m12446_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m12446(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m12446_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m12447_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m12447(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m12447_gshared)(__this /* static, unused */, ___list, method)
