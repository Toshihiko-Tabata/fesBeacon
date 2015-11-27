#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t60;
struct Coroutine_t60_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m147 (Coroutine_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m148 (Coroutine_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m149 (Coroutine_t60 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t60_marshal(const Coroutine_t60& unmarshaled, Coroutine_t60_marshaled& marshaled);
void Coroutine_t60_marshal_back(const Coroutine_t60_marshaled& marshaled, Coroutine_t60& unmarshaled);
void Coroutine_t60_marshal_cleanup(Coroutine_t60_marshaled& marshaled);
