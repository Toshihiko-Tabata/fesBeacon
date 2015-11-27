#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t86;
struct Gradient_t86_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m254 (Gradient_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m255 (Gradient_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m256 (Gradient_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m257 (Gradient_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t86_marshal(const Gradient_t86& unmarshaled, Gradient_t86_marshaled& marshaled);
void Gradient_t86_marshal_back(const Gradient_t86_marshaled& marshaled, Gradient_t86& unmarshaled);
void Gradient_t86_marshal_cleanup(Gradient_t86_marshaled& marshaled);
