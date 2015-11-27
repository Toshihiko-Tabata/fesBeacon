#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t965;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t784;
// System.Byte[]
struct ByteU5BU5D_t141;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m4857 (MACAlgorithm_t965 * __this, SymmetricAlgorithm_t784 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m4858 (MACAlgorithm_t965 * __this, ByteU5BU5D_t141* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m4859 (MACAlgorithm_t965 * __this, ByteU5BU5D_t141* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t141* MACAlgorithm_Final_m4860 (MACAlgorithm_t965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
