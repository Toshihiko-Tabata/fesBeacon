﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t2248;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m12372_gshared (Comparison_1_t2248 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m12372(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2248 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m12372_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m12373_gshared (Comparison_1_t2248 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m12373(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2248 *, Object_t *, Object_t *, const MethodInfo*))Comparison_1_Invoke_m12373_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m12374_gshared (Comparison_1_t2248 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m12374(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2248 *, Object_t *, Object_t *, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m12374_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m12375_gshared (Comparison_1_t2248 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m12375(__this, ___result, method) (( int32_t (*) (Comparison_1_t2248 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m12375_gshared)(__this, ___result, method)
