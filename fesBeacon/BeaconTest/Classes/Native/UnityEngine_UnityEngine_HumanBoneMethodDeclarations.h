#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t180;
struct HumanBone_t180_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m895 (HumanBone_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m896 (HumanBone_t180 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m897 (HumanBone_t180 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m898 (HumanBone_t180 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t180_marshal(const HumanBone_t180& unmarshaled, HumanBone_t180_marshaled& marshaled);
void HumanBone_t180_marshal_back(const HumanBone_t180_marshaled& marshaled, HumanBone_t180& unmarshaled);
void HumanBone_t180_marshal_cleanup(HumanBone_t180_marshaled& marshaled);
