#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t56;
struct WaitForSeconds_t56_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m144 (WaitForSeconds_t56 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t56_marshal(const WaitForSeconds_t56& unmarshaled, WaitForSeconds_t56_marshaled& marshaled);
void WaitForSeconds_t56_marshal_back(const WaitForSeconds_t56_marshaled& marshaled, WaitForSeconds_t56& unmarshaled);
void WaitForSeconds_t56_marshal_cleanup(WaitForSeconds_t56_marshaled& marshaled);
