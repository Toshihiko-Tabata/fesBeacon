#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t260;
struct GcScoreData_t260_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t272;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t272 * GcScoreData_ToScore_m1206 (GcScoreData_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t260_marshal(const GcScoreData_t260& unmarshaled, GcScoreData_t260_marshaled& marshaled);
void GcScoreData_t260_marshal_back(const GcScoreData_t260_marshaled& marshaled, GcScoreData_t260& unmarshaled);
void GcScoreData_t260_marshal_cleanup(GcScoreData_t260_marshaled& marshaled);
