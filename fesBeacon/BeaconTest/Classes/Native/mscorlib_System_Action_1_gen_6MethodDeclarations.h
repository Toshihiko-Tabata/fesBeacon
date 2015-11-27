#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t1976;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m9222_gshared (Action_1_t1976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m9222(__this, ___object, ___method, method) (( void (*) (Action_1_t1976 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9222_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m9224_gshared (Action_1_t1976 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m9224(__this, ___obj, method) (( void (*) (Action_1_t1976 *, Object_t *, const MethodInfo*))Action_1_Invoke_m9224_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m9226_gshared (Action_1_t1976 * __this, Object_t * ___obj, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m9226(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1976 *, Object_t *, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9226_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m9228_gshared (Action_1_t1976 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m9228(__this, ___result, method) (( void (*) (Action_1_t1976 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9228_gshared)(__this, ___result, method)
