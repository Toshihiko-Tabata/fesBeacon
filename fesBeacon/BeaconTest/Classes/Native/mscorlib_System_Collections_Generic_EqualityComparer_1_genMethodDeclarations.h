#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1<Beacon>
struct EqualityComparer_1_t1963;
// System.Object
struct Object_t;
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"

// System.Void System.Collections.Generic.EqualityComparer`1<Beacon>::.ctor()
extern "C" void EqualityComparer_1__ctor_m9115_gshared (EqualityComparer_1_t1963 * __this, const MethodInfo* method);
#define EqualityComparer_1__ctor_m9115(__this, method) (( void (*) (EqualityComparer_1_t1963 *, const MethodInfo*))EqualityComparer_1__ctor_m9115_gshared)(__this, method)
// System.Void System.Collections.Generic.EqualityComparer`1<Beacon>::.cctor()
extern "C" void EqualityComparer_1__cctor_m9116_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1__cctor_m9116(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1__cctor_m9116_gshared)(__this /* static, unused */, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<Beacon>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m9117_gshared (EqualityComparer_1_t1963 * __this, Object_t * ___obj, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m9117(__this, ___obj, method) (( int32_t (*) (EqualityComparer_1_t1963 *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m9117_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Beacon>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m9118_gshared (EqualityComparer_1_t1963 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m9118(__this, ___x, ___y, method) (( bool (*) (EqualityComparer_1_t1963 *, Object_t *, Object_t *, const MethodInfo*))EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m9118_gshared)(__this, ___x, ___y, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1<Beacon>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<Beacon>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<Beacon>::get_Default()
extern "C" EqualityComparer_1_t1963 * EqualityComparer_1_get_Default_m9119_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define EqualityComparer_1_get_Default_m9119(__this /* static, unused */, method) (( EqualityComparer_1_t1963 * (*) (Object_t * /* static, unused */, const MethodInfo*))EqualityComparer_1_get_Default_m9119_gshared)(__this /* static, unused */, method)
