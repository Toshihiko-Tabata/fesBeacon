#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2229;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t611;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12266_gshared (Enumerator_t2229 * __this, Dictionary_2_t611 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12266(__this, ___dictionary, method) (( void (*) (Enumerator_t2229 *, Dictionary_2_t611 *, const MethodInfo*))Enumerator__ctor_m12266_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12267_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12267(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12267_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t675  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12268_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12268(__this, method) (( DictionaryEntry_t675  (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12268_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12269_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12269(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12269_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12270_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12270(__this, method) (( Object_t * (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12270_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12271_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12271(__this, method) (( bool (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_MoveNext_m12271_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2225  Enumerator_get_Current_m12272_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12272(__this, method) (( KeyValuePair_2_t2225  (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_get_Current_m12272_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m12273_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12273(__this, method) (( int32_t (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_get_CurrentKey_m12273_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12274_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12274(__this, method) (( int32_t (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_get_CurrentValue_m12274_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12275_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12275(__this, method) (( void (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_VerifyState_m12275_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12276_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12276(__this, method) (( void (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_VerifyCurrent_m12276_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12277_gshared (Enumerator_t2229 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12277(__this, method) (( void (*) (Enumerator_t2229 *, const MethodInfo*))Enumerator_Dispose_m12277_gshared)(__this, method)
