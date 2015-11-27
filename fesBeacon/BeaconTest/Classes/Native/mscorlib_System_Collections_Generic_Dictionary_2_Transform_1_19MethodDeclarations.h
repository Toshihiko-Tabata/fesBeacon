#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>
struct Transform_1_t2113;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m10848_gshared (Transform_1_t2113 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m10848(__this, ___object, ___method, method) (( void (*) (Transform_1_t2113 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m10848_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::Invoke(TKey,TValue)
extern "C" uint64_t Transform_1_Invoke_m10849_gshared (Transform_1_t2113 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m10849(__this, ___key, ___value, method) (( uint64_t (*) (Transform_1_t2113 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m10849_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m10850_gshared (Transform_1_t2113 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m10850(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2113 *, uint64_t, Object_t *, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m10850_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt64,System.Object,System.UInt64>::EndInvoke(System.IAsyncResult)
extern "C" uint64_t Transform_1_EndInvoke_m10851_gshared (Transform_1_t2113 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m10851(__this, ___result, method) (( uint64_t (*) (Transform_1_t2113 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m10851_gshared)(__this, ___result, method)
