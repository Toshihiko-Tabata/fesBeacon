#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t942;
struct PreviousInfo_t942_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m4635 (PreviousInfo_t942 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t942_marshal(const PreviousInfo_t942& unmarshaled, PreviousInfo_t942_marshaled& marshaled);
void PreviousInfo_t942_marshal_back(const PreviousInfo_t942_marshaled& marshaled, PreviousInfo_t942& unmarshaled);
void PreviousInfo_t942_marshal_cleanup(PreviousInfo_t942_marshaled& marshaled);
