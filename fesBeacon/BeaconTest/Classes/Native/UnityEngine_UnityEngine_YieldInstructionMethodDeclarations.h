#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t57;
struct YieldInstruction_t57_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m812 (YieldInstruction_t57 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t57_marshal(const YieldInstruction_t57& unmarshaled, YieldInstruction_t57_marshaled& marshaled);
void YieldInstruction_t57_marshal_back(const YieldInstruction_t57_marshaled& marshaled, YieldInstruction_t57& unmarshaled);
void YieldInstruction_t57_marshal_cleanup(YieldInstruction_t57_marshaled& marshaled);
