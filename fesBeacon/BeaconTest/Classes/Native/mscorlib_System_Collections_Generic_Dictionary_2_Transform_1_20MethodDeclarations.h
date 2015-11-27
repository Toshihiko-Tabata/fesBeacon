﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>
struct Transform_1_t2116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10870_gshared (Transform_1_t2116 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10870(__this, ___object, ___method, method) (( void (*) (Transform_1_t2116 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10870_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m10871_gshared (Transform_1_t2116 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10871(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t2116 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m10871_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10872_gshared (Transform_1_t2116 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10872(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2116 *, uint64_t, Object_t *, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10872_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m10873_gshared (Transform_1_t2116 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10873(__this, ___result, method) (( Object_t * (*) (Transform_1_t2116 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10873_gshared)(__this, ___result, method)
