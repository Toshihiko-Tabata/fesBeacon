#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t48;
struct AsyncOperation_t48_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m718 (AsyncOperation_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m719 (AsyncOperation_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m720 (AsyncOperation_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t48_marshal(const AsyncOperation_t48& unmarshaled, AsyncOperation_t48_marshaled& marshaled);
void AsyncOperation_t48_marshal_back(const AsyncOperation_t48_marshaled& marshaled, AsyncOperation_t48& unmarshaled);
void AsyncOperation_t48_marshal_cleanup(AsyncOperation_t48_marshaled& marshaled);
