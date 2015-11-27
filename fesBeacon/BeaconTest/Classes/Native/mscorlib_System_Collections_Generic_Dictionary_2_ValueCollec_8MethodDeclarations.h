#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>
struct Enumerator_t2043;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2035;

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9997_gshared (Enumerator_t2043 * __this, Dictionary_2_t2035 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m9997(__this, ___host, method) (( void (*) (Enumerator_t2043 *, Dictionary_2_t2035 *, const MethodInfo*))Enumerator__ctor_m9997_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9998_gshared (Enumerator_t2043 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9998(__this, method) (( Object_t * (*) (Enumerator_t2043 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9998_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m9999_gshared (Enumerator_t2043 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9999(__this, method) (( void (*) (Enumerator_t2043 *, const MethodInfo*))Enumerator_Dispose_m9999_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10000_gshared (Enumerator_t2043 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10000(__this, method) (( bool (*) (Enumerator_t2043 *, const MethodInfo*))Enumerator_MoveNext_m10000_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" int32_t Enumerator_get_Current_m10001_gshared (Enumerator_t2043 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10001(__this, method) (( int32_t (*) (Enumerator_t2043 *, const MethodInfo*))Enumerator_get_Current_m10001_gshared)(__this, method)
