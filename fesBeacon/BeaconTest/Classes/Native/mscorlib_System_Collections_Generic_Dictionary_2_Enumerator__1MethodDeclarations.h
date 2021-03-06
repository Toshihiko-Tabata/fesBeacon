﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1999;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t266;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9461_gshared (Enumerator_t1999 * __this, Dictionary_2_t266 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9461(__this, ___dictionary, method) (( void (*) (Enumerator_t1999 *, Dictionary_2_t266 *, const MethodInfo*))Enumerator__ctor_m9461_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9462_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9462(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9462_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t675  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9463_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9463(__this, method) (( DictionaryEntry_t675  (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9463_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9464_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9464(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9464_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9465_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9465(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9466_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9466(__this, method) (( bool (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_MoveNext_m9466_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1993  Enumerator_get_Current_m9467_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9467(__this, method) (( KeyValuePair_2_t1993  (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_get_Current_m9467_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m9468_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9468(__this, method) (( int32_t (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_get_CurrentKey_m9468_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m9469_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9469(__this, method) (( Object_t * (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_get_CurrentValue_m9469_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m9470_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9470(__this, method) (( void (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_VerifyState_m9470_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9471_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9471(__this, method) (( void (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_VerifyCurrent_m9471_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m9472_gshared (Enumerator_t1999 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9472(__this, method) (( void (*) (Enumerator_t1999 *, const MethodInfo*))Enumerator_Dispose_m9472_gshared)(__this, method)
