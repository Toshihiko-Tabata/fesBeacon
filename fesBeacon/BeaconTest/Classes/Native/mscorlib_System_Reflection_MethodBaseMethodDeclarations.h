#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodBase
struct MethodBase_t408;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t398;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t17;
// System.Reflection.Binder
struct Binder_t405;
// System.Globalization.CultureInfo
struct CultureInfo_t374;
// System.Type[]
struct TypeU5BU5D_t234;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m6128 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C" MethodBase_t408 * MethodBase_GetMethodFromHandleNoGenericCheck_m6129 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1409  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t408 * MethodBase_GetMethodFromIntPtr_m6130 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C" MethodBase_t408 * MethodBase_GetMethodFromHandle_m6131 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1409  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t408 * MethodBase_GetMethodFromHandleInternalType_m6132 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" Object_t * MethodBase_Invoke_m6133 (MethodBase_t408 * __this, Object_t * ___obj, ObjectU5BU5D_t17* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m6134 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" bool MethodBase_get_IsPublic_m6135 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m6136 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" bool MethodBase_get_IsVirtual_m6137 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C" TypeU5BU5D_t234* MethodBase_GetGenericArguments_m6138 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C" bool MethodBase_get_ContainsGenericParameters_m6139 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m6140 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C" bool MethodBase_get_IsGenericMethod_m6141 (MethodBase_t408 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
