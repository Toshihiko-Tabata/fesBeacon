#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.OperatingSystem
struct OperatingSystem_t1382;
// System.Version
struct Version_t534;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.String
struct String_t;
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.OperatingSystem::.ctor(System.PlatformID,System.Version)
extern "C" void OperatingSystem__ctor_m8085 (OperatingSystem_t1382 * __this, int32_t ___platform, Version_t534 * ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.PlatformID System.OperatingSystem::get_Platform()
extern "C" int32_t OperatingSystem_get_Platform_m8086 (OperatingSystem_t1382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.OperatingSystem::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OperatingSystem_GetObjectData_m8087 (OperatingSystem_t1382 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.OperatingSystem::ToString()
extern "C" String_t* OperatingSystem_ToString_m8088 (OperatingSystem_t1382 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
