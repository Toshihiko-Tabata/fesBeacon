#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Boolean>
struct Action_1_t62;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Byte>
#include "mscorlib_System_Action_1_gen_5MethodDeclarations.h"
#define Action_1__ctor_m9213(__this, ___object, ___method, method) (( void (*) (Action_1_t62 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9214_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Boolean>::Invoke(T)
#define Action_1_Invoke_m9215(__this, ___obj, method) (( void (*) (Action_1_t62 *, bool, const MethodInfo*))Action_1_Invoke_m9216_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m9217(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t62 *, bool, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9218_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Boolean>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m9219(__this, ___result, method) (( void (*) (Action_1_t62 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9220_gshared)(__this, ___result, method)
