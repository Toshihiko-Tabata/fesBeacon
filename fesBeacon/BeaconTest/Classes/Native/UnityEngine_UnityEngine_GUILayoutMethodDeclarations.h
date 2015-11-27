#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t91;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t31;
// UnityEngine.GUIContent
struct GUIContent_t29;
// UnityEngine.GUIStyle
struct GUIStyle_t26;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t32;

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m83 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t31* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m285 (Object_t * __this /* static, unused */, GUIContent_t29 * ___content, GUIStyle_t26 * ___style, GUILayoutOptionU5BU5D_t31* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m82 (Object_t * __this /* static, unused */, GUIStyle_t26 * ___style, GUILayoutOptionU5BU5D_t31* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m286 (Object_t * __this /* static, unused */, GUIContent_t29 * ___content, GUIStyle_t26 * ___style, GUILayoutOptionU5BU5D_t31* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" void GUILayout_EndVertical_m85 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t32 * GUILayout_Width_m80 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t32 * GUILayout_Height_m81 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
