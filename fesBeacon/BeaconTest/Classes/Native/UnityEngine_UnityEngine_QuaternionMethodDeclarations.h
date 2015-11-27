#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t123;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m545 (Quaternion_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m546 (Quaternion_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m547 (Quaternion_t123 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
