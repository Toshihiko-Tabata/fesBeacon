﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2157;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2154;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11539_gshared (Enumerator_t2157 * __this, Dictionary_2_t2154 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11539(__this, ___dictionary, method) (( void (*) (Enumerator_t2157 *, Dictionary_2_t2154 *, const MethodInfo*))Enumerator__ctor_m11539_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11540_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11540(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11540_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t675  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11541_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11541(__this, method) (( DictionaryEntry_t675  (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11541_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11542_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11542(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11542_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11543_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11543(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11543_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11544_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11544(__this, method) (( bool (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_MoveNext_m11544_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2128  Enumerator_get_Current_m11545_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11545(__this, method) (( KeyValuePair_2_t2128  (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_get_Current_m11545_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11546_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11546(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_get_CurrentKey_m11546_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t2020  Enumerator_get_CurrentValue_m11547_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11547(__this, method) (( KeyValuePair_2_t2020  (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_get_CurrentValue_m11547_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m11548_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11548(__this, method) (( void (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_VerifyState_m11548_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11549_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11549(__this, method) (( void (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_VerifyCurrent_m11549_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m11550_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11550(__this, method) (( void (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_Dispose_m11550_gshared)(__this, method)
