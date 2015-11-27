#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t259;
struct GcAchievementData_t259_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t270;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t270 * GcAchievementData_ToAchievement_m1205 (GcAchievementData_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t259_marshal(const GcAchievementData_t259& unmarshaled, GcAchievementData_t259_marshaled& marshaled);
void GcAchievementData_t259_marshal_back(const GcAchievementData_t259_marshaled& marshaled, GcAchievementData_t259& unmarshaled);
void GcAchievementData_t259_marshal_cleanup(GcAchievementData_t259_marshaled& marshaled);
