﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t174;
struct AnimationCurve_t174_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t321;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m871 (AnimationCurve_t174 * __this, KeyframeU5BU5D_t321* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m872 (AnimationCurve_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m873 (AnimationCurve_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m874 (AnimationCurve_t174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m875 (AnimationCurve_t174 * __this, KeyframeU5BU5D_t321* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t174_marshal(const AnimationCurve_t174& unmarshaled, AnimationCurve_t174_marshaled& marshaled);
void AnimationCurve_t174_marshal_back(const AnimationCurve_t174_marshaled& marshaled, AnimationCurve_t174& unmarshaled);
void AnimationCurve_t174_marshal_cleanup(AnimationCurve_t174_marshaled& marshaled);
