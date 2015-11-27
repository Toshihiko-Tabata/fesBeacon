#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t951;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t1423;
// Mono.Math.BigInteger
struct BigInteger_t956;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
extern "C" void PrimeGeneratorBase__ctor_m4707 (PrimeGeneratorBase_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
extern "C" int32_t PrimeGeneratorBase_get_Confidence_m4708 (PrimeGeneratorBase_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
extern "C" PrimalityTest_t1423 * PrimeGeneratorBase_get_PrimalityTest_m4709 (PrimeGeneratorBase_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
extern "C" int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m4710 (PrimeGeneratorBase_t951 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32)
