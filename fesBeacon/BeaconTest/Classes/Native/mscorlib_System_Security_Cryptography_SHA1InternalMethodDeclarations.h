#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t1281;
// System.Byte[]
struct ByteU5BU5D_t141;
// System.UInt32[]
struct UInt32U5BU5D_t761;

// System.Void System.Security.Cryptography.SHA1Internal::.ctor()
extern "C" void SHA1Internal__ctor_m6972 (SHA1Internal_t1281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Internal_HashCore_m6973 (SHA1Internal_t1281 * __this, ByteU5BU5D_t141* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA1Internal::HashFinal()
extern "C" ByteU5BU5D_t141* SHA1Internal_HashFinal_m6974 (SHA1Internal_t1281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::Initialize()
extern "C" void SHA1Internal_Initialize_m6975 (SHA1Internal_t1281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessBlock(System.Byte[],System.UInt32)
extern "C" void SHA1Internal_ProcessBlock_m6976 (SHA1Internal_t1281 * __this, ByteU5BU5D_t141* ___inputBuffer, uint32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::InitialiseBuff(System.UInt32[],System.Byte[],System.UInt32)
extern "C" void SHA1Internal_InitialiseBuff_m6977 (Object_t * __this /* static, unused */, UInt32U5BU5D_t761* ___buff, ByteU5BU5D_t141* ___input, uint32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::FillBuff(System.UInt32[])
extern "C" void SHA1Internal_FillBuff_m6978 (Object_t * __this /* static, unused */, UInt32U5BU5D_t761* ___buff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void SHA1Internal_ProcessFinalBlock_m6979 (SHA1Internal_t1281 * __this, ByteU5BU5D_t141* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA1Internal::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void SHA1Internal_AddLength_m6980 (SHA1Internal_t1281 * __this, uint64_t ___length, ByteU5BU5D_t141* ___buffer, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
