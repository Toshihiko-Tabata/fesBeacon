#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t2206;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t2201;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12057_gshared (Enumerator_t2206 * __this, Dictionary_2_t2201 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12057(__this, ___dictionary, method) (( void (*) (Enumerator_t2206 *, Dictionary_2_t2201 *, const MethodInfo*))Enumerator__ctor_m12057_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12058_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12058(__this, method) (( Object_t * (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12058_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t675  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12059_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12059(__this, method) (( DictionaryEntry_t675  (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12059_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12060_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12060(__this, method) (( Object_t * (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12060_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12061_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12061(__this, method) (( Object_t * (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12061_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12062_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12062(__this, method) (( bool (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_MoveNext_m12062_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t2202  Enumerator_get_Current_m12063_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12063(__this, method) (( KeyValuePair_2_t2202  (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_get_Current_m12063_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12064_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12064(__this, method) (( Object_t * (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_get_CurrentKey_m12064_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m12065_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12065(__this, method) (( uint8_t (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_get_CurrentValue_m12065_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m12066_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12066(__this, method) (( void (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_VerifyState_m12066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12067_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12067(__this, method) (( void (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_VerifyCurrent_m12067_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m12068_gshared (Enumerator_t2206 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12068(__this, method) (( void (*) (Enumerator_t2206 *, const MethodInfo*))Enumerator_Dispose_m12068_gshared)(__this, method)
