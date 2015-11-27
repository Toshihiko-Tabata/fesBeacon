#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t411_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ExtensionAttribute_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t33 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t33 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m87(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m88(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t411 * tmp;
		tmp = (ExtensionAttribute_t411 *)il2cpp_codegen_object_new (ExtensionAttribute_t411_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m1532(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t47_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m128(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t47_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m129(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var;
void AssetBundle_t49_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m133(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t309 * tmp;
		tmp = (TypeInferenceRuleAttribute_t309 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1364(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var;
void AssetBundle_t49_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m134(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t309 * tmp;
		tmp = (TypeInferenceRuleAttribute_t309 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1364(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void AssetBundle_t49_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m135(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void LayerMask_t53_CustomAttributesCacheGenerator_LayerMask_LayerToName_m138(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void LayerMask_t53_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m139(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void LayerMask_t53_CustomAttributesCacheGenerator_LayerMask_t53_LayerMask_GetMask_m140_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void SystemInfo_t55_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Coroutine_t60_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m151(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t255_il2cpp_TypeInfo_var;
void ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_t61_ScriptableObject_Internal_CreateScriptableObject_m151_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t255 * tmp;
		tmp = (WritableAttribute_t255 *)il2cpp_codegen_object_new (WritableAttribute_t255_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1200(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m152(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m154(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m159(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m160(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m161(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m162(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m163(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m164(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m165(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m166(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m167(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m168(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m169(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m170(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m171(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m172(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m173(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m174(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m175(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m179(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m223(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m224(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m225(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m226(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Screen_t75_CustomAttributesCacheGenerator_Screen_get_width_m73(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Screen_t75_CustomAttributesCacheGenerator_Screen_get_height_m77(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Texture2D_t77_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m249(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t255_il2cpp_TypeInfo_var;
void Texture2D_t77_CustomAttributesCacheGenerator_Texture2D_t77_Texture2D_Internal_Create_m249_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t255 * tmp;
		tmp = (WritableAttribute_t255 *)il2cpp_codegen_object_new (WritableAttribute_t255_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1200(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUILayer_t82_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Gradient_t86_CustomAttributesCacheGenerator_Gradient_Init_m255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Gradient_t86_CustomAttributesCacheGenerator_Gradient_Cleanup_m256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m264(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_set_changed_m269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUI_t27_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void GUILayout_t91_CustomAttributesCacheGenerator_GUILayout_t91_GUILayout_Label_m83_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void GUILayout_t91_CustomAttributesCacheGenerator_GUILayout_t91_GUILayout_BeginVertical_m82_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void GUILayout_t91_CustomAttributesCacheGenerator_GUILayout_t91_GUILayout_BeginVertical_m286_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m297(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var;
void GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m300(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t414 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t414 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1536(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_t95_GUILayoutUtility_GetRect_m303_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m341(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIClip_t105_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIClip_t105_CustomAttributesCacheGenerator_GUIClip_Pop_m360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISettings_t106_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISettings_t106_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISettings_t106_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISettings_t106_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISettings_t106_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t34_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t34_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t34 * tmp;
		tmp = (ExecuteInEditMode_t34 *)il2cpp_codegen_object_new (ExecuteInEditMode_t34_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m89(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUISkin_t28_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUIContent_t29_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUIContent_t29_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void GUIContent_t29_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_Init_m427(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m429(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_Init_m436(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_Cleanup_m437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_left_m438(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_left_m439(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_right_m440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_right_m441(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_top_m442(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_top_m443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_bottom_m444(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_bottom_m445(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m446(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_vertical_m447(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Init_m452(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m453(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_name_m454(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_name_m455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m457(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m460(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m466(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m467(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m468(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m71(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Draw_m472(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t306 * tmp;
		tmp = (ExcludeFromDocsAttribute_t306 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_t26_GUIStyle_Draw_m473_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m476(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m479(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m480(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m483(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t115_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_Init_m488(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_Cleanup_m490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_get_rawType_m491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_get_type_m492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_GetTypeForControl_m493(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_get_modifiers_m498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_get_character_m499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_get_commandName_m500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_get_keyCode_m501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Event_t116_CustomAttributesCacheGenerator_Event_Use_m505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t415_il2cpp_TypeInfo_var;
void EventModifiers_t120_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t415_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(287);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t415 * tmp;
		tmp = (FlagsAttribute_t415 *)il2cpp_codegen_object_new (FlagsAttribute_t415_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m1537(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void Vector2_t15_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void Vector3_t121_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void Color_t84_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo_var;
void Color32_t122_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(289);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t246 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t246 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m1191(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void Quaternion_t123_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m628(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void Vector4_t126_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var;
void Resources_t134_CustomAttributesCacheGenerator_Resources_Load_m667(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(280);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t309 * tmp;
		tmp = (TypeInferenceRuleAttribute_t309 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t309_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m1364(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t135_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m675(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void WWW_t139_CustomAttributesCacheGenerator_WWW_DestroyWWW_m691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void WWW_t139_CustomAttributesCacheGenerator_WWW_InitWWW_m692(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void WWW_t139_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m694(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void WWW_t139_CustomAttributesCacheGenerator_WWW_get_bytes_m698(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void WWW_t139_CustomAttributesCacheGenerator_WWW_get_error_m699(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void WWW_t139_CustomAttributesCacheGenerator_WWW_get_isDone_m700(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var;
void WWWForm_t142_CustomAttributesCacheGenerator_WWWForm_AddField_m704(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t306 * tmp;
		tmp = (ExcludeFromDocsAttribute_t306 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void WWWForm_t142_CustomAttributesCacheGenerator_WWWForm_t142_WWWForm_AddField_m705_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void WWWTranscoder_t143_CustomAttributesCacheGenerator_WWWTranscoder_t143_WWWTranscoder_QPEncode_m712_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void WWWTranscoder_t143_CustomAttributesCacheGenerator_WWWTranscoder_t143_WWWTranscoder_SevenBitClean_m715_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void CacheIndex_t144_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void UnityString_t145_CustomAttributesCacheGenerator_UnityString_t145_UnityString_Format_m717_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void AsyncOperation_t48_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Application_t147_CustomAttributesCacheGenerator_Application_get_isEditor_m50(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_cullingMask_m733(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_eventMask_m734(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_targetTexture_m737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_clearFlags_m738(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m741(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_GetAllCameras_m742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m749(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var;
void CameraCallback_t150_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t419 * tmp;
		tmp = (EditorBrowsableAttribute_t419 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1542(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Debug_t151_CustomAttributesCacheGenerator_Debug_Internal_Log_m750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t255_il2cpp_TypeInfo_var;
void Debug_t151_CustomAttributesCacheGenerator_Debug_t151_Debug_Internal_Log_m750_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t255_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(282);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t255 * tmp;
		tmp = (WritableAttribute_t255 *)il2cpp_codegen_object_new (WritableAttribute_t255_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m1200(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m779(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m780(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m781(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_SetParamsImpl_m782(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m783(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Display_t154_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m784(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void MonoBehaviour_t2_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m786(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Input_t155_CustomAttributesCacheGenerator_Input_GetMouseButton_m788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Input_t155_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Input_t155_CustomAttributesCacheGenerator_Input_get_mousePosition_m790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Object_t51_CustomAttributesCacheGenerator_Object_get_name_m792(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Object_t51_CustomAttributesCacheGenerator_Object_ToString_m93(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Component_t148_CustomAttributesCacheGenerator_Component_get_gameObject_m801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Component_t148_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var;
void Component_t148_CustomAttributesCacheGenerator_Component_GetComponent_m1543(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t414 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t414 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1536(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void GameObject_t156_CustomAttributesCacheGenerator_GameObject_SendMessage_m803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void GameObject_t156_CustomAttributesCacheGenerator_GameObject_t156_GameObject_SendMessage_m803_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void GameObject_t156_CustomAttributesCacheGenerator_GameObject_t156_GameObject_SendMessage_m803_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Transform_t132_CustomAttributesCacheGenerator_Transform_get_childCount_m807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Transform_t132_CustomAttributesCacheGenerator_Transform_GetChild_m809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Random_t158_CustomAttributesCacheGenerator_Random_RandomRangeInt_m811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void PlayerPrefs_t159_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t305_il2cpp_TypeInfo_var;
void PlayerPrefs_t159_CustomAttributesCacheGenerator_PlayerPrefs_t159_PlayerPrefs_GetString_m813_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t305 * tmp;
		tmp = (DefaultValueAttribute_t305 *)il2cpp_codegen_object_new (DefaultValueAttribute_t305_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1358(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var;
void PlayerPrefs_t159_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(286);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t306 * tmp;
		tmp = (ExcludeFromDocsAttribute_t306 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t306_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m1362(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void AnimationEvent_t170_CustomAttributesCacheGenerator_AnimationEvent_t170____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void AnimationCurve_t174_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void AnimationCurve_t174_CustomAttributesCacheGenerator_AnimationCurve_t174_AnimationCurve__ctor_m871_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void AnimationCurve_t174_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void AnimationCurve_t174_CustomAttributesCacheGenerator_AnimationCurve_Init_m875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t171_CustomAttributesCacheGenerator_AnimatorStateInfo_t171____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Animator_t177_CustomAttributesCacheGenerator_Animator_StringToHash_m894(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void CharacterInfo_t184_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void CharacterInfo_t184_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void CharacterInfo_t184_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t417_il2cpp_TypeInfo_var;
void CharacterInfo_t184_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t417_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(290);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t417 * tmp;
		tmp = (ObsoleteAttribute_t417 *)il2cpp_codegen_object_new (ObsoleteAttribute_t417_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1539(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void Font_t108_CustomAttributesCacheGenerator_Font_get_dynamic_m920(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t185_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t419 * tmp;
		tmp = (EditorBrowsableAttribute_t419 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1542(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_Init_m924(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m925(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m929(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m930(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m931(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m932(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m933(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m935(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m936(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m937(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t245_il2cpp_TypeInfo_var;
void TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m940(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(279);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t245 * tmp;
		tmp = (WrapperlessIcall_t245 *)il2cpp_codegen_object_new (WrapperlessIcall_t245_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m1190(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Request_t197_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Request_t197_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Request_t197_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Request_t197_CustomAttributesCacheGenerator_Request_get_sourceId_m961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Request_t197_CustomAttributesCacheGenerator_Request_get_appId_m962(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Request_t197_CustomAttributesCacheGenerator_Request_get_domain_m963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Response_t199_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Response_t199_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Response_t199_CustomAttributesCacheGenerator_Response_get_success_m972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Response_t199_CustomAttributesCacheGenerator_Response_set_success_m973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Response_t199_CustomAttributesCacheGenerator_Response_get_extendedInfo_m974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Response_t199_CustomAttributesCacheGenerator_Response_set_extendedInfo_m975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m983(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m984(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m985(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m987(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m988(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m991(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m992(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m993(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m994(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m995(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m996(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m997(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m998(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m999(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m1000(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1001(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1002(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchRequest_t204_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchRequest_t204_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1006(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1007(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1008(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1009(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1012(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1013(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1014(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1015(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1016(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1017(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1018(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1019(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1020(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1021(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1022(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1023(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t206_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t206_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1027(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t206_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1028(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DropConnectionRequest_t207_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DropConnectionRequest_t207_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1037(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1038(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1039(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1040(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1041(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1042(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1043(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1051(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1052(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1056(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_name_m1058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_name_m1059(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1060(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1061(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1065(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1066(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchResponse_t213_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchResponse_t213_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1074(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ListMatchResponse_t213_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1075(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t421_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t214_il2cpp_TypeInfo_var;
void AppID_t214_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		AppID_t214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(160);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t421 * tmp;
		tmp = (DefaultValueAttribute_t421 *)il2cpp_codegen_object_new (DefaultValueAttribute_t421_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1546(tmp, Box(AppID_t214_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t421_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t215_il2cpp_TypeInfo_var;
void SourceID_t215_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		SourceID_t215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(159);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t421 * tmp;
		tmp = (DefaultValueAttribute_t421 *)il2cpp_codegen_object_new (DefaultValueAttribute_t421_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1546(tmp, Box(SourceID_t215_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t421_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t216_il2cpp_TypeInfo_var;
void NetworkID_t216_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		NetworkID_t216_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(165);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t421 * tmp;
		tmp = (DefaultValueAttribute_t421 *)il2cpp_codegen_object_new (DefaultValueAttribute_t421_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1546(tmp, Box(NetworkID_t216_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t421_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t217_il2cpp_TypeInfo_var;
void NodeID_t217_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(292);
		NodeID_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t421 * tmp;
		tmp = (DefaultValueAttribute_t421 *)il2cpp_codegen_object_new (DefaultValueAttribute_t421_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m1546(tmp, Box(NodeID_t217_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var;
void NetworkMatch_t223_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t422 * tmp;
		tmp = (DebuggerHiddenAttribute_t422 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1548(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t422 * tmp;
		tmp = (DebuggerHiddenAttribute_t422 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1548(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t422 * tmp;
		tmp = (DebuggerHiddenAttribute_t422 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1548(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(293);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t422 * tmp;
		tmp = (DebuggerHiddenAttribute_t422 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t422_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1548(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var;
void JsonArray_t224_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t425 * tmp;
		tmp = (GeneratedCodeAttribute_t425 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1558(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t419 * tmp;
		tmp = (EditorBrowsableAttribute_t419 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1542(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var;
void JsonObject_t227_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t425 * tmp;
		tmp = (GeneratedCodeAttribute_t425 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1558(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t419 * tmp;
		tmp = (EditorBrowsableAttribute_t419 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1542(tmp, 1, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var;
void SimpleJson_t230_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t425 * tmp;
		tmp = (GeneratedCodeAttribute_t425 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1558(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t426_il2cpp_TypeInfo_var;
void SimpleJson_t230_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1119(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t426 * tmp;
		tmp = (SuppressMessageAttribute_t426 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t426_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1559(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1560(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t426_il2cpp_TypeInfo_var;
void SimpleJson_t230_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1131(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t426 * tmp;
		tmp = (SuppressMessageAttribute_t426 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t426_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1559(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var;
void SimpleJson_t230_CustomAttributesCacheGenerator_SimpleJson_t230____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(291);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t419 * tmp;
		tmp = (EditorBrowsableAttribute_t419 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t419_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m1542(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t228_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t425 * tmp;
		tmp = (GeneratedCodeAttribute_t425 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1558(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t426_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t228_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t426 * tmp;
		tmp = (SuppressMessageAttribute_t426 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t426_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1559(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1560(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t229_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t425 * tmp;
		tmp = (GeneratedCodeAttribute_t425 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1558(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t426_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t229_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t426 * tmp;
		tmp = (SuppressMessageAttribute_t426 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t426_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1559(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1560(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t426_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t229_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(295);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t426 * tmp;
		tmp = (SuppressMessageAttribute_t426 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t426_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m1559(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m1560(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var;
void ReflectionUtils_t244_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(294);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t425 * tmp;
		tmp = (GeneratedCodeAttribute_t425 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t425_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m1558(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void ReflectionUtils_t244_CustomAttributesCacheGenerator_ReflectionUtils_t244_ReflectionUtils_GetConstructorInfo_m1174_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void ReflectionUtils_t244_CustomAttributesCacheGenerator_ReflectionUtils_t244_ReflectionUtils_GetContructor_m1179_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void ReflectionUtils_t244_CustomAttributesCacheGenerator_ReflectionUtils_t244_ReflectionUtils_GetConstructorByReflection_m1181_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t427_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t416_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(288);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t416 * tmp;
		tmp = (DefaultMemberAttribute_t416 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t416_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1538(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void ConstructorDelegate_t237_CustomAttributesCacheGenerator_ConstructorDelegate_t237_ConstructorDelegate_Invoke_m1159_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t412_il2cpp_TypeInfo_var;
void ConstructorDelegate_t237_CustomAttributesCacheGenerator_ConstructorDelegate_t237_ConstructorDelegate_BeginInvoke_m1160_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(281);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t412 * tmp;
		tmp = (ParamArrayAttribute_t412 *)il2cpp_codegen_object_new (ParamArrayAttribute_t412_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m1533(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t246_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t251_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m1586(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void RequireComponent_t252_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1587(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void WritableAttribute_t255_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1587(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t256_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var;
void GUIStateObjects_t267_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m1215(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t414 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t414 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1536(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Achievement_t270_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Achievement_t270_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Achievement_t270_CustomAttributesCacheGenerator_Achievement_get_id_m1235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Achievement_t270_CustomAttributesCacheGenerator_Achievement_set_id_m1236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Achievement_t270_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Achievement_t270_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void AchievementDescription_t271_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void AchievementDescription_t271_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void AchievementDescription_t271_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Score_t272_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Score_t272_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Score_t272_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Score_t272_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Score_t272_CustomAttributesCacheGenerator_Score_get_value_m1257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Score_t272_CustomAttributesCacheGenerator_Score_set_value_m1258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_id_m1266(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_id_m1267(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1269(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_range_m1270(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_range_m1271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(283);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t413 * tmp;
		tmp = (CompilerGeneratedAttribute_t413 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1535(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var;
void StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1312(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t414 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t414 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1536(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var;
void StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t414 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t414 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1536(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var;
void StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1317(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(284);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t414 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t414 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t414_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m1536(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t287_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1587(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var;
void ArgumentCache_t294_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t307 * tmp;
		tmp = (FormerlySerializedAsAttribute_t307 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1363(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var;
void PersistentCall_t297_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t307 * tmp;
		tmp = (FormerlySerializedAsAttribute_t307 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1363(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void PersistentCall_t297_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t307 * tmp;
		tmp = (FormerlySerializedAsAttribute_t307 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1363(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t307 * tmp;
		tmp = (FormerlySerializedAsAttribute_t307 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1363(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void PersistentCallGroup_t299_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t307 * tmp;
		tmp = (FormerlySerializedAsAttribute_t307 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1363(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void UnityEventBase_t302_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t307 * tmp;
		tmp = (FormerlySerializedAsAttribute_t307 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t307_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m1363(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t137_il2cpp_TypeInfo_var;
void UnityEventBase_t302_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(285);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t137 * tmp;
		tmp = (SerializeField_t137 *)il2cpp_codegen_object_new (SerializeField_t137_il2cpp_TypeInfo_var);
		SerializeField__ctor_m669(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t253_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t304_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t253_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t253 * tmp;
		tmp = (AddComponentMenu_t253 *)il2cpp_codegen_object_new (AddComponentMenu_t253_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1196(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t305_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t306_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t307_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m1587(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m1586(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t429_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t309_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(296);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t429 * tmp;
		tmp = (AttributeUsageAttribute_t429 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t429_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m1585(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[470] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t47_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m128,
	AssetBundleCreateRequest_t47_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m129,
	AssetBundle_t49_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m133,
	AssetBundle_t49_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m134,
	AssetBundle_t49_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m135,
	LayerMask_t53_CustomAttributesCacheGenerator_LayerMask_LayerToName_m138,
	LayerMask_t53_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m139,
	LayerMask_t53_CustomAttributesCacheGenerator_LayerMask_t53_LayerMask_GetMask_m140_Arg0_ParameterInfo,
	SystemInfo_t55_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m143,
	Coroutine_t60_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m148,
	ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m151,
	ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_t61_ScriptableObject_Internal_CreateScriptableObject_m151_Arg0_ParameterInfo,
	ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m152,
	ScriptableObject_t61_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m154,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m159,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m160,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m161,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m162,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m163,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m164,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m165,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m166,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m167,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m168,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m169,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m170,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m171,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m172,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m173,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m174,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m175,
	GameCenterPlatform_t71_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m179,
	GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m223,
	GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m224,
	GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m225,
	GcLeaderboard_t73_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m226,
	Screen_t75_CustomAttributesCacheGenerator_Screen_get_width_m73,
	Screen_t75_CustomAttributesCacheGenerator_Screen_get_height_m77,
	Texture2D_t77_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m249,
	Texture2D_t77_CustomAttributesCacheGenerator_Texture2D_t77_Texture2D_Internal_Create_m249_Arg0_ParameterInfo,
	GUILayer_t82_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m251,
	Gradient_t86_CustomAttributesCacheGenerator_Gradient_Init_m255,
	Gradient_t86_CustomAttributesCacheGenerator_Gradient_Cleanup_m256,
	GUI_t27_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t27_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t27_CustomAttributesCacheGenerator_GUI_get_nextScrollStepTime_m264,
	GUI_t27_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m265,
	GUI_t27_CustomAttributesCacheGenerator_GUI_get_scrollTroughSide_m266,
	GUI_t27_CustomAttributesCacheGenerator_GUI_set_scrollTroughSide_m267,
	GUI_t27_CustomAttributesCacheGenerator_GUI_set_changed_m269,
	GUI_t27_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m272,
	GUI_t27_CustomAttributesCacheGenerator_GUI_get_usePageScrollbars_m276,
	GUI_t27_CustomAttributesCacheGenerator_GUI_InternalRepaintEditorWindow_m278,
	GUILayout_t91_CustomAttributesCacheGenerator_GUILayout_t91_GUILayout_Label_m83_Arg1_ParameterInfo,
	GUILayout_t91_CustomAttributesCacheGenerator_GUILayout_t91_GUILayout_BeginVertical_m82_Arg1_ParameterInfo,
	GUILayout_t91_CustomAttributesCacheGenerator_GUILayout_t91_GUILayout_BeginVertical_m286_Arg2_ParameterInfo,
	GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m297,
	GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m299,
	GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m300,
	GUILayoutUtility_t95_CustomAttributesCacheGenerator_GUILayoutUtility_t95_GUILayoutUtility_GetRect_m303_Arg2_ParameterInfo,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_GetControlID_m341,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m344,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_GetHotControl_m348,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_SetHotControl_m349,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m351,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m353,
	GUIUtility_t104_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m357,
	GUIClip_t105_CustomAttributesCacheGenerator_GUIClip_INTERNAL_CALL_Push_m359,
	GUIClip_t105_CustomAttributesCacheGenerator_GUIClip_Pop_m360,
	GUISettings_t106_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t106_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t106_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t106_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t106_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t28_CustomAttributesCacheGenerator,
	GUISkin_t28_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t28_CustomAttributesCacheGenerator_m_box,
	GUISkin_t28_CustomAttributesCacheGenerator_m_button,
	GUISkin_t28_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t28_CustomAttributesCacheGenerator_m_label,
	GUISkin_t28_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t28_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t28_CustomAttributesCacheGenerator_m_window,
	GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t28_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t28_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t28_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t28_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t28_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t28_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t28_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t29_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t29_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t29_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_Init_m427,
	GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m428,
	GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m429,
	GUIStyleState_t111_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m430,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_Init_m436,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_Cleanup_m437,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_left_m438,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_left_m439,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_right_m440,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_right_m441,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_top_m442,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_top_m443,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_bottom_m444,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_set_bottom_m445,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m446,
	RectOffset_t98_CustomAttributesCacheGenerator_RectOffset_get_vertical_m447,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Init_m452,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m453,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_name_m454,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_name_m455,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m457,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m460,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m461,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m462,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m463,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m464,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m465,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m466,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m467,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m468,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_set_fontSize_m71,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_Draw_m470,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Draw_m472,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_t26_GUIStyle_Draw_m473_Arg3_ParameterInfo,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_INTERNAL_CALL_Internal_Draw2_m475,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m476,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m479,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m480,
	GUIStyle_t26_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m483,
	TouchScreenKeyboard_t115_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m485,
	Event_t116_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t116_CustomAttributesCacheGenerator_Event_Init_m488,
	Event_t116_CustomAttributesCacheGenerator_Event_Cleanup_m490,
	Event_t116_CustomAttributesCacheGenerator_Event_get_rawType_m491,
	Event_t116_CustomAttributesCacheGenerator_Event_get_type_m492,
	Event_t116_CustomAttributesCacheGenerator_Event_GetTypeForControl_m493,
	Event_t116_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m495,
	Event_t116_CustomAttributesCacheGenerator_Event_Internal_GetMouseDelta_m497,
	Event_t116_CustomAttributesCacheGenerator_Event_get_modifiers_m498,
	Event_t116_CustomAttributesCacheGenerator_Event_get_character_m499,
	Event_t116_CustomAttributesCacheGenerator_Event_get_commandName_m500,
	Event_t116_CustomAttributesCacheGenerator_Event_get_keyCode_m501,
	Event_t116_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m503,
	Event_t116_CustomAttributesCacheGenerator_Event_Use_m505,
	EventModifiers_t120_CustomAttributesCacheGenerator,
	Vector2_t15_CustomAttributesCacheGenerator,
	Vector3_t121_CustomAttributesCacheGenerator,
	Color_t84_CustomAttributesCacheGenerator,
	Color32_t122_CustomAttributesCacheGenerator,
	Quaternion_t123_CustomAttributesCacheGenerator,
	Matrix4x4_t124_CustomAttributesCacheGenerator,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m573,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m575,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m577,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m580,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m593,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m596,
	Matrix4x4_t124_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m597,
	Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m622,
	Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m625,
	Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m628,
	Bounds_t125_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m632,
	Vector4_t126_CustomAttributesCacheGenerator,
	Resources_t134_CustomAttributesCacheGenerator_Resources_Load_m667,
	SerializePrivateVariables_t135_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m672,
	SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m675,
	SphericalHarmonicsL2_t138_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m678,
	WWW_t139_CustomAttributesCacheGenerator_WWW_DestroyWWW_m691,
	WWW_t139_CustomAttributesCacheGenerator_WWW_InitWWW_m692,
	WWW_t139_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m694,
	WWW_t139_CustomAttributesCacheGenerator_WWW_get_bytes_m698,
	WWW_t139_CustomAttributesCacheGenerator_WWW_get_error_m699,
	WWW_t139_CustomAttributesCacheGenerator_WWW_get_isDone_m700,
	WWWForm_t142_CustomAttributesCacheGenerator_WWWForm_AddField_m704,
	WWWForm_t142_CustomAttributesCacheGenerator_WWWForm_t142_WWWForm_AddField_m705_Arg2_ParameterInfo,
	WWWTranscoder_t143_CustomAttributesCacheGenerator_WWWTranscoder_t143_WWWTranscoder_QPEncode_m712_Arg1_ParameterInfo,
	WWWTranscoder_t143_CustomAttributesCacheGenerator_WWWTranscoder_t143_WWWTranscoder_SevenBitClean_m715_Arg1_ParameterInfo,
	CacheIndex_t144_CustomAttributesCacheGenerator,
	UnityString_t145_CustomAttributesCacheGenerator_UnityString_t145_UnityString_Format_m717_Arg1_ParameterInfo,
	AsyncOperation_t48_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m719,
	Application_t147_CustomAttributesCacheGenerator_Application_get_isEditor_m50,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m731,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m732,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_cullingMask_m733,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_eventMask_m734,
	Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m735,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_targetTexture_m737,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_clearFlags_m738,
	Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m740,
	Camera_t149_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m741,
	Camera_t149_CustomAttributesCacheGenerator_Camera_GetAllCameras_m742,
	Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m747,
	Camera_t149_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m749,
	CameraCallback_t150_CustomAttributesCacheGenerator,
	Debug_t151_CustomAttributesCacheGenerator_Debug_Internal_Log_m750,
	Debug_t151_CustomAttributesCacheGenerator_Debug_t151_Debug_Internal_Log_m750_Arg2_ParameterInfo,
	Display_t154_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m777,
	Display_t154_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m778,
	Display_t154_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m779,
	Display_t154_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m780,
	Display_t154_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m781,
	Display_t154_CustomAttributesCacheGenerator_Display_SetParamsImpl_m782,
	Display_t154_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m783,
	Display_t154_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m784,
	MonoBehaviour_t2_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m786,
	Input_t155_CustomAttributesCacheGenerator_Input_GetMouseButton_m788,
	Input_t155_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m789,
	Input_t155_CustomAttributesCacheGenerator_Input_get_mousePosition_m790,
	Object_t51_CustomAttributesCacheGenerator_Object_get_name_m792,
	Object_t51_CustomAttributesCacheGenerator_Object_ToString_m93,
	Component_t148_CustomAttributesCacheGenerator_Component_get_gameObject_m801,
	Component_t148_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m802,
	Component_t148_CustomAttributesCacheGenerator_Component_GetComponent_m1543,
	GameObject_t156_CustomAttributesCacheGenerator_GameObject_SendMessage_m803,
	GameObject_t156_CustomAttributesCacheGenerator_GameObject_t156_GameObject_SendMessage_m803_Arg1_ParameterInfo,
	GameObject_t156_CustomAttributesCacheGenerator_GameObject_t156_GameObject_SendMessage_m803_Arg2_ParameterInfo,
	Transform_t132_CustomAttributesCacheGenerator_Transform_get_childCount_m807,
	Transform_t132_CustomAttributesCacheGenerator_Transform_GetChild_m809,
	Random_t158_CustomAttributesCacheGenerator_Random_RandomRangeInt_m811,
	PlayerPrefs_t159_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m813,
	PlayerPrefs_t159_CustomAttributesCacheGenerator_PlayerPrefs_t159_PlayerPrefs_GetString_m813_Arg1_ParameterInfo,
	PlayerPrefs_t159_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m814,
	AnimationEvent_t170_CustomAttributesCacheGenerator_AnimationEvent_t170____data_PropertyInfo,
	AnimationCurve_t174_CustomAttributesCacheGenerator,
	AnimationCurve_t174_CustomAttributesCacheGenerator_AnimationCurve_t174_AnimationCurve__ctor_m871_Arg0_ParameterInfo,
	AnimationCurve_t174_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m873,
	AnimationCurve_t174_CustomAttributesCacheGenerator_AnimationCurve_Init_m875,
	AnimatorStateInfo_t171_CustomAttributesCacheGenerator_AnimatorStateInfo_t171____nameHash_PropertyInfo,
	Animator_t177_CustomAttributesCacheGenerator_Animator_StringToHash_m894,
	CharacterInfo_t184_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t184_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t184_CustomAttributesCacheGenerator_width,
	CharacterInfo_t184_CustomAttributesCacheGenerator_flipped,
	Font_t108_CustomAttributesCacheGenerator_Font_get_dynamic_m920,
	FontTextureRebuildCallback_t185_CustomAttributesCacheGenerator,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_Init_m924,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m925,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m929,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m930,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m931,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m932,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m933,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m935,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m936,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m937,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m938,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m939,
	TextGenerator_t192_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m940,
	Request_t197_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t197_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t197_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t197_CustomAttributesCacheGenerator_Request_get_sourceId_m961,
	Request_t197_CustomAttributesCacheGenerator_Request_get_appId_m962,
	Request_t197_CustomAttributesCacheGenerator_Request_get_domain_m963,
	Response_t199_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t199_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t199_CustomAttributesCacheGenerator_Response_get_success_m972,
	Response_t199_CustomAttributesCacheGenerator_Response_set_success_m973,
	Response_t199_CustomAttributesCacheGenerator_Response_get_extendedInfo_m974,
	Response_t199_CustomAttributesCacheGenerator_Response_set_extendedInfo_m975,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m980,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m981,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m982,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m983,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m984,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m985,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m986,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m987,
	CreateMatchRequest_t202_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m988,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m991,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m992,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m993,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m994,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m995,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m996,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m997,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m998,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m999,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m1000,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m1001,
	CreateMatchResponse_t203_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m1002,
	JoinMatchRequest_t204_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t204_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m1006,
	JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m1007,
	JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m1008,
	JoinMatchRequest_t204_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m1009,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m1012,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m1013,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m1014,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m1015,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m1016,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m1017,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m1018,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m1019,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m1020,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m1021,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m1022,
	JoinMatchResponse_t205_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m1023,
	DestroyMatchRequest_t206_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t206_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m1027,
	DestroyMatchRequest_t206_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m1028,
	DropConnectionRequest_t207_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t207_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m1031,
	DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m1032,
	DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m1033,
	DropConnectionRequest_t207_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m1034,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m1037,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m1038,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m1039,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m1040,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m1041,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m1042,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m1043,
	ListMatchRequest_t208_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m1047,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m1048,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m1049,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m1050,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m1051,
	MatchDirectConnectInfo_t209_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m1052,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m1056,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m1057,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_name_m1058,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_name_m1059,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m1060,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m1061,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m1062,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m1063,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m1064,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m1065,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m1066,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m1067,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m1068,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m1069,
	MatchDesc_t211_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m1070,
	ListMatchResponse_t213_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t213_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m1074,
	ListMatchResponse_t213_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m1075,
	AppID_t214_CustomAttributesCacheGenerator,
	SourceID_t215_CustomAttributesCacheGenerator,
	NetworkID_t216_CustomAttributesCacheGenerator,
	NodeID_t217_CustomAttributesCacheGenerator,
	NetworkMatch_t223_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m1547,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t424_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1557,
	JsonArray_t224_CustomAttributesCacheGenerator,
	JsonObject_t227_CustomAttributesCacheGenerator,
	SimpleJson_t230_CustomAttributesCacheGenerator,
	SimpleJson_t230_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m1119,
	SimpleJson_t230_CustomAttributesCacheGenerator_SimpleJson_NextToken_m1131,
	SimpleJson_t230_CustomAttributesCacheGenerator_SimpleJson_t230____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t228_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t228_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1561,
	PocoJsonSerializerStrategy_t229_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t229_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148,
	PocoJsonSerializerStrategy_t229_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149,
	ReflectionUtils_t244_CustomAttributesCacheGenerator,
	ReflectionUtils_t244_CustomAttributesCacheGenerator_ReflectionUtils_t244_ReflectionUtils_GetConstructorInfo_m1174_Arg1_ParameterInfo,
	ReflectionUtils_t244_CustomAttributesCacheGenerator_ReflectionUtils_t244_ReflectionUtils_GetContructor_m1179_Arg1_ParameterInfo,
	ReflectionUtils_t244_CustomAttributesCacheGenerator_ReflectionUtils_t244_ReflectionUtils_GetConstructorByReflection_m1181_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t427_CustomAttributesCacheGenerator,
	ConstructorDelegate_t237_CustomAttributesCacheGenerator_ConstructorDelegate_t237_ConstructorDelegate_Invoke_m1159_Arg0_ParameterInfo,
	ConstructorDelegate_t237_CustomAttributesCacheGenerator_ConstructorDelegate_t237_ConstructorDelegate_BeginInvoke_m1160_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t246_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t251_CustomAttributesCacheGenerator,
	RequireComponent_t252_CustomAttributesCacheGenerator,
	WritableAttribute_t255_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t256_CustomAttributesCacheGenerator,
	GUIStateObjects_t267_CustomAttributesCacheGenerator_GUIStateObjects_GetStateObject_m1215,
	Achievement_t270_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t270_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t270_CustomAttributesCacheGenerator_Achievement_get_id_m1235,
	Achievement_t270_CustomAttributesCacheGenerator_Achievement_set_id_m1236,
	Achievement_t270_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m1237,
	Achievement_t270_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m1238,
	AchievementDescription_t271_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t271_CustomAttributesCacheGenerator_AchievementDescription_get_id_m1245,
	AchievementDescription_t271_CustomAttributesCacheGenerator_AchievementDescription_set_id_m1246,
	Score_t272_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t272_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t272_CustomAttributesCacheGenerator_Score_get_leaderboardID_m1255,
	Score_t272_CustomAttributesCacheGenerator_Score_set_leaderboardID_m1256,
	Score_t272_CustomAttributesCacheGenerator_Score_get_value_m1257,
	Score_t272_CustomAttributesCacheGenerator_Score_set_value_m1258,
	Leaderboard_t72_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t72_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t72_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t72_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_id_m1266,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_id_m1267,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m1268,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m1269,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_range_m1270,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_range_m1271,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m1272,
	Leaderboard_t72_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m1273,
	StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m1312,
	StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m1315,
	StackTraceUtility_t285_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m1317,
	SharedBetweenAnimatorsAttribute_t287_CustomAttributesCacheGenerator,
	ArgumentCache_t294_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t297_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t297_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t299_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t302_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t302_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t304_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t305_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t306_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t307_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t309_CustomAttributesCacheGenerator,
};
