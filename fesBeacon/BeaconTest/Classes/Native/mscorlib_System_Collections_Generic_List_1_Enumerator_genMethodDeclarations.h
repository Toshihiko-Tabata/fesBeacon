#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1/Enumerator<Beacon>
struct Enumerator_t22;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<Beacon>
struct List_1_t6;
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"

// System.Void System.Collections.Generic.List`1/Enumerator<Beacon>::.ctor(System.Collections.Generic.List`1<T>)
extern "C" void Enumerator__ctor_m9111_gshared (Enumerator_t22 * __this, List_1_t6 * ___l, const MethodInfo* method);
#define Enumerator__ctor_m9111(__this, ___l, method) (( void (*) (Enumerator_t22 *, List_1_t6 *, const MethodInfo*))Enumerator__ctor_m9111_gshared)(__this, ___l, method)
// System.Object System.Collections.Generic.List`1/Enumerator<Beacon>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9112_gshared (Enumerator_t22 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9112(__this, method) (( Object_t * (*) (Enumerator_t22 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9112_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Beacon>::Dispose()
extern "C" void Enumerator_Dispose_m9113_gshared (Enumerator_t22 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9113(__this, method) (( void (*) (Enumerator_t22 *, const MethodInfo*))Enumerator_Dispose_m9113_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Beacon>::VerifyState()
extern "C" void Enumerator_VerifyState_m9114_gshared (Enumerator_t22 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9114(__this, method) (( void (*) (Enumerator_t22 *, const MethodInfo*))Enumerator_VerifyState_m9114_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Beacon>::MoveNext()
extern "C" bool Enumerator_MoveNext_m66_gshared (Enumerator_t22 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m66(__this, method) (( bool (*) (Enumerator_t22 *, const MethodInfo*))Enumerator_MoveNext_m66_gshared)(__this, method)
// T System.Collections.Generic.List`1/Enumerator<Beacon>::get_Current()
extern "C" Beacon_t5  Enumerator_get_Current_m65_gshared (Enumerator_t22 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m65(__this, method) (( Beacon_t5  (*) (Enumerator_t22 *, const MethodInfo*))Enumerator_get_Current_m65_gshared)(__this, method)
