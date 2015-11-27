#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t2112;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t2106;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m10836_gshared (Enumerator_t2112 * __this, Dictionary_2_t2106 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m10836(__this, ___dictionary, method) (( void (*) (Enumerator_t2112 *, Dictionary_2_t2106 *, const MethodInfo*))Enumerator__ctor_m10836_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m10837_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m10837(__this, method) (( Object_t * (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m10837_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t675  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10838_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10838(__this, method) (( DictionaryEntry_t675  (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m10838_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10839_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10839(__this, method) (( Object_t * (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m10839_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10840_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10840(__this, method) (( Object_t * (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m10840_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m10841_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m10841(__this, method) (( bool (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_MoveNext_m10841_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2107  Enumerator_get_Current_m10842_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m10842(__this, method) (( KeyValuePair_2_t2107  (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_get_Current_m10842_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m10843_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m10843(__this, method) (( uint64_t (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_get_CurrentKey_m10843_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m10844_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m10844(__this, method) (( Object_t * (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_get_CurrentValue_m10844_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m10845_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m10845(__this, method) (( void (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_VerifyState_m10845_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m10846_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m10846(__this, method) (( void (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_VerifyCurrent_m10846_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m10847_gshared (Enumerator_t2112 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m10847(__this, method) (( void (*) (Enumerator_t2112 *, const MethodInfo*))Enumerator_Dispose_m10847_gshared)(__this, method)
