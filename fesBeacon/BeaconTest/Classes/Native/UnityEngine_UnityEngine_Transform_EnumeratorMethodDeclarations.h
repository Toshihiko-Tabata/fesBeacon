#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform/Enumerator
struct Enumerator_t157;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t132;

// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" void Enumerator__ctor_m804 (Enumerator_t157 * __this, Transform_t132 * ___outer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m805 (Enumerator_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m806 (Enumerator_t157 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
