#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1462;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8266_gshared (Nullable_1_t1462 * __this, TimeSpan_t579  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8266(__this, ___value, method) (( void (*) (Nullable_1_t1462 *, TimeSpan_t579 , const MethodInfo*))Nullable_1__ctor_m8266_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8267_gshared (Nullable_1_t1462 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8267(__this, method) (( bool (*) (Nullable_1_t1462 *, const MethodInfo*))Nullable_1_get_HasValue_m8267_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t579  Nullable_1_get_Value_m8268_gshared (Nullable_1_t1462 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8268(__this, method) (( TimeSpan_t579  (*) (Nullable_1_t1462 *, const MethodInfo*))Nullable_1_get_Value_m8268_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m12679_gshared (Nullable_1_t1462 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12679(__this, ___other, method) (( bool (*) (Nullable_1_t1462 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m12679_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m12680_gshared (Nullable_1_t1462 * __this, Nullable_1_t1462  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m12680(__this, ___other, method) (( bool (*) (Nullable_1_t1462 *, Nullable_1_t1462 , const MethodInfo*))Nullable_1_Equals_m12680_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m12681_gshared (Nullable_1_t1462 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m12681(__this, method) (( int32_t (*) (Nullable_1_t1462 *, const MethodInfo*))Nullable_1_GetHashCode_m12681_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m12682_gshared (Nullable_1_t1462 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m12682(__this, method) (( String_t* (*) (Nullable_1_t1462 *, const MethodInfo*))Nullable_1_ToString_m12682_gshared)(__this, method)
