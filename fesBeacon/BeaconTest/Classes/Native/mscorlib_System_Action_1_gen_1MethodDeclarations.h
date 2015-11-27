﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t64;
// System.Object
struct Object_t;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t352;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_6MethodDeclarations.h"
#define Action_1__ctor_m9234(__this, ___object, ___method, method) (( void (*) (Action_1_t64 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m9222_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(T)
#define Action_1_Invoke_m9235(__this, ___obj, method) (( void (*) (Action_1_t64 *, IAchievementU5BU5D_t352*, const MethodInfo*))Action_1_Invoke_m9224_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m9236(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t64 *, IAchievementU5BU5D_t352*, AsyncCallback_t8 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m9226_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m9237(__this, ___result, method) (( void (*) (Action_1_t64 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m9228_gshared)(__this, ___result, method)