﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidCastException
struct InvalidCastException_t1388;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidCastException::.ctor()
extern "C" void InvalidCastException__ctor_m7871 (InvalidCastException_t1388 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" void InvalidCastException__ctor_m7872 (InvalidCastException_t1388 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidCastException__ctor_m7873 (InvalidCastException_t1388 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
