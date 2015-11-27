#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1353;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t693;
// System.ResolveEventArgs
struct ResolveEventArgs_t1408;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m8248 (ResolveEventHandler_t1353 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t693 * ResolveEventHandler_Invoke_m8249 (ResolveEventHandler_t1353 * __this, Object_t * ___sender, ResolveEventArgs_t1408 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t693 * pinvoke_delegate_wrapper_ResolveEventHandler_t1353(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t1408 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m8250 (ResolveEventHandler_t1353 * __this, Object_t * ___sender, ResolveEventArgs_t1408 * ___args, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t693 * ResolveEventHandler_EndInvoke_m8251 (ResolveEventHandler_t1353 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
