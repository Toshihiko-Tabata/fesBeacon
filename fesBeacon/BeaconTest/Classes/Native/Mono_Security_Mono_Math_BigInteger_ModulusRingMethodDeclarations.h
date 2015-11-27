#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t759;
// Mono.Math.BigInteger
struct BigInteger_t758;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2844 (ModulusRing_t759 * __this, BigInteger_t758 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2845 (ModulusRing_t759 * __this, BigInteger_t758 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t758 * ModulusRing_Multiply_m2846 (ModulusRing_t759 * __this, BigInteger_t758 * ___a, BigInteger_t758 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t758 * ModulusRing_Difference_m2847 (ModulusRing_t759 * __this, BigInteger_t758 * ___a, BigInteger_t758 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t758 * ModulusRing_Pow_m2848 (ModulusRing_t759 * __this, BigInteger_t758 * ___a, BigInteger_t758 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t758 * ModulusRing_Pow_m2849 (ModulusRing_t759 * __this, uint32_t ___b, BigInteger_t758 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
