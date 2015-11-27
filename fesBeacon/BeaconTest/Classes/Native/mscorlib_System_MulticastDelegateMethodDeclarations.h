#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t10;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1449;
// System.Delegate
struct Delegate_t19;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m122 (MulticastDelegate_t10 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m119 (MulticastDelegate_t10 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m120 (MulticastDelegate_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1449* MulticastDelegate_GetInvocationList_m124 (MulticastDelegate_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t19 * MulticastDelegate_CombineImpl_m125 (MulticastDelegate_t10 * __this, Delegate_t19 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m4341 (MulticastDelegate_t10 * __this, MulticastDelegate_t10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t10 * MulticastDelegate_KPM_m4342 (Object_t * __this /* static, unused */, MulticastDelegate_t10 * ___needle, MulticastDelegate_t10 * ___haystack, MulticastDelegate_t10 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t19 * MulticastDelegate_RemoveImpl_m126 (MulticastDelegate_t10 * __this, Delegate_t19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
