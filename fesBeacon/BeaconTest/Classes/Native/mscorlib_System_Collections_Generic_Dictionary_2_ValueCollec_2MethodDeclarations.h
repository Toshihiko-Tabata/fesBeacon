#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2001;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t266;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t461;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t317;
// System.Object[]
struct ObjectU5BU5D_t17;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_3.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m9477_gshared (ValueCollection_t2001 * __this, Dictionary_2_t266 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m9477(__this, ___dictionary, method) (( void (*) (ValueCollection_t2001 *, Dictionary_2_t266 *, const MethodInfo*))ValueCollection__ctor_m9477_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9478_gshared (ValueCollection_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9478(__this, ___item, method) (( void (*) (ValueCollection_t2001 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m9478_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9479_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9479(__this, method) (( void (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m9479_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9480_gshared (ValueCollection_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9480(__this, ___item, method) (( bool (*) (ValueCollection_t2001 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m9480_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9481_gshared (ValueCollection_t2001 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9481(__this, ___item, method) (( bool (*) (ValueCollection_t2001 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m9481_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9482_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9482(__this, method) (( Object_t* (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9482_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m9483_gshared (ValueCollection_t2001 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m9483(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2001 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m9483_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9484_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9484(__this, method) (( Object_t * (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m9484_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9485_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9485(__this, method) (( bool (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m9485_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m9486_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m9486(__this, method) (( Object_t * (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m9486_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m9487_gshared (ValueCollection_t2001 * __this, ObjectU5BU5D_t17* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m9487(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2001 *, ObjectU5BU5D_t17*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m9487_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2002  ValueCollection_GetEnumerator_m9488_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m9488(__this, method) (( Enumerator_t2002  (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_GetEnumerator_m9488_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m9489_gshared (ValueCollection_t2001 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m9489(__this, method) (( int32_t (*) (ValueCollection_t2001 *, const MethodInfo*))ValueCollection_get_Count_m9489_gshared)(__this, method)
