﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte>
struct Action_1_t1975;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m9214_gshared (Action_1_t1975 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m9214(__this, ___object, ___method, method) (( void (*) (Action_1_t1975 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9214_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m9216_gshared (Action_1_t1975 * __this, uint8_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m9216(__this, ___obj, method) (( void (*) (Action_1_t1975 *, uint8_t, const MethodInfo*))Action_1_Invoke_m9216_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m9218_gshared (Action_1_t1975 * __this, uint8_t ___obj, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m9218(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t1975 *, uint8_t, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9218_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m9220_gshared (Action_1_t1975 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m9220(__this, ___result, method) (( void (*) (Action_1_t1975 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9220_gshared)(__this, ___result, method)
