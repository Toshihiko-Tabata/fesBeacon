#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.Coroutine
struct Coroutine_t60;
struct Coroutine_t60_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t317;

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m49 (MonoBehaviour_t2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t60 * MonoBehaviour_StartCoroutine_m785 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t60 * MonoBehaviour_StartCoroutine_Auto_m786 (MonoBehaviour_t2 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
