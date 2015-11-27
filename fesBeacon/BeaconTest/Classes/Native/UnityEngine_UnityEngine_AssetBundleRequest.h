﻿#pragma once
#include <stdint.h>
// UnityEngine.AssetBundle
struct AssetBundle_t49;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t50  : public AsyncOperation_t48
{
	// UnityEngine.AssetBundle UnityEngine.AssetBundleRequest::m_AssetBundle
	AssetBundle_t49 * ___m_AssetBundle_1;
	// System.String UnityEngine.AssetBundleRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.AssetBundleRequest::m_Type
	Type_t * ___m_Type_3;
};
