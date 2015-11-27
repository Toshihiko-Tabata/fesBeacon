#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t2065;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m10279_gshared (DefaultComparer_t2065 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10279(__this, method) (( void (*) (DefaultComparer_t2065 *, const MethodInfo*))DefaultComparer__ctor_m10279_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10280_gshared (DefaultComparer_t2065 * __this, UIVertex_t196  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10280(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2065 *, UIVertex_t196 , const MethodInfo*))DefaultComparer_GetHashCode_m10280_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10281_gshared (DefaultComparer_t2065 * __this, UIVertex_t196  ___x, UIVertex_t196  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10281(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2065 *, UIVertex_t196 , UIVertex_t196 , const MethodInfo*))DefaultComparer_Equals_m10281_gshared)(__this, ___x, ___y, method)
