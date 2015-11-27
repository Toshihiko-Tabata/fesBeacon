#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t957;
// Mono.Math.BigInteger
struct BigInteger_t956;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m4720 (ModulusRing_t957 * __this, BigInteger_t956 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m4721 (ModulusRing_t957 * __this, BigInteger_t956 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t956 * ModulusRing_Multiply_m4722 (ModulusRing_t957 * __this, BigInteger_t956 * ___a, BigInteger_t956 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t956 * ModulusRing_Difference_m4723 (ModulusRing_t957 * __this, BigInteger_t956 * ___a, BigInteger_t956 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t956 * ModulusRing_Pow_m4724 (ModulusRing_t957 * __this, BigInteger_t956 * ___a, BigInteger_t956 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t956 * ModulusRing_Pow_m4725 (ModulusRing_t957 * __this, uint32_t ___b, BigInteger_t956 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
