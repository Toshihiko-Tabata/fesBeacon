﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t718_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t722_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t719_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t724_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t720_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t723_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var;
extern TypeInfo* InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t728_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t727_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t714_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t718_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1141);
		AssemblyDescriptionAttribute_t722_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1145);
		AssemblyProductAttribute_t719_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1142);
		AssemblyTitleAttribute_t724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1147);
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		AssemblyCompanyAttribute_t720_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1143);
		ComVisibleAttribute_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1146);
		RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(277);
		AssemblyKeyFileAttribute_t728_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		AssemblyDelaySignAttribute_t727_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1150);
		NeutralResourcesLanguageAttribute_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1137);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 12;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t718 * tmp;
		tmp = (AssemblyCopyrightAttribute_t718 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t718_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m2725(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t722 * tmp;
		tmp = (AssemblyDescriptionAttribute_t722 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t722_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m2729(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t719 * tmp;
		tmp = (AssemblyProductAttribute_t719 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t719_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m2726(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t724 * tmp;
		tmp = (AssemblyTitleAttribute_t724 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t724_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m2731(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t720 * tmp;
		tmp = (AssemblyCompanyAttribute_t720 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t720_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m2727(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t723 * tmp;
		tmp = (ComVisibleAttribute_t723 *)il2cpp_codegen_object_new (ComVisibleAttribute_t723_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m2730(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t33 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t33 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t33_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m87(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m88(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t410 * tmp;
		tmp = (InternalsVisibleToAttribute_t410 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t410_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m1531(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t728 * tmp;
		tmp = (AssemblyKeyFileAttribute_t728 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t728_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m2735(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t727 * tmp;
		tmp = (AssemblyDelaySignAttribute_t727 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t727_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m2734(tmp, true, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t714 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t714 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t714_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m2721(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger__ctor_m2865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger__ctor_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger__ctor_m2869(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_SetBit_m2876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_SetBit_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_ToString_m2880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_ToString_m2881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2891(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2895(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2901(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2902(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t715_il2cpp_TypeInfo_var;
void ModulusRing_t759_CustomAttributesCacheGenerator_ModulusRing_Pow_m2849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t715 * tmp;
		tmp = (CLSCompliantAttribute_t715 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t715_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m2722(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void ASN1_t678_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void X509Certificate_t563_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t563_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t563_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void X509CertificateCollection_t703_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t415_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t790_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void X509Crl_t680_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void X509Crl_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t706_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t793_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t415_il2cpp_TypeInfo_var;
void KeyUsages_t795_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t415_il2cpp_TypeInfo_var;
void CertTypes_t797_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t416_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t810_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void HttpsClientStream_t828_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t828_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t828_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3329(CustomAttributesCache* cache)
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
void HttpsClientStream_t828_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3330(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t834_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t836_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t415_il2cpp_TypeInfo_var;
void SecurityProtocolType_t839_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t413_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t874_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[39] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger__ctor_m2865,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger__ctor_m2867,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger__ctor_m2869,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_SetBit_m2876,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_SetBit_m2877,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_ToString_m2880,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_ToString_m2881,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m2891,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m2895,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Equality_m2901,
	BigInteger_t758_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m2902,
	ModulusRing_t759_CustomAttributesCacheGenerator_ModulusRing_Pow_m2849,
	ASN1_t678_CustomAttributesCacheGenerator,
	PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t702_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	X509Certificate_t563_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t563_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t563_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t703_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t790_CustomAttributesCacheGenerator,
	X509Crl_t680_CustomAttributesCacheGenerator,
	X509Crl_t680_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t706_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t793_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t795_CustomAttributesCacheGenerator,
	CertTypes_t797_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t810_CustomAttributesCacheGenerator,
	HttpsClientStream_t828_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t828_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t828_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3329,
	HttpsClientStream_t828_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3330,
	RSASslSignatureDeformatter_t834_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t836_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t839_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t874_CustomAttributesCacheGenerator,
};
