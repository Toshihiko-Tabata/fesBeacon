#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t2278;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Getter_2__ctor_m12559_gshared (Getter_2_t2278 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Getter_2__ctor_m12559(__this, ___object, ___method, method) (( void (*) (Getter_2_t2278 *, Object_t *, IntPtr_t, const MethodInfo*))Getter_2__ctor_m12559_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Getter_2_Invoke_m12560_gshared (Getter_2_t2278 * __this, Object_t * ____this, const MethodInfo* method);
#define Getter_2_Invoke_m12560(__this, ____this, method) (( Object_t * (*) (Getter_2_t2278 *, Object_t *, const MethodInfo*))Getter_2_Invoke_m12560_gshared)(__this, ____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Getter_2_BeginInvoke_m12561_gshared (Getter_2_t2278 * __this, Object_t * ____this, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Getter_2_BeginInvoke_m12561(__this, ____this, ___callback, ___object, method) (( Object_t * (*) (Getter_2_t2278 *, Object_t *, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Getter_2_BeginInvoke_m12561_gshared)(__this, ____this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Getter_2_EndInvoke_m12562_gshared (Getter_2_t2278 * __this, Object_t * ___result, const MethodInfo* method);
#define Getter_2_EndInvoke_m12562(__this, ___result, method) (( Object_t * (*) (Getter_2_t2278 *, Object_t *, const MethodInfo*))Getter_2_EndInvoke_m12562_gshared)(__this, ___result, method)
