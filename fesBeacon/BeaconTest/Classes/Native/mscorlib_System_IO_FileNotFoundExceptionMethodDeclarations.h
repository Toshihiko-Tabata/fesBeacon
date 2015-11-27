#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileNotFoundException
struct FileNotFoundException_t1052;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t346;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileNotFoundException::.ctor()
extern "C" void FileNotFoundException__ctor_m5562 (FileNotFoundException_t1052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.String,System.String)
extern "C" void FileNotFoundException__ctor_m5563 (FileNotFoundException_t1052 * __this, String_t* ___message, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException__ctor_m5564 (FileNotFoundException_t1052 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::get_Message()
extern "C" String_t* FileNotFoundException_get_Message_m5565 (FileNotFoundException_t1052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileNotFoundException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileNotFoundException_GetObjectData_m5566 (FileNotFoundException_t1052 * __this, SerializationInfo_t346 * ___info, StreamingContext_t347  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileNotFoundException::ToString()
extern "C" String_t* FileNotFoundException_ToString_m5567 (FileNotFoundException_t1052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
