#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Beacon
struct Beacon_t5;
struct Beacon_t5_marshaled;
// System.String
struct String_t;

// System.Void Beacon::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Double)
extern "C" void Beacon__ctor_m12 (Beacon_t5 * __this, String_t* ____uuid, int32_t ____major, int32_t ____minor, int32_t ____range, int32_t ____strength, double ____accuracy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Beacon::ToString()
extern "C" String_t* Beacon_ToString_m13 (Beacon_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Beacon_t5_marshal(const Beacon_t5& unmarshaled, Beacon_t5_marshaled& marshaled);
void Beacon_t5_marshal_back(const Beacon_t5_marshaled& marshaled, Beacon_t5& unmarshaled);
void Beacon_t5_marshal_cleanup(Beacon_t5_marshaled& marshaled);
