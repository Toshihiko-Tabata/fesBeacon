#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t538;
// System.Uri
struct Uri_t222;
// System.Net.ServicePoint
struct ServicePoint_t537;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m1764 (HttpWebRequest_t538 * __this, Uri_t222 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m1765 (HttpWebRequest_t538 * __this, SerializationInfo_t346 * ___serializationInfo, StreamingContext_t347  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m1766 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m1767 (HttpWebRequest_t538 * __this, SerializationInfo_t346 * ___serializationInfo, StreamingContext_t347  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t222 * HttpWebRequest_get_Address_m1768 (HttpWebRequest_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t537 * HttpWebRequest_get_ServicePoint_m1769 (HttpWebRequest_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t537 * HttpWebRequest_GetServicePoint_m1770 (HttpWebRequest_t538 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m1771 (HttpWebRequest_t538 * __this, SerializationInfo_t346 * ___serializationInfo, StreamingContext_t347  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
