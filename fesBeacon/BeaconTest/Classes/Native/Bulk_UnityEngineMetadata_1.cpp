#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "stringLiterals.h"
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefs.h"
// Metadata Definition UnityEngine.PlayerPrefs
extern TypeInfo PlayerPrefs_t159_il2cpp_TypeInfo;
// UnityEngine.PlayerPrefs
#include "UnityEngine_UnityEngine_PlayerPrefsMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo PlayerPrefs_t159_PlayerPrefs_GetString_m813_ParameterInfos[] = 
{
	{"key", 0, 134218513, 0, &String_t_0_0_0},
	{"defaultValue", 1, 134218514, 235, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.PlayerPrefs::GetString(System.String,System.String)
extern const MethodInfo PlayerPrefs_GetString_m813_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&PlayerPrefs_GetString_m813/* method */
	, &PlayerPrefs_t159_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, PlayerPrefs_t159_PlayerPrefs_GetString_m813_ParameterInfos/* parameters */
	, 234/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo PlayerPrefs_t159_PlayerPrefs_GetString_m814_ParameterInfos[] = 
{
	{"key", 0, 134218515, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern const MethodInfo PlayerPrefs_GetString_m814_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&PlayerPrefs_GetString_m814/* method */
	, &PlayerPrefs_t159_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PlayerPrefs_t159_PlayerPrefs_GetString_m814_ParameterInfos/* parameters */
	, 236/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PlayerPrefs_t159_MethodInfos[] =
{
	&PlayerPrefs_GetString_m813_MethodInfo,
	&PlayerPrefs_GetString_m814_MethodInfo,
	NULL
};
extern const MethodInfo Object_Equals_m1599_MethodInfo;
extern const MethodInfo Object_Finalize_m91_MethodInfo;
extern const MethodInfo Object_GetHashCode_m1600_MethodInfo;
extern const MethodInfo Object_ToString_m121_MethodInfo;
static const Il2CppMethodReference PlayerPrefs_t159_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool PlayerPrefs_t159_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PlayerPrefs_t159_0_0_0;
extern const Il2CppType PlayerPrefs_t159_1_0_0;
extern const Il2CppType Object_t_0_0_0;
struct PlayerPrefs_t159;
const Il2CppTypeDefinitionMetadata PlayerPrefs_t159_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PlayerPrefs_t159_VTable/* vtableMethods */
	, PlayerPrefs_t159_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo PlayerPrefs_t159_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PlayerPrefs"/* name */
	, "UnityEngine"/* namespaze */
	, PlayerPrefs_t159_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PlayerPrefs_t159_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PlayerPrefs_t159_0_0_0/* byval_arg */
	, &PlayerPrefs_t159_1_0_0/* this_arg */
	, &PlayerPrefs_t159_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PlayerPrefs_t159)/* instance_size */
	, sizeof (PlayerPrefs_t159)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_Particle.h"
// Metadata Definition UnityEngine.Particle
extern TypeInfo Particle_t160_il2cpp_TypeInfo;
// UnityEngine.Particle
#include "UnityEngine_UnityEngine_ParticleMethodDeclarations.h"
extern const Il2CppType Vector3_t121_0_0_0;
extern void* RuntimeInvoker_Vector3_t121 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector3 UnityEngine.Particle::get_position()
extern const MethodInfo Particle_get_position_m815_MethodInfo = 
{
	"get_position"/* name */
	, (methodPointerType)&Particle_get_position_m815/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Vector3_t121_0_0_0/* return_type */
	, RuntimeInvoker_Vector3_t121/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Vector3_t121_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_position_m816_ParameterInfos[] = 
{
	{"value", 0, 134218516, 0, &Vector3_t121_0_0_0},
};
extern const Il2CppType Void_t35_0_0_0;
extern void* RuntimeInvoker_Void_t35_Vector3_t121 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_position(UnityEngine.Vector3)
extern const MethodInfo Particle_set_position_m816_MethodInfo = 
{
	"set_position"/* name */
	, (methodPointerType)&Particle_set_position_m816/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Vector3_t121/* invoker_method */
	, Particle_t160_Particle_set_position_m816_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector3_t121 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector3 UnityEngine.Particle::get_velocity()
extern const MethodInfo Particle_get_velocity_m817_MethodInfo = 
{
	"get_velocity"/* name */
	, (methodPointerType)&Particle_get_velocity_m817/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Vector3_t121_0_0_0/* return_type */
	, RuntimeInvoker_Vector3_t121/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Vector3_t121_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_velocity_m818_ParameterInfos[] = 
{
	{"value", 0, 134218517, 0, &Vector3_t121_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Vector3_t121 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_velocity(UnityEngine.Vector3)
extern const MethodInfo Particle_set_velocity_m818_MethodInfo = 
{
	"set_velocity"/* name */
	, (methodPointerType)&Particle_set_velocity_m818/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Vector3_t121/* invoker_method */
	, Particle_t160_Particle_set_velocity_m818_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Particle::get_energy()
extern const MethodInfo Particle_get_energy_m819_MethodInfo = 
{
	"get_energy"/* name */
	, (methodPointerType)&Particle_get_energy_m819/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_energy_m820_ParameterInfos[] = 
{
	{"value", 0, 134218518, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_energy(System.Single)
extern const MethodInfo Particle_set_energy_m820_MethodInfo = 
{
	"set_energy"/* name */
	, (methodPointerType)&Particle_set_energy_m820/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, Particle_t160_Particle_set_energy_m820_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Particle::get_startEnergy()
extern const MethodInfo Particle_get_startEnergy_m821_MethodInfo = 
{
	"get_startEnergy"/* name */
	, (methodPointerType)&Particle_get_startEnergy_m821/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_startEnergy_m822_ParameterInfos[] = 
{
	{"value", 0, 134218519, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_startEnergy(System.Single)
extern const MethodInfo Particle_set_startEnergy_m822_MethodInfo = 
{
	"set_startEnergy"/* name */
	, (methodPointerType)&Particle_set_startEnergy_m822/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, Particle_t160_Particle_set_startEnergy_m822_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Particle::get_size()
extern const MethodInfo Particle_get_size_m823_MethodInfo = 
{
	"get_size"/* name */
	, (methodPointerType)&Particle_get_size_m823/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_size_m824_ParameterInfos[] = 
{
	{"value", 0, 134218520, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_size(System.Single)
extern const MethodInfo Particle_set_size_m824_MethodInfo = 
{
	"set_size"/* name */
	, (methodPointerType)&Particle_set_size_m824/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, Particle_t160_Particle_set_size_m824_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Particle::get_rotation()
extern const MethodInfo Particle_get_rotation_m825_MethodInfo = 
{
	"get_rotation"/* name */
	, (methodPointerType)&Particle_get_rotation_m825/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_rotation_m826_ParameterInfos[] = 
{
	{"value", 0, 134218521, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_rotation(System.Single)
extern const MethodInfo Particle_set_rotation_m826_MethodInfo = 
{
	"set_rotation"/* name */
	, (methodPointerType)&Particle_set_rotation_m826/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, Particle_t160_Particle_set_rotation_m826_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.Particle::get_angularVelocity()
extern const MethodInfo Particle_get_angularVelocity_m827_MethodInfo = 
{
	"get_angularVelocity"/* name */
	, (methodPointerType)&Particle_get_angularVelocity_m827/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_angularVelocity_m828_ParameterInfos[] = 
{
	{"value", 0, 134218522, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_angularVelocity(System.Single)
extern const MethodInfo Particle_set_angularVelocity_m828_MethodInfo = 
{
	"set_angularVelocity"/* name */
	, (methodPointerType)&Particle_set_angularVelocity_m828/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, Particle_t160_Particle_set_angularVelocity_m828_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Color_t84_0_0_0;
extern void* RuntimeInvoker_Color_t84 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Color UnityEngine.Particle::get_color()
extern const MethodInfo Particle_get_color_m829_MethodInfo = 
{
	"get_color"/* name */
	, (methodPointerType)&Particle_get_color_m829/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Color_t84_0_0_0/* return_type */
	, RuntimeInvoker_Color_t84/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Color_t84_0_0_0;
static const ParameterInfo Particle_t160_Particle_set_color_m830_ParameterInfos[] = 
{
	{"value", 0, 134218523, 0, &Color_t84_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Color_t84 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Particle::set_color(UnityEngine.Color)
extern const MethodInfo Particle_set_color_m830_MethodInfo = 
{
	"set_color"/* name */
	, (methodPointerType)&Particle_set_color_m830/* method */
	, &Particle_t160_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Color_t84/* invoker_method */
	, Particle_t160_Particle_set_color_m830_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Particle_t160_MethodInfos[] =
{
	&Particle_get_position_m815_MethodInfo,
	&Particle_set_position_m816_MethodInfo,
	&Particle_get_velocity_m817_MethodInfo,
	&Particle_set_velocity_m818_MethodInfo,
	&Particle_get_energy_m819_MethodInfo,
	&Particle_set_energy_m820_MethodInfo,
	&Particle_get_startEnergy_m821_MethodInfo,
	&Particle_set_startEnergy_m822_MethodInfo,
	&Particle_get_size_m823_MethodInfo,
	&Particle_set_size_m824_MethodInfo,
	&Particle_get_rotation_m825_MethodInfo,
	&Particle_set_rotation_m826_MethodInfo,
	&Particle_get_angularVelocity_m827_MethodInfo,
	&Particle_set_angularVelocity_m828_MethodInfo,
	&Particle_get_color_m829_MethodInfo,
	&Particle_set_color_m830_MethodInfo,
	NULL
};
extern const MethodInfo Particle_get_position_m815_MethodInfo;
extern const MethodInfo Particle_set_position_m816_MethodInfo;
static const PropertyInfo Particle_t160____position_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "position"/* name */
	, &Particle_get_position_m815_MethodInfo/* get */
	, &Particle_set_position_m816_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_velocity_m817_MethodInfo;
extern const MethodInfo Particle_set_velocity_m818_MethodInfo;
static const PropertyInfo Particle_t160____velocity_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "velocity"/* name */
	, &Particle_get_velocity_m817_MethodInfo/* get */
	, &Particle_set_velocity_m818_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_energy_m819_MethodInfo;
extern const MethodInfo Particle_set_energy_m820_MethodInfo;
static const PropertyInfo Particle_t160____energy_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "energy"/* name */
	, &Particle_get_energy_m819_MethodInfo/* get */
	, &Particle_set_energy_m820_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_startEnergy_m821_MethodInfo;
extern const MethodInfo Particle_set_startEnergy_m822_MethodInfo;
static const PropertyInfo Particle_t160____startEnergy_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "startEnergy"/* name */
	, &Particle_get_startEnergy_m821_MethodInfo/* get */
	, &Particle_set_startEnergy_m822_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_size_m823_MethodInfo;
extern const MethodInfo Particle_set_size_m824_MethodInfo;
static const PropertyInfo Particle_t160____size_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "size"/* name */
	, &Particle_get_size_m823_MethodInfo/* get */
	, &Particle_set_size_m824_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_rotation_m825_MethodInfo;
extern const MethodInfo Particle_set_rotation_m826_MethodInfo;
static const PropertyInfo Particle_t160____rotation_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "rotation"/* name */
	, &Particle_get_rotation_m825_MethodInfo/* get */
	, &Particle_set_rotation_m826_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_angularVelocity_m827_MethodInfo;
extern const MethodInfo Particle_set_angularVelocity_m828_MethodInfo;
static const PropertyInfo Particle_t160____angularVelocity_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "angularVelocity"/* name */
	, &Particle_get_angularVelocity_m827_MethodInfo/* get */
	, &Particle_set_angularVelocity_m828_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Particle_get_color_m829_MethodInfo;
extern const MethodInfo Particle_set_color_m830_MethodInfo;
static const PropertyInfo Particle_t160____color_PropertyInfo = 
{
	&Particle_t160_il2cpp_TypeInfo/* parent */
	, "color"/* name */
	, &Particle_get_color_m829_MethodInfo/* get */
	, &Particle_set_color_m830_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Particle_t160_PropertyInfos[] =
{
	&Particle_t160____position_PropertyInfo,
	&Particle_t160____velocity_PropertyInfo,
	&Particle_t160____energy_PropertyInfo,
	&Particle_t160____startEnergy_PropertyInfo,
	&Particle_t160____size_PropertyInfo,
	&Particle_t160____rotation_PropertyInfo,
	&Particle_t160____angularVelocity_PropertyInfo,
	&Particle_t160____color_PropertyInfo,
	NULL
};
extern const MethodInfo ValueType_Equals_m116_MethodInfo;
extern const MethodInfo ValueType_GetHashCode_m117_MethodInfo;
extern const MethodInfo ValueType_ToString_m118_MethodInfo;
static const Il2CppMethodReference Particle_t160_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool Particle_t160_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Particle_t160_0_0_0;
extern const Il2CppType Particle_t160_1_0_0;
extern const Il2CppType ValueType_t43_0_0_0;
const Il2CppTypeDefinitionMetadata Particle_t160_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, Particle_t160_VTable/* vtableMethods */
	, Particle_t160_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 694/* fieldStart */

};
TypeInfo Particle_t160_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Particle"/* name */
	, "UnityEngine"/* namespaze */
	, Particle_t160_MethodInfos/* methods */
	, Particle_t160_PropertyInfos/* properties */
	, NULL/* events */
	, &Particle_t160_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Particle_t160_0_0_0/* byval_arg */
	, &Particle_t160_1_0_0/* this_arg */
	, &Particle_t160_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Particle_t160)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Particle_t160)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Particle_t160 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 16/* method_count */
	, 8/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChan.h"
// Metadata Definition UnityEngine.AudioSettings/AudioConfigurationChangeHandler
extern TypeInfo AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
#include "UnityEngine_UnityEngine_AudioSettings_AudioConfigurationChanMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler__ctor_m831_ParameterInfos[] = 
{
	{"object", 0, 134218525, 0, &Object_t_0_0_0},
	{"method", 1, 134218526, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
extern const MethodInfo AudioConfigurationChangeHandler__ctor_m831_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AudioConfigurationChangeHandler__ctor_m831/* method */
	, &AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler__ctor_m831_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler_Invoke_m832_ParameterInfos[] = 
{
	{"deviceWasChanged", 0, 134218527, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
extern const MethodInfo AudioConfigurationChangeHandler_Invoke_m832_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&AudioConfigurationChangeHandler_Invoke_m832/* method */
	, &AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler_Invoke_m832_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler_BeginInvoke_m833_ParameterInfos[] = 
{
	{"deviceWasChanged", 0, 134218528, 0, &Boolean_t36_0_0_0},
	{"callback", 1, 134218529, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218530, 0, &Object_t_0_0_0},
};
extern const Il2CppType IAsyncResult_t7_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t37_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern const MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m833_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&AudioConfigurationChangeHandler_BeginInvoke_m833/* method */
	, &AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t37_Object_t_Object_t/* invoker_method */
	, AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler_BeginInvoke_m833_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler_EndInvoke_m834_ParameterInfos[] = 
{
	{"result", 0, 134218531, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
extern const MethodInfo AudioConfigurationChangeHandler_EndInvoke_m834_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&AudioConfigurationChangeHandler_EndInvoke_m834/* method */
	, &AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AudioConfigurationChangeHandler_t161_AudioConfigurationChangeHandler_EndInvoke_m834_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AudioConfigurationChangeHandler_t161_MethodInfos[] =
{
	&AudioConfigurationChangeHandler__ctor_m831_MethodInfo,
	&AudioConfigurationChangeHandler_Invoke_m832_MethodInfo,
	&AudioConfigurationChangeHandler_BeginInvoke_m833_MethodInfo,
	&AudioConfigurationChangeHandler_EndInvoke_m834_MethodInfo,
	NULL
};
extern const MethodInfo MulticastDelegate_Equals_m119_MethodInfo;
extern const MethodInfo MulticastDelegate_GetHashCode_m120_MethodInfo;
extern const MethodInfo MulticastDelegate_GetObjectData_m122_MethodInfo;
extern const MethodInfo Delegate_Clone_m123_MethodInfo;
extern const MethodInfo MulticastDelegate_GetInvocationList_m124_MethodInfo;
extern const MethodInfo MulticastDelegate_CombineImpl_m125_MethodInfo;
extern const MethodInfo MulticastDelegate_RemoveImpl_m126_MethodInfo;
extern const MethodInfo AudioConfigurationChangeHandler_Invoke_m832_MethodInfo;
extern const MethodInfo AudioConfigurationChangeHandler_BeginInvoke_m833_MethodInfo;
extern const MethodInfo AudioConfigurationChangeHandler_EndInvoke_m834_MethodInfo;
static const Il2CppMethodReference AudioConfigurationChangeHandler_t161_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&AudioConfigurationChangeHandler_Invoke_m832_MethodInfo,
	&AudioConfigurationChangeHandler_BeginInvoke_m833_MethodInfo,
	&AudioConfigurationChangeHandler_EndInvoke_m834_MethodInfo,
};
static bool AudioConfigurationChangeHandler_t161_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ICloneable_t44_0_0_0;
extern const Il2CppType ISerializable_t45_0_0_0;
static Il2CppInterfaceOffsetPair AudioConfigurationChangeHandler_t161_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AudioConfigurationChangeHandler_t161_0_0_0;
extern const Il2CppType AudioConfigurationChangeHandler_t161_1_0_0;
extern const Il2CppType MulticastDelegate_t10_0_0_0;
extern TypeInfo AudioSettings_t162_il2cpp_TypeInfo;
extern const Il2CppType AudioSettings_t162_0_0_0;
struct AudioConfigurationChangeHandler_t161;
const Il2CppTypeDefinitionMetadata AudioConfigurationChangeHandler_t161_DefinitionMetadata = 
{
	&AudioSettings_t162_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AudioConfigurationChangeHandler_t161_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, AudioConfigurationChangeHandler_t161_VTable/* vtableMethods */
	, AudioConfigurationChangeHandler_t161_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AudioConfigurationChangeHandler"/* name */
	, ""/* namespaze */
	, AudioConfigurationChangeHandler_t161_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AudioConfigurationChangeHandler_t161_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AudioConfigurationChangeHandler_t161_0_0_0/* byval_arg */
	, &AudioConfigurationChangeHandler_t161_1_0_0/* this_arg */
	, &AudioConfigurationChangeHandler_t161_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_AudioConfigurationChangeHandler_t161/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AudioConfigurationChangeHandler_t161)/* instance_size */
	, sizeof (AudioConfigurationChangeHandler_t161)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettings.h"
// Metadata Definition UnityEngine.AudioSettings
// UnityEngine.AudioSettings
#include "UnityEngine_UnityEngine_AudioSettingsMethodDeclarations.h"
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo AudioSettings_t162_AudioSettings_InvokeOnAudioConfigurationChanged_m835_ParameterInfos[] = 
{
	{"deviceWasChanged", 0, 134218524, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
extern const MethodInfo AudioSettings_InvokeOnAudioConfigurationChanged_m835_MethodInfo = 
{
	"InvokeOnAudioConfigurationChanged"/* name */
	, (methodPointerType)&AudioSettings_InvokeOnAudioConfigurationChanged_m835/* method */
	, &AudioSettings_t162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, AudioSettings_t162_AudioSettings_InvokeOnAudioConfigurationChanged_m835_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AudioSettings_t162_MethodInfos[] =
{
	&AudioSettings_InvokeOnAudioConfigurationChanged_m835_MethodInfo,
	NULL
};
static const Il2CppType* AudioSettings_t162_il2cpp_TypeInfo__nestedTypes[1] =
{
	&AudioConfigurationChangeHandler_t161_0_0_0,
};
static const Il2CppMethodReference AudioSettings_t162_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AudioSettings_t162_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AudioSettings_t162_1_0_0;
struct AudioSettings_t162;
const Il2CppTypeDefinitionMetadata AudioSettings_t162_DefinitionMetadata = 
{
	NULL/* declaringType */
	, AudioSettings_t162_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AudioSettings_t162_VTable/* vtableMethods */
	, AudioSettings_t162_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 702/* fieldStart */

};
TypeInfo AudioSettings_t162_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AudioSettings"/* name */
	, "UnityEngine"/* namespaze */
	, AudioSettings_t162_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AudioSettings_t162_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AudioSettings_t162_0_0_0/* byval_arg */
	, &AudioSettings_t162_1_0_0/* this_arg */
	, &AudioSettings_t162_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AudioSettings_t162)/* instance_size */
	, sizeof (AudioSettings_t162)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(AudioSettings_t162_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallback.h"
// Metadata Definition UnityEngine.AudioClip/PCMReaderCallback
extern TypeInfo PCMReaderCallback_t164_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMReaderCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMReaderCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo PCMReaderCallback_t164_PCMReaderCallback__ctor_m836_ParameterInfos[] = 
{
	{"object", 0, 134218534, 0, &Object_t_0_0_0},
	{"method", 1, 134218535, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo PCMReaderCallback__ctor_m836_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PCMReaderCallback__ctor_m836/* method */
	, &PCMReaderCallback_t164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, PCMReaderCallback_t164_PCMReaderCallback__ctor_m836_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SingleU5BU5D_t163_0_0_0;
extern const Il2CppType SingleU5BU5D_t163_0_0_0;
static const ParameterInfo PCMReaderCallback_t164_PCMReaderCallback_Invoke_m837_ParameterInfos[] = 
{
	{"data", 0, 134218536, 0, &SingleU5BU5D_t163_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern const MethodInfo PCMReaderCallback_Invoke_m837_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PCMReaderCallback_Invoke_m837/* method */
	, &PCMReaderCallback_t164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, PCMReaderCallback_t164_PCMReaderCallback_Invoke_m837_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SingleU5BU5D_t163_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo PCMReaderCallback_t164_PCMReaderCallback_BeginInvoke_m838_ParameterInfos[] = 
{
	{"data", 0, 134218537, 0, &SingleU5BU5D_t163_0_0_0},
	{"callback", 1, 134218538, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218539, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern const MethodInfo PCMReaderCallback_BeginInvoke_m838_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PCMReaderCallback_BeginInvoke_m838/* method */
	, &PCMReaderCallback_t164_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PCMReaderCallback_t164_PCMReaderCallback_BeginInvoke_m838_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo PCMReaderCallback_t164_PCMReaderCallback_EndInvoke_m839_ParameterInfos[] = 
{
	{"result", 0, 134218540, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo PCMReaderCallback_EndInvoke_m839_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PCMReaderCallback_EndInvoke_m839/* method */
	, &PCMReaderCallback_t164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, PCMReaderCallback_t164_PCMReaderCallback_EndInvoke_m839_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PCMReaderCallback_t164_MethodInfos[] =
{
	&PCMReaderCallback__ctor_m836_MethodInfo,
	&PCMReaderCallback_Invoke_m837_MethodInfo,
	&PCMReaderCallback_BeginInvoke_m838_MethodInfo,
	&PCMReaderCallback_EndInvoke_m839_MethodInfo,
	NULL
};
extern const MethodInfo PCMReaderCallback_Invoke_m837_MethodInfo;
extern const MethodInfo PCMReaderCallback_BeginInvoke_m838_MethodInfo;
extern const MethodInfo PCMReaderCallback_EndInvoke_m839_MethodInfo;
static const Il2CppMethodReference PCMReaderCallback_t164_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&PCMReaderCallback_Invoke_m837_MethodInfo,
	&PCMReaderCallback_BeginInvoke_m838_MethodInfo,
	&PCMReaderCallback_EndInvoke_m839_MethodInfo,
};
static bool PCMReaderCallback_t164_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair PCMReaderCallback_t164_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PCMReaderCallback_t164_0_0_0;
extern const Il2CppType PCMReaderCallback_t164_1_0_0;
extern TypeInfo AudioClip_t166_il2cpp_TypeInfo;
extern const Il2CppType AudioClip_t166_0_0_0;
struct PCMReaderCallback_t164;
const Il2CppTypeDefinitionMetadata PCMReaderCallback_t164_DefinitionMetadata = 
{
	&AudioClip_t166_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, PCMReaderCallback_t164_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, PCMReaderCallback_t164_VTable/* vtableMethods */
	, PCMReaderCallback_t164_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo PCMReaderCallback_t164_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PCMReaderCallback"/* name */
	, ""/* namespaze */
	, PCMReaderCallback_t164_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PCMReaderCallback_t164_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PCMReaderCallback_t164_0_0_0/* byval_arg */
	, &PCMReaderCallback_t164_1_0_0/* this_arg */
	, &PCMReaderCallback_t164_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PCMReaderCallback_t164/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PCMReaderCallback_t164)/* instance_size */
	, sizeof (PCMReaderCallback_t164)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallback.h"
// Metadata Definition UnityEngine.AudioClip/PCMSetPositionCallback
extern TypeInfo PCMSetPositionCallback_t165_il2cpp_TypeInfo;
// UnityEngine.AudioClip/PCMSetPositionCallback
#include "UnityEngine_UnityEngine_AudioClip_PCMSetPositionCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo PCMSetPositionCallback_t165_PCMSetPositionCallback__ctor_m840_ParameterInfos[] = 
{
	{"object", 0, 134218541, 0, &Object_t_0_0_0},
	{"method", 1, 134218542, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo PCMSetPositionCallback__ctor_m840_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PCMSetPositionCallback__ctor_m840/* method */
	, &PCMSetPositionCallback_t165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, PCMSetPositionCallback_t165_PCMSetPositionCallback__ctor_m840_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo PCMSetPositionCallback_t165_PCMSetPositionCallback_Invoke_m841_ParameterInfos[] = 
{
	{"position", 0, 134218543, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
extern const MethodInfo PCMSetPositionCallback_Invoke_m841_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PCMSetPositionCallback_Invoke_m841/* method */
	, &PCMSetPositionCallback_t165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, PCMSetPositionCallback_t165_PCMSetPositionCallback_Invoke_m841_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo PCMSetPositionCallback_t165_PCMSetPositionCallback_BeginInvoke_m842_ParameterInfos[] = 
{
	{"position", 0, 134218544, 0, &Int32_t18_0_0_0},
	{"callback", 1, 134218545, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218546, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t18_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern const MethodInfo PCMSetPositionCallback_BeginInvoke_m842_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PCMSetPositionCallback_BeginInvoke_m842/* method */
	, &PCMSetPositionCallback_t165_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18_Object_t_Object_t/* invoker_method */
	, PCMSetPositionCallback_t165_PCMSetPositionCallback_BeginInvoke_m842_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo PCMSetPositionCallback_t165_PCMSetPositionCallback_EndInvoke_m843_ParameterInfos[] = 
{
	{"result", 0, 134218547, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo PCMSetPositionCallback_EndInvoke_m843_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PCMSetPositionCallback_EndInvoke_m843/* method */
	, &PCMSetPositionCallback_t165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, PCMSetPositionCallback_t165_PCMSetPositionCallback_EndInvoke_m843_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PCMSetPositionCallback_t165_MethodInfos[] =
{
	&PCMSetPositionCallback__ctor_m840_MethodInfo,
	&PCMSetPositionCallback_Invoke_m841_MethodInfo,
	&PCMSetPositionCallback_BeginInvoke_m842_MethodInfo,
	&PCMSetPositionCallback_EndInvoke_m843_MethodInfo,
	NULL
};
extern const MethodInfo PCMSetPositionCallback_Invoke_m841_MethodInfo;
extern const MethodInfo PCMSetPositionCallback_BeginInvoke_m842_MethodInfo;
extern const MethodInfo PCMSetPositionCallback_EndInvoke_m843_MethodInfo;
static const Il2CppMethodReference PCMSetPositionCallback_t165_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&PCMSetPositionCallback_Invoke_m841_MethodInfo,
	&PCMSetPositionCallback_BeginInvoke_m842_MethodInfo,
	&PCMSetPositionCallback_EndInvoke_m843_MethodInfo,
};
static bool PCMSetPositionCallback_t165_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair PCMSetPositionCallback_t165_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PCMSetPositionCallback_t165_0_0_0;
extern const Il2CppType PCMSetPositionCallback_t165_1_0_0;
struct PCMSetPositionCallback_t165;
const Il2CppTypeDefinitionMetadata PCMSetPositionCallback_t165_DefinitionMetadata = 
{
	&AudioClip_t166_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, PCMSetPositionCallback_t165_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, PCMSetPositionCallback_t165_VTable/* vtableMethods */
	, PCMSetPositionCallback_t165_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo PCMSetPositionCallback_t165_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PCMSetPositionCallback"/* name */
	, ""/* namespaze */
	, PCMSetPositionCallback_t165_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PCMSetPositionCallback_t165_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &PCMSetPositionCallback_t165_0_0_0/* byval_arg */
	, &PCMSetPositionCallback_t165_1_0_0/* this_arg */
	, &PCMSetPositionCallback_t165_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PCMSetPositionCallback_t165/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PCMSetPositionCallback_t165)/* instance_size */
	, sizeof (PCMSetPositionCallback_t165)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// Metadata Definition UnityEngine.AudioClip
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClipMethodDeclarations.h"
extern const Il2CppType SingleU5BU5D_t163_0_0_0;
static const ParameterInfo AudioClip_t166_AudioClip_InvokePCMReaderCallback_Internal_m844_ParameterInfos[] = 
{
	{"data", 0, 134218532, 0, &SingleU5BU5D_t163_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern const MethodInfo AudioClip_InvokePCMReaderCallback_Internal_m844_MethodInfo = 
{
	"InvokePCMReaderCallback_Internal"/* name */
	, (methodPointerType)&AudioClip_InvokePCMReaderCallback_Internal_m844/* method */
	, &AudioClip_t166_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AudioClip_t166_AudioClip_InvokePCMReaderCallback_Internal_m844_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo AudioClip_t166_AudioClip_InvokePCMSetPositionCallback_Internal_m845_ParameterInfos[] = 
{
	{"position", 0, 134218533, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern const MethodInfo AudioClip_InvokePCMSetPositionCallback_Internal_m845_MethodInfo = 
{
	"InvokePCMSetPositionCallback_Internal"/* name */
	, (methodPointerType)&AudioClip_InvokePCMSetPositionCallback_Internal_m845/* method */
	, &AudioClip_t166_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, AudioClip_t166_AudioClip_InvokePCMSetPositionCallback_Internal_m845_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AudioClip_t166_MethodInfos[] =
{
	&AudioClip_InvokePCMReaderCallback_Internal_m844_MethodInfo,
	&AudioClip_InvokePCMSetPositionCallback_Internal_m845_MethodInfo,
	NULL
};
static const Il2CppType* AudioClip_t166_il2cpp_TypeInfo__nestedTypes[2] =
{
	&PCMReaderCallback_t164_0_0_0,
	&PCMSetPositionCallback_t165_0_0_0,
};
extern const MethodInfo Object_Equals_m90_MethodInfo;
extern const MethodInfo Object_GetHashCode_m92_MethodInfo;
extern const MethodInfo Object_ToString_m93_MethodInfo;
static const Il2CppMethodReference AudioClip_t166_VTable[] =
{
	&Object_Equals_m90_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m92_MethodInfo,
	&Object_ToString_m93_MethodInfo,
};
static bool AudioClip_t166_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AudioClip_t166_1_0_0;
extern const Il2CppType Object_t51_0_0_0;
struct AudioClip_t166;
const Il2CppTypeDefinitionMetadata AudioClip_t166_DefinitionMetadata = 
{
	NULL/* declaringType */
	, AudioClip_t166_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t51_0_0_0/* parent */
	, AudioClip_t166_VTable/* vtableMethods */
	, AudioClip_t166_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 703/* fieldStart */

};
TypeInfo AudioClip_t166_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AudioClip"/* name */
	, "UnityEngine"/* namespaze */
	, AudioClip_t166_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AudioClip_t166_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AudioClip_t166_0_0_0/* byval_arg */
	, &AudioClip_t166_1_0_0/* this_arg */
	, &AudioClip_t166_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AudioClip_t166)/* instance_size */
	, sizeof (AudioClip_t166)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDevice.h"
// Metadata Definition UnityEngine.WebCamDevice
extern TypeInfo WebCamDevice_t167_il2cpp_TypeInfo;
// UnityEngine.WebCamDevice
#include "UnityEngine_UnityEngine_WebCamDeviceMethodDeclarations.h"
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.WebCamDevice::get_name()
extern const MethodInfo WebCamDevice_get_name_m846_MethodInfo = 
{
	"get_name"/* name */
	, (methodPointerType)&WebCamDevice_get_name_m846/* method */
	, &WebCamDevice_t167_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern const MethodInfo WebCamDevice_get_isFrontFacing_m847_MethodInfo = 
{
	"get_isFrontFacing"/* name */
	, (methodPointerType)&WebCamDevice_get_isFrontFacing_m847/* method */
	, &WebCamDevice_t167_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WebCamDevice_t167_MethodInfos[] =
{
	&WebCamDevice_get_name_m846_MethodInfo,
	&WebCamDevice_get_isFrontFacing_m847_MethodInfo,
	NULL
};
extern const MethodInfo WebCamDevice_get_name_m846_MethodInfo;
static const PropertyInfo WebCamDevice_t167____name_PropertyInfo = 
{
	&WebCamDevice_t167_il2cpp_TypeInfo/* parent */
	, "name"/* name */
	, &WebCamDevice_get_name_m846_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo WebCamDevice_get_isFrontFacing_m847_MethodInfo;
static const PropertyInfo WebCamDevice_t167____isFrontFacing_PropertyInfo = 
{
	&WebCamDevice_t167_il2cpp_TypeInfo/* parent */
	, "isFrontFacing"/* name */
	, &WebCamDevice_get_isFrontFacing_m847_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* WebCamDevice_t167_PropertyInfos[] =
{
	&WebCamDevice_t167____name_PropertyInfo,
	&WebCamDevice_t167____isFrontFacing_PropertyInfo,
	NULL
};
static const Il2CppMethodReference WebCamDevice_t167_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool WebCamDevice_t167_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType WebCamDevice_t167_0_0_0;
extern const Il2CppType WebCamDevice_t167_1_0_0;
const Il2CppTypeDefinitionMetadata WebCamDevice_t167_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, WebCamDevice_t167_VTable/* vtableMethods */
	, WebCamDevice_t167_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 705/* fieldStart */

};
TypeInfo WebCamDevice_t167_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "WebCamDevice"/* name */
	, "UnityEngine"/* namespaze */
	, WebCamDevice_t167_MethodInfos/* methods */
	, WebCamDevice_t167_PropertyInfos/* properties */
	, NULL/* events */
	, &WebCamDevice_t167_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &WebCamDevice_t167_0_0_0/* byval_arg */
	, &WebCamDevice_t167_1_0_0/* this_arg */
	, &WebCamDevice_t167_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)WebCamDevice_t167_marshal/* marshal_to_native_func */
	, (methodPointerType)WebCamDevice_t167_marshal_back/* marshal_from_native_func */
	, (methodPointerType)WebCamDevice_t167_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (WebCamDevice_t167)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (WebCamDevice_t167)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(WebCamDevice_t167_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSource.h"
// Metadata Definition UnityEngine.AnimationEventSource
extern TypeInfo AnimationEventSource_t168_il2cpp_TypeInfo;
// UnityEngine.AnimationEventSource
#include "UnityEngine_UnityEngine_AnimationEventSourceMethodDeclarations.h"
static const MethodInfo* AnimationEventSource_t168_MethodInfos[] =
{
	NULL
};
extern const MethodInfo Enum_Equals_m94_MethodInfo;
extern const MethodInfo Enum_GetHashCode_m95_MethodInfo;
extern const MethodInfo Enum_ToString_m96_MethodInfo;
extern const MethodInfo Enum_ToString_m97_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToBoolean_m98_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToByte_m99_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToChar_m100_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDateTime_m101_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDecimal_m102_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToDouble_m103_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt16_m104_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt32_m105_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToInt64_m106_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSByte_m107_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToSingle_m108_MethodInfo;
extern const MethodInfo Enum_ToString_m109_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToType_m110_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt16_m111_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt32_m112_MethodInfo;
extern const MethodInfo Enum_System_IConvertible_ToUInt64_m113_MethodInfo;
extern const MethodInfo Enum_CompareTo_m114_MethodInfo;
extern const MethodInfo Enum_GetTypeCode_m115_MethodInfo;
static const Il2CppMethodReference AnimationEventSource_t168_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool AnimationEventSource_t168_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IFormattable_t38_0_0_0;
extern const Il2CppType IConvertible_t39_0_0_0;
extern const Il2CppType IComparable_t40_0_0_0;
static Il2CppInterfaceOffsetPair AnimationEventSource_t168_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimationEventSource_t168_0_0_0;
extern const Il2CppType AnimationEventSource_t168_1_0_0;
extern const Il2CppType Enum_t41_0_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t18_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata AnimationEventSource_t168_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AnimationEventSource_t168_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, AnimationEventSource_t168_VTable/* vtableMethods */
	, AnimationEventSource_t168_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 707/* fieldStart */

};
TypeInfo AnimationEventSource_t168_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimationEventSource"/* name */
	, "UnityEngine"/* namespaze */
	, AnimationEventSource_t168_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t18_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnimationEventSource_t168_0_0_0/* byval_arg */
	, &AnimationEventSource_t168_1_0_0/* this_arg */
	, &AnimationEventSource_t168_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnimationEventSource_t168)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (AnimationEventSource_t168)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEvent.h"
// Metadata Definition UnityEngine.AnimationEvent
extern TypeInfo AnimationEvent_t170_il2cpp_TypeInfo;
// UnityEngine.AnimationEvent
#include "UnityEngine_UnityEngine_AnimationEventMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::.ctor()
extern const MethodInfo AnimationEvent__ctor_m848_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnimationEvent__ctor_m848/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.AnimationEvent::get_data()
extern const MethodInfo AnimationEvent_get_data_m849_MethodInfo = 
{
	"get_data"/* name */
	, (methodPointerType)&AnimationEvent_get_data_m849/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_data_m850_ParameterInfos[] = 
{
	{"value", 0, 134218548, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern const MethodInfo AnimationEvent_set_data_m850_MethodInfo = 
{
	"set_data"/* name */
	, (methodPointerType)&AnimationEvent_set_data_m850/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_data_m850_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern const MethodInfo AnimationEvent_get_stringParameter_m851_MethodInfo = 
{
	"get_stringParameter"/* name */
	, (methodPointerType)&AnimationEvent_get_stringParameter_m851/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_stringParameter_m852_ParameterInfos[] = 
{
	{"value", 0, 134218549, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern const MethodInfo AnimationEvent_set_stringParameter_m852_MethodInfo = 
{
	"set_stringParameter"/* name */
	, (methodPointerType)&AnimationEvent_set_stringParameter_m852/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_stringParameter_m852_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern const MethodInfo AnimationEvent_get_floatParameter_m853_MethodInfo = 
{
	"get_floatParameter"/* name */
	, (methodPointerType)&AnimationEvent_get_floatParameter_m853/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_floatParameter_m854_ParameterInfos[] = 
{
	{"value", 0, 134218550, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern const MethodInfo AnimationEvent_set_floatParameter_m854_MethodInfo = 
{
	"set_floatParameter"/* name */
	, (methodPointerType)&AnimationEvent_set_floatParameter_m854/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_floatParameter_m854_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern const MethodInfo AnimationEvent_get_intParameter_m855_MethodInfo = 
{
	"get_intParameter"/* name */
	, (methodPointerType)&AnimationEvent_get_intParameter_m855/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_intParameter_m856_ParameterInfos[] = 
{
	{"value", 0, 134218551, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern const MethodInfo AnimationEvent_set_intParameter_m856_MethodInfo = 
{
	"set_intParameter"/* name */
	, (methodPointerType)&AnimationEvent_set_intParameter_m856/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_intParameter_m856_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern const MethodInfo AnimationEvent_get_objectReferenceParameter_m857_MethodInfo = 
{
	"get_objectReferenceParameter"/* name */
	, (methodPointerType)&AnimationEvent_get_objectReferenceParameter_m857/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Object_t51_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t51_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_objectReferenceParameter_m858_ParameterInfos[] = 
{
	{"value", 0, 134218552, 0, &Object_t51_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern const MethodInfo AnimationEvent_set_objectReferenceParameter_m858_MethodInfo = 
{
	"set_objectReferenceParameter"/* name */
	, (methodPointerType)&AnimationEvent_set_objectReferenceParameter_m858/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_objectReferenceParameter_m858_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.AnimationEvent::get_functionName()
extern const MethodInfo AnimationEvent_get_functionName_m859_MethodInfo = 
{
	"get_functionName"/* name */
	, (methodPointerType)&AnimationEvent_get_functionName_m859/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_functionName_m860_ParameterInfos[] = 
{
	{"value", 0, 134218553, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern const MethodInfo AnimationEvent_set_functionName_m860_MethodInfo = 
{
	"set_functionName"/* name */
	, (methodPointerType)&AnimationEvent_set_functionName_m860/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_functionName_m860_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.AnimationEvent::get_time()
extern const MethodInfo AnimationEvent_get_time_m861_MethodInfo = 
{
	"get_time"/* name */
	, (methodPointerType)&AnimationEvent_get_time_m861/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Single_t355_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_time_m862_ParameterInfos[] = 
{
	{"value", 0, 134218554, 0, &Single_t355_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern const MethodInfo AnimationEvent_set_time_m862_MethodInfo = 
{
	"set_time"/* name */
	, (methodPointerType)&AnimationEvent_set_time_m862/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Single_t355/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_time_m862_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SendMessageOptions_t52_0_0_0;
extern void* RuntimeInvoker_SendMessageOptions_t52 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern const MethodInfo AnimationEvent_get_messageOptions_m863_MethodInfo = 
{
	"get_messageOptions"/* name */
	, (methodPointerType)&AnimationEvent_get_messageOptions_m863/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &SendMessageOptions_t52_0_0_0/* return_type */
	, RuntimeInvoker_SendMessageOptions_t52/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SendMessageOptions_t52_0_0_0;
static const ParameterInfo AnimationEvent_t170_AnimationEvent_set_messageOptions_m864_ParameterInfos[] = 
{
	{"value", 0, 134218555, 0, &SendMessageOptions_t52_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern const MethodInfo AnimationEvent_set_messageOptions_m864_MethodInfo = 
{
	"set_messageOptions"/* name */
	, (methodPointerType)&AnimationEvent_set_messageOptions_m864/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, AnimationEvent_t170_AnimationEvent_set_messageOptions_m864_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern const MethodInfo AnimationEvent_get_isFiredByLegacy_m865_MethodInfo = 
{
	"get_isFiredByLegacy"/* name */
	, (methodPointerType)&AnimationEvent_get_isFiredByLegacy_m865/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern const MethodInfo AnimationEvent_get_isFiredByAnimator_m866_MethodInfo = 
{
	"get_isFiredByAnimator"/* name */
	, (methodPointerType)&AnimationEvent_get_isFiredByAnimator_m866/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AnimationState_t169_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern const MethodInfo AnimationEvent_get_animationState_m867_MethodInfo = 
{
	"get_animationState"/* name */
	, (methodPointerType)&AnimationEvent_get_animationState_m867/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &AnimationState_t169_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AnimatorStateInfo_t171_0_0_0;
extern void* RuntimeInvoker_AnimatorStateInfo_t171 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern const MethodInfo AnimationEvent_get_animatorStateInfo_m868_MethodInfo = 
{
	"get_animatorStateInfo"/* name */
	, (methodPointerType)&AnimationEvent_get_animatorStateInfo_m868/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &AnimatorStateInfo_t171_0_0_0/* return_type */
	, RuntimeInvoker_AnimatorStateInfo_t171/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AnimatorClipInfo_t172_0_0_0;
extern void* RuntimeInvoker_AnimatorClipInfo_t172 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern const MethodInfo AnimationEvent_get_animatorClipInfo_m869_MethodInfo = 
{
	"get_animatorClipInfo"/* name */
	, (methodPointerType)&AnimationEvent_get_animatorClipInfo_m869/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &AnimatorClipInfo_t172_0_0_0/* return_type */
	, RuntimeInvoker_AnimatorClipInfo_t172/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern const MethodInfo AnimationEvent_GetHash_m870_MethodInfo = 
{
	"GetHash"/* name */
	, (methodPointerType)&AnimationEvent_GetHash_m870/* method */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AnimationEvent_t170_MethodInfos[] =
{
	&AnimationEvent__ctor_m848_MethodInfo,
	&AnimationEvent_get_data_m849_MethodInfo,
	&AnimationEvent_set_data_m850_MethodInfo,
	&AnimationEvent_get_stringParameter_m851_MethodInfo,
	&AnimationEvent_set_stringParameter_m852_MethodInfo,
	&AnimationEvent_get_floatParameter_m853_MethodInfo,
	&AnimationEvent_set_floatParameter_m854_MethodInfo,
	&AnimationEvent_get_intParameter_m855_MethodInfo,
	&AnimationEvent_set_intParameter_m856_MethodInfo,
	&AnimationEvent_get_objectReferenceParameter_m857_MethodInfo,
	&AnimationEvent_set_objectReferenceParameter_m858_MethodInfo,
	&AnimationEvent_get_functionName_m859_MethodInfo,
	&AnimationEvent_set_functionName_m860_MethodInfo,
	&AnimationEvent_get_time_m861_MethodInfo,
	&AnimationEvent_set_time_m862_MethodInfo,
	&AnimationEvent_get_messageOptions_m863_MethodInfo,
	&AnimationEvent_set_messageOptions_m864_MethodInfo,
	&AnimationEvent_get_isFiredByLegacy_m865_MethodInfo,
	&AnimationEvent_get_isFiredByAnimator_m866_MethodInfo,
	&AnimationEvent_get_animationState_m867_MethodInfo,
	&AnimationEvent_get_animatorStateInfo_m868_MethodInfo,
	&AnimationEvent_get_animatorClipInfo_m869_MethodInfo,
	&AnimationEvent_GetHash_m870_MethodInfo,
	NULL
};
extern const MethodInfo AnimationEvent_get_data_m849_MethodInfo;
extern const MethodInfo AnimationEvent_set_data_m850_MethodInfo;
static const PropertyInfo AnimationEvent_t170____data_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "data"/* name */
	, &AnimationEvent_get_data_m849_MethodInfo/* get */
	, &AnimationEvent_set_data_m850_MethodInfo/* set */
	, 0/* attrs */
	, 237/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_stringParameter_m851_MethodInfo;
extern const MethodInfo AnimationEvent_set_stringParameter_m852_MethodInfo;
static const PropertyInfo AnimationEvent_t170____stringParameter_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "stringParameter"/* name */
	, &AnimationEvent_get_stringParameter_m851_MethodInfo/* get */
	, &AnimationEvent_set_stringParameter_m852_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_floatParameter_m853_MethodInfo;
extern const MethodInfo AnimationEvent_set_floatParameter_m854_MethodInfo;
static const PropertyInfo AnimationEvent_t170____floatParameter_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "floatParameter"/* name */
	, &AnimationEvent_get_floatParameter_m853_MethodInfo/* get */
	, &AnimationEvent_set_floatParameter_m854_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_intParameter_m855_MethodInfo;
extern const MethodInfo AnimationEvent_set_intParameter_m856_MethodInfo;
static const PropertyInfo AnimationEvent_t170____intParameter_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "intParameter"/* name */
	, &AnimationEvent_get_intParameter_m855_MethodInfo/* get */
	, &AnimationEvent_set_intParameter_m856_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_objectReferenceParameter_m857_MethodInfo;
extern const MethodInfo AnimationEvent_set_objectReferenceParameter_m858_MethodInfo;
static const PropertyInfo AnimationEvent_t170____objectReferenceParameter_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "objectReferenceParameter"/* name */
	, &AnimationEvent_get_objectReferenceParameter_m857_MethodInfo/* get */
	, &AnimationEvent_set_objectReferenceParameter_m858_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_functionName_m859_MethodInfo;
extern const MethodInfo AnimationEvent_set_functionName_m860_MethodInfo;
static const PropertyInfo AnimationEvent_t170____functionName_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "functionName"/* name */
	, &AnimationEvent_get_functionName_m859_MethodInfo/* get */
	, &AnimationEvent_set_functionName_m860_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_time_m861_MethodInfo;
extern const MethodInfo AnimationEvent_set_time_m862_MethodInfo;
static const PropertyInfo AnimationEvent_t170____time_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "time"/* name */
	, &AnimationEvent_get_time_m861_MethodInfo/* get */
	, &AnimationEvent_set_time_m862_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_messageOptions_m863_MethodInfo;
extern const MethodInfo AnimationEvent_set_messageOptions_m864_MethodInfo;
static const PropertyInfo AnimationEvent_t170____messageOptions_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "messageOptions"/* name */
	, &AnimationEvent_get_messageOptions_m863_MethodInfo/* get */
	, &AnimationEvent_set_messageOptions_m864_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_isFiredByLegacy_m865_MethodInfo;
static const PropertyInfo AnimationEvent_t170____isFiredByLegacy_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "isFiredByLegacy"/* name */
	, &AnimationEvent_get_isFiredByLegacy_m865_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_isFiredByAnimator_m866_MethodInfo;
static const PropertyInfo AnimationEvent_t170____isFiredByAnimator_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "isFiredByAnimator"/* name */
	, &AnimationEvent_get_isFiredByAnimator_m866_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_animationState_m867_MethodInfo;
static const PropertyInfo AnimationEvent_t170____animationState_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "animationState"/* name */
	, &AnimationEvent_get_animationState_m867_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_animatorStateInfo_m868_MethodInfo;
static const PropertyInfo AnimationEvent_t170____animatorStateInfo_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "animatorStateInfo"/* name */
	, &AnimationEvent_get_animatorStateInfo_m868_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimationEvent_get_animatorClipInfo_m869_MethodInfo;
static const PropertyInfo AnimationEvent_t170____animatorClipInfo_PropertyInfo = 
{
	&AnimationEvent_t170_il2cpp_TypeInfo/* parent */
	, "animatorClipInfo"/* name */
	, &AnimationEvent_get_animatorClipInfo_m869_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AnimationEvent_t170_PropertyInfos[] =
{
	&AnimationEvent_t170____data_PropertyInfo,
	&AnimationEvent_t170____stringParameter_PropertyInfo,
	&AnimationEvent_t170____floatParameter_PropertyInfo,
	&AnimationEvent_t170____intParameter_PropertyInfo,
	&AnimationEvent_t170____objectReferenceParameter_PropertyInfo,
	&AnimationEvent_t170____functionName_PropertyInfo,
	&AnimationEvent_t170____time_PropertyInfo,
	&AnimationEvent_t170____messageOptions_PropertyInfo,
	&AnimationEvent_t170____isFiredByLegacy_PropertyInfo,
	&AnimationEvent_t170____isFiredByAnimator_PropertyInfo,
	&AnimationEvent_t170____animationState_PropertyInfo,
	&AnimationEvent_t170____animatorStateInfo_PropertyInfo,
	&AnimationEvent_t170____animatorClipInfo_PropertyInfo,
	NULL
};
static const Il2CppMethodReference AnimationEvent_t170_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AnimationEvent_t170_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimationEvent_t170_0_0_0;
extern const Il2CppType AnimationEvent_t170_1_0_0;
struct AnimationEvent_t170;
const Il2CppTypeDefinitionMetadata AnimationEvent_t170_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnimationEvent_t170_VTable/* vtableMethods */
	, AnimationEvent_t170_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 711/* fieldStart */

};
TypeInfo AnimationEvent_t170_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimationEvent"/* name */
	, "UnityEngine"/* namespaze */
	, AnimationEvent_t170_MethodInfos/* methods */
	, AnimationEvent_t170_PropertyInfos/* properties */
	, NULL/* events */
	, &AnimationEvent_t170_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnimationEvent_t170_0_0_0/* byval_arg */
	, &AnimationEvent_t170_1_0_0/* this_arg */
	, &AnimationEvent_t170_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnimationEvent_t170)/* instance_size */
	, sizeof (AnimationEvent_t170)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057033/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 23/* method_count */
	, 13/* property_count */
	, 11/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// Metadata Definition UnityEngine.Keyframe
extern TypeInfo Keyframe_t173_il2cpp_TypeInfo;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_KeyframeMethodDeclarations.h"
static const MethodInfo* Keyframe_t173_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference Keyframe_t173_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool Keyframe_t173_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Keyframe_t173_0_0_0;
extern const Il2CppType Keyframe_t173_1_0_0;
const Il2CppTypeDefinitionMetadata Keyframe_t173_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, Keyframe_t173_VTable/* vtableMethods */
	, Keyframe_t173_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 722/* fieldStart */

};
TypeInfo Keyframe_t173_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Keyframe"/* name */
	, "UnityEngine"/* namespaze */
	, Keyframe_t173_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Keyframe_t173_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Keyframe_t173_0_0_0/* byval_arg */
	, &Keyframe_t173_1_0_0/* this_arg */
	, &Keyframe_t173_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Keyframe_t173)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Keyframe_t173)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Keyframe_t173 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurve.h"
// Metadata Definition UnityEngine.AnimationCurve
extern TypeInfo AnimationCurve_t174_il2cpp_TypeInfo;
// UnityEngine.AnimationCurve
#include "UnityEngine_UnityEngine_AnimationCurveMethodDeclarations.h"
extern const Il2CppType KeyframeU5BU5D_t321_0_0_0;
extern const Il2CppType KeyframeU5BU5D_t321_0_0_0;
static const ParameterInfo AnimationCurve_t174_AnimationCurve__ctor_m871_ParameterInfos[] = 
{
	{"keys", 0, 134218556, 239, &KeyframeU5BU5D_t321_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern const MethodInfo AnimationCurve__ctor_m871_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnimationCurve__ctor_m871/* method */
	, &AnimationCurve_t174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AnimationCurve_t174_AnimationCurve__ctor_m871_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationCurve::.ctor()
extern const MethodInfo AnimationCurve__ctor_m872_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnimationCurve__ctor_m872/* method */
	, &AnimationCurve_t174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern const MethodInfo AnimationCurve_Cleanup_m873_MethodInfo = 
{
	"Cleanup"/* name */
	, (methodPointerType)&AnimationCurve_Cleanup_m873/* method */
	, &AnimationCurve_t174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 240/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationCurve::Finalize()
extern const MethodInfo AnimationCurve_Finalize_m874_MethodInfo = 
{
	"Finalize"/* name */
	, (methodPointerType)&AnimationCurve_Finalize_m874/* method */
	, &AnimationCurve_t174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyframeU5BU5D_t321_0_0_0;
static const ParameterInfo AnimationCurve_t174_AnimationCurve_Init_m875_ParameterInfos[] = 
{
	{"keys", 0, 134218557, 0, &KeyframeU5BU5D_t321_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern const MethodInfo AnimationCurve_Init_m875_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&AnimationCurve_Init_m875/* method */
	, &AnimationCurve_t174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AnimationCurve_t174_AnimationCurve_Init_m875_ParameterInfos/* parameters */
	, 241/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AnimationCurve_t174_MethodInfos[] =
{
	&AnimationCurve__ctor_m871_MethodInfo,
	&AnimationCurve__ctor_m872_MethodInfo,
	&AnimationCurve_Cleanup_m873_MethodInfo,
	&AnimationCurve_Finalize_m874_MethodInfo,
	&AnimationCurve_Init_m875_MethodInfo,
	NULL
};
extern const MethodInfo AnimationCurve_Finalize_m874_MethodInfo;
static const Il2CppMethodReference AnimationCurve_t174_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&AnimationCurve_Finalize_m874_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AnimationCurve_t174_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimationCurve_t174_0_0_0;
extern const Il2CppType AnimationCurve_t174_1_0_0;
struct AnimationCurve_t174;
const Il2CppTypeDefinitionMetadata AnimationCurve_t174_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnimationCurve_t174_VTable/* vtableMethods */
	, AnimationCurve_t174_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 726/* fieldStart */

};
TypeInfo AnimationCurve_t174_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimationCurve"/* name */
	, "UnityEngine"/* namespaze */
	, AnimationCurve_t174_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AnimationCurve_t174_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 238/* custom_attributes_cache */
	, &AnimationCurve_t174_0_0_0/* byval_arg */
	, &AnimationCurve_t174_1_0_0/* this_arg */
	, &AnimationCurve_t174_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)AnimationCurve_t174_marshal/* marshal_to_native_func */
	, (methodPointerType)AnimationCurve_t174_marshal_back/* marshal_from_native_func */
	, (methodPointerType)AnimationCurve_t174_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (AnimationCurve_t174)/* instance_size */
	, sizeof (AnimationCurve_t174)/* actualSize */
	, 0/* element_size */
	, sizeof(AnimationCurve_t174_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, true/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationState.h"
// Metadata Definition UnityEngine.AnimationState
extern TypeInfo AnimationState_t169_il2cpp_TypeInfo;
// UnityEngine.AnimationState
#include "UnityEngine_UnityEngine_AnimationStateMethodDeclarations.h"
static const MethodInfo* AnimationState_t169_MethodInfos[] =
{
	NULL
};
extern const MethodInfo TrackedReference_Equals_m1337_MethodInfo;
extern const MethodInfo TrackedReference_GetHashCode_m1338_MethodInfo;
static const Il2CppMethodReference AnimationState_t169_VTable[] =
{
	&TrackedReference_Equals_m1337_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&TrackedReference_GetHashCode_m1338_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AnimationState_t169_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimationState_t169_1_0_0;
extern const Il2CppType TrackedReference_t175_0_0_0;
struct AnimationState_t169;
const Il2CppTypeDefinitionMetadata AnimationState_t169_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &TrackedReference_t175_0_0_0/* parent */
	, AnimationState_t169_VTable/* vtableMethods */
	, AnimationState_t169_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AnimationState_t169_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimationState"/* name */
	, "UnityEngine"/* namespaze */
	, AnimationState_t169_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AnimationState_t169_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnimationState_t169_0_0_0/* byval_arg */
	, &AnimationState_t169_1_0_0/* this_arg */
	, &AnimationState_t169_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnimationState_t169)/* instance_size */
	, sizeof (AnimationState_t169)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfo.h"
// Metadata Definition UnityEngine.AnimatorClipInfo
extern TypeInfo AnimatorClipInfo_t172_il2cpp_TypeInfo;
// UnityEngine.AnimatorClipInfo
#include "UnityEngine_UnityEngine_AnimatorClipInfoMethodDeclarations.h"
static const MethodInfo* AnimatorClipInfo_t172_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference AnimatorClipInfo_t172_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool AnimatorClipInfo_t172_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimatorClipInfo_t172_1_0_0;
const Il2CppTypeDefinitionMetadata AnimatorClipInfo_t172_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, AnimatorClipInfo_t172_VTable/* vtableMethods */
	, AnimatorClipInfo_t172_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 727/* fieldStart */

};
TypeInfo AnimatorClipInfo_t172_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimatorClipInfo"/* name */
	, "UnityEngine"/* namespaze */
	, AnimatorClipInfo_t172_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AnimatorClipInfo_t172_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnimatorClipInfo_t172_0_0_0/* byval_arg */
	, &AnimatorClipInfo_t172_1_0_0/* this_arg */
	, &AnimatorClipInfo_t172_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnimatorClipInfo_t172)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (AnimatorClipInfo_t172)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(AnimatorClipInfo_t172 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// Metadata Definition UnityEngine.AnimatorStateInfo
extern TypeInfo AnimatorStateInfo_t171_il2cpp_TypeInfo;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfoMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimatorStateInfo_t171_AnimatorStateInfo_IsName_m876_ParameterInfos[] = 
{
	{"name", 0, 134218558, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern const MethodInfo AnimatorStateInfo_IsName_m876_MethodInfo = 
{
	"IsName"/* name */
	, (methodPointerType)&AnimatorStateInfo_IsName_m876/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, AnimatorStateInfo_t171_AnimatorStateInfo_IsName_m876_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern const MethodInfo AnimatorStateInfo_get_fullPathHash_m877_MethodInfo = 
{
	"get_fullPathHash"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_fullPathHash_m877/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern const MethodInfo AnimatorStateInfo_get_nameHash_m878_MethodInfo = 
{
	"get_nameHash"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_nameHash_m878/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern const MethodInfo AnimatorStateInfo_get_shortNameHash_m879_MethodInfo = 
{
	"get_shortNameHash"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_shortNameHash_m879/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern const MethodInfo AnimatorStateInfo_get_normalizedTime_m880_MethodInfo = 
{
	"get_normalizedTime"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_normalizedTime_m880/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern const MethodInfo AnimatorStateInfo_get_length_m881_MethodInfo = 
{
	"get_length"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_length_m881/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern const MethodInfo AnimatorStateInfo_get_tagHash_m882_MethodInfo = 
{
	"get_tagHash"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_tagHash_m882/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimatorStateInfo_t171_AnimatorStateInfo_IsTag_m883_ParameterInfos[] = 
{
	{"tag", 0, 134218559, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern const MethodInfo AnimatorStateInfo_IsTag_m883_MethodInfo = 
{
	"IsTag"/* name */
	, (methodPointerType)&AnimatorStateInfo_IsTag_m883/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, AnimatorStateInfo_t171_AnimatorStateInfo_IsTag_m883_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern const MethodInfo AnimatorStateInfo_get_loop_m884_MethodInfo = 
{
	"get_loop"/* name */
	, (methodPointerType)&AnimatorStateInfo_get_loop_m884/* method */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AnimatorStateInfo_t171_MethodInfos[] =
{
	&AnimatorStateInfo_IsName_m876_MethodInfo,
	&AnimatorStateInfo_get_fullPathHash_m877_MethodInfo,
	&AnimatorStateInfo_get_nameHash_m878_MethodInfo,
	&AnimatorStateInfo_get_shortNameHash_m879_MethodInfo,
	&AnimatorStateInfo_get_normalizedTime_m880_MethodInfo,
	&AnimatorStateInfo_get_length_m881_MethodInfo,
	&AnimatorStateInfo_get_tagHash_m882_MethodInfo,
	&AnimatorStateInfo_IsTag_m883_MethodInfo,
	&AnimatorStateInfo_get_loop_m884_MethodInfo,
	NULL
};
extern const MethodInfo AnimatorStateInfo_get_fullPathHash_m877_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____fullPathHash_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "fullPathHash"/* name */
	, &AnimatorStateInfo_get_fullPathHash_m877_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorStateInfo_get_nameHash_m878_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____nameHash_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "nameHash"/* name */
	, &AnimatorStateInfo_get_nameHash_m878_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 242/* custom_attributes_cache */

};
extern const MethodInfo AnimatorStateInfo_get_shortNameHash_m879_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____shortNameHash_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "shortNameHash"/* name */
	, &AnimatorStateInfo_get_shortNameHash_m879_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorStateInfo_get_normalizedTime_m880_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____normalizedTime_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "normalizedTime"/* name */
	, &AnimatorStateInfo_get_normalizedTime_m880_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorStateInfo_get_length_m881_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____length_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "length"/* name */
	, &AnimatorStateInfo_get_length_m881_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorStateInfo_get_tagHash_m882_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____tagHash_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "tagHash"/* name */
	, &AnimatorStateInfo_get_tagHash_m882_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorStateInfo_get_loop_m884_MethodInfo;
static const PropertyInfo AnimatorStateInfo_t171____loop_PropertyInfo = 
{
	&AnimatorStateInfo_t171_il2cpp_TypeInfo/* parent */
	, "loop"/* name */
	, &AnimatorStateInfo_get_loop_m884_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AnimatorStateInfo_t171_PropertyInfos[] =
{
	&AnimatorStateInfo_t171____fullPathHash_PropertyInfo,
	&AnimatorStateInfo_t171____nameHash_PropertyInfo,
	&AnimatorStateInfo_t171____shortNameHash_PropertyInfo,
	&AnimatorStateInfo_t171____normalizedTime_PropertyInfo,
	&AnimatorStateInfo_t171____length_PropertyInfo,
	&AnimatorStateInfo_t171____tagHash_PropertyInfo,
	&AnimatorStateInfo_t171____loop_PropertyInfo,
	NULL
};
static const Il2CppMethodReference AnimatorStateInfo_t171_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool AnimatorStateInfo_t171_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimatorStateInfo_t171_1_0_0;
const Il2CppTypeDefinitionMetadata AnimatorStateInfo_t171_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, AnimatorStateInfo_t171_VTable/* vtableMethods */
	, AnimatorStateInfo_t171_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 729/* fieldStart */

};
TypeInfo AnimatorStateInfo_t171_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimatorStateInfo"/* name */
	, "UnityEngine"/* namespaze */
	, AnimatorStateInfo_t171_MethodInfos/* methods */
	, AnimatorStateInfo_t171_PropertyInfos/* properties */
	, NULL/* events */
	, &AnimatorStateInfo_t171_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnimatorStateInfo_t171_0_0_0/* byval_arg */
	, &AnimatorStateInfo_t171_1_0_0/* this_arg */
	, &AnimatorStateInfo_t171_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnimatorStateInfo_t171)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (AnimatorStateInfo_t171)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(AnimatorStateInfo_t171 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 9/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"
// Metadata Definition UnityEngine.AnimatorTransitionInfo
extern TypeInfo AnimatorTransitionInfo_t176_il2cpp_TypeInfo;
// UnityEngine.AnimatorTransitionInfo
#include "UnityEngine_UnityEngine_AnimatorTransitionInfoMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimatorTransitionInfo_t176_AnimatorTransitionInfo_IsName_m885_ParameterInfos[] = 
{
	{"name", 0, 134218560, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern const MethodInfo AnimatorTransitionInfo_IsName_m885_MethodInfo = 
{
	"IsName"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_IsName_m885/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, AnimatorTransitionInfo_t176_AnimatorTransitionInfo_IsName_m885_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AnimatorTransitionInfo_t176_AnimatorTransitionInfo_IsUserName_m886_ParameterInfos[] = 
{
	{"name", 0, 134218561, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern const MethodInfo AnimatorTransitionInfo_IsUserName_m886_MethodInfo = 
{
	"IsUserName"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_IsUserName_m886/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, AnimatorTransitionInfo_t176_AnimatorTransitionInfo_IsUserName_m886_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern const MethodInfo AnimatorTransitionInfo_get_fullPathHash_m887_MethodInfo = 
{
	"get_fullPathHash"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_fullPathHash_m887/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern const MethodInfo AnimatorTransitionInfo_get_nameHash_m888_MethodInfo = 
{
	"get_nameHash"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_nameHash_m888/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern const MethodInfo AnimatorTransitionInfo_get_userNameHash_m889_MethodInfo = 
{
	"get_userNameHash"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_userNameHash_m889/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Single_t355 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern const MethodInfo AnimatorTransitionInfo_get_normalizedTime_m890_MethodInfo = 
{
	"get_normalizedTime"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_normalizedTime_m890/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern const MethodInfo AnimatorTransitionInfo_get_anyState_m891_MethodInfo = 
{
	"get_anyState"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_anyState_m891/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern const MethodInfo AnimatorTransitionInfo_get_entry_m892_MethodInfo = 
{
	"get_entry"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_entry_m892/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern const MethodInfo AnimatorTransitionInfo_get_exit_m893_MethodInfo = 
{
	"get_exit"/* name */
	, (methodPointerType)&AnimatorTransitionInfo_get_exit_m893/* method */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AnimatorTransitionInfo_t176_MethodInfos[] =
{
	&AnimatorTransitionInfo_IsName_m885_MethodInfo,
	&AnimatorTransitionInfo_IsUserName_m886_MethodInfo,
	&AnimatorTransitionInfo_get_fullPathHash_m887_MethodInfo,
	&AnimatorTransitionInfo_get_nameHash_m888_MethodInfo,
	&AnimatorTransitionInfo_get_userNameHash_m889_MethodInfo,
	&AnimatorTransitionInfo_get_normalizedTime_m890_MethodInfo,
	&AnimatorTransitionInfo_get_anyState_m891_MethodInfo,
	&AnimatorTransitionInfo_get_entry_m892_MethodInfo,
	&AnimatorTransitionInfo_get_exit_m893_MethodInfo,
	NULL
};
extern const MethodInfo AnimatorTransitionInfo_get_fullPathHash_m887_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____fullPathHash_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "fullPathHash"/* name */
	, &AnimatorTransitionInfo_get_fullPathHash_m887_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorTransitionInfo_get_nameHash_m888_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____nameHash_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "nameHash"/* name */
	, &AnimatorTransitionInfo_get_nameHash_m888_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorTransitionInfo_get_userNameHash_m889_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____userNameHash_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "userNameHash"/* name */
	, &AnimatorTransitionInfo_get_userNameHash_m889_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorTransitionInfo_get_normalizedTime_m890_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____normalizedTime_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "normalizedTime"/* name */
	, &AnimatorTransitionInfo_get_normalizedTime_m890_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorTransitionInfo_get_anyState_m891_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____anyState_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "anyState"/* name */
	, &AnimatorTransitionInfo_get_anyState_m891_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorTransitionInfo_get_entry_m892_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____entry_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "entry"/* name */
	, &AnimatorTransitionInfo_get_entry_m892_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AnimatorTransitionInfo_get_exit_m893_MethodInfo;
static const PropertyInfo AnimatorTransitionInfo_t176____exit_PropertyInfo = 
{
	&AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* parent */
	, "exit"/* name */
	, &AnimatorTransitionInfo_get_exit_m893_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AnimatorTransitionInfo_t176_PropertyInfos[] =
{
	&AnimatorTransitionInfo_t176____fullPathHash_PropertyInfo,
	&AnimatorTransitionInfo_t176____nameHash_PropertyInfo,
	&AnimatorTransitionInfo_t176____userNameHash_PropertyInfo,
	&AnimatorTransitionInfo_t176____normalizedTime_PropertyInfo,
	&AnimatorTransitionInfo_t176____anyState_PropertyInfo,
	&AnimatorTransitionInfo_t176____entry_PropertyInfo,
	&AnimatorTransitionInfo_t176____exit_PropertyInfo,
	NULL
};
static const Il2CppMethodReference AnimatorTransitionInfo_t176_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool AnimatorTransitionInfo_t176_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AnimatorTransitionInfo_t176_0_0_0;
extern const Il2CppType AnimatorTransitionInfo_t176_1_0_0;
const Il2CppTypeDefinitionMetadata AnimatorTransitionInfo_t176_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, AnimatorTransitionInfo_t176_VTable/* vtableMethods */
	, AnimatorTransitionInfo_t176_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 736/* fieldStart */

};
TypeInfo AnimatorTransitionInfo_t176_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnimatorTransitionInfo"/* name */
	, "UnityEngine"/* namespaze */
	, AnimatorTransitionInfo_t176_MethodInfos/* methods */
	, AnimatorTransitionInfo_t176_PropertyInfos/* properties */
	, NULL/* events */
	, &AnimatorTransitionInfo_t176_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AnimatorTransitionInfo_t176_0_0_0/* byval_arg */
	, &AnimatorTransitionInfo_t176_1_0_0/* this_arg */
	, &AnimatorTransitionInfo_t176_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)AnimatorTransitionInfo_t176_marshal/* marshal_to_native_func */
	, (methodPointerType)AnimatorTransitionInfo_t176_marshal_back/* marshal_from_native_func */
	, (methodPointerType)AnimatorTransitionInfo_t176_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (AnimatorTransitionInfo_t176)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (AnimatorTransitionInfo_t176)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(AnimatorTransitionInfo_t176_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 7/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// Metadata Definition UnityEngine.Animator
extern TypeInfo Animator_t177_il2cpp_TypeInfo;
// UnityEngine.Animator
#include "UnityEngine_UnityEngine_AnimatorMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Animator_t177_Animator_StringToHash_m894_ParameterInfos[] = 
{
	{"name", 0, 134218562, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Int32_t18_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern const MethodInfo Animator_StringToHash_m894_MethodInfo = 
{
	"StringToHash"/* name */
	, (methodPointerType)&Animator_StringToHash_m894/* method */
	, &Animator_t177_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, Animator_t177_Animator_StringToHash_m894_ParameterInfos/* parameters */
	, 243/* custom_attributes_cache */
	, 150/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Animator_t177_MethodInfos[] =
{
	&Animator_StringToHash_m894_MethodInfo,
	NULL
};
static const Il2CppMethodReference Animator_t177_VTable[] =
{
	&Object_Equals_m90_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m92_MethodInfo,
	&Object_ToString_m93_MethodInfo,
};
static bool Animator_t177_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Animator_t177_0_0_0;
extern const Il2CppType Animator_t177_1_0_0;
extern const Il2CppType Behaviour_t80_0_0_0;
struct Animator_t177;
const Il2CppTypeDefinitionMetadata Animator_t177_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Behaviour_t80_0_0_0/* parent */
	, Animator_t177_VTable/* vtableMethods */
	, Animator_t177_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo Animator_t177_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Animator"/* name */
	, "UnityEngine"/* namespaze */
	, Animator_t177_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Animator_t177_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Animator_t177_0_0_0/* byval_arg */
	, &Animator_t177_1_0_0/* this_arg */
	, &Animator_t177_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Animator_t177)/* instance_size */
	, sizeof (Animator_t177)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBone.h"
// Metadata Definition UnityEngine.SkeletonBone
extern TypeInfo SkeletonBone_t178_il2cpp_TypeInfo;
// UnityEngine.SkeletonBone
#include "UnityEngine_UnityEngine_SkeletonBoneMethodDeclarations.h"
static const MethodInfo* SkeletonBone_t178_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference SkeletonBone_t178_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool SkeletonBone_t178_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SkeletonBone_t178_0_0_0;
extern const Il2CppType SkeletonBone_t178_1_0_0;
const Il2CppTypeDefinitionMetadata SkeletonBone_t178_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, SkeletonBone_t178_VTable/* vtableMethods */
	, SkeletonBone_t178_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 742/* fieldStart */

};
TypeInfo SkeletonBone_t178_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SkeletonBone"/* name */
	, "UnityEngine"/* namespaze */
	, SkeletonBone_t178_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SkeletonBone_t178_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SkeletonBone_t178_0_0_0/* byval_arg */
	, &SkeletonBone_t178_1_0_0/* this_arg */
	, &SkeletonBone_t178_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)SkeletonBone_t178_marshal/* marshal_to_native_func */
	, (methodPointerType)SkeletonBone_t178_marshal_back/* marshal_from_native_func */
	, (methodPointerType)SkeletonBone_t178_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (SkeletonBone_t178)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (SkeletonBone_t178)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(SkeletonBone_t178_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimit.h"
// Metadata Definition UnityEngine.HumanLimit
extern TypeInfo HumanLimit_t179_il2cpp_TypeInfo;
// UnityEngine.HumanLimit
#include "UnityEngine_UnityEngine_HumanLimitMethodDeclarations.h"
static const MethodInfo* HumanLimit_t179_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference HumanLimit_t179_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool HumanLimit_t179_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType HumanLimit_t179_0_0_0;
extern const Il2CppType HumanLimit_t179_1_0_0;
const Il2CppTypeDefinitionMetadata HumanLimit_t179_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, HumanLimit_t179_VTable/* vtableMethods */
	, HumanLimit_t179_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 747/* fieldStart */

};
TypeInfo HumanLimit_t179_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "HumanLimit"/* name */
	, "UnityEngine"/* namespaze */
	, HumanLimit_t179_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HumanLimit_t179_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &HumanLimit_t179_0_0_0/* byval_arg */
	, &HumanLimit_t179_1_0_0/* this_arg */
	, &HumanLimit_t179_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HumanLimit_t179)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (HumanLimit_t179)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(HumanLimit_t179 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBone.h"
// Metadata Definition UnityEngine.HumanBone
extern TypeInfo HumanBone_t180_il2cpp_TypeInfo;
// UnityEngine.HumanBone
#include "UnityEngine_UnityEngine_HumanBoneMethodDeclarations.h"
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.HumanBone::get_boneName()
extern const MethodInfo HumanBone_get_boneName_m895_MethodInfo = 
{
	"get_boneName"/* name */
	, (methodPointerType)&HumanBone_get_boneName_m895/* method */
	, &HumanBone_t180_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo HumanBone_t180_HumanBone_set_boneName_m896_ParameterInfos[] = 
{
	{"value", 0, 134218563, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern const MethodInfo HumanBone_set_boneName_m896_MethodInfo = 
{
	"set_boneName"/* name */
	, (methodPointerType)&HumanBone_set_boneName_m896/* method */
	, &HumanBone_t180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, HumanBone_t180_HumanBone_set_boneName_m896_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.HumanBone::get_humanName()
extern const MethodInfo HumanBone_get_humanName_m897_MethodInfo = 
{
	"get_humanName"/* name */
	, (methodPointerType)&HumanBone_get_humanName_m897/* method */
	, &HumanBone_t180_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo HumanBone_t180_HumanBone_set_humanName_m898_ParameterInfos[] = 
{
	{"value", 0, 134218564, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern const MethodInfo HumanBone_set_humanName_m898_MethodInfo = 
{
	"set_humanName"/* name */
	, (methodPointerType)&HumanBone_set_humanName_m898/* method */
	, &HumanBone_t180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, HumanBone_t180_HumanBone_set_humanName_m898_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HumanBone_t180_MethodInfos[] =
{
	&HumanBone_get_boneName_m895_MethodInfo,
	&HumanBone_set_boneName_m896_MethodInfo,
	&HumanBone_get_humanName_m897_MethodInfo,
	&HumanBone_set_humanName_m898_MethodInfo,
	NULL
};
extern const MethodInfo HumanBone_get_boneName_m895_MethodInfo;
extern const MethodInfo HumanBone_set_boneName_m896_MethodInfo;
static const PropertyInfo HumanBone_t180____boneName_PropertyInfo = 
{
	&HumanBone_t180_il2cpp_TypeInfo/* parent */
	, "boneName"/* name */
	, &HumanBone_get_boneName_m895_MethodInfo/* get */
	, &HumanBone_set_boneName_m896_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo HumanBone_get_humanName_m897_MethodInfo;
extern const MethodInfo HumanBone_set_humanName_m898_MethodInfo;
static const PropertyInfo HumanBone_t180____humanName_PropertyInfo = 
{
	&HumanBone_t180_il2cpp_TypeInfo/* parent */
	, "humanName"/* name */
	, &HumanBone_get_humanName_m897_MethodInfo/* get */
	, &HumanBone_set_humanName_m898_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* HumanBone_t180_PropertyInfos[] =
{
	&HumanBone_t180____boneName_PropertyInfo,
	&HumanBone_t180____humanName_PropertyInfo,
	NULL
};
static const Il2CppMethodReference HumanBone_t180_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool HumanBone_t180_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType HumanBone_t180_0_0_0;
extern const Il2CppType HumanBone_t180_1_0_0;
const Il2CppTypeDefinitionMetadata HumanBone_t180_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, HumanBone_t180_VTable/* vtableMethods */
	, HumanBone_t180_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 752/* fieldStart */

};
TypeInfo HumanBone_t180_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "HumanBone"/* name */
	, "UnityEngine"/* namespaze */
	, HumanBone_t180_MethodInfos/* methods */
	, HumanBone_t180_PropertyInfos/* properties */
	, NULL/* events */
	, &HumanBone_t180_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &HumanBone_t180_0_0_0/* byval_arg */
	, &HumanBone_t180_1_0_0/* this_arg */
	, &HumanBone_t180_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)HumanBone_t180_marshal/* marshal_to_native_func */
	, (methodPointerType)HumanBone_t180_marshal_back/* marshal_from_native_func */
	, (methodPointerType)HumanBone_t180_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (HumanBone_t180)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (HumanBone_t180)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(HumanBone_t180_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// Metadata Definition UnityEngine.TextAnchor
extern TypeInfo TextAnchor_t181_il2cpp_TypeInfo;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchorMethodDeclarations.h"
static const MethodInfo* TextAnchor_t181_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TextAnchor_t181_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool TextAnchor_t181_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TextAnchor_t181_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextAnchor_t181_0_0_0;
extern const Il2CppType TextAnchor_t181_1_0_0;
const Il2CppTypeDefinitionMetadata TextAnchor_t181_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TextAnchor_t181_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, TextAnchor_t181_VTable/* vtableMethods */
	, TextAnchor_t181_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 755/* fieldStart */

};
TypeInfo TextAnchor_t181_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextAnchor"/* name */
	, "UnityEngine"/* namespaze */
	, TextAnchor_t181_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t18_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextAnchor_t181_0_0_0/* byval_arg */
	, &TextAnchor_t181_1_0_0/* this_arg */
	, &TextAnchor_t181_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextAnchor_t181)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TextAnchor_t181)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// Metadata Definition UnityEngine.HorizontalWrapMode
extern TypeInfo HorizontalWrapMode_t182_il2cpp_TypeInfo;
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapModeMethodDeclarations.h"
static const MethodInfo* HorizontalWrapMode_t182_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference HorizontalWrapMode_t182_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool HorizontalWrapMode_t182_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair HorizontalWrapMode_t182_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType HorizontalWrapMode_t182_0_0_0;
extern const Il2CppType HorizontalWrapMode_t182_1_0_0;
const Il2CppTypeDefinitionMetadata HorizontalWrapMode_t182_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, HorizontalWrapMode_t182_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, HorizontalWrapMode_t182_VTable/* vtableMethods */
	, HorizontalWrapMode_t182_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 765/* fieldStart */

};
TypeInfo HorizontalWrapMode_t182_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "HorizontalWrapMode"/* name */
	, "UnityEngine"/* namespaze */
	, HorizontalWrapMode_t182_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t18_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &HorizontalWrapMode_t182_0_0_0/* byval_arg */
	, &HorizontalWrapMode_t182_1_0_0/* this_arg */
	, &HorizontalWrapMode_t182_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HorizontalWrapMode_t182)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (HorizontalWrapMode_t182)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// Metadata Definition UnityEngine.VerticalWrapMode
extern TypeInfo VerticalWrapMode_t183_il2cpp_TypeInfo;
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapModeMethodDeclarations.h"
static const MethodInfo* VerticalWrapMode_t183_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference VerticalWrapMode_t183_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool VerticalWrapMode_t183_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair VerticalWrapMode_t183_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType VerticalWrapMode_t183_0_0_0;
extern const Il2CppType VerticalWrapMode_t183_1_0_0;
const Il2CppTypeDefinitionMetadata VerticalWrapMode_t183_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, VerticalWrapMode_t183_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, VerticalWrapMode_t183_VTable/* vtableMethods */
	, VerticalWrapMode_t183_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 768/* fieldStart */

};
TypeInfo VerticalWrapMode_t183_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "VerticalWrapMode"/* name */
	, "UnityEngine"/* namespaze */
	, VerticalWrapMode_t183_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t18_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &VerticalWrapMode_t183_0_0_0/* byval_arg */
	, &VerticalWrapMode_t183_1_0_0/* this_arg */
	, &VerticalWrapMode_t183_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (VerticalWrapMode_t183)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (VerticalWrapMode_t183)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// Metadata Definition UnityEngine.CharacterInfo
extern TypeInfo CharacterInfo_t184_il2cpp_TypeInfo;
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfoMethodDeclarations.h"
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern const MethodInfo CharacterInfo_get_advance_m899_MethodInfo = 
{
	"get_advance"/* name */
	, (methodPointerType)&CharacterInfo_get_advance_m899/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_glyphWidth()
extern const MethodInfo CharacterInfo_get_glyphWidth_m900_MethodInfo = 
{
	"get_glyphWidth"/* name */
	, (methodPointerType)&CharacterInfo_get_glyphWidth_m900/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_glyphHeight()
extern const MethodInfo CharacterInfo_get_glyphHeight_m901_MethodInfo = 
{
	"get_glyphHeight"/* name */
	, (methodPointerType)&CharacterInfo_get_glyphHeight_m901/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_bearing()
extern const MethodInfo CharacterInfo_get_bearing_m902_MethodInfo = 
{
	"get_bearing"/* name */
	, (methodPointerType)&CharacterInfo_get_bearing_m902/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern const MethodInfo CharacterInfo_get_minY_m903_MethodInfo = 
{
	"get_minY"/* name */
	, (methodPointerType)&CharacterInfo_get_minY_m903/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern const MethodInfo CharacterInfo_get_maxY_m904_MethodInfo = 
{
	"get_maxY"/* name */
	, (methodPointerType)&CharacterInfo_get_maxY_m904/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern const MethodInfo CharacterInfo_get_minX_m905_MethodInfo = 
{
	"get_minX"/* name */
	, (methodPointerType)&CharacterInfo_get_minX_m905/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern const MethodInfo CharacterInfo_get_maxX_m906_MethodInfo = 
{
	"get_maxX"/* name */
	, (methodPointerType)&CharacterInfo_get_maxX_m906/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Vector2_t15_0_0_0;
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern const MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m907_MethodInfo = 
{
	"get_uvBottomLeftUnFlipped"/* name */
	, (methodPointerType)&CharacterInfo_get_uvBottomLeftUnFlipped_m907/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern const MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m908_MethodInfo = 
{
	"get_uvBottomRightUnFlipped"/* name */
	, (methodPointerType)&CharacterInfo_get_uvBottomRightUnFlipped_m908/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern const MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m909_MethodInfo = 
{
	"get_uvTopRightUnFlipped"/* name */
	, (methodPointerType)&CharacterInfo_get_uvTopRightUnFlipped_m909/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern const MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m910_MethodInfo = 
{
	"get_uvTopLeftUnFlipped"/* name */
	, (methodPointerType)&CharacterInfo_get_uvTopLeftUnFlipped_m910/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern const MethodInfo CharacterInfo_get_uvBottomLeft_m911_MethodInfo = 
{
	"get_uvBottomLeft"/* name */
	, (methodPointerType)&CharacterInfo_get_uvBottomLeft_m911/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern const MethodInfo CharacterInfo_get_uvBottomRight_m912_MethodInfo = 
{
	"get_uvBottomRight"/* name */
	, (methodPointerType)&CharacterInfo_get_uvBottomRight_m912/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern const MethodInfo CharacterInfo_get_uvTopRight_m913_MethodInfo = 
{
	"get_uvTopRight"/* name */
	, (methodPointerType)&CharacterInfo_get_uvTopRight_m913/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Vector2_t15 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern const MethodInfo CharacterInfo_get_uvTopLeft_m914_MethodInfo = 
{
	"get_uvTopLeft"/* name */
	, (methodPointerType)&CharacterInfo_get_uvTopLeft_m914/* method */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* declaring_type */
	, &Vector2_t15_0_0_0/* return_type */
	, RuntimeInvoker_Vector2_t15/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CharacterInfo_t184_MethodInfos[] =
{
	&CharacterInfo_get_advance_m899_MethodInfo,
	&CharacterInfo_get_glyphWidth_m900_MethodInfo,
	&CharacterInfo_get_glyphHeight_m901_MethodInfo,
	&CharacterInfo_get_bearing_m902_MethodInfo,
	&CharacterInfo_get_minY_m903_MethodInfo,
	&CharacterInfo_get_maxY_m904_MethodInfo,
	&CharacterInfo_get_minX_m905_MethodInfo,
	&CharacterInfo_get_maxX_m906_MethodInfo,
	&CharacterInfo_get_uvBottomLeftUnFlipped_m907_MethodInfo,
	&CharacterInfo_get_uvBottomRightUnFlipped_m908_MethodInfo,
	&CharacterInfo_get_uvTopRightUnFlipped_m909_MethodInfo,
	&CharacterInfo_get_uvTopLeftUnFlipped_m910_MethodInfo,
	&CharacterInfo_get_uvBottomLeft_m911_MethodInfo,
	&CharacterInfo_get_uvBottomRight_m912_MethodInfo,
	&CharacterInfo_get_uvTopRight_m913_MethodInfo,
	&CharacterInfo_get_uvTopLeft_m914_MethodInfo,
	NULL
};
extern const MethodInfo CharacterInfo_get_advance_m899_MethodInfo;
static const PropertyInfo CharacterInfo_t184____advance_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "advance"/* name */
	, &CharacterInfo_get_advance_m899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_glyphWidth_m900_MethodInfo;
static const PropertyInfo CharacterInfo_t184____glyphWidth_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "glyphWidth"/* name */
	, &CharacterInfo_get_glyphWidth_m900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_glyphHeight_m901_MethodInfo;
static const PropertyInfo CharacterInfo_t184____glyphHeight_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "glyphHeight"/* name */
	, &CharacterInfo_get_glyphHeight_m901_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_bearing_m902_MethodInfo;
static const PropertyInfo CharacterInfo_t184____bearing_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "bearing"/* name */
	, &CharacterInfo_get_bearing_m902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_minY_m903_MethodInfo;
static const PropertyInfo CharacterInfo_t184____minY_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "minY"/* name */
	, &CharacterInfo_get_minY_m903_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_maxY_m904_MethodInfo;
static const PropertyInfo CharacterInfo_t184____maxY_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "maxY"/* name */
	, &CharacterInfo_get_maxY_m904_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_minX_m905_MethodInfo;
static const PropertyInfo CharacterInfo_t184____minX_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "minX"/* name */
	, &CharacterInfo_get_minX_m905_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_maxX_m906_MethodInfo;
static const PropertyInfo CharacterInfo_t184____maxX_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "maxX"/* name */
	, &CharacterInfo_get_maxX_m906_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvBottomLeftUnFlipped_m907_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvBottomLeftUnFlipped_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvBottomLeftUnFlipped"/* name */
	, &CharacterInfo_get_uvBottomLeftUnFlipped_m907_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvBottomRightUnFlipped_m908_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvBottomRightUnFlipped_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvBottomRightUnFlipped"/* name */
	, &CharacterInfo_get_uvBottomRightUnFlipped_m908_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvTopRightUnFlipped_m909_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvTopRightUnFlipped_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvTopRightUnFlipped"/* name */
	, &CharacterInfo_get_uvTopRightUnFlipped_m909_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvTopLeftUnFlipped_m910_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvTopLeftUnFlipped_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvTopLeftUnFlipped"/* name */
	, &CharacterInfo_get_uvTopLeftUnFlipped_m910_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvBottomLeft_m911_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvBottomLeft_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvBottomLeft"/* name */
	, &CharacterInfo_get_uvBottomLeft_m911_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvBottomRight_m912_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvBottomRight_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvBottomRight"/* name */
	, &CharacterInfo_get_uvBottomRight_m912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvTopRight_m913_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvTopRight_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvTopRight"/* name */
	, &CharacterInfo_get_uvTopRight_m913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CharacterInfo_get_uvTopLeft_m914_MethodInfo;
static const PropertyInfo CharacterInfo_t184____uvTopLeft_PropertyInfo = 
{
	&CharacterInfo_t184_il2cpp_TypeInfo/* parent */
	, "uvTopLeft"/* name */
	, &CharacterInfo_get_uvTopLeft_m914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CharacterInfo_t184_PropertyInfos[] =
{
	&CharacterInfo_t184____advance_PropertyInfo,
	&CharacterInfo_t184____glyphWidth_PropertyInfo,
	&CharacterInfo_t184____glyphHeight_PropertyInfo,
	&CharacterInfo_t184____bearing_PropertyInfo,
	&CharacterInfo_t184____minY_PropertyInfo,
	&CharacterInfo_t184____maxY_PropertyInfo,
	&CharacterInfo_t184____minX_PropertyInfo,
	&CharacterInfo_t184____maxX_PropertyInfo,
	&CharacterInfo_t184____uvBottomLeftUnFlipped_PropertyInfo,
	&CharacterInfo_t184____uvBottomRightUnFlipped_PropertyInfo,
	&CharacterInfo_t184____uvTopRightUnFlipped_PropertyInfo,
	&CharacterInfo_t184____uvTopLeftUnFlipped_PropertyInfo,
	&CharacterInfo_t184____uvBottomLeft_PropertyInfo,
	&CharacterInfo_t184____uvBottomRight_PropertyInfo,
	&CharacterInfo_t184____uvTopRight_PropertyInfo,
	&CharacterInfo_t184____uvTopLeft_PropertyInfo,
	NULL
};
static const Il2CppMethodReference CharacterInfo_t184_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool CharacterInfo_t184_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CharacterInfo_t184_0_0_0;
extern const Il2CppType CharacterInfo_t184_1_0_0;
const Il2CppTypeDefinitionMetadata CharacterInfo_t184_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, CharacterInfo_t184_VTable/* vtableMethods */
	, CharacterInfo_t184_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 771/* fieldStart */

};
TypeInfo CharacterInfo_t184_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CharacterInfo"/* name */
	, "UnityEngine"/* namespaze */
	, CharacterInfo_t184_MethodInfos/* methods */
	, CharacterInfo_t184_PropertyInfos/* properties */
	, NULL/* events */
	, &CharacterInfo_t184_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CharacterInfo_t184_0_0_0/* byval_arg */
	, &CharacterInfo_t184_1_0_0/* this_arg */
	, &CharacterInfo_t184_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)CharacterInfo_t184_marshal/* marshal_to_native_func */
	, (methodPointerType)CharacterInfo_t184_marshal_back/* marshal_from_native_func */
	, (methodPointerType)CharacterInfo_t184_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (CharacterInfo_t184)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (CharacterInfo_t184)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(CharacterInfo_t184_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 16/* method_count */
	, 16/* property_count */
	, 8/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallback.h"
// Metadata Definition UnityEngine.Font/FontTextureRebuildCallback
extern TypeInfo FontTextureRebuildCallback_t185_il2cpp_TypeInfo;
// UnityEngine.Font/FontTextureRebuildCallback
#include "UnityEngine_UnityEngine_Font_FontTextureRebuildCallbackMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo FontTextureRebuildCallback_t185_FontTextureRebuildCallback__ctor_m915_ParameterInfos[] = 
{
	{"object", 0, 134218566, 0, &Object_t_0_0_0},
	{"method", 1, 134218567, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern const MethodInfo FontTextureRebuildCallback__ctor_m915_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FontTextureRebuildCallback__ctor_m915/* method */
	, &FontTextureRebuildCallback_t185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, FontTextureRebuildCallback_t185_FontTextureRebuildCallback__ctor_m915_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern const MethodInfo FontTextureRebuildCallback_Invoke_m916_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&FontTextureRebuildCallback_Invoke_m916/* method */
	, &FontTextureRebuildCallback_t185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo FontTextureRebuildCallback_t185_FontTextureRebuildCallback_BeginInvoke_m917_ParameterInfos[] = 
{
	{"callback", 0, 134218568, 0, &AsyncCallback_t8_0_0_0},
	{"object", 1, 134218569, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern const MethodInfo FontTextureRebuildCallback_BeginInvoke_m917_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&FontTextureRebuildCallback_BeginInvoke_m917/* method */
	, &FontTextureRebuildCallback_t185_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, FontTextureRebuildCallback_t185_FontTextureRebuildCallback_BeginInvoke_m917_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo FontTextureRebuildCallback_t185_FontTextureRebuildCallback_EndInvoke_m918_ParameterInfos[] = 
{
	{"result", 0, 134218570, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern const MethodInfo FontTextureRebuildCallback_EndInvoke_m918_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&FontTextureRebuildCallback_EndInvoke_m918/* method */
	, &FontTextureRebuildCallback_t185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, FontTextureRebuildCallback_t185_FontTextureRebuildCallback_EndInvoke_m918_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* FontTextureRebuildCallback_t185_MethodInfos[] =
{
	&FontTextureRebuildCallback__ctor_m915_MethodInfo,
	&FontTextureRebuildCallback_Invoke_m916_MethodInfo,
	&FontTextureRebuildCallback_BeginInvoke_m917_MethodInfo,
	&FontTextureRebuildCallback_EndInvoke_m918_MethodInfo,
	NULL
};
extern const MethodInfo FontTextureRebuildCallback_Invoke_m916_MethodInfo;
extern const MethodInfo FontTextureRebuildCallback_BeginInvoke_m917_MethodInfo;
extern const MethodInfo FontTextureRebuildCallback_EndInvoke_m918_MethodInfo;
static const Il2CppMethodReference FontTextureRebuildCallback_t185_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&FontTextureRebuildCallback_Invoke_m916_MethodInfo,
	&FontTextureRebuildCallback_BeginInvoke_m917_MethodInfo,
	&FontTextureRebuildCallback_EndInvoke_m918_MethodInfo,
};
static bool FontTextureRebuildCallback_t185_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair FontTextureRebuildCallback_t185_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType FontTextureRebuildCallback_t185_0_0_0;
extern const Il2CppType FontTextureRebuildCallback_t185_1_0_0;
extern TypeInfo Font_t108_il2cpp_TypeInfo;
extern const Il2CppType Font_t108_0_0_0;
struct FontTextureRebuildCallback_t185;
const Il2CppTypeDefinitionMetadata FontTextureRebuildCallback_t185_DefinitionMetadata = 
{
	&Font_t108_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, FontTextureRebuildCallback_t185_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, FontTextureRebuildCallback_t185_VTable/* vtableMethods */
	, FontTextureRebuildCallback_t185_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo FontTextureRebuildCallback_t185_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "FontTextureRebuildCallback"/* name */
	, ""/* namespaze */
	, FontTextureRebuildCallback_t185_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &FontTextureRebuildCallback_t185_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 249/* custom_attributes_cache */
	, &FontTextureRebuildCallback_t185_0_0_0/* byval_arg */
	, &FontTextureRebuildCallback_t185_1_0_0/* this_arg */
	, &FontTextureRebuildCallback_t185_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_FontTextureRebuildCallback_t185/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FontTextureRebuildCallback_t185)/* instance_size */
	, sizeof (FontTextureRebuildCallback_t185)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// Metadata Definition UnityEngine.Font
// UnityEngine.Font
#include "UnityEngine_UnityEngine_FontMethodDeclarations.h"
extern const Il2CppType Font_t108_0_0_0;
static const ParameterInfo Font_t108_Font_InvokeTextureRebuilt_Internal_m919_ParameterInfos[] = 
{
	{"font", 0, 134218565, 0, &Font_t108_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern const MethodInfo Font_InvokeTextureRebuilt_Internal_m919_MethodInfo = 
{
	"InvokeTextureRebuilt_Internal"/* name */
	, (methodPointerType)&Font_InvokeTextureRebuilt_Internal_m919/* method */
	, &Font_t108_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Font_t108_Font_InvokeTextureRebuilt_Internal_m919_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Font::get_dynamic()
extern const MethodInfo Font_get_dynamic_m920_MethodInfo = 
{
	"get_dynamic"/* name */
	, (methodPointerType)&Font_get_dynamic_m920/* method */
	, &Font_t108_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 248/* custom_attributes_cache */
	, 2182/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Font_t108_MethodInfos[] =
{
	&Font_InvokeTextureRebuilt_Internal_m919_MethodInfo,
	&Font_get_dynamic_m920_MethodInfo,
	NULL
};
extern const MethodInfo Font_get_dynamic_m920_MethodInfo;
static const PropertyInfo Font_t108____dynamic_PropertyInfo = 
{
	&Font_t108_il2cpp_TypeInfo/* parent */
	, "dynamic"/* name */
	, &Font_get_dynamic_m920_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Font_t108_PropertyInfos[] =
{
	&Font_t108____dynamic_PropertyInfo,
	NULL
};
static const Il2CppType* Font_t108_il2cpp_TypeInfo__nestedTypes[1] =
{
	&FontTextureRebuildCallback_t185_0_0_0,
};
static const Il2CppMethodReference Font_t108_VTable[] =
{
	&Object_Equals_m90_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m92_MethodInfo,
	&Object_ToString_m93_MethodInfo,
};
static bool Font_t108_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Font_t108_1_0_0;
struct Font_t108;
const Il2CppTypeDefinitionMetadata Font_t108_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Font_t108_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t51_0_0_0/* parent */
	, Font_t108_VTable/* vtableMethods */
	, Font_t108_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 779/* fieldStart */

};
TypeInfo Font_t108_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Font"/* name */
	, "UnityEngine"/* namespaze */
	, Font_t108_MethodInfos/* methods */
	, Font_t108_PropertyInfos/* properties */
	, NULL/* events */
	, &Font_t108_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Font_t108_0_0_0/* byval_arg */
	, &Font_t108_1_0_0/* this_arg */
	, &Font_t108_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Font_t108)/* instance_size */
	, sizeof (Font_t108)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Font_t108_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// Metadata Definition UnityEngine.UICharInfo
extern TypeInfo UICharInfo_t187_il2cpp_TypeInfo;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfoMethodDeclarations.h"
static const MethodInfo* UICharInfo_t187_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UICharInfo_t187_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool UICharInfo_t187_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UICharInfo_t187_0_0_0;
extern const Il2CppType UICharInfo_t187_1_0_0;
const Il2CppTypeDefinitionMetadata UICharInfo_t187_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, UICharInfo_t187_VTable/* vtableMethods */
	, UICharInfo_t187_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 781/* fieldStart */

};
TypeInfo UICharInfo_t187_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UICharInfo"/* name */
	, "UnityEngine"/* namespaze */
	, UICharInfo_t187_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UICharInfo_t187_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UICharInfo_t187_0_0_0/* byval_arg */
	, &UICharInfo_t187_1_0_0/* this_arg */
	, &UICharInfo_t187_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UICharInfo_t187)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UICharInfo_t187)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UICharInfo_t187 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// Metadata Definition UnityEngine.UILineInfo
extern TypeInfo UILineInfo_t188_il2cpp_TypeInfo;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfoMethodDeclarations.h"
static const MethodInfo* UILineInfo_t188_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference UILineInfo_t188_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool UILineInfo_t188_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UILineInfo_t188_0_0_0;
extern const Il2CppType UILineInfo_t188_1_0_0;
const Il2CppTypeDefinitionMetadata UILineInfo_t188_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, UILineInfo_t188_VTable/* vtableMethods */
	, UILineInfo_t188_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 783/* fieldStart */

};
TypeInfo UILineInfo_t188_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UILineInfo"/* name */
	, "UnityEngine"/* namespaze */
	, UILineInfo_t188_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UILineInfo_t188_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UILineInfo_t188_0_0_0/* byval_arg */
	, &UILineInfo_t188_1_0_0/* this_arg */
	, &UILineInfo_t188_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UILineInfo_t188)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UILineInfo_t188)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UILineInfo_t188 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGenerator.h"
// Metadata Definition UnityEngine.TextGenerator
extern TypeInfo TextGenerator_t192_il2cpp_TypeInfo;
// UnityEngine.TextGenerator
#include "UnityEngine_UnityEngine_TextGeneratorMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::.ctor()
extern const MethodInfo TextGenerator__ctor_m921_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextGenerator__ctor_m921/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator__ctor_m922_ParameterInfos[] = 
{
	{"initialCapacity", 0, 134218571, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
extern const MethodInfo TextGenerator__ctor_m922_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TextGenerator__ctor_m922/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, TextGenerator_t192_TextGenerator__ctor_m922_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
extern const MethodInfo TextGenerator_System_IDisposable_Dispose_m923_MethodInfo = 
{
	"System.IDisposable.Dispose"/* name */
	, (methodPointerType)&TextGenerator_System_IDisposable_Dispose_m923/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::Init()
extern const MethodInfo TextGenerator_Init_m924_MethodInfo = 
{
	"Init"/* name */
	, (methodPointerType)&TextGenerator_Init_m924/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 250/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
extern const MethodInfo TextGenerator_Dispose_cpp_m925_MethodInfo = 
{
	"Dispose_cpp"/* name */
	, (methodPointerType)&TextGenerator_Dispose_cpp_m925/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 251/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Font_t108_0_0_0;
extern const Il2CppType Color_t84_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType FontStyle_t112_0_0_0;
extern const Il2CppType FontStyle_t112_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType VerticalWrapMode_t183_0_0_0;
extern const Il2CppType HorizontalWrapMode_t182_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType TextAnchor_t181_0_0_0;
extern const Il2CppType Vector2_t15_0_0_0;
extern const Il2CppType Vector2_t15_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_Populate_Internal_m926_ParameterInfos[] = 
{
	{"str", 0, 134218572, 0, &String_t_0_0_0},
	{"font", 1, 134218573, 0, &Font_t108_0_0_0},
	{"color", 2, 134218574, 0, &Color_t84_0_0_0},
	{"fontSize", 3, 134218575, 0, &Int32_t18_0_0_0},
	{"scaleFactor", 4, 134218576, 0, &Single_t355_0_0_0},
	{"lineSpacing", 5, 134218577, 0, &Single_t355_0_0_0},
	{"style", 6, 134218578, 0, &FontStyle_t112_0_0_0},
	{"richText", 7, 134218579, 0, &Boolean_t36_0_0_0},
	{"resizeTextForBestFit", 8, 134218580, 0, &Boolean_t36_0_0_0},
	{"resizeTextMinSize", 9, 134218581, 0, &Int32_t18_0_0_0},
	{"resizeTextMaxSize", 10, 134218582, 0, &Int32_t18_0_0_0},
	{"verticalOverFlow", 11, 134218583, 0, &VerticalWrapMode_t183_0_0_0},
	{"horizontalOverflow", 12, 134218584, 0, &HorizontalWrapMode_t182_0_0_0},
	{"updateBounds", 13, 134218585, 0, &Boolean_t36_0_0_0},
	{"anchor", 14, 134218586, 0, &TextAnchor_t181_0_0_0},
	{"extents", 15, 134218587, 0, &Vector2_t15_0_0_0},
	{"pivot", 16, 134218588, 0, &Vector2_t15_0_0_0},
	{"generateOutOfBounds", 17, 134218589, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Color_t84_Int32_t18_Single_t355_Single_t355_Int32_t18_SByte_t37_SByte_t37_Int32_t18_Int32_t18_Int32_t18_Int32_t18_SByte_t37_Int32_t18_Vector2_t15_Vector2_t15_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern const MethodInfo TextGenerator_Populate_Internal_m926_MethodInfo = 
{
	"Populate_Internal"/* name */
	, (methodPointerType)&TextGenerator_Populate_Internal_m926/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Color_t84_Int32_t18_Single_t355_Single_t355_Int32_t18_SByte_t37_SByte_t37_Int32_t18_Int32_t18_Int32_t18_Int32_t18_SByte_t37_Int32_t18_Vector2_t15_Vector2_t15_SByte_t37/* invoker_method */
	, TextGenerator_t192_TextGenerator_Populate_Internal_m926_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 18/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Font_t108_0_0_0;
extern const Il2CppType Color_t84_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType FontStyle_t112_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType TextAnchor_t181_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_Populate_Internal_cpp_m927_ParameterInfos[] = 
{
	{"str", 0, 134218590, 0, &String_t_0_0_0},
	{"font", 1, 134218591, 0, &Font_t108_0_0_0},
	{"color", 2, 134218592, 0, &Color_t84_0_0_0},
	{"fontSize", 3, 134218593, 0, &Int32_t18_0_0_0},
	{"scaleFactor", 4, 134218594, 0, &Single_t355_0_0_0},
	{"lineSpacing", 5, 134218595, 0, &Single_t355_0_0_0},
	{"style", 6, 134218596, 0, &FontStyle_t112_0_0_0},
	{"richText", 7, 134218597, 0, &Boolean_t36_0_0_0},
	{"resizeTextForBestFit", 8, 134218598, 0, &Boolean_t36_0_0_0},
	{"resizeTextMinSize", 9, 134218599, 0, &Int32_t18_0_0_0},
	{"resizeTextMaxSize", 10, 134218600, 0, &Int32_t18_0_0_0},
	{"verticalOverFlow", 11, 134218601, 0, &Int32_t18_0_0_0},
	{"horizontalOverflow", 12, 134218602, 0, &Int32_t18_0_0_0},
	{"updateBounds", 13, 134218603, 0, &Boolean_t36_0_0_0},
	{"anchor", 14, 134218604, 0, &TextAnchor_t181_0_0_0},
	{"extentsX", 15, 134218605, 0, &Single_t355_0_0_0},
	{"extentsY", 16, 134218606, 0, &Single_t355_0_0_0},
	{"pivotX", 17, 134218607, 0, &Single_t355_0_0_0},
	{"pivotY", 18, 134218608, 0, &Single_t355_0_0_0},
	{"generateOutOfBounds", 19, 134218609, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Color_t84_Int32_t18_Single_t355_Single_t355_Int32_t18_SByte_t37_SByte_t37_Int32_t18_Int32_t18_Int32_t18_Int32_t18_SByte_t37_Int32_t18_Single_t355_Single_t355_Single_t355_Single_t355_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern const MethodInfo TextGenerator_Populate_Internal_cpp_m927_MethodInfo = 
{
	"Populate_Internal_cpp"/* name */
	, (methodPointerType)&TextGenerator_Populate_Internal_cpp_m927/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Color_t84_Int32_t18_Single_t355_Single_t355_Int32_t18_SByte_t37_SByte_t37_Int32_t18_Int32_t18_Int32_t18_Int32_t18_SByte_t37_Int32_t18_Single_t355_Single_t355_Single_t355_Single_t355_SByte_t37/* invoker_method */
	, TextGenerator_t192_TextGenerator_Populate_Internal_cpp_m927_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 20/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TextGenerator_t192_0_0_0;
extern const Il2CppType TextGenerator_t192_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Font_t108_0_0_0;
extern const Il2CppType Color_t84_1_0_0;
extern const Il2CppType Color_t84_1_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType FontStyle_t112_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType TextAnchor_t181_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Single_t355_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928_ParameterInfos[] = 
{
	{"self", 0, 134218610, 0, &TextGenerator_t192_0_0_0},
	{"str", 1, 134218611, 0, &String_t_0_0_0},
	{"font", 2, 134218612, 0, &Font_t108_0_0_0},
	{"color", 3, 134218613, 0, &Color_t84_1_0_0},
	{"fontSize", 4, 134218614, 0, &Int32_t18_0_0_0},
	{"scaleFactor", 5, 134218615, 0, &Single_t355_0_0_0},
	{"lineSpacing", 6, 134218616, 0, &Single_t355_0_0_0},
	{"style", 7, 134218617, 0, &FontStyle_t112_0_0_0},
	{"richText", 8, 134218618, 0, &Boolean_t36_0_0_0},
	{"resizeTextForBestFit", 9, 134218619, 0, &Boolean_t36_0_0_0},
	{"resizeTextMinSize", 10, 134218620, 0, &Int32_t18_0_0_0},
	{"resizeTextMaxSize", 11, 134218621, 0, &Int32_t18_0_0_0},
	{"verticalOverFlow", 12, 134218622, 0, &Int32_t18_0_0_0},
	{"horizontalOverflow", 13, 134218623, 0, &Int32_t18_0_0_0},
	{"updateBounds", 14, 134218624, 0, &Boolean_t36_0_0_0},
	{"anchor", 15, 134218625, 0, &TextAnchor_t181_0_0_0},
	{"extentsX", 16, 134218626, 0, &Single_t355_0_0_0},
	{"extentsY", 17, 134218627, 0, &Single_t355_0_0_0},
	{"pivotX", 18, 134218628, 0, &Single_t355_0_0_0},
	{"pivotY", 19, 134218629, 0, &Single_t355_0_0_0},
	{"generateOutOfBounds", 20, 134218630, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t_ColorU26_t444_Int32_t18_Single_t355_Single_t355_Int32_t18_SByte_t37_SByte_t37_Int32_t18_Int32_t18_Int32_t18_Int32_t18_SByte_t37_Int32_t18_Single_t355_Single_t355_Single_t355_Single_t355_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
extern const MethodInfo TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928_MethodInfo = 
{
	"INTERNAL_CALL_Populate_Internal_cpp"/* name */
	, (methodPointerType)&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t_ColorU26_t444_Int32_t18_Single_t355_Single_t355_Int32_t18_SByte_t37_SByte_t37_Int32_t18_Int32_t18_Int32_t18_Int32_t18_SByte_t37_Int32_t18_Single_t355_Single_t355_Single_t355_Single_t355_SByte_t37/* invoker_method */
	, TextGenerator_t192_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928_ParameterInfos/* parameters */
	, 252/* custom_attributes_cache */
	, 145/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 21/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Rect_t30_0_0_0;
extern void* RuntimeInvoker_Rect_t30 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
extern const MethodInfo TextGenerator_get_rectExtents_m929_MethodInfo = 
{
	"get_rectExtents"/* name */
	, (methodPointerType)&TextGenerator_get_rectExtents_m929/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Rect_t30_0_0_0/* return_type */
	, RuntimeInvoker_Rect_t30/* invoker_method */
	, NULL/* parameters */
	, 253/* custom_attributes_cache */
	, 2182/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
extern const MethodInfo TextGenerator_get_vertexCount_m930_MethodInfo = 
{
	"get_vertexCount"/* name */
	, (methodPointerType)&TextGenerator_get_vertexCount_m930/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 254/* custom_attributes_cache */
	, 2182/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetVerticesInternal_m931_ParameterInfos[] = 
{
	{"vertices", 0, 134218631, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
extern const MethodInfo TextGenerator_GetVerticesInternal_m931_MethodInfo = 
{
	"GetVerticesInternal"/* name */
	, (methodPointerType)&TextGenerator_GetVerticesInternal_m931/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetVerticesInternal_m931_ParameterInfos/* parameters */
	, 255/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UIVertexU5BU5D_t325_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
extern const MethodInfo TextGenerator_GetVerticesArray_m932_MethodInfo = 
{
	"GetVerticesArray"/* name */
	, (methodPointerType)&TextGenerator_GetVerticesArray_m932/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &UIVertexU5BU5D_t325_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 256/* custom_attributes_cache */
	, 134/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
extern const MethodInfo TextGenerator_get_characterCount_m933_MethodInfo = 
{
	"get_characterCount"/* name */
	, (methodPointerType)&TextGenerator_get_characterCount_m933/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 257/* custom_attributes_cache */
	, 2182/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
extern const MethodInfo TextGenerator_get_characterCountVisible_m934_MethodInfo = 
{
	"get_characterCountVisible"/* name */
	, (methodPointerType)&TextGenerator_get_characterCountVisible_m934/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetCharactersInternal_m935_ParameterInfos[] = 
{
	{"characters", 0, 134218632, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
extern const MethodInfo TextGenerator_GetCharactersInternal_m935_MethodInfo = 
{
	"GetCharactersInternal"/* name */
	, (methodPointerType)&TextGenerator_GetCharactersInternal_m935/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetCharactersInternal_m935_ParameterInfos/* parameters */
	, 258/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UICharInfoU5BU5D_t326_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
extern const MethodInfo TextGenerator_GetCharactersArray_m936_MethodInfo = 
{
	"GetCharactersArray"/* name */
	, (methodPointerType)&TextGenerator_GetCharactersArray_m936/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &UICharInfoU5BU5D_t326_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 259/* custom_attributes_cache */
	, 134/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
extern const MethodInfo TextGenerator_get_lineCount_m937_MethodInfo = 
{
	"get_lineCount"/* name */
	, (methodPointerType)&TextGenerator_get_lineCount_m937/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 260/* custom_attributes_cache */
	, 2182/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetLinesInternal_m938_ParameterInfos[] = 
{
	{"lines", 0, 134218633, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
extern const MethodInfo TextGenerator_GetLinesInternal_m938_MethodInfo = 
{
	"GetLinesInternal"/* name */
	, (methodPointerType)&TextGenerator_GetLinesInternal_m938/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetLinesInternal_m938_ParameterInfos/* parameters */
	, 261/* custom_attributes_cache */
	, 129/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UILineInfoU5BU5D_t327_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
extern const MethodInfo TextGenerator_GetLinesArray_m939_MethodInfo = 
{
	"GetLinesArray"/* name */
	, (methodPointerType)&TextGenerator_GetLinesArray_m939/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &UILineInfoU5BU5D_t327_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 262/* custom_attributes_cache */
	, 134/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
extern const MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m940_MethodInfo = 
{
	"get_fontSizeUsedForBestFit"/* name */
	, (methodPointerType)&TextGenerator_get_fontSizeUsedForBestFit_m940/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 263/* custom_attributes_cache */
	, 2182/* flags */
	, 4096/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::Finalize()
extern const MethodInfo TextGenerator_Finalize_m941_MethodInfo = 
{
	"Finalize"/* name */
	, (methodPointerType)&TextGenerator_Finalize_m941/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TextGenerationSettings_t193_0_0_0;
extern const Il2CppType TextGenerationSettings_t193_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_ValidatedSettings_m942_ParameterInfos[] = 
{
	{"settings", 0, 134218634, 0, &TextGenerationSettings_t193_0_0_0},
};
extern void* RuntimeInvoker_TextGenerationSettings_t193_TextGenerationSettings_t193 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
extern const MethodInfo TextGenerator_ValidatedSettings_m942_MethodInfo = 
{
	"ValidatedSettings"/* name */
	, (methodPointerType)&TextGenerator_ValidatedSettings_m942/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &TextGenerationSettings_t193_0_0_0/* return_type */
	, RuntimeInvoker_TextGenerationSettings_t193_TextGenerationSettings_t193/* invoker_method */
	, TextGenerator_t192_TextGenerator_ValidatedSettings_m942_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::Invalidate()
extern const MethodInfo TextGenerator_Invalidate_m943_MethodInfo = 
{
	"Invalidate"/* name */
	, (methodPointerType)&TextGenerator_Invalidate_m943/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t190_0_0_0;
extern const Il2CppType List_1_t190_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetCharacters_m944_ParameterInfos[] = 
{
	{"characters", 0, 134218635, 0, &List_1_t190_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
extern const MethodInfo TextGenerator_GetCharacters_m944_MethodInfo = 
{
	"GetCharacters"/* name */
	, (methodPointerType)&TextGenerator_GetCharacters_m944/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetCharacters_m944_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t191_0_0_0;
extern const Il2CppType List_1_t191_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetLines_m945_ParameterInfos[] = 
{
	{"lines", 0, 134218636, 0, &List_1_t191_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
extern const MethodInfo TextGenerator_GetLines_m945_MethodInfo = 
{
	"GetLines"/* name */
	, (methodPointerType)&TextGenerator_GetLines_m945/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetLines_m945_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t189_0_0_0;
extern const Il2CppType List_1_t189_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetVertices_m946_ParameterInfos[] = 
{
	{"vertices", 0, 134218637, 0, &List_1_t189_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern const MethodInfo TextGenerator_GetVertices_m946_MethodInfo = 
{
	"GetVertices"/* name */
	, (methodPointerType)&TextGenerator_GetVertices_m946/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetVertices_m946_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType TextGenerationSettings_t193_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetPreferredWidth_m947_ParameterInfos[] = 
{
	{"str", 0, 134218638, 0, &String_t_0_0_0},
	{"settings", 1, 134218639, 0, &TextGenerationSettings_t193_0_0_0},
};
extern void* RuntimeInvoker_Single_t355_Object_t_TextGenerationSettings_t193 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
extern const MethodInfo TextGenerator_GetPreferredWidth_m947_MethodInfo = 
{
	"GetPreferredWidth"/* name */
	, (methodPointerType)&TextGenerator_GetPreferredWidth_m947/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355_Object_t_TextGenerationSettings_t193/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetPreferredWidth_m947_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType TextGenerationSettings_t193_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_GetPreferredHeight_m948_ParameterInfos[] = 
{
	{"str", 0, 134218640, 0, &String_t_0_0_0},
	{"settings", 1, 134218641, 0, &TextGenerationSettings_t193_0_0_0},
};
extern void* RuntimeInvoker_Single_t355_Object_t_TextGenerationSettings_t193 (const MethodInfo* method, void* obj, void** args);
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
extern const MethodInfo TextGenerator_GetPreferredHeight_m948_MethodInfo = 
{
	"GetPreferredHeight"/* name */
	, (methodPointerType)&TextGenerator_GetPreferredHeight_m948/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Single_t355_0_0_0/* return_type */
	, RuntimeInvoker_Single_t355_Object_t_TextGenerationSettings_t193/* invoker_method */
	, TextGenerator_t192_TextGenerator_GetPreferredHeight_m948_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType TextGenerationSettings_t193_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_Populate_m949_ParameterInfos[] = 
{
	{"str", 0, 134218642, 0, &String_t_0_0_0},
	{"settings", 1, 134218643, 0, &TextGenerationSettings_t193_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_TextGenerationSettings_t193 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
extern const MethodInfo TextGenerator_Populate_m949_MethodInfo = 
{
	"Populate"/* name */
	, (methodPointerType)&TextGenerator_Populate_m949/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_TextGenerationSettings_t193/* invoker_method */
	, TextGenerator_t192_TextGenerator_Populate_m949_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType TextGenerationSettings_t193_0_0_0;
static const ParameterInfo TextGenerator_t192_TextGenerator_PopulateAlways_m950_ParameterInfos[] = 
{
	{"str", 0, 134218644, 0, &String_t_0_0_0},
	{"settings", 1, 134218645, 0, &TextGenerationSettings_t193_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_TextGenerationSettings_t193 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
extern const MethodInfo TextGenerator_PopulateAlways_m950_MethodInfo = 
{
	"PopulateAlways"/* name */
	, (methodPointerType)&TextGenerator_PopulateAlways_m950/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_TextGenerationSettings_t193/* invoker_method */
	, TextGenerator_t192_TextGenerator_PopulateAlways_m950_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IList_1_t322_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
extern const MethodInfo TextGenerator_get_verts_m951_MethodInfo = 
{
	"get_verts"/* name */
	, (methodPointerType)&TextGenerator_get_verts_m951/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &IList_1_t322_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IList_1_t323_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
extern const MethodInfo TextGenerator_get_characters_m952_MethodInfo = 
{
	"get_characters"/* name */
	, (methodPointerType)&TextGenerator_get_characters_m952/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &IList_1_t323_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IList_1_t324_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
extern const MethodInfo TextGenerator_get_lines_m953_MethodInfo = 
{
	"get_lines"/* name */
	, (methodPointerType)&TextGenerator_get_lines_m953/* method */
	, &TextGenerator_t192_il2cpp_TypeInfo/* declaring_type */
	, &IList_1_t324_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* TextGenerator_t192_MethodInfos[] =
{
	&TextGenerator__ctor_m921_MethodInfo,
	&TextGenerator__ctor_m922_MethodInfo,
	&TextGenerator_System_IDisposable_Dispose_m923_MethodInfo,
	&TextGenerator_Init_m924_MethodInfo,
	&TextGenerator_Dispose_cpp_m925_MethodInfo,
	&TextGenerator_Populate_Internal_m926_MethodInfo,
	&TextGenerator_Populate_Internal_cpp_m927_MethodInfo,
	&TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m928_MethodInfo,
	&TextGenerator_get_rectExtents_m929_MethodInfo,
	&TextGenerator_get_vertexCount_m930_MethodInfo,
	&TextGenerator_GetVerticesInternal_m931_MethodInfo,
	&TextGenerator_GetVerticesArray_m932_MethodInfo,
	&TextGenerator_get_characterCount_m933_MethodInfo,
	&TextGenerator_get_characterCountVisible_m934_MethodInfo,
	&TextGenerator_GetCharactersInternal_m935_MethodInfo,
	&TextGenerator_GetCharactersArray_m936_MethodInfo,
	&TextGenerator_get_lineCount_m937_MethodInfo,
	&TextGenerator_GetLinesInternal_m938_MethodInfo,
	&TextGenerator_GetLinesArray_m939_MethodInfo,
	&TextGenerator_get_fontSizeUsedForBestFit_m940_MethodInfo,
	&TextGenerator_Finalize_m941_MethodInfo,
	&TextGenerator_ValidatedSettings_m942_MethodInfo,
	&TextGenerator_Invalidate_m943_MethodInfo,
	&TextGenerator_GetCharacters_m944_MethodInfo,
	&TextGenerator_GetLines_m945_MethodInfo,
	&TextGenerator_GetVertices_m946_MethodInfo,
	&TextGenerator_GetPreferredWidth_m947_MethodInfo,
	&TextGenerator_GetPreferredHeight_m948_MethodInfo,
	&TextGenerator_Populate_m949_MethodInfo,
	&TextGenerator_PopulateAlways_m950_MethodInfo,
	&TextGenerator_get_verts_m951_MethodInfo,
	&TextGenerator_get_characters_m952_MethodInfo,
	&TextGenerator_get_lines_m953_MethodInfo,
	NULL
};
extern const MethodInfo TextGenerator_get_rectExtents_m929_MethodInfo;
static const PropertyInfo TextGenerator_t192____rectExtents_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "rectExtents"/* name */
	, &TextGenerator_get_rectExtents_m929_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_vertexCount_m930_MethodInfo;
static const PropertyInfo TextGenerator_t192____vertexCount_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "vertexCount"/* name */
	, &TextGenerator_get_vertexCount_m930_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_characterCount_m933_MethodInfo;
static const PropertyInfo TextGenerator_t192____characterCount_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "characterCount"/* name */
	, &TextGenerator_get_characterCount_m933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_characterCountVisible_m934_MethodInfo;
static const PropertyInfo TextGenerator_t192____characterCountVisible_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "characterCountVisible"/* name */
	, &TextGenerator_get_characterCountVisible_m934_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_lineCount_m937_MethodInfo;
static const PropertyInfo TextGenerator_t192____lineCount_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "lineCount"/* name */
	, &TextGenerator_get_lineCount_m937_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_fontSizeUsedForBestFit_m940_MethodInfo;
static const PropertyInfo TextGenerator_t192____fontSizeUsedForBestFit_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "fontSizeUsedForBestFit"/* name */
	, &TextGenerator_get_fontSizeUsedForBestFit_m940_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_verts_m951_MethodInfo;
static const PropertyInfo TextGenerator_t192____verts_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "verts"/* name */
	, &TextGenerator_get_verts_m951_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_characters_m952_MethodInfo;
static const PropertyInfo TextGenerator_t192____characters_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "characters"/* name */
	, &TextGenerator_get_characters_m952_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo TextGenerator_get_lines_m953_MethodInfo;
static const PropertyInfo TextGenerator_t192____lines_PropertyInfo = 
{
	&TextGenerator_t192_il2cpp_TypeInfo/* parent */
	, "lines"/* name */
	, &TextGenerator_get_lines_m953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* TextGenerator_t192_PropertyInfos[] =
{
	&TextGenerator_t192____rectExtents_PropertyInfo,
	&TextGenerator_t192____vertexCount_PropertyInfo,
	&TextGenerator_t192____characterCount_PropertyInfo,
	&TextGenerator_t192____characterCountVisible_PropertyInfo,
	&TextGenerator_t192____lineCount_PropertyInfo,
	&TextGenerator_t192____fontSizeUsedForBestFit_PropertyInfo,
	&TextGenerator_t192____verts_PropertyInfo,
	&TextGenerator_t192____characters_PropertyInfo,
	&TextGenerator_t192____lines_PropertyInfo,
	NULL
};
extern const MethodInfo TextGenerator_Finalize_m941_MethodInfo;
extern const MethodInfo TextGenerator_System_IDisposable_Dispose_m923_MethodInfo;
static const Il2CppMethodReference TextGenerator_t192_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&TextGenerator_Finalize_m941_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&TextGenerator_System_IDisposable_Dispose_m923_MethodInfo,
};
static bool TextGenerator_t192_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IDisposable_t25_0_0_0;
static const Il2CppType* TextGenerator_t192_InterfacesTypeInfos[] = 
{
	&IDisposable_t25_0_0_0,
};
static Il2CppInterfaceOffsetPair TextGenerator_t192_InterfacesOffsets[] = 
{
	{ &IDisposable_t25_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextGenerator_t192_1_0_0;
struct TextGenerator_t192;
const Il2CppTypeDefinitionMetadata TextGenerator_t192_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, TextGenerator_t192_InterfacesTypeInfos/* implementedInterfaces */
	, TextGenerator_t192_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, TextGenerator_t192_VTable/* vtableMethods */
	, TextGenerator_t192_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 785/* fieldStart */

};
TypeInfo TextGenerator_t192_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextGenerator"/* name */
	, "UnityEngine"/* namespaze */
	, TextGenerator_t192_MethodInfos/* methods */
	, TextGenerator_t192_PropertyInfos/* properties */
	, NULL/* events */
	, &TextGenerator_t192_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextGenerator_t192_0_0_0/* byval_arg */
	, &TextGenerator_t192_1_0_0/* this_arg */
	, &TextGenerator_t192_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextGenerator_t192)/* instance_size */
	, sizeof (TextGenerator_t192)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, true/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 33/* method_count */
	, 9/* property_count */
	, 11/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases.h"
// Metadata Definition UnityEngine.Canvas/WillRenderCanvases
extern TypeInfo WillRenderCanvases_t194_il2cpp_TypeInfo;
// UnityEngine.Canvas/WillRenderCanvases
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvasesMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo WillRenderCanvases_t194_WillRenderCanvases__ctor_m954_ParameterInfos[] = 
{
	{"object", 0, 134218646, 0, &Object_t_0_0_0},
	{"method", 1, 134218647, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
extern const MethodInfo WillRenderCanvases__ctor_m954_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WillRenderCanvases__ctor_m954/* method */
	, &WillRenderCanvases_t194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, WillRenderCanvases_t194_WillRenderCanvases__ctor_m954_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Canvas/WillRenderCanvases::Invoke()
extern const MethodInfo WillRenderCanvases_Invoke_m955_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&WillRenderCanvases_Invoke_m955/* method */
	, &WillRenderCanvases_t194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo WillRenderCanvases_t194_WillRenderCanvases_BeginInvoke_m956_ParameterInfos[] = 
{
	{"callback", 0, 134218648, 0, &AsyncCallback_t8_0_0_0},
	{"object", 1, 134218649, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Canvas/WillRenderCanvases::BeginInvoke(System.AsyncCallback,System.Object)
extern const MethodInfo WillRenderCanvases_BeginInvoke_m956_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&WillRenderCanvases_BeginInvoke_m956/* method */
	, &WillRenderCanvases_t194_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, WillRenderCanvases_t194_WillRenderCanvases_BeginInvoke_m956_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo WillRenderCanvases_t194_WillRenderCanvases_EndInvoke_m957_ParameterInfos[] = 
{
	{"result", 0, 134218650, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Canvas/WillRenderCanvases::EndInvoke(System.IAsyncResult)
extern const MethodInfo WillRenderCanvases_EndInvoke_m957_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&WillRenderCanvases_EndInvoke_m957/* method */
	, &WillRenderCanvases_t194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, WillRenderCanvases_t194_WillRenderCanvases_EndInvoke_m957_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WillRenderCanvases_t194_MethodInfos[] =
{
	&WillRenderCanvases__ctor_m954_MethodInfo,
	&WillRenderCanvases_Invoke_m955_MethodInfo,
	&WillRenderCanvases_BeginInvoke_m956_MethodInfo,
	&WillRenderCanvases_EndInvoke_m957_MethodInfo,
	NULL
};
extern const MethodInfo WillRenderCanvases_Invoke_m955_MethodInfo;
extern const MethodInfo WillRenderCanvases_BeginInvoke_m956_MethodInfo;
extern const MethodInfo WillRenderCanvases_EndInvoke_m957_MethodInfo;
static const Il2CppMethodReference WillRenderCanvases_t194_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&WillRenderCanvases_Invoke_m955_MethodInfo,
	&WillRenderCanvases_BeginInvoke_m956_MethodInfo,
	&WillRenderCanvases_EndInvoke_m957_MethodInfo,
};
static bool WillRenderCanvases_t194_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair WillRenderCanvases_t194_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType WillRenderCanvases_t194_0_0_0;
extern const Il2CppType WillRenderCanvases_t194_1_0_0;
extern TypeInfo Canvas_t195_il2cpp_TypeInfo;
extern const Il2CppType Canvas_t195_0_0_0;
struct WillRenderCanvases_t194;
const Il2CppTypeDefinitionMetadata WillRenderCanvases_t194_DefinitionMetadata = 
{
	&Canvas_t195_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WillRenderCanvases_t194_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, WillRenderCanvases_t194_VTable/* vtableMethods */
	, WillRenderCanvases_t194_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WillRenderCanvases_t194_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "WillRenderCanvases"/* name */
	, ""/* namespaze */
	, WillRenderCanvases_t194_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WillRenderCanvases_t194_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &WillRenderCanvases_t194_0_0_0/* byval_arg */
	, &WillRenderCanvases_t194_1_0_0/* this_arg */
	, &WillRenderCanvases_t194_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_WillRenderCanvases_t194/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WillRenderCanvases_t194)/* instance_size */
	, sizeof (WillRenderCanvases_t194)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// Metadata Definition UnityEngine.Canvas
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern const MethodInfo Canvas_SendWillRenderCanvases_m958_MethodInfo = 
{
	"SendWillRenderCanvases"/* name */
	, (methodPointerType)&Canvas_SendWillRenderCanvases_m958/* method */
	, &Canvas_t195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Canvas_t195_MethodInfos[] =
{
	&Canvas_SendWillRenderCanvases_m958_MethodInfo,
	NULL
};
static const Il2CppType* Canvas_t195_il2cpp_TypeInfo__nestedTypes[1] =
{
	&WillRenderCanvases_t194_0_0_0,
};
static const Il2CppMethodReference Canvas_t195_VTable[] =
{
	&Object_Equals_m90_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m92_MethodInfo,
	&Object_ToString_m93_MethodInfo,
};
static bool Canvas_t195_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Canvas_t195_1_0_0;
struct Canvas_t195;
const Il2CppTypeDefinitionMetadata Canvas_t195_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Canvas_t195_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Behaviour_t80_0_0_0/* parent */
	, Canvas_t195_VTable/* vtableMethods */
	, Canvas_t195_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 796/* fieldStart */

};
TypeInfo Canvas_t195_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Canvas"/* name */
	, "UnityEngine"/* namespaze */
	, Canvas_t195_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Canvas_t195_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Canvas_t195_0_0_0/* byval_arg */
	, &Canvas_t195_1_0_0/* this_arg */
	, &Canvas_t195_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Canvas_t195)/* instance_size */
	, sizeof (Canvas_t195)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Canvas_t195_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// Metadata Definition UnityEngine.UIVertex
extern TypeInfo UIVertex_t196_il2cpp_TypeInfo;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertexMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.UIVertex::.cctor()
extern const MethodInfo UIVertex__cctor_m959_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UIVertex__cctor_m959/* method */
	, &UIVertex_t196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UIVertex_t196_MethodInfos[] =
{
	&UIVertex__cctor_m959_MethodInfo,
	NULL
};
static const Il2CppMethodReference UIVertex_t196_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool UIVertex_t196_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UIVertex_t196_0_0_0;
extern const Il2CppType UIVertex_t196_1_0_0;
const Il2CppTypeDefinitionMetadata UIVertex_t196_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, UIVertex_t196_VTable/* vtableMethods */
	, UIVertex_t196_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 797/* fieldStart */

};
TypeInfo UIVertex_t196_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UIVertex"/* name */
	, "UnityEngine"/* namespaze */
	, UIVertex_t196_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UIVertex_t196_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UIVertex_t196_0_0_0/* byval_arg */
	, &UIVertex_t196_1_0_0/* this_arg */
	, &UIVertex_t196_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UIVertex_t196)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UIVertex_t196)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UIVertex_t196 )/* native_size */
	, sizeof(UIVertex_t196_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, true/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_Request.h"
// Metadata Definition UnityEngine.Networking.Match.Request
extern TypeInfo Request_t197_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Request
#include "UnityEngine_UnityEngine_Networking_Match_RequestMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern const MethodInfo Request__ctor_m960_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Request__ctor_m960/* method */
	, &Request_t197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType SourceID_t215_0_0_0;
extern void* RuntimeInvoker_SourceID_t215 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern const MethodInfo Request_get_sourceId_m961_MethodInfo = 
{
	"get_sourceId"/* name */
	, (methodPointerType)&Request_get_sourceId_m961/* method */
	, &Request_t197_il2cpp_TypeInfo/* declaring_type */
	, &SourceID_t215_0_0_0/* return_type */
	, RuntimeInvoker_SourceID_t215/* invoker_method */
	, NULL/* parameters */
	, 267/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AppID_t214_0_0_0;
extern void* RuntimeInvoker_AppID_t214 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Match.Request::get_appId()
extern const MethodInfo Request_get_appId_m962_MethodInfo = 
{
	"get_appId"/* name */
	, (methodPointerType)&Request_get_appId_m962/* method */
	, &Request_t197_il2cpp_TypeInfo/* declaring_type */
	, &AppID_t214_0_0_0/* return_type */
	, RuntimeInvoker_AppID_t214/* invoker_method */
	, NULL/* parameters */
	, 268/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern const MethodInfo Request_get_domain_m963_MethodInfo = 
{
	"get_domain"/* name */
	, (methodPointerType)&Request_get_domain_m963/* method */
	, &Request_t197_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 269/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.Request::ToString()
extern const MethodInfo Request_ToString_m964_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Request_ToString_m964/* method */
	, &Request_t197_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Request_t197_MethodInfos[] =
{
	&Request__ctor_m960_MethodInfo,
	&Request_get_sourceId_m961_MethodInfo,
	&Request_get_appId_m962_MethodInfo,
	&Request_get_domain_m963_MethodInfo,
	&Request_ToString_m964_MethodInfo,
	NULL
};
extern const MethodInfo Request_get_sourceId_m961_MethodInfo;
static const PropertyInfo Request_t197____sourceId_PropertyInfo = 
{
	&Request_t197_il2cpp_TypeInfo/* parent */
	, "sourceId"/* name */
	, &Request_get_sourceId_m961_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Request_get_appId_m962_MethodInfo;
static const PropertyInfo Request_t197____appId_PropertyInfo = 
{
	&Request_t197_il2cpp_TypeInfo/* parent */
	, "appId"/* name */
	, &Request_get_appId_m962_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Request_get_domain_m963_MethodInfo;
static const PropertyInfo Request_t197____domain_PropertyInfo = 
{
	&Request_t197_il2cpp_TypeInfo/* parent */
	, "domain"/* name */
	, &Request_get_domain_m963_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Request_t197_PropertyInfos[] =
{
	&Request_t197____sourceId_PropertyInfo,
	&Request_t197____appId_PropertyInfo,
	&Request_t197____domain_PropertyInfo,
	NULL
};
extern const MethodInfo Request_ToString_m964_MethodInfo;
static const Il2CppMethodReference Request_t197_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Request_ToString_m964_MethodInfo,
};
static bool Request_t197_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Request_t197_0_0_0;
extern const Il2CppType Request_t197_1_0_0;
struct Request_t197;
const Il2CppTypeDefinitionMetadata Request_t197_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Request_t197_VTable/* vtableMethods */
	, Request_t197_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 806/* fieldStart */

};
TypeInfo Request_t197_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Request"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, Request_t197_MethodInfos/* methods */
	, Request_t197_PropertyInfos/* properties */
	, NULL/* events */
	, &Request_t197_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Request_t197_0_0_0/* byval_arg */
	, &Request_t197_1_0_0/* this_arg */
	, &Request_t197_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Request_t197)/* instance_size */
	, sizeof (Request_t197)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 3/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBase.h"
// Metadata Definition UnityEngine.Networking.Match.ResponseBase
extern TypeInfo ResponseBase_t198_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ResponseBase
#include "UnityEngine_UnityEngine_Networking_Match_ResponseBaseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ResponseBase::.ctor()
extern const MethodInfo ResponseBase__ctor_m965_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ResponseBase__ctor_m965/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_Parse_m1544_ParameterInfos[] = 
{
	{"obj", 0, 134218651, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ResponseBase::Parse(System.Object)
extern const MethodInfo ResponseBase_Parse_m1544_MethodInfo = 
{
	"Parse"/* name */
	, NULL/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ResponseBase_t198_ResponseBase_Parse_m1544_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_ParseJSONString_m966_ParameterInfos[] = 
{
	{"name", 0, 134218652, 0, &String_t_0_0_0},
	{"obj", 1, 134218653, 0, &Object_t_0_0_0},
	{"dictJsonObj", 2, 134218654, 0, &IDictionary_2_t328_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.ResponseBase::ParseJSONString(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern const MethodInfo ResponseBase_ParseJSONString_m966_MethodInfo = 
{
	"ParseJSONString"/* name */
	, (methodPointerType)&ResponseBase_ParseJSONString_m966/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ResponseBase_t198_ResponseBase_ParseJSONString_m966_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_ParseJSONInt32_m967_ParameterInfos[] = 
{
	{"name", 0, 134218655, 0, &String_t_0_0_0},
	{"obj", 1, 134218656, 0, &Object_t_0_0_0},
	{"dictJsonObj", 2, 134218657, 0, &IDictionary_2_t328_0_0_0},
};
extern void* RuntimeInvoker_Int32_t18_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.ResponseBase::ParseJSONInt32(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern const MethodInfo ResponseBase_ParseJSONInt32_m967_MethodInfo = 
{
	"ParseJSONInt32"/* name */
	, (methodPointerType)&ResponseBase_ParseJSONInt32_m967/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Object_t_Object_t/* invoker_method */
	, ResponseBase_t198_ResponseBase_ParseJSONInt32_m967_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_ParseJSONUInt16_m968_ParameterInfos[] = 
{
	{"name", 0, 134218658, 0, &String_t_0_0_0},
	{"obj", 1, 134218659, 0, &Object_t_0_0_0},
	{"dictJsonObj", 2, 134218660, 0, &IDictionary_2_t328_0_0_0},
};
extern const Il2CppType UInt16_t381_0_0_0;
extern void* RuntimeInvoker_UInt16_t381_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UInt16 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt16(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern const MethodInfo ResponseBase_ParseJSONUInt16_m968_MethodInfo = 
{
	"ParseJSONUInt16"/* name */
	, (methodPointerType)&ResponseBase_ParseJSONUInt16_m968/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t381_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t381_Object_t_Object_t_Object_t/* invoker_method */
	, ResponseBase_t198_ResponseBase_ParseJSONUInt16_m968_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_ParseJSONUInt64_m969_ParameterInfos[] = 
{
	{"name", 0, 134218661, 0, &String_t_0_0_0},
	{"obj", 1, 134218662, 0, &Object_t_0_0_0},
	{"dictJsonObj", 2, 134218663, 0, &IDictionary_2_t328_0_0_0},
};
extern const Il2CppType UInt64_t379_0_0_0;
extern void* RuntimeInvoker_UInt64_t379_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.UInt64 UnityEngine.Networking.Match.ResponseBase::ParseJSONUInt64(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern const MethodInfo ResponseBase_ParseJSONUInt64_m969_MethodInfo = 
{
	"ParseJSONUInt64"/* name */
	, (methodPointerType)&ResponseBase_ParseJSONUInt64_m969/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &UInt64_t379_0_0_0/* return_type */
	, RuntimeInvoker_UInt64_t379_Object_t_Object_t_Object_t/* invoker_method */
	, ResponseBase_t198_ResponseBase_ParseJSONUInt64_m969_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_ParseJSONBool_m970_ParameterInfos[] = 
{
	{"name", 0, 134218664, 0, &String_t_0_0_0},
	{"obj", 1, 134218665, 0, &Object_t_0_0_0},
	{"dictJsonObj", 2, 134218666, 0, &IDictionary_2_t328_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Networking.Match.ResponseBase::ParseJSONBool(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern const MethodInfo ResponseBase_ParseJSONBool_m970_MethodInfo = 
{
	"ParseJSONBool"/* name */
	, (methodPointerType)&ResponseBase_ParseJSONBool_m970/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t/* invoker_method */
	, ResponseBase_t198_ResponseBase_ParseJSONBool_m970_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IDictionary_2_t328_0_0_0;
static const ParameterInfo ResponseBase_t198_ResponseBase_ParseJSONList_m1545_ParameterInfos[] = 
{
	{"name", 0, 134218667, 0, &String_t_0_0_0},
	{"obj", 1, 134218668, 0, &Object_t_0_0_0},
	{"dictJsonObj", 2, 134218669, 0, &IDictionary_2_t328_0_0_0},
};
extern const Il2CppType List_1_t457_0_0_0;
extern const Il2CppGenericContainer ResponseBase_ParseJSONList_m1545_Il2CppGenericContainer;
extern TypeInfo ResponseBase_ParseJSONList_m1545_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppType ResponseBase_t198_0_0_0;
static const Il2CppType* ResponseBase_ParseJSONList_m1545_gp_T_0_il2cpp_TypeInfo_constraints[] = { 
&ResponseBase_t198_0_0_0 /* UnityEngine.Networking.Match.ResponseBase */, 
 NULL };
extern const Il2CppGenericParameter ResponseBase_ParseJSONList_m1545_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &ResponseBase_ParseJSONList_m1545_Il2CppGenericContainer, ResponseBase_ParseJSONList_m1545_gp_T_0_il2cpp_TypeInfo_constraints, "T", 0, 16 };
static const Il2CppGenericParameter* ResponseBase_ParseJSONList_m1545_Il2CppGenericParametersArray[1] = 
{
	&ResponseBase_ParseJSONList_m1545_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const MethodInfo ResponseBase_ParseJSONList_m1545_MethodInfo;
extern const Il2CppGenericContainer ResponseBase_ParseJSONList_m1545_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&ResponseBase_ParseJSONList_m1545_MethodInfo, 1, 1, ResponseBase_ParseJSONList_m1545_Il2CppGenericParametersArray };
extern const Il2CppGenericMethod List_1__ctor_m1609_GenericMethod;
extern const Il2CppGenericMethod Activator_CreateInstance_TisT_t458_m1610_GenericMethod;
extern const Il2CppType ResponseBase_ParseJSONList_m1545_gp_0_0_0_0;
extern const Il2CppGenericMethod List_1_Add_m1611_GenericMethod;
static Il2CppRGCTXDefinition ResponseBase_ParseJSONList_m1545_RGCTXData[6] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&List_1_t457_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &List_1__ctor_m1609_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Activator_CreateInstance_TisT_t458_m1610_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&ResponseBase_ParseJSONList_m1545_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &List_1_Add_m1611_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
// System.Collections.Generic.List`1<T> UnityEngine.Networking.Match.ResponseBase::ParseJSONList(System.String,System.Object,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern const MethodInfo ResponseBase_ParseJSONList_m1545_MethodInfo = 
{
	"ParseJSONList"/* name */
	, NULL/* method */
	, &ResponseBase_t198_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t457_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ResponseBase_t198_ResponseBase_ParseJSONList_m1545_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, true/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, ResponseBase_ParseJSONList_m1545_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ResponseBase_ParseJSONList_m1545_Il2CppGenericContainer/* genericContainer */

};
static const MethodInfo* ResponseBase_t198_MethodInfos[] =
{
	&ResponseBase__ctor_m965_MethodInfo,
	&ResponseBase_Parse_m1544_MethodInfo,
	&ResponseBase_ParseJSONString_m966_MethodInfo,
	&ResponseBase_ParseJSONInt32_m967_MethodInfo,
	&ResponseBase_ParseJSONUInt16_m968_MethodInfo,
	&ResponseBase_ParseJSONUInt64_m969_MethodInfo,
	&ResponseBase_ParseJSONBool_m970_MethodInfo,
	&ResponseBase_ParseJSONList_m1545_MethodInfo,
	NULL
};
static const Il2CppMethodReference ResponseBase_t198_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	NULL,
};
static bool ResponseBase_t198_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ResponseBase_t198_1_0_0;
struct ResponseBase_t198;
const Il2CppTypeDefinitionMetadata ResponseBase_t198_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ResponseBase_t198_VTable/* vtableMethods */
	, ResponseBase_t198_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResponseBase_t198_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResponseBase"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, ResponseBase_t198_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResponseBase_t198_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ResponseBase_t198_0_0_0/* byval_arg */
	, &ResponseBase_t198_1_0_0/* this_arg */
	, &ResponseBase_t198_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ResponseBase_t198)/* instance_size */
	, sizeof (ResponseBase_t198)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 8/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Networking.Match.IResponse
extern TypeInfo IResponse_t420_il2cpp_TypeInfo;
static const MethodInfo* IResponse_t420_MethodInfos[] =
{
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IResponse_t420_0_0_0;
extern const Il2CppType IResponse_t420_1_0_0;
struct IResponse_t420;
const Il2CppTypeDefinitionMetadata IResponse_t420_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IResponse_t420_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IResponse"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, IResponse_t420_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IResponse_t420_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &IResponse_t420_0_0_0/* byval_arg */
	, &IResponse_t420_1_0_0/* this_arg */
	, &IResponse_t420_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_Response.h"
// Metadata Definition UnityEngine.Networking.Match.Response
extern TypeInfo Response_t199_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.Response
#include "UnityEngine_UnityEngine_Networking_Match_ResponseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern const MethodInfo Response__ctor_m971_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Response__ctor_m971/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Networking.Match.Response::get_success()
extern const MethodInfo Response_get_success_m972_MethodInfo = 
{
	"get_success"/* name */
	, (methodPointerType)&Response_get_success_m972/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 272/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo Response_t199_Response_set_success_m973_ParameterInfos[] = 
{
	{"value", 0, 134218670, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.Response::set_success(System.Boolean)
extern const MethodInfo Response_set_success_m973_MethodInfo = 
{
	"set_success"/* name */
	, (methodPointerType)&Response_set_success_m973/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, Response_t199_Response_set_success_m973_ParameterInfos/* parameters */
	, 273/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.Response::get_extendedInfo()
extern const MethodInfo Response_get_extendedInfo_m974_MethodInfo = 
{
	"get_extendedInfo"/* name */
	, (methodPointerType)&Response_get_extendedInfo_m974/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 274/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Response_t199_Response_set_extendedInfo_m975_ParameterInfos[] = 
{
	{"value", 0, 134218671, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.Response::set_extendedInfo(System.String)
extern const MethodInfo Response_set_extendedInfo_m975_MethodInfo = 
{
	"set_extendedInfo"/* name */
	, (methodPointerType)&Response_set_extendedInfo_m975/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Response_t199_Response_set_extendedInfo_m975_ParameterInfos/* parameters */
	, 275/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.Response::ToString()
extern const MethodInfo Response_ToString_m976_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Response_ToString_m976/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo Response_t199_Response_Parse_m977_ParameterInfos[] = 
{
	{"obj", 0, 134218672, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.Response::Parse(System.Object)
extern const MethodInfo Response_Parse_m977_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&Response_Parse_m977/* method */
	, &Response_t199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Response_t199_Response_Parse_m977_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Response_t199_MethodInfos[] =
{
	&Response__ctor_m971_MethodInfo,
	&Response_get_success_m972_MethodInfo,
	&Response_set_success_m973_MethodInfo,
	&Response_get_extendedInfo_m974_MethodInfo,
	&Response_set_extendedInfo_m975_MethodInfo,
	&Response_ToString_m976_MethodInfo,
	&Response_Parse_m977_MethodInfo,
	NULL
};
extern const MethodInfo Response_get_success_m972_MethodInfo;
extern const MethodInfo Response_set_success_m973_MethodInfo;
static const PropertyInfo Response_t199____success_PropertyInfo = 
{
	&Response_t199_il2cpp_TypeInfo/* parent */
	, "success"/* name */
	, &Response_get_success_m972_MethodInfo/* get */
	, &Response_set_success_m973_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Response_get_extendedInfo_m974_MethodInfo;
extern const MethodInfo Response_set_extendedInfo_m975_MethodInfo;
static const PropertyInfo Response_t199____extendedInfo_PropertyInfo = 
{
	&Response_t199_il2cpp_TypeInfo/* parent */
	, "extendedInfo"/* name */
	, &Response_get_extendedInfo_m974_MethodInfo/* get */
	, &Response_set_extendedInfo_m975_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Response_t199_PropertyInfos[] =
{
	&Response_t199____success_PropertyInfo,
	&Response_t199____extendedInfo_PropertyInfo,
	NULL
};
extern const MethodInfo Response_ToString_m976_MethodInfo;
extern const MethodInfo Response_Parse_m977_MethodInfo;
static const Il2CppMethodReference Response_t199_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Response_ToString_m976_MethodInfo,
	&Response_Parse_m977_MethodInfo,
};
static bool Response_t199_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Response_t199_InterfacesTypeInfos[] = 
{
	&IResponse_t420_0_0_0,
};
static Il2CppInterfaceOffsetPair Response_t199_InterfacesOffsets[] = 
{
	{ &IResponse_t420_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Response_t199_0_0_0;
extern const Il2CppType Response_t199_1_0_0;
struct Response_t199;
const Il2CppTypeDefinitionMetadata Response_t199_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Response_t199_InterfacesTypeInfos/* implementedInterfaces */
	, Response_t199_InterfacesOffsets/* interfaceOffsets */
	, &ResponseBase_t198_0_0_0/* parent */
	, Response_t199_VTable/* vtableMethods */
	, Response_t199_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 810/* fieldStart */

};
TypeInfo Response_t199_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Response"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, Response_t199_MethodInfos/* methods */
	, Response_t199_PropertyInfos/* properties */
	, NULL/* events */
	, &Response_t199_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Response_t199_0_0_0/* byval_arg */
	, &Response_t199_1_0_0/* this_arg */
	, &Response_t199_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Response_t199)/* instance_size */
	, sizeof (Response_t199)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponse.h"
// Metadata Definition UnityEngine.Networking.Match.BasicResponse
extern TypeInfo BasicResponse_t200_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.BasicResponse
#include "UnityEngine_UnityEngine_Networking_Match_BasicResponseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern const MethodInfo BasicResponse__ctor_m978_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BasicResponse__ctor_m978/* method */
	, &BasicResponse_t200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* BasicResponse_t200_MethodInfos[] =
{
	&BasicResponse__ctor_m978_MethodInfo,
	NULL
};
static const Il2CppMethodReference BasicResponse_t200_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Response_ToString_m976_MethodInfo,
	&Response_Parse_m977_MethodInfo,
};
static bool BasicResponse_t200_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair BasicResponse_t200_InterfacesOffsets[] = 
{
	{ &IResponse_t420_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType BasicResponse_t200_0_0_0;
extern const Il2CppType BasicResponse_t200_1_0_0;
struct BasicResponse_t200;
const Il2CppTypeDefinitionMetadata BasicResponse_t200_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BasicResponse_t200_InterfacesOffsets/* interfaceOffsets */
	, &Response_t199_0_0_0/* parent */
	, BasicResponse_t200_VTable/* vtableMethods */
	, BasicResponse_t200_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo BasicResponse_t200_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "BasicResponse"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, BasicResponse_t200_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &BasicResponse_t200_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &BasicResponse_t200_0_0_0/* byval_arg */
	, &BasicResponse_t200_1_0_0/* this_arg */
	, &BasicResponse_t200_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BasicResponse_t200)/* instance_size */
	, sizeof (BasicResponse_t200)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequest.h"
// Metadata Definition UnityEngine.Networking.Match.CreateMatchRequest
extern TypeInfo CreateMatchRequest_t202_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchRequestMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern const MethodInfo CreateMatchRequest__ctor_m979_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CreateMatchRequest__ctor_m979/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern const MethodInfo CreateMatchRequest_get_name_m980_MethodInfo = 
{
	"get_name"/* name */
	, (methodPointerType)&CreateMatchRequest_get_name_m980/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 281/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CreateMatchRequest_t202_CreateMatchRequest_set_name_m981_ParameterInfos[] = 
{
	{"value", 0, 134218673, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern const MethodInfo CreateMatchRequest_set_name_m981_MethodInfo = 
{
	"set_name"/* name */
	, (methodPointerType)&CreateMatchRequest_set_name_m981/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, CreateMatchRequest_t202_CreateMatchRequest_set_name_m981_ParameterInfos/* parameters */
	, 282/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t368_0_0_0;
extern void* RuntimeInvoker_UInt32_t368 (const MethodInfo* method, void* obj, void** args);
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern const MethodInfo CreateMatchRequest_get_size_m982_MethodInfo = 
{
	"get_size"/* name */
	, (methodPointerType)&CreateMatchRequest_get_size_m982/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &UInt32_t368_0_0_0/* return_type */
	, RuntimeInvoker_UInt32_t368/* invoker_method */
	, NULL/* parameters */
	, 283/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t368_0_0_0;
static const ParameterInfo CreateMatchRequest_t202_CreateMatchRequest_set_size_m983_ParameterInfos[] = 
{
	{"value", 0, 134218674, 0, &UInt32_t368_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern const MethodInfo CreateMatchRequest_set_size_m983_MethodInfo = 
{
	"set_size"/* name */
	, (methodPointerType)&CreateMatchRequest_set_size_m983/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, CreateMatchRequest_t202_CreateMatchRequest_set_size_m983_ParameterInfos/* parameters */
	, 284/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern const MethodInfo CreateMatchRequest_get_advertise_m984_MethodInfo = 
{
	"get_advertise"/* name */
	, (methodPointerType)&CreateMatchRequest_get_advertise_m984/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 285/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo CreateMatchRequest_t202_CreateMatchRequest_set_advertise_m985_ParameterInfos[] = 
{
	{"value", 0, 134218675, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern const MethodInfo CreateMatchRequest_set_advertise_m985_MethodInfo = 
{
	"set_advertise"/* name */
	, (methodPointerType)&CreateMatchRequest_set_advertise_m985/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, CreateMatchRequest_t202_CreateMatchRequest_set_advertise_m985_ParameterInfos/* parameters */
	, 286/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern const MethodInfo CreateMatchRequest_get_password_m986_MethodInfo = 
{
	"get_password"/* name */
	, (methodPointerType)&CreateMatchRequest_get_password_m986/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 287/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CreateMatchRequest_t202_CreateMatchRequest_set_password_m987_ParameterInfos[] = 
{
	{"value", 0, 134218676, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern const MethodInfo CreateMatchRequest_set_password_m987_MethodInfo = 
{
	"set_password"/* name */
	, (methodPointerType)&CreateMatchRequest_set_password_m987/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, CreateMatchRequest_t202_CreateMatchRequest_set_password_m987_ParameterInfos/* parameters */
	, 288/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Dictionary_2_t201_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern const MethodInfo CreateMatchRequest_get_matchAttributes_m988_MethodInfo = 
{
	"get_matchAttributes"/* name */
	, (methodPointerType)&CreateMatchRequest_get_matchAttributes_m988/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &Dictionary_2_t201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 289/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern const MethodInfo CreateMatchRequest_ToString_m989_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&CreateMatchRequest_ToString_m989/* method */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CreateMatchRequest_t202_MethodInfos[] =
{
	&CreateMatchRequest__ctor_m979_MethodInfo,
	&CreateMatchRequest_get_name_m980_MethodInfo,
	&CreateMatchRequest_set_name_m981_MethodInfo,
	&CreateMatchRequest_get_size_m982_MethodInfo,
	&CreateMatchRequest_set_size_m983_MethodInfo,
	&CreateMatchRequest_get_advertise_m984_MethodInfo,
	&CreateMatchRequest_set_advertise_m985_MethodInfo,
	&CreateMatchRequest_get_password_m986_MethodInfo,
	&CreateMatchRequest_set_password_m987_MethodInfo,
	&CreateMatchRequest_get_matchAttributes_m988_MethodInfo,
	&CreateMatchRequest_ToString_m989_MethodInfo,
	NULL
};
extern const MethodInfo CreateMatchRequest_get_name_m980_MethodInfo;
extern const MethodInfo CreateMatchRequest_set_name_m981_MethodInfo;
static const PropertyInfo CreateMatchRequest_t202____name_PropertyInfo = 
{
	&CreateMatchRequest_t202_il2cpp_TypeInfo/* parent */
	, "name"/* name */
	, &CreateMatchRequest_get_name_m980_MethodInfo/* get */
	, &CreateMatchRequest_set_name_m981_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchRequest_get_size_m982_MethodInfo;
extern const MethodInfo CreateMatchRequest_set_size_m983_MethodInfo;
static const PropertyInfo CreateMatchRequest_t202____size_PropertyInfo = 
{
	&CreateMatchRequest_t202_il2cpp_TypeInfo/* parent */
	, "size"/* name */
	, &CreateMatchRequest_get_size_m982_MethodInfo/* get */
	, &CreateMatchRequest_set_size_m983_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchRequest_get_advertise_m984_MethodInfo;
extern const MethodInfo CreateMatchRequest_set_advertise_m985_MethodInfo;
static const PropertyInfo CreateMatchRequest_t202____advertise_PropertyInfo = 
{
	&CreateMatchRequest_t202_il2cpp_TypeInfo/* parent */
	, "advertise"/* name */
	, &CreateMatchRequest_get_advertise_m984_MethodInfo/* get */
	, &CreateMatchRequest_set_advertise_m985_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchRequest_get_password_m986_MethodInfo;
extern const MethodInfo CreateMatchRequest_set_password_m987_MethodInfo;
static const PropertyInfo CreateMatchRequest_t202____password_PropertyInfo = 
{
	&CreateMatchRequest_t202_il2cpp_TypeInfo/* parent */
	, "password"/* name */
	, &CreateMatchRequest_get_password_m986_MethodInfo/* get */
	, &CreateMatchRequest_set_password_m987_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchRequest_get_matchAttributes_m988_MethodInfo;
static const PropertyInfo CreateMatchRequest_t202____matchAttributes_PropertyInfo = 
{
	&CreateMatchRequest_t202_il2cpp_TypeInfo/* parent */
	, "matchAttributes"/* name */
	, &CreateMatchRequest_get_matchAttributes_m988_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CreateMatchRequest_t202_PropertyInfos[] =
{
	&CreateMatchRequest_t202____name_PropertyInfo,
	&CreateMatchRequest_t202____size_PropertyInfo,
	&CreateMatchRequest_t202____advertise_PropertyInfo,
	&CreateMatchRequest_t202____password_PropertyInfo,
	&CreateMatchRequest_t202____matchAttributes_PropertyInfo,
	NULL
};
extern const MethodInfo CreateMatchRequest_ToString_m989_MethodInfo;
static const Il2CppMethodReference CreateMatchRequest_t202_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&CreateMatchRequest_ToString_m989_MethodInfo,
};
static bool CreateMatchRequest_t202_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CreateMatchRequest_t202_0_0_0;
extern const Il2CppType CreateMatchRequest_t202_1_0_0;
struct CreateMatchRequest_t202;
const Il2CppTypeDefinitionMetadata CreateMatchRequest_t202_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Request_t197_0_0_0/* parent */
	, CreateMatchRequest_t202_VTable/* vtableMethods */
	, CreateMatchRequest_t202_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 812/* fieldStart */

};
TypeInfo CreateMatchRequest_t202_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CreateMatchRequest"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, CreateMatchRequest_t202_MethodInfos/* methods */
	, CreateMatchRequest_t202_PropertyInfos/* properties */
	, NULL/* events */
	, &CreateMatchRequest_t202_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CreateMatchRequest_t202_0_0_0/* byval_arg */
	, &CreateMatchRequest_t202_1_0_0/* this_arg */
	, &CreateMatchRequest_t202_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CreateMatchRequest_t202)/* instance_size */
	, sizeof (CreateMatchRequest_t202)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 5/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponse.h"
// Metadata Definition UnityEngine.Networking.Match.CreateMatchResponse
extern TypeInfo CreateMatchResponse_t203_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.CreateMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatchResponseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern const MethodInfo CreateMatchResponse__ctor_m990_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CreateMatchResponse__ctor_m990/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_address()
extern const MethodInfo CreateMatchResponse_get_address_m991_MethodInfo = 
{
	"get_address"/* name */
	, (methodPointerType)&CreateMatchResponse_get_address_m991/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 296/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_set_address_m992_ParameterInfos[] = 
{
	{"value", 0, 134218677, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_address(System.String)
extern const MethodInfo CreateMatchResponse_set_address_m992_MethodInfo = 
{
	"set_address"/* name */
	, (methodPointerType)&CreateMatchResponse_set_address_m992/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_set_address_m992_ParameterInfos/* parameters */
	, 297/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::get_port()
extern const MethodInfo CreateMatchResponse_get_port_m993_MethodInfo = 
{
	"get_port"/* name */
	, (methodPointerType)&CreateMatchResponse_get_port_m993/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 298/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_set_port_m994_ParameterInfos[] = 
{
	{"value", 0, 134218678, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_port(System.Int32)
extern const MethodInfo CreateMatchResponse_set_port_m994_MethodInfo = 
{
	"set_port"/* name */
	, (methodPointerType)&CreateMatchResponse_set_port_m994/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_set_port_m994_ParameterInfos/* parameters */
	, 299/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
extern void* RuntimeInvoker_NetworkID_t216 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.CreateMatchResponse::get_networkId()
extern const MethodInfo CreateMatchResponse_get_networkId_m995_MethodInfo = 
{
	"get_networkId"/* name */
	, (methodPointerType)&CreateMatchResponse_get_networkId_m995/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &NetworkID_t216_0_0_0/* return_type */
	, RuntimeInvoker_NetworkID_t216/* invoker_method */
	, NULL/* parameters */
	, 300/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_set_networkId_m996_ParameterInfos[] = 
{
	{"value", 0, 134218679, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo CreateMatchResponse_set_networkId_m996_MethodInfo = 
{
	"set_networkId"/* name */
	, (methodPointerType)&CreateMatchResponse_set_networkId_m996/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_set_networkId_m996_ParameterInfos/* parameters */
	, 301/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.CreateMatchResponse::get_accessTokenString()
extern const MethodInfo CreateMatchResponse_get_accessTokenString_m997_MethodInfo = 
{
	"get_accessTokenString"/* name */
	, (methodPointerType)&CreateMatchResponse_get_accessTokenString_m997/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 302/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_set_accessTokenString_m998_ParameterInfos[] = 
{
	{"value", 0, 134218680, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_accessTokenString(System.String)
extern const MethodInfo CreateMatchResponse_set_accessTokenString_m998_MethodInfo = 
{
	"set_accessTokenString"/* name */
	, (methodPointerType)&CreateMatchResponse_set_accessTokenString_m998/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_set_accessTokenString_m998_ParameterInfos/* parameters */
	, 303/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NodeID_t217_0_0_0;
extern void* RuntimeInvoker_NodeID_t217 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::get_nodeId()
extern const MethodInfo CreateMatchResponse_get_nodeId_m999_MethodInfo = 
{
	"get_nodeId"/* name */
	, (methodPointerType)&CreateMatchResponse_get_nodeId_m999/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &NodeID_t217_0_0_0/* return_type */
	, RuntimeInvoker_NodeID_t217/* invoker_method */
	, NULL/* parameters */
	, 304/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NodeID_t217_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_set_nodeId_m1000_ParameterInfos[] = 
{
	{"value", 0, 134218681, 0, &NodeID_t217_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt16_t381 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern const MethodInfo CreateMatchResponse_set_nodeId_m1000_MethodInfo = 
{
	"set_nodeId"/* name */
	, (methodPointerType)&CreateMatchResponse_set_nodeId_m1000/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt16_t381/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_set_nodeId_m1000_ParameterInfos/* parameters */
	, 305/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::get_usingRelay()
extern const MethodInfo CreateMatchResponse_get_usingRelay_m1001_MethodInfo = 
{
	"get_usingRelay"/* name */
	, (methodPointerType)&CreateMatchResponse_get_usingRelay_m1001/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 306/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_set_usingRelay_m1002_ParameterInfos[] = 
{
	{"value", 0, 134218682, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::set_usingRelay(System.Boolean)
extern const MethodInfo CreateMatchResponse_set_usingRelay_m1002_MethodInfo = 
{
	"set_usingRelay"/* name */
	, (methodPointerType)&CreateMatchResponse_set_usingRelay_m1002/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_set_usingRelay_m1002_ParameterInfos/* parameters */
	, 307/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern const MethodInfo CreateMatchResponse_ToString_m1003_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&CreateMatchResponse_ToString_m1003/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo CreateMatchResponse_t203_CreateMatchResponse_Parse_m1004_ParameterInfos[] = 
{
	{"obj", 0, 134218683, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::Parse(System.Object)
extern const MethodInfo CreateMatchResponse_Parse_m1004_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&CreateMatchResponse_Parse_m1004/* method */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, CreateMatchResponse_t203_CreateMatchResponse_Parse_m1004_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* CreateMatchResponse_t203_MethodInfos[] =
{
	&CreateMatchResponse__ctor_m990_MethodInfo,
	&CreateMatchResponse_get_address_m991_MethodInfo,
	&CreateMatchResponse_set_address_m992_MethodInfo,
	&CreateMatchResponse_get_port_m993_MethodInfo,
	&CreateMatchResponse_set_port_m994_MethodInfo,
	&CreateMatchResponse_get_networkId_m995_MethodInfo,
	&CreateMatchResponse_set_networkId_m996_MethodInfo,
	&CreateMatchResponse_get_accessTokenString_m997_MethodInfo,
	&CreateMatchResponse_set_accessTokenString_m998_MethodInfo,
	&CreateMatchResponse_get_nodeId_m999_MethodInfo,
	&CreateMatchResponse_set_nodeId_m1000_MethodInfo,
	&CreateMatchResponse_get_usingRelay_m1001_MethodInfo,
	&CreateMatchResponse_set_usingRelay_m1002_MethodInfo,
	&CreateMatchResponse_ToString_m1003_MethodInfo,
	&CreateMatchResponse_Parse_m1004_MethodInfo,
	NULL
};
extern const MethodInfo CreateMatchResponse_get_address_m991_MethodInfo;
extern const MethodInfo CreateMatchResponse_set_address_m992_MethodInfo;
static const PropertyInfo CreateMatchResponse_t203____address_PropertyInfo = 
{
	&CreateMatchResponse_t203_il2cpp_TypeInfo/* parent */
	, "address"/* name */
	, &CreateMatchResponse_get_address_m991_MethodInfo/* get */
	, &CreateMatchResponse_set_address_m992_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchResponse_get_port_m993_MethodInfo;
extern const MethodInfo CreateMatchResponse_set_port_m994_MethodInfo;
static const PropertyInfo CreateMatchResponse_t203____port_PropertyInfo = 
{
	&CreateMatchResponse_t203_il2cpp_TypeInfo/* parent */
	, "port"/* name */
	, &CreateMatchResponse_get_port_m993_MethodInfo/* get */
	, &CreateMatchResponse_set_port_m994_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchResponse_get_networkId_m995_MethodInfo;
extern const MethodInfo CreateMatchResponse_set_networkId_m996_MethodInfo;
static const PropertyInfo CreateMatchResponse_t203____networkId_PropertyInfo = 
{
	&CreateMatchResponse_t203_il2cpp_TypeInfo/* parent */
	, "networkId"/* name */
	, &CreateMatchResponse_get_networkId_m995_MethodInfo/* get */
	, &CreateMatchResponse_set_networkId_m996_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchResponse_get_accessTokenString_m997_MethodInfo;
extern const MethodInfo CreateMatchResponse_set_accessTokenString_m998_MethodInfo;
static const PropertyInfo CreateMatchResponse_t203____accessTokenString_PropertyInfo = 
{
	&CreateMatchResponse_t203_il2cpp_TypeInfo/* parent */
	, "accessTokenString"/* name */
	, &CreateMatchResponse_get_accessTokenString_m997_MethodInfo/* get */
	, &CreateMatchResponse_set_accessTokenString_m998_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchResponse_get_nodeId_m999_MethodInfo;
extern const MethodInfo CreateMatchResponse_set_nodeId_m1000_MethodInfo;
static const PropertyInfo CreateMatchResponse_t203____nodeId_PropertyInfo = 
{
	&CreateMatchResponse_t203_il2cpp_TypeInfo/* parent */
	, "nodeId"/* name */
	, &CreateMatchResponse_get_nodeId_m999_MethodInfo/* get */
	, &CreateMatchResponse_set_nodeId_m1000_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo CreateMatchResponse_get_usingRelay_m1001_MethodInfo;
extern const MethodInfo CreateMatchResponse_set_usingRelay_m1002_MethodInfo;
static const PropertyInfo CreateMatchResponse_t203____usingRelay_PropertyInfo = 
{
	&CreateMatchResponse_t203_il2cpp_TypeInfo/* parent */
	, "usingRelay"/* name */
	, &CreateMatchResponse_get_usingRelay_m1001_MethodInfo/* get */
	, &CreateMatchResponse_set_usingRelay_m1002_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* CreateMatchResponse_t203_PropertyInfos[] =
{
	&CreateMatchResponse_t203____address_PropertyInfo,
	&CreateMatchResponse_t203____port_PropertyInfo,
	&CreateMatchResponse_t203____networkId_PropertyInfo,
	&CreateMatchResponse_t203____accessTokenString_PropertyInfo,
	&CreateMatchResponse_t203____nodeId_PropertyInfo,
	&CreateMatchResponse_t203____usingRelay_PropertyInfo,
	NULL
};
extern const MethodInfo CreateMatchResponse_ToString_m1003_MethodInfo;
extern const MethodInfo CreateMatchResponse_Parse_m1004_MethodInfo;
static const Il2CppMethodReference CreateMatchResponse_t203_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&CreateMatchResponse_ToString_m1003_MethodInfo,
	&CreateMatchResponse_Parse_m1004_MethodInfo,
};
static bool CreateMatchResponse_t203_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair CreateMatchResponse_t203_InterfacesOffsets[] = 
{
	{ &IResponse_t420_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CreateMatchResponse_t203_0_0_0;
extern const Il2CppType CreateMatchResponse_t203_1_0_0;
struct CreateMatchResponse_t203;
const Il2CppTypeDefinitionMetadata CreateMatchResponse_t203_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CreateMatchResponse_t203_InterfacesOffsets/* interfaceOffsets */
	, &BasicResponse_t200_0_0_0/* parent */
	, CreateMatchResponse_t203_VTable/* vtableMethods */
	, CreateMatchResponse_t203_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 817/* fieldStart */

};
TypeInfo CreateMatchResponse_t203_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CreateMatchResponse"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, CreateMatchResponse_t203_MethodInfos/* methods */
	, CreateMatchResponse_t203_PropertyInfos/* properties */
	, NULL/* events */
	, &CreateMatchResponse_t203_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CreateMatchResponse_t203_0_0_0/* byval_arg */
	, &CreateMatchResponse_t203_1_0_0/* this_arg */
	, &CreateMatchResponse_t203_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CreateMatchResponse_t203)/* instance_size */
	, sizeof (CreateMatchResponse_t203)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 15/* method_count */
	, 6/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequest.h"
// Metadata Definition UnityEngine.Networking.Match.JoinMatchRequest
extern TypeInfo JoinMatchRequest_t204_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchRequestMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern const MethodInfo JoinMatchRequest__ctor_m1005_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&JoinMatchRequest__ctor_m1005/* method */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NetworkID_t216 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern const MethodInfo JoinMatchRequest_get_networkId_m1006_MethodInfo = 
{
	"get_networkId"/* name */
	, (methodPointerType)&JoinMatchRequest_get_networkId_m1006/* method */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* declaring_type */
	, &NetworkID_t216_0_0_0/* return_type */
	, RuntimeInvoker_NetworkID_t216/* invoker_method */
	, NULL/* parameters */
	, 310/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo JoinMatchRequest_t204_JoinMatchRequest_set_networkId_m1007_ParameterInfos[] = 
{
	{"value", 0, 134218684, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo JoinMatchRequest_set_networkId_m1007_MethodInfo = 
{
	"set_networkId"/* name */
	, (methodPointerType)&JoinMatchRequest_set_networkId_m1007/* method */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, JoinMatchRequest_t204_JoinMatchRequest_set_networkId_m1007_ParameterInfos/* parameters */
	, 311/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern const MethodInfo JoinMatchRequest_get_password_m1008_MethodInfo = 
{
	"get_password"/* name */
	, (methodPointerType)&JoinMatchRequest_get_password_m1008/* method */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 312/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo JoinMatchRequest_t204_JoinMatchRequest_set_password_m1009_ParameterInfos[] = 
{
	{"value", 0, 134218685, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern const MethodInfo JoinMatchRequest_set_password_m1009_MethodInfo = 
{
	"set_password"/* name */
	, (methodPointerType)&JoinMatchRequest_set_password_m1009/* method */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, JoinMatchRequest_t204_JoinMatchRequest_set_password_m1009_ParameterInfos/* parameters */
	, 313/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern const MethodInfo JoinMatchRequest_ToString_m1010_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&JoinMatchRequest_ToString_m1010/* method */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* JoinMatchRequest_t204_MethodInfos[] =
{
	&JoinMatchRequest__ctor_m1005_MethodInfo,
	&JoinMatchRequest_get_networkId_m1006_MethodInfo,
	&JoinMatchRequest_set_networkId_m1007_MethodInfo,
	&JoinMatchRequest_get_password_m1008_MethodInfo,
	&JoinMatchRequest_set_password_m1009_MethodInfo,
	&JoinMatchRequest_ToString_m1010_MethodInfo,
	NULL
};
extern const MethodInfo JoinMatchRequest_get_networkId_m1006_MethodInfo;
extern const MethodInfo JoinMatchRequest_set_networkId_m1007_MethodInfo;
static const PropertyInfo JoinMatchRequest_t204____networkId_PropertyInfo = 
{
	&JoinMatchRequest_t204_il2cpp_TypeInfo/* parent */
	, "networkId"/* name */
	, &JoinMatchRequest_get_networkId_m1006_MethodInfo/* get */
	, &JoinMatchRequest_set_networkId_m1007_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JoinMatchRequest_get_password_m1008_MethodInfo;
extern const MethodInfo JoinMatchRequest_set_password_m1009_MethodInfo;
static const PropertyInfo JoinMatchRequest_t204____password_PropertyInfo = 
{
	&JoinMatchRequest_t204_il2cpp_TypeInfo/* parent */
	, "password"/* name */
	, &JoinMatchRequest_get_password_m1008_MethodInfo/* get */
	, &JoinMatchRequest_set_password_m1009_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* JoinMatchRequest_t204_PropertyInfos[] =
{
	&JoinMatchRequest_t204____networkId_PropertyInfo,
	&JoinMatchRequest_t204____password_PropertyInfo,
	NULL
};
extern const MethodInfo JoinMatchRequest_ToString_m1010_MethodInfo;
static const Il2CppMethodReference JoinMatchRequest_t204_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&JoinMatchRequest_ToString_m1010_MethodInfo,
};
static bool JoinMatchRequest_t204_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType JoinMatchRequest_t204_0_0_0;
extern const Il2CppType JoinMatchRequest_t204_1_0_0;
struct JoinMatchRequest_t204;
const Il2CppTypeDefinitionMetadata JoinMatchRequest_t204_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Request_t197_0_0_0/* parent */
	, JoinMatchRequest_t204_VTable/* vtableMethods */
	, JoinMatchRequest_t204_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 823/* fieldStart */

};
TypeInfo JoinMatchRequest_t204_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "JoinMatchRequest"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, JoinMatchRequest_t204_MethodInfos/* methods */
	, JoinMatchRequest_t204_PropertyInfos/* properties */
	, NULL/* events */
	, &JoinMatchRequest_t204_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &JoinMatchRequest_t204_0_0_0/* byval_arg */
	, &JoinMatchRequest_t204_1_0_0/* this_arg */
	, &JoinMatchRequest_t204_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (JoinMatchRequest_t204)/* instance_size */
	, sizeof (JoinMatchRequest_t204)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponse.h"
// Metadata Definition UnityEngine.Networking.Match.JoinMatchResponse
extern TypeInfo JoinMatchResponse_t205_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.JoinMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatchResponseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern const MethodInfo JoinMatchResponse__ctor_m1011_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&JoinMatchResponse__ctor_m1011/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_address()
extern const MethodInfo JoinMatchResponse_get_address_m1012_MethodInfo = 
{
	"get_address"/* name */
	, (methodPointerType)&JoinMatchResponse_get_address_m1012/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 320/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_set_address_m1013_ParameterInfos[] = 
{
	{"value", 0, 134218686, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_address(System.String)
extern const MethodInfo JoinMatchResponse_set_address_m1013_MethodInfo = 
{
	"set_address"/* name */
	, (methodPointerType)&JoinMatchResponse_set_address_m1013/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_set_address_m1013_ParameterInfos/* parameters */
	, 321/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::get_port()
extern const MethodInfo JoinMatchResponse_get_port_m1014_MethodInfo = 
{
	"get_port"/* name */
	, (methodPointerType)&JoinMatchResponse_get_port_m1014/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 322/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_set_port_m1015_ParameterInfos[] = 
{
	{"value", 0, 134218687, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_port(System.Int32)
extern const MethodInfo JoinMatchResponse_set_port_m1015_MethodInfo = 
{
	"set_port"/* name */
	, (methodPointerType)&JoinMatchResponse_set_port_m1015/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_set_port_m1015_ParameterInfos/* parameters */
	, 323/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NetworkID_t216 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::get_networkId()
extern const MethodInfo JoinMatchResponse_get_networkId_m1016_MethodInfo = 
{
	"get_networkId"/* name */
	, (methodPointerType)&JoinMatchResponse_get_networkId_m1016/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &NetworkID_t216_0_0_0/* return_type */
	, RuntimeInvoker_NetworkID_t216/* invoker_method */
	, NULL/* parameters */
	, 324/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_set_networkId_m1017_ParameterInfos[] = 
{
	{"value", 0, 134218688, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo JoinMatchResponse_set_networkId_m1017_MethodInfo = 
{
	"set_networkId"/* name */
	, (methodPointerType)&JoinMatchResponse_set_networkId_m1017/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_set_networkId_m1017_ParameterInfos/* parameters */
	, 325/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.JoinMatchResponse::get_accessTokenString()
extern const MethodInfo JoinMatchResponse_get_accessTokenString_m1018_MethodInfo = 
{
	"get_accessTokenString"/* name */
	, (methodPointerType)&JoinMatchResponse_get_accessTokenString_m1018/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 326/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_set_accessTokenString_m1019_ParameterInfos[] = 
{
	{"value", 0, 134218689, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_accessTokenString(System.String)
extern const MethodInfo JoinMatchResponse_set_accessTokenString_m1019_MethodInfo = 
{
	"set_accessTokenString"/* name */
	, (methodPointerType)&JoinMatchResponse_set_accessTokenString_m1019/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_set_accessTokenString_m1019_ParameterInfos/* parameters */
	, 327/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NodeID_t217 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::get_nodeId()
extern const MethodInfo JoinMatchResponse_get_nodeId_m1020_MethodInfo = 
{
	"get_nodeId"/* name */
	, (methodPointerType)&JoinMatchResponse_get_nodeId_m1020/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &NodeID_t217_0_0_0/* return_type */
	, RuntimeInvoker_NodeID_t217/* invoker_method */
	, NULL/* parameters */
	, 328/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NodeID_t217_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_set_nodeId_m1021_ParameterInfos[] = 
{
	{"value", 0, 134218690, 0, &NodeID_t217_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt16_t381 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern const MethodInfo JoinMatchResponse_set_nodeId_m1021_MethodInfo = 
{
	"set_nodeId"/* name */
	, (methodPointerType)&JoinMatchResponse_set_nodeId_m1021/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt16_t381/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_set_nodeId_m1021_ParameterInfos/* parameters */
	, 329/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::get_usingRelay()
extern const MethodInfo JoinMatchResponse_get_usingRelay_m1022_MethodInfo = 
{
	"get_usingRelay"/* name */
	, (methodPointerType)&JoinMatchResponse_get_usingRelay_m1022/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 330/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_set_usingRelay_m1023_ParameterInfos[] = 
{
	{"value", 0, 134218691, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::set_usingRelay(System.Boolean)
extern const MethodInfo JoinMatchResponse_set_usingRelay_m1023_MethodInfo = 
{
	"set_usingRelay"/* name */
	, (methodPointerType)&JoinMatchResponse_set_usingRelay_m1023/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_set_usingRelay_m1023_ParameterInfos/* parameters */
	, 331/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern const MethodInfo JoinMatchResponse_ToString_m1024_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&JoinMatchResponse_ToString_m1024/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo JoinMatchResponse_t205_JoinMatchResponse_Parse_m1025_ParameterInfos[] = 
{
	{"obj", 0, 134218692, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::Parse(System.Object)
extern const MethodInfo JoinMatchResponse_Parse_m1025_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&JoinMatchResponse_Parse_m1025/* method */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, JoinMatchResponse_t205_JoinMatchResponse_Parse_m1025_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* JoinMatchResponse_t205_MethodInfos[] =
{
	&JoinMatchResponse__ctor_m1011_MethodInfo,
	&JoinMatchResponse_get_address_m1012_MethodInfo,
	&JoinMatchResponse_set_address_m1013_MethodInfo,
	&JoinMatchResponse_get_port_m1014_MethodInfo,
	&JoinMatchResponse_set_port_m1015_MethodInfo,
	&JoinMatchResponse_get_networkId_m1016_MethodInfo,
	&JoinMatchResponse_set_networkId_m1017_MethodInfo,
	&JoinMatchResponse_get_accessTokenString_m1018_MethodInfo,
	&JoinMatchResponse_set_accessTokenString_m1019_MethodInfo,
	&JoinMatchResponse_get_nodeId_m1020_MethodInfo,
	&JoinMatchResponse_set_nodeId_m1021_MethodInfo,
	&JoinMatchResponse_get_usingRelay_m1022_MethodInfo,
	&JoinMatchResponse_set_usingRelay_m1023_MethodInfo,
	&JoinMatchResponse_ToString_m1024_MethodInfo,
	&JoinMatchResponse_Parse_m1025_MethodInfo,
	NULL
};
extern const MethodInfo JoinMatchResponse_get_address_m1012_MethodInfo;
extern const MethodInfo JoinMatchResponse_set_address_m1013_MethodInfo;
static const PropertyInfo JoinMatchResponse_t205____address_PropertyInfo = 
{
	&JoinMatchResponse_t205_il2cpp_TypeInfo/* parent */
	, "address"/* name */
	, &JoinMatchResponse_get_address_m1012_MethodInfo/* get */
	, &JoinMatchResponse_set_address_m1013_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JoinMatchResponse_get_port_m1014_MethodInfo;
extern const MethodInfo JoinMatchResponse_set_port_m1015_MethodInfo;
static const PropertyInfo JoinMatchResponse_t205____port_PropertyInfo = 
{
	&JoinMatchResponse_t205_il2cpp_TypeInfo/* parent */
	, "port"/* name */
	, &JoinMatchResponse_get_port_m1014_MethodInfo/* get */
	, &JoinMatchResponse_set_port_m1015_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JoinMatchResponse_get_networkId_m1016_MethodInfo;
extern const MethodInfo JoinMatchResponse_set_networkId_m1017_MethodInfo;
static const PropertyInfo JoinMatchResponse_t205____networkId_PropertyInfo = 
{
	&JoinMatchResponse_t205_il2cpp_TypeInfo/* parent */
	, "networkId"/* name */
	, &JoinMatchResponse_get_networkId_m1016_MethodInfo/* get */
	, &JoinMatchResponse_set_networkId_m1017_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JoinMatchResponse_get_accessTokenString_m1018_MethodInfo;
extern const MethodInfo JoinMatchResponse_set_accessTokenString_m1019_MethodInfo;
static const PropertyInfo JoinMatchResponse_t205____accessTokenString_PropertyInfo = 
{
	&JoinMatchResponse_t205_il2cpp_TypeInfo/* parent */
	, "accessTokenString"/* name */
	, &JoinMatchResponse_get_accessTokenString_m1018_MethodInfo/* get */
	, &JoinMatchResponse_set_accessTokenString_m1019_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JoinMatchResponse_get_nodeId_m1020_MethodInfo;
extern const MethodInfo JoinMatchResponse_set_nodeId_m1021_MethodInfo;
static const PropertyInfo JoinMatchResponse_t205____nodeId_PropertyInfo = 
{
	&JoinMatchResponse_t205_il2cpp_TypeInfo/* parent */
	, "nodeId"/* name */
	, &JoinMatchResponse_get_nodeId_m1020_MethodInfo/* get */
	, &JoinMatchResponse_set_nodeId_m1021_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JoinMatchResponse_get_usingRelay_m1022_MethodInfo;
extern const MethodInfo JoinMatchResponse_set_usingRelay_m1023_MethodInfo;
static const PropertyInfo JoinMatchResponse_t205____usingRelay_PropertyInfo = 
{
	&JoinMatchResponse_t205_il2cpp_TypeInfo/* parent */
	, "usingRelay"/* name */
	, &JoinMatchResponse_get_usingRelay_m1022_MethodInfo/* get */
	, &JoinMatchResponse_set_usingRelay_m1023_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* JoinMatchResponse_t205_PropertyInfos[] =
{
	&JoinMatchResponse_t205____address_PropertyInfo,
	&JoinMatchResponse_t205____port_PropertyInfo,
	&JoinMatchResponse_t205____networkId_PropertyInfo,
	&JoinMatchResponse_t205____accessTokenString_PropertyInfo,
	&JoinMatchResponse_t205____nodeId_PropertyInfo,
	&JoinMatchResponse_t205____usingRelay_PropertyInfo,
	NULL
};
extern const MethodInfo JoinMatchResponse_ToString_m1024_MethodInfo;
extern const MethodInfo JoinMatchResponse_Parse_m1025_MethodInfo;
static const Il2CppMethodReference JoinMatchResponse_t205_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&JoinMatchResponse_ToString_m1024_MethodInfo,
	&JoinMatchResponse_Parse_m1025_MethodInfo,
};
static bool JoinMatchResponse_t205_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair JoinMatchResponse_t205_InterfacesOffsets[] = 
{
	{ &IResponse_t420_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType JoinMatchResponse_t205_0_0_0;
extern const Il2CppType JoinMatchResponse_t205_1_0_0;
struct JoinMatchResponse_t205;
const Il2CppTypeDefinitionMetadata JoinMatchResponse_t205_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, JoinMatchResponse_t205_InterfacesOffsets/* interfaceOffsets */
	, &BasicResponse_t200_0_0_0/* parent */
	, JoinMatchResponse_t205_VTable/* vtableMethods */
	, JoinMatchResponse_t205_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 825/* fieldStart */

};
TypeInfo JoinMatchResponse_t205_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "JoinMatchResponse"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, JoinMatchResponse_t205_MethodInfos/* methods */
	, JoinMatchResponse_t205_PropertyInfos/* properties */
	, NULL/* events */
	, &JoinMatchResponse_t205_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &JoinMatchResponse_t205_0_0_0/* byval_arg */
	, &JoinMatchResponse_t205_1_0_0/* this_arg */
	, &JoinMatchResponse_t205_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (JoinMatchResponse_t205)/* instance_size */
	, sizeof (JoinMatchResponse_t205)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 15/* method_count */
	, 6/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequest.h"
// Metadata Definition UnityEngine.Networking.Match.DestroyMatchRequest
extern TypeInfo DestroyMatchRequest_t206_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DestroyMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_DestroyMatchRequestMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern const MethodInfo DestroyMatchRequest__ctor_m1026_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DestroyMatchRequest__ctor_m1026/* method */
	, &DestroyMatchRequest_t206_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NetworkID_t216 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern const MethodInfo DestroyMatchRequest_get_networkId_m1027_MethodInfo = 
{
	"get_networkId"/* name */
	, (methodPointerType)&DestroyMatchRequest_get_networkId_m1027/* method */
	, &DestroyMatchRequest_t206_il2cpp_TypeInfo/* declaring_type */
	, &NetworkID_t216_0_0_0/* return_type */
	, RuntimeInvoker_NetworkID_t216/* invoker_method */
	, NULL/* parameters */
	, 333/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo DestroyMatchRequest_t206_DestroyMatchRequest_set_networkId_m1028_ParameterInfos[] = 
{
	{"value", 0, 134218693, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo DestroyMatchRequest_set_networkId_m1028_MethodInfo = 
{
	"set_networkId"/* name */
	, (methodPointerType)&DestroyMatchRequest_set_networkId_m1028/* method */
	, &DestroyMatchRequest_t206_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, DestroyMatchRequest_t206_DestroyMatchRequest_set_networkId_m1028_ParameterInfos/* parameters */
	, 334/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern const MethodInfo DestroyMatchRequest_ToString_m1029_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&DestroyMatchRequest_ToString_m1029/* method */
	, &DestroyMatchRequest_t206_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DestroyMatchRequest_t206_MethodInfos[] =
{
	&DestroyMatchRequest__ctor_m1026_MethodInfo,
	&DestroyMatchRequest_get_networkId_m1027_MethodInfo,
	&DestroyMatchRequest_set_networkId_m1028_MethodInfo,
	&DestroyMatchRequest_ToString_m1029_MethodInfo,
	NULL
};
extern const MethodInfo DestroyMatchRequest_get_networkId_m1027_MethodInfo;
extern const MethodInfo DestroyMatchRequest_set_networkId_m1028_MethodInfo;
static const PropertyInfo DestroyMatchRequest_t206____networkId_PropertyInfo = 
{
	&DestroyMatchRequest_t206_il2cpp_TypeInfo/* parent */
	, "networkId"/* name */
	, &DestroyMatchRequest_get_networkId_m1027_MethodInfo/* get */
	, &DestroyMatchRequest_set_networkId_m1028_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* DestroyMatchRequest_t206_PropertyInfos[] =
{
	&DestroyMatchRequest_t206____networkId_PropertyInfo,
	NULL
};
extern const MethodInfo DestroyMatchRequest_ToString_m1029_MethodInfo;
static const Il2CppMethodReference DestroyMatchRequest_t206_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&DestroyMatchRequest_ToString_m1029_MethodInfo,
};
static bool DestroyMatchRequest_t206_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType DestroyMatchRequest_t206_0_0_0;
extern const Il2CppType DestroyMatchRequest_t206_1_0_0;
struct DestroyMatchRequest_t206;
const Il2CppTypeDefinitionMetadata DestroyMatchRequest_t206_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Request_t197_0_0_0/* parent */
	, DestroyMatchRequest_t206_VTable/* vtableMethods */
	, DestroyMatchRequest_t206_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 831/* fieldStart */

};
TypeInfo DestroyMatchRequest_t206_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DestroyMatchRequest"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, DestroyMatchRequest_t206_MethodInfos/* methods */
	, DestroyMatchRequest_t206_PropertyInfos/* properties */
	, NULL/* events */
	, &DestroyMatchRequest_t206_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DestroyMatchRequest_t206_0_0_0/* byval_arg */
	, &DestroyMatchRequest_t206_1_0_0/* this_arg */
	, &DestroyMatchRequest_t206_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DestroyMatchRequest_t206)/* instance_size */
	, sizeof (DestroyMatchRequest_t206)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionReque.h"
// Metadata Definition UnityEngine.Networking.Match.DropConnectionRequest
extern TypeInfo DropConnectionRequest_t207_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.DropConnectionRequest
#include "UnityEngine_UnityEngine_Networking_Match_DropConnectionRequeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern const MethodInfo DropConnectionRequest__ctor_m1030_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DropConnectionRequest__ctor_m1030/* method */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NetworkID_t216 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern const MethodInfo DropConnectionRequest_get_networkId_m1031_MethodInfo = 
{
	"get_networkId"/* name */
	, (methodPointerType)&DropConnectionRequest_get_networkId_m1031/* method */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* declaring_type */
	, &NetworkID_t216_0_0_0/* return_type */
	, RuntimeInvoker_NetworkID_t216/* invoker_method */
	, NULL/* parameters */
	, 337/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo DropConnectionRequest_t207_DropConnectionRequest_set_networkId_m1032_ParameterInfos[] = 
{
	{"value", 0, 134218694, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo DropConnectionRequest_set_networkId_m1032_MethodInfo = 
{
	"set_networkId"/* name */
	, (methodPointerType)&DropConnectionRequest_set_networkId_m1032/* method */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, DropConnectionRequest_t207_DropConnectionRequest_set_networkId_m1032_ParameterInfos/* parameters */
	, 338/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NodeID_t217 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern const MethodInfo DropConnectionRequest_get_nodeId_m1033_MethodInfo = 
{
	"get_nodeId"/* name */
	, (methodPointerType)&DropConnectionRequest_get_nodeId_m1033/* method */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* declaring_type */
	, &NodeID_t217_0_0_0/* return_type */
	, RuntimeInvoker_NodeID_t217/* invoker_method */
	, NULL/* parameters */
	, 339/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NodeID_t217_0_0_0;
static const ParameterInfo DropConnectionRequest_t207_DropConnectionRequest_set_nodeId_m1034_ParameterInfos[] = 
{
	{"value", 0, 134218695, 0, &NodeID_t217_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt16_t381 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern const MethodInfo DropConnectionRequest_set_nodeId_m1034_MethodInfo = 
{
	"set_nodeId"/* name */
	, (methodPointerType)&DropConnectionRequest_set_nodeId_m1034/* method */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt16_t381/* invoker_method */
	, DropConnectionRequest_t207_DropConnectionRequest_set_nodeId_m1034_ParameterInfos/* parameters */
	, 340/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern const MethodInfo DropConnectionRequest_ToString_m1035_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&DropConnectionRequest_ToString_m1035/* method */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* DropConnectionRequest_t207_MethodInfos[] =
{
	&DropConnectionRequest__ctor_m1030_MethodInfo,
	&DropConnectionRequest_get_networkId_m1031_MethodInfo,
	&DropConnectionRequest_set_networkId_m1032_MethodInfo,
	&DropConnectionRequest_get_nodeId_m1033_MethodInfo,
	&DropConnectionRequest_set_nodeId_m1034_MethodInfo,
	&DropConnectionRequest_ToString_m1035_MethodInfo,
	NULL
};
extern const MethodInfo DropConnectionRequest_get_networkId_m1031_MethodInfo;
extern const MethodInfo DropConnectionRequest_set_networkId_m1032_MethodInfo;
static const PropertyInfo DropConnectionRequest_t207____networkId_PropertyInfo = 
{
	&DropConnectionRequest_t207_il2cpp_TypeInfo/* parent */
	, "networkId"/* name */
	, &DropConnectionRequest_get_networkId_m1031_MethodInfo/* get */
	, &DropConnectionRequest_set_networkId_m1032_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo DropConnectionRequest_get_nodeId_m1033_MethodInfo;
extern const MethodInfo DropConnectionRequest_set_nodeId_m1034_MethodInfo;
static const PropertyInfo DropConnectionRequest_t207____nodeId_PropertyInfo = 
{
	&DropConnectionRequest_t207_il2cpp_TypeInfo/* parent */
	, "nodeId"/* name */
	, &DropConnectionRequest_get_nodeId_m1033_MethodInfo/* get */
	, &DropConnectionRequest_set_nodeId_m1034_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* DropConnectionRequest_t207_PropertyInfos[] =
{
	&DropConnectionRequest_t207____networkId_PropertyInfo,
	&DropConnectionRequest_t207____nodeId_PropertyInfo,
	NULL
};
extern const MethodInfo DropConnectionRequest_ToString_m1035_MethodInfo;
static const Il2CppMethodReference DropConnectionRequest_t207_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&DropConnectionRequest_ToString_m1035_MethodInfo,
};
static bool DropConnectionRequest_t207_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType DropConnectionRequest_t207_0_0_0;
extern const Il2CppType DropConnectionRequest_t207_1_0_0;
struct DropConnectionRequest_t207;
const Il2CppTypeDefinitionMetadata DropConnectionRequest_t207_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Request_t197_0_0_0/* parent */
	, DropConnectionRequest_t207_VTable/* vtableMethods */
	, DropConnectionRequest_t207_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 832/* fieldStart */

};
TypeInfo DropConnectionRequest_t207_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DropConnectionRequest"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, DropConnectionRequest_t207_MethodInfos/* methods */
	, DropConnectionRequest_t207_PropertyInfos/* properties */
	, NULL/* events */
	, &DropConnectionRequest_t207_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &DropConnectionRequest_t207_0_0_0/* byval_arg */
	, &DropConnectionRequest_t207_1_0_0/* this_arg */
	, &DropConnectionRequest_t207_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DropConnectionRequest_t207)/* instance_size */
	, sizeof (DropConnectionRequest_t207)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequest.h"
// Metadata Definition UnityEngine.Networking.Match.ListMatchRequest
extern TypeInfo ListMatchRequest_t208_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchRequest
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchRequestMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern const MethodInfo ListMatchRequest__ctor_m1036_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ListMatchRequest__ctor_m1036/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern const MethodInfo ListMatchRequest_get_pageSize_m1037_MethodInfo = 
{
	"get_pageSize"/* name */
	, (methodPointerType)&ListMatchRequest_get_pageSize_m1037/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 346/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo ListMatchRequest_t208_ListMatchRequest_set_pageSize_m1038_ParameterInfos[] = 
{
	{"value", 0, 134218696, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern const MethodInfo ListMatchRequest_set_pageSize_m1038_MethodInfo = 
{
	"set_pageSize"/* name */
	, (methodPointerType)&ListMatchRequest_set_pageSize_m1038/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, ListMatchRequest_t208_ListMatchRequest_set_pageSize_m1038_ParameterInfos/* parameters */
	, 347/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern const MethodInfo ListMatchRequest_get_pageNum_m1039_MethodInfo = 
{
	"get_pageNum"/* name */
	, (methodPointerType)&ListMatchRequest_get_pageNum_m1039/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 348/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo ListMatchRequest_t208_ListMatchRequest_set_pageNum_m1040_ParameterInfos[] = 
{
	{"value", 0, 134218697, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern const MethodInfo ListMatchRequest_set_pageNum_m1040_MethodInfo = 
{
	"set_pageNum"/* name */
	, (methodPointerType)&ListMatchRequest_set_pageNum_m1040/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, ListMatchRequest_t208_ListMatchRequest_set_pageNum_m1040_ParameterInfos/* parameters */
	, 349/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern const MethodInfo ListMatchRequest_get_nameFilter_m1041_MethodInfo = 
{
	"get_nameFilter"/* name */
	, (methodPointerType)&ListMatchRequest_get_nameFilter_m1041/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 350/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo ListMatchRequest_t208_ListMatchRequest_set_nameFilter_m1042_ParameterInfos[] = 
{
	{"value", 0, 134218698, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern const MethodInfo ListMatchRequest_set_nameFilter_m1042_MethodInfo = 
{
	"set_nameFilter"/* name */
	, (methodPointerType)&ListMatchRequest_set_nameFilter_m1042/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ListMatchRequest_t208_ListMatchRequest_set_nameFilter_m1042_ParameterInfos/* parameters */
	, 351/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern const MethodInfo ListMatchRequest_get_matchAttributeFilterLessThan_m1043_MethodInfo = 
{
	"get_matchAttributeFilterLessThan"/* name */
	, (methodPointerType)&ListMatchRequest_get_matchAttributeFilterLessThan_m1043/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Dictionary_2_t201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 352/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern const MethodInfo ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044_MethodInfo = 
{
	"get_matchAttributeFilterGreaterThan"/* name */
	, (methodPointerType)&ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &Dictionary_2_t201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 353/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern const MethodInfo ListMatchRequest_ToString_m1045_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&ListMatchRequest_ToString_m1045/* method */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ListMatchRequest_t208_MethodInfos[] =
{
	&ListMatchRequest__ctor_m1036_MethodInfo,
	&ListMatchRequest_get_pageSize_m1037_MethodInfo,
	&ListMatchRequest_set_pageSize_m1038_MethodInfo,
	&ListMatchRequest_get_pageNum_m1039_MethodInfo,
	&ListMatchRequest_set_pageNum_m1040_MethodInfo,
	&ListMatchRequest_get_nameFilter_m1041_MethodInfo,
	&ListMatchRequest_set_nameFilter_m1042_MethodInfo,
	&ListMatchRequest_get_matchAttributeFilterLessThan_m1043_MethodInfo,
	&ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044_MethodInfo,
	&ListMatchRequest_ToString_m1045_MethodInfo,
	NULL
};
extern const MethodInfo ListMatchRequest_get_pageSize_m1037_MethodInfo;
extern const MethodInfo ListMatchRequest_set_pageSize_m1038_MethodInfo;
static const PropertyInfo ListMatchRequest_t208____pageSize_PropertyInfo = 
{
	&ListMatchRequest_t208_il2cpp_TypeInfo/* parent */
	, "pageSize"/* name */
	, &ListMatchRequest_get_pageSize_m1037_MethodInfo/* get */
	, &ListMatchRequest_set_pageSize_m1038_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ListMatchRequest_get_pageNum_m1039_MethodInfo;
extern const MethodInfo ListMatchRequest_set_pageNum_m1040_MethodInfo;
static const PropertyInfo ListMatchRequest_t208____pageNum_PropertyInfo = 
{
	&ListMatchRequest_t208_il2cpp_TypeInfo/* parent */
	, "pageNum"/* name */
	, &ListMatchRequest_get_pageNum_m1039_MethodInfo/* get */
	, &ListMatchRequest_set_pageNum_m1040_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ListMatchRequest_get_nameFilter_m1041_MethodInfo;
extern const MethodInfo ListMatchRequest_set_nameFilter_m1042_MethodInfo;
static const PropertyInfo ListMatchRequest_t208____nameFilter_PropertyInfo = 
{
	&ListMatchRequest_t208_il2cpp_TypeInfo/* parent */
	, "nameFilter"/* name */
	, &ListMatchRequest_get_nameFilter_m1041_MethodInfo/* get */
	, &ListMatchRequest_set_nameFilter_m1042_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ListMatchRequest_get_matchAttributeFilterLessThan_m1043_MethodInfo;
static const PropertyInfo ListMatchRequest_t208____matchAttributeFilterLessThan_PropertyInfo = 
{
	&ListMatchRequest_t208_il2cpp_TypeInfo/* parent */
	, "matchAttributeFilterLessThan"/* name */
	, &ListMatchRequest_get_matchAttributeFilterLessThan_m1043_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044_MethodInfo;
static const PropertyInfo ListMatchRequest_t208____matchAttributeFilterGreaterThan_PropertyInfo = 
{
	&ListMatchRequest_t208_il2cpp_TypeInfo/* parent */
	, "matchAttributeFilterGreaterThan"/* name */
	, &ListMatchRequest_get_matchAttributeFilterGreaterThan_m1044_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ListMatchRequest_t208_PropertyInfos[] =
{
	&ListMatchRequest_t208____pageSize_PropertyInfo,
	&ListMatchRequest_t208____pageNum_PropertyInfo,
	&ListMatchRequest_t208____nameFilter_PropertyInfo,
	&ListMatchRequest_t208____matchAttributeFilterLessThan_PropertyInfo,
	&ListMatchRequest_t208____matchAttributeFilterGreaterThan_PropertyInfo,
	NULL
};
extern const MethodInfo ListMatchRequest_ToString_m1045_MethodInfo;
static const Il2CppMethodReference ListMatchRequest_t208_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&ListMatchRequest_ToString_m1045_MethodInfo,
};
static bool ListMatchRequest_t208_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ListMatchRequest_t208_0_0_0;
extern const Il2CppType ListMatchRequest_t208_1_0_0;
struct ListMatchRequest_t208;
const Il2CppTypeDefinitionMetadata ListMatchRequest_t208_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Request_t197_0_0_0/* parent */
	, ListMatchRequest_t208_VTable/* vtableMethods */
	, ListMatchRequest_t208_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 834/* fieldStart */

};
TypeInfo ListMatchRequest_t208_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ListMatchRequest"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, ListMatchRequest_t208_MethodInfos/* methods */
	, ListMatchRequest_t208_PropertyInfos/* properties */
	, NULL/* events */
	, &ListMatchRequest_t208_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ListMatchRequest_t208_0_0_0/* byval_arg */
	, &ListMatchRequest_t208_1_0_0/* this_arg */
	, &ListMatchRequest_t208_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ListMatchRequest_t208)/* instance_size */
	, sizeof (ListMatchRequest_t208)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 5/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectI.h"
// Metadata Definition UnityEngine.Networking.Match.MatchDirectConnectInfo
extern TypeInfo MatchDirectConnectInfo_t209_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
#include "UnityEngine_UnityEngine_Networking_Match_MatchDirectConnectIMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern const MethodInfo MatchDirectConnectInfo__ctor_m1046_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchDirectConnectInfo__ctor_m1046/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NodeID_t217 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::get_nodeId()
extern const MethodInfo MatchDirectConnectInfo_get_nodeId_m1047_MethodInfo = 
{
	"get_nodeId"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_get_nodeId_m1047/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &NodeID_t217_0_0_0/* return_type */
	, RuntimeInvoker_NodeID_t217/* invoker_method */
	, NULL/* parameters */
	, 357/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NodeID_t217_0_0_0;
static const ParameterInfo MatchDirectConnectInfo_t209_MatchDirectConnectInfo_set_nodeId_m1048_ParameterInfos[] = 
{
	{"value", 0, 134218699, 0, &NodeID_t217_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt16_t381 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern const MethodInfo MatchDirectConnectInfo_set_nodeId_m1048_MethodInfo = 
{
	"set_nodeId"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_set_nodeId_m1048/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt16_t381/* invoker_method */
	, MatchDirectConnectInfo_t209_MatchDirectConnectInfo_set_nodeId_m1048_ParameterInfos/* parameters */
	, 358/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_publicAddress()
extern const MethodInfo MatchDirectConnectInfo_get_publicAddress_m1049_MethodInfo = 
{
	"get_publicAddress"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_get_publicAddress_m1049/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 359/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MatchDirectConnectInfo_t209_MatchDirectConnectInfo_set_publicAddress_m1050_ParameterInfos[] = 
{
	{"value", 0, 134218700, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_publicAddress(System.String)
extern const MethodInfo MatchDirectConnectInfo_set_publicAddress_m1050_MethodInfo = 
{
	"set_publicAddress"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_set_publicAddress_m1050/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, MatchDirectConnectInfo_t209_MatchDirectConnectInfo_set_publicAddress_m1050_ParameterInfos/* parameters */
	, 360/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::get_privateAddress()
extern const MethodInfo MatchDirectConnectInfo_get_privateAddress_m1051_MethodInfo = 
{
	"get_privateAddress"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_get_privateAddress_m1051/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 361/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MatchDirectConnectInfo_t209_MatchDirectConnectInfo_set_privateAddress_m1052_ParameterInfos[] = 
{
	{"value", 0, 134218701, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::set_privateAddress(System.String)
extern const MethodInfo MatchDirectConnectInfo_set_privateAddress_m1052_MethodInfo = 
{
	"set_privateAddress"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_set_privateAddress_m1052/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, MatchDirectConnectInfo_t209_MatchDirectConnectInfo_set_privateAddress_m1052_ParameterInfos/* parameters */
	, 362/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern const MethodInfo MatchDirectConnectInfo_ToString_m1053_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_ToString_m1053/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MatchDirectConnectInfo_t209_MatchDirectConnectInfo_Parse_m1054_ParameterInfos[] = 
{
	{"obj", 0, 134218702, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::Parse(System.Object)
extern const MethodInfo MatchDirectConnectInfo_Parse_m1054_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&MatchDirectConnectInfo_Parse_m1054/* method */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, MatchDirectConnectInfo_t209_MatchDirectConnectInfo_Parse_m1054_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MatchDirectConnectInfo_t209_MethodInfos[] =
{
	&MatchDirectConnectInfo__ctor_m1046_MethodInfo,
	&MatchDirectConnectInfo_get_nodeId_m1047_MethodInfo,
	&MatchDirectConnectInfo_set_nodeId_m1048_MethodInfo,
	&MatchDirectConnectInfo_get_publicAddress_m1049_MethodInfo,
	&MatchDirectConnectInfo_set_publicAddress_m1050_MethodInfo,
	&MatchDirectConnectInfo_get_privateAddress_m1051_MethodInfo,
	&MatchDirectConnectInfo_set_privateAddress_m1052_MethodInfo,
	&MatchDirectConnectInfo_ToString_m1053_MethodInfo,
	&MatchDirectConnectInfo_Parse_m1054_MethodInfo,
	NULL
};
extern const MethodInfo MatchDirectConnectInfo_get_nodeId_m1047_MethodInfo;
extern const MethodInfo MatchDirectConnectInfo_set_nodeId_m1048_MethodInfo;
static const PropertyInfo MatchDirectConnectInfo_t209____nodeId_PropertyInfo = 
{
	&MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* parent */
	, "nodeId"/* name */
	, &MatchDirectConnectInfo_get_nodeId_m1047_MethodInfo/* get */
	, &MatchDirectConnectInfo_set_nodeId_m1048_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDirectConnectInfo_get_publicAddress_m1049_MethodInfo;
extern const MethodInfo MatchDirectConnectInfo_set_publicAddress_m1050_MethodInfo;
static const PropertyInfo MatchDirectConnectInfo_t209____publicAddress_PropertyInfo = 
{
	&MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* parent */
	, "publicAddress"/* name */
	, &MatchDirectConnectInfo_get_publicAddress_m1049_MethodInfo/* get */
	, &MatchDirectConnectInfo_set_publicAddress_m1050_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDirectConnectInfo_get_privateAddress_m1051_MethodInfo;
extern const MethodInfo MatchDirectConnectInfo_set_privateAddress_m1052_MethodInfo;
static const PropertyInfo MatchDirectConnectInfo_t209____privateAddress_PropertyInfo = 
{
	&MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* parent */
	, "privateAddress"/* name */
	, &MatchDirectConnectInfo_get_privateAddress_m1051_MethodInfo/* get */
	, &MatchDirectConnectInfo_set_privateAddress_m1052_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MatchDirectConnectInfo_t209_PropertyInfos[] =
{
	&MatchDirectConnectInfo_t209____nodeId_PropertyInfo,
	&MatchDirectConnectInfo_t209____publicAddress_PropertyInfo,
	&MatchDirectConnectInfo_t209____privateAddress_PropertyInfo,
	NULL
};
extern const MethodInfo MatchDirectConnectInfo_ToString_m1053_MethodInfo;
extern const MethodInfo MatchDirectConnectInfo_Parse_m1054_MethodInfo;
static const Il2CppMethodReference MatchDirectConnectInfo_t209_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&MatchDirectConnectInfo_ToString_m1053_MethodInfo,
	&MatchDirectConnectInfo_Parse_m1054_MethodInfo,
};
static bool MatchDirectConnectInfo_t209_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType MatchDirectConnectInfo_t209_0_0_0;
extern const Il2CppType MatchDirectConnectInfo_t209_1_0_0;
struct MatchDirectConnectInfo_t209;
const Il2CppTypeDefinitionMetadata MatchDirectConnectInfo_t209_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ResponseBase_t198_0_0_0/* parent */
	, MatchDirectConnectInfo_t209_VTable/* vtableMethods */
	, MatchDirectConnectInfo_t209_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 839/* fieldStart */

};
TypeInfo MatchDirectConnectInfo_t209_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchDirectConnectInfo"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, MatchDirectConnectInfo_t209_MethodInfos/* methods */
	, MatchDirectConnectInfo_t209_PropertyInfos/* properties */
	, NULL/* events */
	, &MatchDirectConnectInfo_t209_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MatchDirectConnectInfo_t209_0_0_0/* byval_arg */
	, &MatchDirectConnectInfo_t209_1_0_0/* this_arg */
	, &MatchDirectConnectInfo_t209_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchDirectConnectInfo_t209)/* instance_size */
	, sizeof (MatchDirectConnectInfo_t209)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDesc.h"
// Metadata Definition UnityEngine.Networking.Match.MatchDesc
extern TypeInfo MatchDesc_t211_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.MatchDesc
#include "UnityEngine_UnityEngine_Networking_Match_MatchDescMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern const MethodInfo MatchDesc__ctor_m1055_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MatchDesc__ctor_m1055/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NetworkID_t216 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern const MethodInfo MatchDesc_get_networkId_m1056_MethodInfo = 
{
	"get_networkId"/* name */
	, (methodPointerType)&MatchDesc_get_networkId_m1056/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &NetworkID_t216_0_0_0/* return_type */
	, RuntimeInvoker_NetworkID_t216/* invoker_method */
	, NULL/* parameters */
	, 372/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_set_networkId_m1057_ParameterInfos[] = 
{
	{"value", 0, 134218703, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo MatchDesc_set_networkId_m1057_MethodInfo = 
{
	"set_networkId"/* name */
	, (methodPointerType)&MatchDesc_set_networkId_m1057/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, MatchDesc_t211_MatchDesc_set_networkId_m1057_ParameterInfos/* parameters */
	, 373/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern const MethodInfo MatchDesc_get_name_m1058_MethodInfo = 
{
	"get_name"/* name */
	, (methodPointerType)&MatchDesc_get_name_m1058/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 374/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_set_name_m1059_ParameterInfos[] = 
{
	{"value", 0, 134218704, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern const MethodInfo MatchDesc_set_name_m1059_MethodInfo = 
{
	"set_name"/* name */
	, (methodPointerType)&MatchDesc_set_name_m1059/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, MatchDesc_t211_MatchDesc_set_name_m1059_ParameterInfos/* parameters */
	, 375/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern const MethodInfo MatchDesc_get_averageEloScore_m1060_MethodInfo = 
{
	"get_averageEloScore"/* name */
	, (methodPointerType)&MatchDesc_get_averageEloScore_m1060/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 376/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern const MethodInfo MatchDesc_get_maxSize_m1061_MethodInfo = 
{
	"get_maxSize"/* name */
	, (methodPointerType)&MatchDesc_get_maxSize_m1061/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 377/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_set_maxSize_m1062_ParameterInfos[] = 
{
	{"value", 0, 134218705, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern const MethodInfo MatchDesc_set_maxSize_m1062_MethodInfo = 
{
	"set_maxSize"/* name */
	, (methodPointerType)&MatchDesc_set_maxSize_m1062/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, MatchDesc_t211_MatchDesc_set_maxSize_m1062_ParameterInfos/* parameters */
	, 378/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern const MethodInfo MatchDesc_get_currentSize_m1063_MethodInfo = 
{
	"get_currentSize"/* name */
	, (methodPointerType)&MatchDesc_get_currentSize_m1063/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 379/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_set_currentSize_m1064_ParameterInfos[] = 
{
	{"value", 0, 134218706, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern const MethodInfo MatchDesc_set_currentSize_m1064_MethodInfo = 
{
	"set_currentSize"/* name */
	, (methodPointerType)&MatchDesc_set_currentSize_m1064/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, MatchDesc_t211_MatchDesc_set_currentSize_m1064_ParameterInfos/* parameters */
	, 380/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern const MethodInfo MatchDesc_get_isPrivate_m1065_MethodInfo = 
{
	"get_isPrivate"/* name */
	, (methodPointerType)&MatchDesc_get_isPrivate_m1065/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 381/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_set_isPrivate_m1066_ParameterInfos[] = 
{
	{"value", 0, 134218707, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern const MethodInfo MatchDesc_set_isPrivate_m1066_MethodInfo = 
{
	"set_isPrivate"/* name */
	, (methodPointerType)&MatchDesc_set_isPrivate_m1066/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, MatchDesc_t211_MatchDesc_set_isPrivate_m1066_ParameterInfos/* parameters */
	, 382/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern const MethodInfo MatchDesc_get_matchAttributes_m1067_MethodInfo = 
{
	"get_matchAttributes"/* name */
	, (methodPointerType)&MatchDesc_get_matchAttributes_m1067/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Dictionary_2_t201_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 383/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 970/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_NodeID_t217 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern const MethodInfo MatchDesc_get_hostNodeId_m1068_MethodInfo = 
{
	"get_hostNodeId"/* name */
	, (methodPointerType)&MatchDesc_get_hostNodeId_m1068/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &NodeID_t217_0_0_0/* return_type */
	, RuntimeInvoker_NodeID_t217/* invoker_method */
	, NULL/* parameters */
	, 384/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 971/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t210_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern const MethodInfo MatchDesc_get_directConnectInfos_m1069_MethodInfo = 
{
	"get_directConnectInfos"/* name */
	, (methodPointerType)&MatchDesc_get_directConnectInfos_m1069/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t210_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 385/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 972/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t210_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_set_directConnectInfos_m1070_ParameterInfos[] = 
{
	{"value", 0, 134218708, 0, &List_1_t210_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern const MethodInfo MatchDesc_set_directConnectInfos_m1070_MethodInfo = 
{
	"set_directConnectInfos"/* name */
	, (methodPointerType)&MatchDesc_set_directConnectInfos_m1070/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, MatchDesc_t211_MatchDesc_set_directConnectInfos_m1070_ParameterInfos/* parameters */
	, 386/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 973/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern const MethodInfo MatchDesc_ToString_m1071_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&MatchDesc_ToString_m1071/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 974/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo MatchDesc_t211_MatchDesc_Parse_m1072_ParameterInfos[] = 
{
	{"obj", 0, 134218709, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern const MethodInfo MatchDesc_Parse_m1072_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&MatchDesc_Parse_m1072/* method */
	, &MatchDesc_t211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, MatchDesc_t211_MatchDesc_Parse_m1072_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 975/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* MatchDesc_t211_MethodInfos[] =
{
	&MatchDesc__ctor_m1055_MethodInfo,
	&MatchDesc_get_networkId_m1056_MethodInfo,
	&MatchDesc_set_networkId_m1057_MethodInfo,
	&MatchDesc_get_name_m1058_MethodInfo,
	&MatchDesc_set_name_m1059_MethodInfo,
	&MatchDesc_get_averageEloScore_m1060_MethodInfo,
	&MatchDesc_get_maxSize_m1061_MethodInfo,
	&MatchDesc_set_maxSize_m1062_MethodInfo,
	&MatchDesc_get_currentSize_m1063_MethodInfo,
	&MatchDesc_set_currentSize_m1064_MethodInfo,
	&MatchDesc_get_isPrivate_m1065_MethodInfo,
	&MatchDesc_set_isPrivate_m1066_MethodInfo,
	&MatchDesc_get_matchAttributes_m1067_MethodInfo,
	&MatchDesc_get_hostNodeId_m1068_MethodInfo,
	&MatchDesc_get_directConnectInfos_m1069_MethodInfo,
	&MatchDesc_set_directConnectInfos_m1070_MethodInfo,
	&MatchDesc_ToString_m1071_MethodInfo,
	&MatchDesc_Parse_m1072_MethodInfo,
	NULL
};
extern const MethodInfo MatchDesc_get_networkId_m1056_MethodInfo;
extern const MethodInfo MatchDesc_set_networkId_m1057_MethodInfo;
static const PropertyInfo MatchDesc_t211____networkId_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "networkId"/* name */
	, &MatchDesc_get_networkId_m1056_MethodInfo/* get */
	, &MatchDesc_set_networkId_m1057_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_name_m1058_MethodInfo;
extern const MethodInfo MatchDesc_set_name_m1059_MethodInfo;
static const PropertyInfo MatchDesc_t211____name_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "name"/* name */
	, &MatchDesc_get_name_m1058_MethodInfo/* get */
	, &MatchDesc_set_name_m1059_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_averageEloScore_m1060_MethodInfo;
static const PropertyInfo MatchDesc_t211____averageEloScore_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "averageEloScore"/* name */
	, &MatchDesc_get_averageEloScore_m1060_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_maxSize_m1061_MethodInfo;
extern const MethodInfo MatchDesc_set_maxSize_m1062_MethodInfo;
static const PropertyInfo MatchDesc_t211____maxSize_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "maxSize"/* name */
	, &MatchDesc_get_maxSize_m1061_MethodInfo/* get */
	, &MatchDesc_set_maxSize_m1062_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_currentSize_m1063_MethodInfo;
extern const MethodInfo MatchDesc_set_currentSize_m1064_MethodInfo;
static const PropertyInfo MatchDesc_t211____currentSize_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "currentSize"/* name */
	, &MatchDesc_get_currentSize_m1063_MethodInfo/* get */
	, &MatchDesc_set_currentSize_m1064_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_isPrivate_m1065_MethodInfo;
extern const MethodInfo MatchDesc_set_isPrivate_m1066_MethodInfo;
static const PropertyInfo MatchDesc_t211____isPrivate_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "isPrivate"/* name */
	, &MatchDesc_get_isPrivate_m1065_MethodInfo/* get */
	, &MatchDesc_set_isPrivate_m1066_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_matchAttributes_m1067_MethodInfo;
static const PropertyInfo MatchDesc_t211____matchAttributes_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "matchAttributes"/* name */
	, &MatchDesc_get_matchAttributes_m1067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_hostNodeId_m1068_MethodInfo;
static const PropertyInfo MatchDesc_t211____hostNodeId_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "hostNodeId"/* name */
	, &MatchDesc_get_hostNodeId_m1068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo MatchDesc_get_directConnectInfos_m1069_MethodInfo;
extern const MethodInfo MatchDesc_set_directConnectInfos_m1070_MethodInfo;
static const PropertyInfo MatchDesc_t211____directConnectInfos_PropertyInfo = 
{
	&MatchDesc_t211_il2cpp_TypeInfo/* parent */
	, "directConnectInfos"/* name */
	, &MatchDesc_get_directConnectInfos_m1069_MethodInfo/* get */
	, &MatchDesc_set_directConnectInfos_m1070_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* MatchDesc_t211_PropertyInfos[] =
{
	&MatchDesc_t211____networkId_PropertyInfo,
	&MatchDesc_t211____name_PropertyInfo,
	&MatchDesc_t211____averageEloScore_PropertyInfo,
	&MatchDesc_t211____maxSize_PropertyInfo,
	&MatchDesc_t211____currentSize_PropertyInfo,
	&MatchDesc_t211____isPrivate_PropertyInfo,
	&MatchDesc_t211____matchAttributes_PropertyInfo,
	&MatchDesc_t211____hostNodeId_PropertyInfo,
	&MatchDesc_t211____directConnectInfos_PropertyInfo,
	NULL
};
extern const MethodInfo MatchDesc_ToString_m1071_MethodInfo;
extern const MethodInfo MatchDesc_Parse_m1072_MethodInfo;
static const Il2CppMethodReference MatchDesc_t211_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&MatchDesc_ToString_m1071_MethodInfo,
	&MatchDesc_Parse_m1072_MethodInfo,
};
static bool MatchDesc_t211_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType MatchDesc_t211_0_0_0;
extern const Il2CppType MatchDesc_t211_1_0_0;
struct MatchDesc_t211;
const Il2CppTypeDefinitionMetadata MatchDesc_t211_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ResponseBase_t198_0_0_0/* parent */
	, MatchDesc_t211_VTable/* vtableMethods */
	, MatchDesc_t211_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 842/* fieldStart */

};
TypeInfo MatchDesc_t211_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "MatchDesc"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, MatchDesc_t211_MethodInfos/* methods */
	, MatchDesc_t211_PropertyInfos/* properties */
	, NULL/* events */
	, &MatchDesc_t211_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &MatchDesc_t211_0_0_0/* byval_arg */
	, &MatchDesc_t211_1_0_0/* this_arg */
	, &MatchDesc_t211_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MatchDesc_t211)/* instance_size */
	, sizeof (MatchDesc_t211)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 18/* method_count */
	, 9/* property_count */
	, 9/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponse.h"
// Metadata Definition UnityEngine.Networking.Match.ListMatchResponse
extern TypeInfo ListMatchResponse_t213_il2cpp_TypeInfo;
// UnityEngine.Networking.Match.ListMatchResponse
#include "UnityEngine_UnityEngine_Networking_Match_ListMatchResponseMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern const MethodInfo ListMatchResponse__ctor_m1073_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ListMatchResponse__ctor_m1073/* method */
	, &ListMatchResponse_t213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 976/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t212_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::get_matches()
extern const MethodInfo ListMatchResponse_get_matches_m1074_MethodInfo = 
{
	"get_matches"/* name */
	, (methodPointerType)&ListMatchResponse_get_matches_m1074/* method */
	, &ListMatchResponse_t213_il2cpp_TypeInfo/* declaring_type */
	, &List_1_t212_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 388/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 977/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType List_1_t212_0_0_0;
static const ParameterInfo ListMatchResponse_t213_ListMatchResponse_set_matches_m1075_ParameterInfos[] = 
{
	{"value", 0, 134218710, 0, &List_1_t212_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchResponse::set_matches(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>)
extern const MethodInfo ListMatchResponse_set_matches_m1075_MethodInfo = 
{
	"set_matches"/* name */
	, (methodPointerType)&ListMatchResponse_set_matches_m1075/* method */
	, &ListMatchResponse_t213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ListMatchResponse_t213_ListMatchResponse_set_matches_m1075_ParameterInfos/* parameters */
	, 389/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 978/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern const MethodInfo ListMatchResponse_ToString_m1076_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&ListMatchResponse_ToString_m1076/* method */
	, &ListMatchResponse_t213_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 979/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ListMatchResponse_t213_ListMatchResponse_Parse_m1077_ParameterInfos[] = 
{
	{"obj", 0, 134218711, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.ListMatchResponse::Parse(System.Object)
extern const MethodInfo ListMatchResponse_Parse_m1077_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&ListMatchResponse_Parse_m1077/* method */
	, &ListMatchResponse_t213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, ListMatchResponse_t213_ListMatchResponse_Parse_m1077_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 980/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ListMatchResponse_t213_MethodInfos[] =
{
	&ListMatchResponse__ctor_m1073_MethodInfo,
	&ListMatchResponse_get_matches_m1074_MethodInfo,
	&ListMatchResponse_set_matches_m1075_MethodInfo,
	&ListMatchResponse_ToString_m1076_MethodInfo,
	&ListMatchResponse_Parse_m1077_MethodInfo,
	NULL
};
extern const MethodInfo ListMatchResponse_get_matches_m1074_MethodInfo;
extern const MethodInfo ListMatchResponse_set_matches_m1075_MethodInfo;
static const PropertyInfo ListMatchResponse_t213____matches_PropertyInfo = 
{
	&ListMatchResponse_t213_il2cpp_TypeInfo/* parent */
	, "matches"/* name */
	, &ListMatchResponse_get_matches_m1074_MethodInfo/* get */
	, &ListMatchResponse_set_matches_m1075_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ListMatchResponse_t213_PropertyInfos[] =
{
	&ListMatchResponse_t213____matches_PropertyInfo,
	NULL
};
extern const MethodInfo ListMatchResponse_ToString_m1076_MethodInfo;
extern const MethodInfo ListMatchResponse_Parse_m1077_MethodInfo;
static const Il2CppMethodReference ListMatchResponse_t213_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&ListMatchResponse_ToString_m1076_MethodInfo,
	&ListMatchResponse_Parse_m1077_MethodInfo,
};
static bool ListMatchResponse_t213_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ListMatchResponse_t213_InterfacesOffsets[] = 
{
	{ &IResponse_t420_0_0_0, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ListMatchResponse_t213_0_0_0;
extern const Il2CppType ListMatchResponse_t213_1_0_0;
struct ListMatchResponse_t213;
const Il2CppTypeDefinitionMetadata ListMatchResponse_t213_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ListMatchResponse_t213_InterfacesOffsets/* interfaceOffsets */
	, &BasicResponse_t200_0_0_0/* parent */
	, ListMatchResponse_t213_VTable/* vtableMethods */
	, ListMatchResponse_t213_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 851/* fieldStart */

};
TypeInfo ListMatchResponse_t213_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ListMatchResponse"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, ListMatchResponse_t213_MethodInfos/* methods */
	, ListMatchResponse_t213_PropertyInfos/* properties */
	, NULL/* events */
	, &ListMatchResponse_t213_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ListMatchResponse_t213_0_0_0/* byval_arg */
	, &ListMatchResponse_t213_1_0_0/* this_arg */
	, &ListMatchResponse_t213_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ListMatchResponse_t213)/* instance_size */
	, sizeof (ListMatchResponse_t213)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// Metadata Definition UnityEngine.Networking.Types.AppID
extern TypeInfo AppID_t214_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppIDMethodDeclarations.h"
static const MethodInfo* AppID_t214_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference AppID_t214_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool AppID_t214_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AppID_t214_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AppID_t214_1_0_0;
// System.UInt64
#include "mscorlib_System_UInt64.h"
extern TypeInfo UInt64_t379_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata AppID_t214_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AppID_t214_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, AppID_t214_VTable/* vtableMethods */
	, AppID_t214_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 852/* fieldStart */

};
TypeInfo AppID_t214_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AppID"/* name */
	, "UnityEngine.Networking.Types"/* namespaze */
	, AppID_t214_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UInt64_t379_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 390/* custom_attributes_cache */
	, &AppID_t214_0_0_0/* byval_arg */
	, &AppID_t214_1_0_0/* this_arg */
	, &AppID_t214_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AppID_t214)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (AppID_t214)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint64_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// Metadata Definition UnityEngine.Networking.Types.SourceID
extern TypeInfo SourceID_t215_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceIDMethodDeclarations.h"
static const MethodInfo* SourceID_t215_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference SourceID_t215_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool SourceID_t215_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SourceID_t215_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SourceID_t215_1_0_0;
const Il2CppTypeDefinitionMetadata SourceID_t215_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SourceID_t215_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, SourceID_t215_VTable/* vtableMethods */
	, SourceID_t215_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 854/* fieldStart */

};
TypeInfo SourceID_t215_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SourceID"/* name */
	, "UnityEngine.Networking.Types"/* namespaze */
	, SourceID_t215_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UInt64_t379_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 391/* custom_attributes_cache */
	, &SourceID_t215_0_0_0/* byval_arg */
	, &SourceID_t215_1_0_0/* this_arg */
	, &SourceID_t215_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SourceID_t215)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (SourceID_t215)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint64_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
// Metadata Definition UnityEngine.Networking.Types.NetworkID
extern TypeInfo NetworkID_t216_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkIDMethodDeclarations.h"
static const MethodInfo* NetworkID_t216_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference NetworkID_t216_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool NetworkID_t216_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair NetworkID_t216_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType NetworkID_t216_1_0_0;
const Il2CppTypeDefinitionMetadata NetworkID_t216_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NetworkID_t216_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, NetworkID_t216_VTable/* vtableMethods */
	, NetworkID_t216_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 856/* fieldStart */

};
TypeInfo NetworkID_t216_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "NetworkID"/* name */
	, "UnityEngine.Networking.Types"/* namespaze */
	, NetworkID_t216_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UInt64_t379_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 392/* custom_attributes_cache */
	, &NetworkID_t216_0_0_0/* byval_arg */
	, &NetworkID_t216_1_0_0/* this_arg */
	, &NetworkID_t216_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NetworkID_t216)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (NetworkID_t216)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint64_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
// Metadata Definition UnityEngine.Networking.Types.NodeID
extern TypeInfo NodeID_t217_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeIDMethodDeclarations.h"
static const MethodInfo* NodeID_t217_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference NodeID_t217_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool NodeID_t217_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair NodeID_t217_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType NodeID_t217_1_0_0;
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo UInt16_t381_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata NodeID_t217_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NodeID_t217_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, NodeID_t217_VTable/* vtableMethods */
	, NodeID_t217_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 858/* fieldStart */

};
TypeInfo NodeID_t217_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "NodeID"/* name */
	, "UnityEngine.Networking.Types"/* namespaze */
	, NodeID_t217_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &UInt16_t381_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 393/* custom_attributes_cache */
	, &NodeID_t217_0_0_0/* byval_arg */
	, &NodeID_t217_1_0_0/* this_arg */
	, &NodeID_t217_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NodeID_t217)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (NodeID_t217)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint16_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessToken.h"
// Metadata Definition UnityEngine.Networking.Types.NetworkAccessToken
extern TypeInfo NetworkAccessToken_t218_il2cpp_TypeInfo;
// UnityEngine.Networking.Types.NetworkAccessToken
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAccessTokenMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern const MethodInfo NetworkAccessToken__ctor_m1078_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NetworkAccessToken__ctor_m1078/* method */
	, &NetworkAccessToken_t218_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 981/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern const MethodInfo NetworkAccessToken_GetByteString_m1079_MethodInfo = 
{
	"GetByteString"/* name */
	, (methodPointerType)&NetworkAccessToken_GetByteString_m1079/* method */
	, &NetworkAccessToken_t218_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 982/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* NetworkAccessToken_t218_MethodInfos[] =
{
	&NetworkAccessToken__ctor_m1078_MethodInfo,
	&NetworkAccessToken_GetByteString_m1079_MethodInfo,
	NULL
};
static const Il2CppMethodReference NetworkAccessToken_t218_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool NetworkAccessToken_t218_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType NetworkAccessToken_t218_0_0_0;
extern const Il2CppType NetworkAccessToken_t218_1_0_0;
struct NetworkAccessToken_t218;
const Il2CppTypeDefinitionMetadata NetworkAccessToken_t218_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, NetworkAccessToken_t218_VTable/* vtableMethods */
	, NetworkAccessToken_t218_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 860/* fieldStart */

};
TypeInfo NetworkAccessToken_t218_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "NetworkAccessToken"/* name */
	, "UnityEngine.Networking.Types"/* namespaze */
	, NetworkAccessToken_t218_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &NetworkAccessToken_t218_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &NetworkAccessToken_t218_0_0_0/* byval_arg */
	, &NetworkAccessToken_t218_1_0_0/* this_arg */
	, &NetworkAccessToken_t218_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NetworkAccessToken_t218)/* instance_size */
	, sizeof (NetworkAccessToken_t218)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_Utility.h"
// Metadata Definition UnityEngine.Networking.Utility
extern TypeInfo Utility_t221_il2cpp_TypeInfo;
// UnityEngine.Networking.Utility
#include "UnityEngine_UnityEngine_Networking_UtilityMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Utility::.cctor()
extern const MethodInfo Utility__cctor_m1080_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Utility__cctor_m1080/* method */
	, &Utility_t221_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 983/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_SourceID_t215 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern const MethodInfo Utility_GetSourceID_m1081_MethodInfo = 
{
	"GetSourceID"/* name */
	, (methodPointerType)&Utility_GetSourceID_m1081/* method */
	, &Utility_t221_il2cpp_TypeInfo/* declaring_type */
	, &SourceID_t215_0_0_0/* return_type */
	, RuntimeInvoker_SourceID_t215/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 984/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AppID_t214_0_0_0;
static const ParameterInfo Utility_t221_Utility_SetAppID_m1082_ParameterInfos[] = 
{
	{"newAppID", 0, 134218712, 0, &AppID_t214_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern const MethodInfo Utility_SetAppID_m1082_MethodInfo = 
{
	"SetAppID"/* name */
	, (methodPointerType)&Utility_SetAppID_m1082/* method */
	, &Utility_t221_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, Utility_t221_Utility_SetAppID_m1082_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 985/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_AppID_t214 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern const MethodInfo Utility_GetAppID_m1083_MethodInfo = 
{
	"GetAppID"/* name */
	, (methodPointerType)&Utility_GetAppID_m1083/* method */
	, &Utility_t221_il2cpp_TypeInfo/* declaring_type */
	, &AppID_t214_0_0_0/* return_type */
	, RuntimeInvoker_AppID_t214/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 986/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
static const ParameterInfo Utility_t221_Utility_GetAccessTokenForNetwork_m1084_ParameterInfos[] = 
{
	{"netId", 0, 134218713, 0, &NetworkID_t216_0_0_0},
};
extern void* RuntimeInvoker_Object_t_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern const MethodInfo Utility_GetAccessTokenForNetwork_m1084_MethodInfo = 
{
	"GetAccessTokenForNetwork"/* name */
	, (methodPointerType)&Utility_GetAccessTokenForNetwork_m1084/* method */
	, &Utility_t221_il2cpp_TypeInfo/* declaring_type */
	, &NetworkAccessToken_t218_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_UInt64_t379/* invoker_method */
	, Utility_t221_Utility_GetAccessTokenForNetwork_m1084_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 987/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Utility_t221_MethodInfos[] =
{
	&Utility__cctor_m1080_MethodInfo,
	&Utility_GetSourceID_m1081_MethodInfo,
	&Utility_SetAppID_m1082_MethodInfo,
	&Utility_GetAppID_m1083_MethodInfo,
	&Utility_GetAccessTokenForNetwork_m1084_MethodInfo,
	NULL
};
static const Il2CppMethodReference Utility_t221_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool Utility_t221_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Utility_t221_0_0_0;
extern const Il2CppType Utility_t221_1_0_0;
struct Utility_t221;
const Il2CppTypeDefinitionMetadata Utility_t221_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Utility_t221_VTable/* vtableMethods */
	, Utility_t221_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 861/* fieldStart */

};
TypeInfo Utility_t221_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Utility"/* name */
	, "UnityEngine.Networking"/* namespaze */
	, Utility_t221_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Utility_t221_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Utility_t221_0_0_0/* byval_arg */
	, &Utility_t221_1_0_0/* this_arg */
	, &Utility_t221_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Utility_t221)/* instance_size */
	, sizeof (Utility_t221)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Utility_t221_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1
extern TypeInfo ResponseDelegate_1_t423_il2cpp_TypeInfo;
extern const Il2CppGenericContainer ResponseDelegate_1_t423_Il2CppGenericContainer;
extern TypeInfo ResponseDelegate_1_t423_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ResponseDelegate_1_t423_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &ResponseDelegate_1_t423_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* ResponseDelegate_1_t423_Il2CppGenericParametersArray[1] = 
{
	&ResponseDelegate_1_t423_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer ResponseDelegate_1_t423_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&ResponseDelegate_1_t423_il2cpp_TypeInfo, 1, 0, ResponseDelegate_1_t423_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ResponseDelegate_1_t423_ResponseDelegate_1__ctor_m1549_ParameterInfos[] = 
{
	{"object", 0, 134218745, 0, &Object_t_0_0_0},
	{"method", 1, 134218746, 0, &IntPtr_t_0_0_0},
};
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ResponseDelegate_1__ctor_m1549_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &ResponseDelegate_1_t423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ResponseDelegate_1_t423_ResponseDelegate_1__ctor_m1549_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1003/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ResponseDelegate_1_t423_gp_0_0_0_0;
extern const Il2CppType ResponseDelegate_1_t423_gp_0_0_0_0;
static const ParameterInfo ResponseDelegate_1_t423_ResponseDelegate_1_Invoke_m1550_ParameterInfos[] = 
{
	{"response", 0, 134218747, 0, &ResponseDelegate_1_t423_gp_0_0_0_0},
};
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1::Invoke(T)
extern const MethodInfo ResponseDelegate_1_Invoke_m1550_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &ResponseDelegate_1_t423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ResponseDelegate_1_t423_ResponseDelegate_1_Invoke_m1550_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1004/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ResponseDelegate_1_t423_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ResponseDelegate_1_t423_ResponseDelegate_1_BeginInvoke_m1551_ParameterInfos[] = 
{
	{"response", 0, 134218748, 0, &ResponseDelegate_1_t423_gp_0_0_0_0},
	{"callback", 1, 134218749, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218750, 0, &Object_t_0_0_0},
};
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1::BeginInvoke(T,System.AsyncCallback,System.Object)
extern const MethodInfo ResponseDelegate_1_BeginInvoke_m1551_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &ResponseDelegate_1_t423_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ResponseDelegate_1_t423_ResponseDelegate_1_BeginInvoke_m1551_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1005/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo ResponseDelegate_1_t423_ResponseDelegate_1_EndInvoke_m1552_ParameterInfos[] = 
{
	{"result", 0, 134218751, 0, &IAsyncResult_t7_0_0_0},
};
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1::EndInvoke(System.IAsyncResult)
extern const MethodInfo ResponseDelegate_1_EndInvoke_m1552_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &ResponseDelegate_1_t423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ResponseDelegate_1_t423_ResponseDelegate_1_EndInvoke_m1552_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1006/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ResponseDelegate_1_t423_MethodInfos[] =
{
	&ResponseDelegate_1__ctor_m1549_MethodInfo,
	&ResponseDelegate_1_Invoke_m1550_MethodInfo,
	&ResponseDelegate_1_BeginInvoke_m1551_MethodInfo,
	&ResponseDelegate_1_EndInvoke_m1552_MethodInfo,
	NULL
};
extern const MethodInfo ResponseDelegate_1_Invoke_m1550_MethodInfo;
extern const MethodInfo ResponseDelegate_1_BeginInvoke_m1551_MethodInfo;
extern const MethodInfo ResponseDelegate_1_EndInvoke_m1552_MethodInfo;
static const Il2CppMethodReference ResponseDelegate_1_t423_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&ResponseDelegate_1_Invoke_m1550_MethodInfo,
	&ResponseDelegate_1_BeginInvoke_m1551_MethodInfo,
	&ResponseDelegate_1_EndInvoke_m1552_MethodInfo,
};
static bool ResponseDelegate_1_t423_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ResponseDelegate_1_t423_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ResponseDelegate_1_t423_0_0_0;
extern const Il2CppType ResponseDelegate_1_t423_1_0_0;
extern TypeInfo NetworkMatch_t223_il2cpp_TypeInfo;
extern const Il2CppType NetworkMatch_t223_0_0_0;
struct ResponseDelegate_1_t423;
const Il2CppTypeDefinitionMetadata ResponseDelegate_1_t423_DefinitionMetadata = 
{
	&NetworkMatch_t223_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ResponseDelegate_1_t423_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, ResponseDelegate_1_t423_VTable/* vtableMethods */
	, ResponseDelegate_1_t423_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ResponseDelegate_1_t423_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ResponseDelegate`1"/* name */
	, ""/* namespaze */
	, ResponseDelegate_1_t423_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ResponseDelegate_1_t423_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ResponseDelegate_1_t423_0_0_0/* byval_arg */
	, &ResponseDelegate_1_t423_1_0_0/* this_arg */
	, &ResponseDelegate_1_t423_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &ResponseDelegate_1_t423_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1
extern TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo;
extern const Il2CppGenericContainer U3CProcessMatchResponseU3Ec__Iterator0_1_t424_Il2CppGenericContainer;
extern TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_JSONRESPONSE_0_il2cpp_TypeInfo;
static const Il2CppType* U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_JSONRESPONSE_0_il2cpp_TypeInfo_constraints[] = { 
&Response_t199_0_0_0 /* UnityEngine.Networking.Match.Response */, 
 NULL };
extern const Il2CppGenericParameter U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_JSONRESPONSE_0_il2cpp_TypeInfo_GenericParamFull = { &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_Il2CppGenericContainer, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_JSONRESPONSE_0_il2cpp_TypeInfo_constraints, "JSONRESPONSE", 0, 16 };
static const Il2CppGenericParameter* U3CProcessMatchResponseU3Ec__Iterator0_1_t424_Il2CppGenericParametersArray[1] = 
{
	&U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_JSONRESPONSE_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer U3CProcessMatchResponseU3Ec__Iterator0_1_t424_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo, 1, 0, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_Il2CppGenericParametersArray };
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1::.ctor()
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m1553_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1007/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<object>.get_Current"/* name */
	, NULL/* method */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 396/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1008/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Object UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1::System.Collections.IEnumerator.get_Current()
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, NULL/* method */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 397/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1009/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Boolean UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1::MoveNext()
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m1556_MethodInfo = 
{
	"MoveNext"/* name */
	, NULL/* method */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1010/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Void UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>c__Iterator0`1::Dispose()
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1557_MethodInfo = 
{
	"Dispose"/* name */
	, NULL/* method */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 398/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1011/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CProcessMatchResponseU3Ec__Iterator0_1_t424_MethodInfos[] =
{
	&U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m1553_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m1556_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1557_MethodInfo,
	NULL
};
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554_MethodInfo;
static const PropertyInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t424____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo = 
{
	&U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<object>.Current"/* name */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555_MethodInfo;
static const PropertyInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t424____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* U3CProcessMatchResponseU3Ec__Iterator0_1_t424_PropertyInfos[] =
{
	&U3CProcessMatchResponseU3Ec__Iterator0_1_t424____System_Collections_Generic_IEnumeratorU3CobjectU3E_Current_PropertyInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_t424____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1557_MethodInfo;
extern const MethodInfo U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m1556_MethodInfo;
static const Il2CppMethodReference U3CProcessMatchResponseU3Ec__Iterator0_1_t424_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m1557_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m1555_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_MoveNext_m1556_MethodInfo,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1554_MethodInfo,
};
static bool U3CProcessMatchResponseU3Ec__Iterator0_1_t424_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IEnumerator_t317_0_0_0;
extern const Il2CppType IEnumerator_1_t461_0_0_0;
static const Il2CppType* U3CProcessMatchResponseU3Ec__Iterator0_1_t424_InterfacesTypeInfos[] = 
{
	&IDisposable_t25_0_0_0,
	&IEnumerator_t317_0_0_0,
	&IEnumerator_1_t461_0_0_0,
};
static Il2CppInterfaceOffsetPair U3CProcessMatchResponseU3Ec__Iterator0_1_t424_InterfacesOffsets[] = 
{
	{ &IDisposable_t25_0_0_0, 4},
	{ &IEnumerator_t317_0_0_0, 5},
	{ &IEnumerator_1_t461_0_0_0, 7},
};
extern const Il2CppType U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_0_0_0_0;
extern const Il2CppGenericMethod Activator_CreateInstance_TisJSONRESPONSE_t460_m1612_GenericMethod;
extern const Il2CppGenericMethod ResponseDelegate_1_Invoke_m1613_GenericMethod;
static Il2CppRGCTXDefinition U3CProcessMatchResponseU3Ec__Iterator0_1_t424_RGCTXData[4] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&U3CProcessMatchResponseU3Ec__Iterator0_1_t424_gp_0_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Activator_CreateInstance_TisJSONRESPONSE_t460_m1612_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ResponseDelegate_1_Invoke_m1613_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CProcessMatchResponseU3Ec__Iterator0_1_t424_0_0_0;
extern const Il2CppType U3CProcessMatchResponseU3Ec__Iterator0_1_t424_1_0_0;
struct U3CProcessMatchResponseU3Ec__Iterator0_1_t424;
const Il2CppTypeDefinitionMetadata U3CProcessMatchResponseU3Ec__Iterator0_1_t424_DefinitionMetadata = 
{
	&NetworkMatch_t223_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_InterfacesTypeInfos/* implementedInterfaces */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_VTable/* vtableMethods */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_RGCTXData/* rgctxDefinition */
	, 866/* fieldStart */

};
TypeInfo U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<ProcessMatchResponse>c__Iterator0`1"/* name */
	, ""/* namespaze */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_MethodInfos/* methods */
	, U3CProcessMatchResponseU3Ec__Iterator0_1_t424_PropertyInfos/* properties */
	, NULL/* events */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 395/* custom_attributes_cache */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_0_0_0/* byval_arg */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_1_0_0/* this_arg */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &U3CProcessMatchResponseU3Ec__Iterator0_1_t424_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch.h"
// Metadata Definition UnityEngine.Networking.Match.NetworkMatch
// UnityEngine.Networking.Match.NetworkMatch
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatchMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern const MethodInfo NetworkMatch__ctor_m1085_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NetworkMatch__ctor_m1085/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 988/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t222_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern const MethodInfo NetworkMatch_get_baseUri_m1086_MethodInfo = 
{
	"get_baseUri"/* name */
	, (methodPointerType)&NetworkMatch_get_baseUri_m1086/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Uri_t222_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 989/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Uri_t222_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_set_baseUri_m1087_ParameterInfos[] = 
{
	{"value", 0, 134218714, 0, &Uri_t222_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern const MethodInfo NetworkMatch_set_baseUri_m1087_MethodInfo = 
{
	"set_baseUri"/* name */
	, (methodPointerType)&NetworkMatch_set_baseUri_m1087/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_set_baseUri_m1087_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 990/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType AppID_t214_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_SetProgramAppID_m1088_ParameterInfos[] = 
{
	{"programAppID", 0, 134218715, 0, &AppID_t214_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UInt64_t379 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern const MethodInfo NetworkMatch_SetProgramAppID_m1088_MethodInfo = 
{
	"SetProgramAppID"/* name */
	, (methodPointerType)&NetworkMatch_SetProgramAppID_m1088/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UInt64_t379/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_SetProgramAppID_m1088_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 991/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType UInt32_t368_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ResponseDelegate_1_t329_0_0_0;
extern const Il2CppType ResponseDelegate_1_t329_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_CreateMatch_m1089_ParameterInfos[] = 
{
	{"matchName", 0, 134218716, 0, &String_t_0_0_0},
	{"matchSize", 1, 134218717, 0, &UInt32_t368_0_0_0},
	{"matchAdvertise", 2, 134218718, 0, &Boolean_t36_0_0_0},
	{"matchPassword", 3, 134218719, 0, &String_t_0_0_0},
	{"callback", 4, 134218720, 0, &ResponseDelegate_1_t329_0_0_0},
};
extern const Il2CppType Coroutine_t60_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t18_SByte_t37_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern const MethodInfo NetworkMatch_CreateMatch_m1089_MethodInfo = 
{
	"CreateMatch"/* name */
	, (methodPointerType)&NetworkMatch_CreateMatch_m1089/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t18_SByte_t37_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_CreateMatch_m1089_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 992/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CreateMatchRequest_t202_0_0_0;
extern const Il2CppType ResponseDelegate_1_t329_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_CreateMatch_m1090_ParameterInfos[] = 
{
	{"req", 0, 134218721, 0, &CreateMatchRequest_t202_0_0_0},
	{"callback", 1, 134218722, 0, &ResponseDelegate_1_t329_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern const MethodInfo NetworkMatch_CreateMatch_m1090_MethodInfo = 
{
	"CreateMatch"/* name */
	, (methodPointerType)&NetworkMatch_CreateMatch_m1090/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_CreateMatch_m1090_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 993/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ResponseDelegate_1_t330_0_0_0;
extern const Il2CppType ResponseDelegate_1_t330_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_JoinMatch_m1091_ParameterInfos[] = 
{
	{"netId", 0, 134218723, 0, &NetworkID_t216_0_0_0},
	{"matchPassword", 1, 134218724, 0, &String_t_0_0_0},
	{"callback", 2, 134218725, 0, &ResponseDelegate_1_t330_0_0_0},
};
extern void* RuntimeInvoker_Object_t_UInt64_t379_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern const MethodInfo NetworkMatch_JoinMatch_m1091_MethodInfo = 
{
	"JoinMatch"/* name */
	, (methodPointerType)&NetworkMatch_JoinMatch_m1091/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_UInt64_t379_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_JoinMatch_m1091_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 994/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType JoinMatchRequest_t204_0_0_0;
extern const Il2CppType ResponseDelegate_1_t330_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_JoinMatch_m1092_ParameterInfos[] = 
{
	{"req", 0, 134218726, 0, &JoinMatchRequest_t204_0_0_0},
	{"callback", 1, 134218727, 0, &ResponseDelegate_1_t330_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern const MethodInfo NetworkMatch_JoinMatch_m1092_MethodInfo = 
{
	"JoinMatch"/* name */
	, (methodPointerType)&NetworkMatch_JoinMatch_m1092/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_JoinMatch_m1092_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 995/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
extern const Il2CppType ResponseDelegate_1_t331_0_0_0;
extern const Il2CppType ResponseDelegate_1_t331_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_DestroyMatch_m1093_ParameterInfos[] = 
{
	{"netId", 0, 134218728, 0, &NetworkID_t216_0_0_0},
	{"callback", 1, 134218729, 0, &ResponseDelegate_1_t331_0_0_0},
};
extern void* RuntimeInvoker_Object_t_UInt64_t379_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern const MethodInfo NetworkMatch_DestroyMatch_m1093_MethodInfo = 
{
	"DestroyMatch"/* name */
	, (methodPointerType)&NetworkMatch_DestroyMatch_m1093/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_UInt64_t379_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_DestroyMatch_m1093_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 996/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DestroyMatchRequest_t206_0_0_0;
extern const Il2CppType ResponseDelegate_1_t331_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_DestroyMatch_m1094_ParameterInfos[] = 
{
	{"req", 0, 134218730, 0, &DestroyMatchRequest_t206_0_0_0},
	{"callback", 1, 134218731, 0, &ResponseDelegate_1_t331_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern const MethodInfo NetworkMatch_DestroyMatch_m1094_MethodInfo = 
{
	"DestroyMatch"/* name */
	, (methodPointerType)&NetworkMatch_DestroyMatch_m1094/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_DestroyMatch_m1094_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 997/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType NetworkID_t216_0_0_0;
extern const Il2CppType NodeID_t217_0_0_0;
extern const Il2CppType ResponseDelegate_1_t331_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_DropConnection_m1095_ParameterInfos[] = 
{
	{"netId", 0, 134218732, 0, &NetworkID_t216_0_0_0},
	{"dropNodeId", 1, 134218733, 0, &NodeID_t217_0_0_0},
	{"callback", 2, 134218734, 0, &ResponseDelegate_1_t331_0_0_0},
};
extern void* RuntimeInvoker_Object_t_UInt64_t379_UInt16_t381_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern const MethodInfo NetworkMatch_DropConnection_m1095_MethodInfo = 
{
	"DropConnection"/* name */
	, (methodPointerType)&NetworkMatch_DropConnection_m1095/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_UInt64_t379_UInt16_t381_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_DropConnection_m1095_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 998/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType DropConnectionRequest_t207_0_0_0;
extern const Il2CppType ResponseDelegate_1_t331_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_DropConnection_m1096_ParameterInfos[] = 
{
	{"req", 0, 134218735, 0, &DropConnectionRequest_t207_0_0_0},
	{"callback", 1, 134218736, 0, &ResponseDelegate_1_t331_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.BasicResponse>)
extern const MethodInfo NetworkMatch_DropConnection_m1096_MethodInfo = 
{
	"DropConnection"/* name */
	, (methodPointerType)&NetworkMatch_DropConnection_m1096/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_DropConnection_m1096_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 999/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType ResponseDelegate_1_t332_0_0_0;
extern const Il2CppType ResponseDelegate_1_t332_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_ListMatches_m1097_ParameterInfos[] = 
{
	{"startPageNumber", 0, 134218737, 0, &Int32_t18_0_0_0},
	{"resultPageSize", 1, 134218738, 0, &Int32_t18_0_0_0},
	{"matchNameFilter", 2, 134218739, 0, &String_t_0_0_0},
	{"callback", 3, 134218740, 0, &ResponseDelegate_1_t332_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t18_Int32_t18_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern const MethodInfo NetworkMatch_ListMatches_m1097_MethodInfo = 
{
	"ListMatches"/* name */
	, (methodPointerType)&NetworkMatch_ListMatches_m1097/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18_Int32_t18_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_ListMatches_m1097_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1000/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ListMatchRequest_t208_0_0_0;
extern const Il2CppType ResponseDelegate_1_t332_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_ListMatches_m1098_ParameterInfos[] = 
{
	{"req", 0, 134218741, 0, &ListMatchRequest_t208_0_0_0},
	{"callback", 1, 134218742, 0, &ResponseDelegate_1_t332_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern const MethodInfo NetworkMatch_ListMatches_m1098_MethodInfo = 
{
	"ListMatches"/* name */
	, (methodPointerType)&NetworkMatch_ListMatches_m1098/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &Coroutine_t60_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_ListMatches_m1098_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1001/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType WWW_t139_0_0_0;
extern const Il2CppType WWW_t139_0_0_0;
extern const Il2CppType ResponseDelegate_1_t462_0_0_0;
extern const Il2CppType ResponseDelegate_1_t462_0_0_0;
static const ParameterInfo NetworkMatch_t223_NetworkMatch_ProcessMatchResponse_m1547_ParameterInfos[] = 
{
	{"client", 0, 134218743, 0, &WWW_t139_0_0_0},
	{"callback", 1, 134218744, 0, &ResponseDelegate_1_t462_0_0_0},
};
extern const Il2CppGenericContainer NetworkMatch_ProcessMatchResponse_m1547_Il2CppGenericContainer;
extern TypeInfo NetworkMatch_ProcessMatchResponse_m1547_gp_JSONRESPONSE_0_il2cpp_TypeInfo;
static const Il2CppType* NetworkMatch_ProcessMatchResponse_m1547_gp_JSONRESPONSE_0_il2cpp_TypeInfo_constraints[] = { 
&Response_t199_0_0_0 /* UnityEngine.Networking.Match.Response */, 
 NULL };
extern const Il2CppGenericParameter NetworkMatch_ProcessMatchResponse_m1547_gp_JSONRESPONSE_0_il2cpp_TypeInfo_GenericParamFull = { &NetworkMatch_ProcessMatchResponse_m1547_Il2CppGenericContainer, NetworkMatch_ProcessMatchResponse_m1547_gp_JSONRESPONSE_0_il2cpp_TypeInfo_constraints, "JSONRESPONSE", 0, 16 };
static const Il2CppGenericParameter* NetworkMatch_ProcessMatchResponse_m1547_Il2CppGenericParametersArray[1] = 
{
	&NetworkMatch_ProcessMatchResponse_m1547_gp_JSONRESPONSE_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const MethodInfo NetworkMatch_ProcessMatchResponse_m1547_MethodInfo;
extern const Il2CppGenericContainer NetworkMatch_ProcessMatchResponse_m1547_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&NetworkMatch_ProcessMatchResponse_m1547_MethodInfo, 1, 1, NetworkMatch_ProcessMatchResponse_m1547_Il2CppGenericParametersArray };
extern const Il2CppType U3CProcessMatchResponseU3Ec__Iterator0_1_t464_0_0_0;
extern const Il2CppGenericMethod U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m1614_GenericMethod;
static Il2CppRGCTXDefinition NetworkMatch_ProcessMatchResponse_m1547_RGCTXData[3] = 
{
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&U3CProcessMatchResponseU3Ec__Iterator0_1_t464_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &U3CProcessMatchResponseU3Ec__Iterator0_1__ctor_m1614_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse(UnityEngine.WWW,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<JSONRESPONSE>)
extern const MethodInfo NetworkMatch_ProcessMatchResponse_m1547_MethodInfo = 
{
	"ProcessMatchResponse"/* name */
	, NULL/* method */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t317_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NetworkMatch_t223_NetworkMatch_ProcessMatchResponse_m1547_ParameterInfos/* parameters */
	, 394/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, true/* is_generic */
	, false/* is_inflated */
	, 1002/* token */
	, NetworkMatch_ProcessMatchResponse_m1547_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &NetworkMatch_ProcessMatchResponse_m1547_Il2CppGenericContainer/* genericContainer */

};
static const MethodInfo* NetworkMatch_t223_MethodInfos[] =
{
	&NetworkMatch__ctor_m1085_MethodInfo,
	&NetworkMatch_get_baseUri_m1086_MethodInfo,
	&NetworkMatch_set_baseUri_m1087_MethodInfo,
	&NetworkMatch_SetProgramAppID_m1088_MethodInfo,
	&NetworkMatch_CreateMatch_m1089_MethodInfo,
	&NetworkMatch_CreateMatch_m1090_MethodInfo,
	&NetworkMatch_JoinMatch_m1091_MethodInfo,
	&NetworkMatch_JoinMatch_m1092_MethodInfo,
	&NetworkMatch_DestroyMatch_m1093_MethodInfo,
	&NetworkMatch_DestroyMatch_m1094_MethodInfo,
	&NetworkMatch_DropConnection_m1095_MethodInfo,
	&NetworkMatch_DropConnection_m1096_MethodInfo,
	&NetworkMatch_ListMatches_m1097_MethodInfo,
	&NetworkMatch_ListMatches_m1098_MethodInfo,
	&NetworkMatch_ProcessMatchResponse_m1547_MethodInfo,
	NULL
};
extern const MethodInfo NetworkMatch_get_baseUri_m1086_MethodInfo;
extern const MethodInfo NetworkMatch_set_baseUri_m1087_MethodInfo;
static const PropertyInfo NetworkMatch_t223____baseUri_PropertyInfo = 
{
	&NetworkMatch_t223_il2cpp_TypeInfo/* parent */
	, "baseUri"/* name */
	, &NetworkMatch_get_baseUri_m1086_MethodInfo/* get */
	, &NetworkMatch_set_baseUri_m1087_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* NetworkMatch_t223_PropertyInfos[] =
{
	&NetworkMatch_t223____baseUri_PropertyInfo,
	NULL
};
static const Il2CppType* NetworkMatch_t223_il2cpp_TypeInfo__nestedTypes[2] =
{
	&ResponseDelegate_1_t423_0_0_0,
	&U3CProcessMatchResponseU3Ec__Iterator0_1_t424_0_0_0,
};
static const Il2CppMethodReference NetworkMatch_t223_VTable[] =
{
	&Object_Equals_m90_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m92_MethodInfo,
	&Object_ToString_m93_MethodInfo,
};
static bool NetworkMatch_t223_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType NetworkMatch_t223_1_0_0;
extern const Il2CppType MonoBehaviour_t2_0_0_0;
struct NetworkMatch_t223;
const Il2CppTypeDefinitionMetadata NetworkMatch_t223_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NetworkMatch_t223_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &MonoBehaviour_t2_0_0_0/* parent */
	, NetworkMatch_t223_VTable/* vtableMethods */
	, NetworkMatch_t223_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 876/* fieldStart */

};
TypeInfo NetworkMatch_t223_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "NetworkMatch"/* name */
	, "UnityEngine.Networking.Match"/* namespaze */
	, NetworkMatch_t223_MethodInfos/* methods */
	, NetworkMatch_t223_PropertyInfos/* properties */
	, NULL/* events */
	, &NetworkMatch_t223_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &NetworkMatch_t223_0_0_0/* byval_arg */
	, &NetworkMatch_t223_1_0_0/* this_arg */
	, &NetworkMatch_t223_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NetworkMatch_t223)/* instance_size */
	, sizeof (NetworkMatch_t223)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 15/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArray.h"
// Metadata Definition SimpleJson.JsonArray
extern TypeInfo JsonArray_t224_il2cpp_TypeInfo;
// SimpleJson.JsonArray
#include "UnityEngine_SimpleJson_JsonArrayMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonArray::.ctor()
extern const MethodInfo JsonArray__ctor_m1099_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&JsonArray__ctor_m1099/* method */
	, &JsonArray_t224_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1012/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.JsonArray::ToString()
extern const MethodInfo JsonArray_ToString_m1100_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&JsonArray_ToString_m1100/* method */
	, &JsonArray_t224_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1013/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* JsonArray_t224_MethodInfos[] =
{
	&JsonArray__ctor_m1099_MethodInfo,
	&JsonArray_ToString_m1100_MethodInfo,
	NULL
};
extern const MethodInfo JsonArray_ToString_m1100_MethodInfo;
extern const Il2CppGenericMethod List_1_System_Collections_IEnumerable_GetEnumerator_m1615_GenericMethod;
extern const Il2CppGenericMethod List_1_get_Count_m1616_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_ICollection_get_SyncRoot_m1617_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_ICollection_CopyTo_m1618_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_get_Item_m1619_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_set_Item_m1620_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_Add_m1621_GenericMethod;
extern const Il2CppGenericMethod List_1_Clear_m1622_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_Contains_m1623_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_IndexOf_m1624_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_Insert_m1625_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_IList_Remove_m1626_GenericMethod;
extern const Il2CppGenericMethod List_1_RemoveAt_m1627_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1628_GenericMethod;
extern const Il2CppGenericMethod List_1_Add_m1629_GenericMethod;
extern const Il2CppGenericMethod List_1_Contains_m1630_GenericMethod;
extern const Il2CppGenericMethod List_1_CopyTo_m1631_GenericMethod;
extern const Il2CppGenericMethod List_1_Remove_m1632_GenericMethod;
extern const Il2CppGenericMethod List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1633_GenericMethod;
extern const Il2CppGenericMethod List_1_IndexOf_m1634_GenericMethod;
extern const Il2CppGenericMethod List_1_Insert_m1635_GenericMethod;
extern const Il2CppGenericMethod List_1_get_Item_m1636_GenericMethod;
extern const Il2CppGenericMethod List_1_set_Item_m1637_GenericMethod;
static const Il2CppMethodReference JsonArray_t224_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&JsonArray_ToString_m1100_MethodInfo,
	&List_1_System_Collections_IEnumerable_GetEnumerator_m1615_GenericMethod,
	&List_1_get_Count_m1616_GenericMethod,
	&List_1_System_Collections_ICollection_get_SyncRoot_m1617_GenericMethod,
	&List_1_System_Collections_ICollection_CopyTo_m1618_GenericMethod,
	&List_1_System_Collections_IList_get_Item_m1619_GenericMethod,
	&List_1_System_Collections_IList_set_Item_m1620_GenericMethod,
	&List_1_System_Collections_IList_Add_m1621_GenericMethod,
	&List_1_Clear_m1622_GenericMethod,
	&List_1_System_Collections_IList_Contains_m1623_GenericMethod,
	&List_1_System_Collections_IList_IndexOf_m1624_GenericMethod,
	&List_1_System_Collections_IList_Insert_m1625_GenericMethod,
	&List_1_System_Collections_IList_Remove_m1626_GenericMethod,
	&List_1_RemoveAt_m1627_GenericMethod,
	&List_1_get_Count_m1616_GenericMethod,
	&List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1628_GenericMethod,
	&List_1_Add_m1629_GenericMethod,
	&List_1_Clear_m1622_GenericMethod,
	&List_1_Contains_m1630_GenericMethod,
	&List_1_CopyTo_m1631_GenericMethod,
	&List_1_Remove_m1632_GenericMethod,
	&List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1633_GenericMethod,
	&List_1_IndexOf_m1634_GenericMethod,
	&List_1_Insert_m1635_GenericMethod,
	&List_1_RemoveAt_m1627_GenericMethod,
	&List_1_get_Item_m1636_GenericMethod,
	&List_1_set_Item_m1637_GenericMethod,
};
static bool JsonArray_t224_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
	true,
};
extern const Il2CppType IEnumerable_t339_0_0_0;
extern const Il2CppType ICollection_t465_0_0_0;
extern const Il2CppType IList_t466_0_0_0;
extern const Il2CppType ICollection_1_t334_0_0_0;
extern const Il2CppType IEnumerable_1_t467_0_0_0;
extern const Il2CppType IList_1_t468_0_0_0;
static Il2CppInterfaceOffsetPair JsonArray_t224_InterfacesOffsets[] = 
{
	{ &IEnumerable_t339_0_0_0, 4},
	{ &ICollection_t465_0_0_0, 5},
	{ &IList_t466_0_0_0, 8},
	{ &ICollection_1_t334_0_0_0, 17},
	{ &IEnumerable_1_t467_0_0_0, 24},
	{ &IList_1_t468_0_0_0, 25},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType JsonArray_t224_0_0_0;
extern const Il2CppType JsonArray_t224_1_0_0;
extern const Il2CppType List_1_t225_0_0_0;
struct JsonArray_t224;
const Il2CppTypeDefinitionMetadata JsonArray_t224_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, JsonArray_t224_InterfacesOffsets/* interfaceOffsets */
	, &List_1_t225_0_0_0/* parent */
	, JsonArray_t224_VTable/* vtableMethods */
	, JsonArray_t224_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo JsonArray_t224_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "JsonArray"/* name */
	, "SimpleJson"/* namespaze */
	, JsonArray_t224_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &JsonArray_t224_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 399/* custom_attributes_cache */
	, &JsonArray_t224_0_0_0/* byval_arg */
	, &JsonArray_t224_1_0_0/* this_arg */
	, &JsonArray_t224_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (JsonArray_t224)/* instance_size */
	, sizeof (JsonArray_t224)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 30/* vtable_count */
	, 0/* interfaces_count */
	, 6/* interface_offsets_count */

};
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
// Metadata Definition SimpleJson.JsonObject
extern TypeInfo JsonObject_t227_il2cpp_TypeInfo;
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonObject::.ctor()
extern const MethodInfo JsonObject__ctor_m1101_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&JsonObject__ctor_m1101/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1014/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator SimpleJson.JsonObject::System.Collections.IEnumerable.GetEnumerator()
extern const MethodInfo JsonObject_System_Collections_IEnumerable_GetEnumerator_m1102_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&JsonObject_System_Collections_IEnumerable_GetEnumerator_m1102/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t317_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1015/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_Add_m1103_ParameterInfos[] = 
{
	{"key", 0, 134218752, 0, &String_t_0_0_0},
	{"value", 1, 134218753, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonObject::Add(System.String,System.Object)
extern const MethodInfo JsonObject_Add_m1103_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&JsonObject_Add_m1103/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, JsonObject_t227_JsonObject_Add_m1103_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1016/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICollection_1_t333_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.ICollection`1<System.String> SimpleJson.JsonObject::get_Keys()
extern const MethodInfo JsonObject_get_Keys_m1104_MethodInfo = 
{
	"get_Keys"/* name */
	, (methodPointerType)&JsonObject_get_Keys_m1104/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_1_t333_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1017/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_Remove_m1105_ParameterInfos[] = 
{
	{"key", 0, 134218754, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.JsonObject::Remove(System.String)
extern const MethodInfo JsonObject_Remove_m1105_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&JsonObject_Remove_m1105/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, JsonObject_t227_JsonObject_Remove_m1105_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1018/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
extern const Il2CppType Object_t_1_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_TryGetValue_m1106_ParameterInfos[] = 
{
	{"key", 0, 134218755, 0, &String_t_0_0_0},
	{"value", 1, 134218756, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.JsonObject::TryGetValue(System.String,System.Object&)
extern const MethodInfo JsonObject_TryGetValue_m1106_MethodInfo = 
{
	"TryGetValue"/* name */
	, (methodPointerType)&JsonObject_TryGetValue_m1106/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469/* invoker_method */
	, JsonObject_t227_JsonObject_TryGetValue_m1106_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1019/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.ICollection`1<System.Object> SimpleJson.JsonObject::get_Values()
extern const MethodInfo JsonObject_get_Values_m1107_MethodInfo = 
{
	"get_Values"/* name */
	, (methodPointerType)&JsonObject_get_Values_m1107/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_1_t334_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1020/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_get_Item_m1108_ParameterInfos[] = 
{
	{"key", 0, 134218757, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.JsonObject::get_Item(System.String)
extern const MethodInfo JsonObject_get_Item_m1108_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&JsonObject_get_Item_m1108/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, JsonObject_t227_JsonObject_get_Item_m1108_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1021/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_set_Item_m1109_ParameterInfos[] = 
{
	{"key", 0, 134218758, 0, &String_t_0_0_0},
	{"value", 1, 134218759, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonObject::set_Item(System.String,System.Object)
extern const MethodInfo JsonObject_set_Item_m1109_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&JsonObject_set_Item_m1109/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, JsonObject_t227_JsonObject_set_Item_m1109_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1022/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t336_0_0_0;
extern const Il2CppType KeyValuePair_2_t336_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_Add_m1110_ParameterInfos[] = 
{
	{"item", 0, 134218760, 0, &KeyValuePair_2_t336_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_KeyValuePair_2_t336 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonObject::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo JsonObject_Add_m1110_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&JsonObject_Add_m1110/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_KeyValuePair_2_t336/* invoker_method */
	, JsonObject_t227_JsonObject_Add_m1110_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1023/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonObject::Clear()
extern const MethodInfo JsonObject_Clear_m1111_MethodInfo = 
{
	"Clear"/* name */
	, (methodPointerType)&JsonObject_Clear_m1111/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1024/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t336_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_Contains_m1112_ParameterInfos[] = 
{
	{"item", 0, 134218761, 0, &KeyValuePair_2_t336_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_KeyValuePair_2_t336 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.JsonObject::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo JsonObject_Contains_m1112_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&JsonObject_Contains_m1112/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_KeyValuePair_2_t336/* invoker_method */
	, JsonObject_t227_JsonObject_Contains_m1112_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1025/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2U5BU5D_t335_0_0_0;
extern const Il2CppType KeyValuePair_2U5BU5D_t335_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_CopyTo_m1113_ParameterInfos[] = 
{
	{"array", 0, 134218762, 0, &KeyValuePair_2U5BU5D_t335_0_0_0},
	{"arrayIndex", 1, 134218763, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.JsonObject::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[],System.Int32)
extern const MethodInfo JsonObject_CopyTo_m1113_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&JsonObject_CopyTo_m1113/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Int32_t18/* invoker_method */
	, JsonObject_t227_JsonObject_CopyTo_m1113_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1026/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.JsonObject::get_Count()
extern const MethodInfo JsonObject_get_Count_m1114_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&JsonObject_get_Count_m1114/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1027/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.JsonObject::get_IsReadOnly()
extern const MethodInfo JsonObject_get_IsReadOnly_m1115_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, (methodPointerType)&JsonObject_get_IsReadOnly_m1115/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1028/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t336_0_0_0;
static const ParameterInfo JsonObject_t227_JsonObject_Remove_m1116_ParameterInfos[] = 
{
	{"item", 0, 134218764, 0, &KeyValuePair_2_t336_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_KeyValuePair_2_t336 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.JsonObject::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern const MethodInfo JsonObject_Remove_m1116_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&JsonObject_Remove_m1116/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_KeyValuePair_2_t336/* invoker_method */
	, JsonObject_t227_JsonObject_Remove_m1116_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1029/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IEnumerator_1_t337_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> SimpleJson.JsonObject::GetEnumerator()
extern const MethodInfo JsonObject_GetEnumerator_m1117_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&JsonObject_GetEnumerator_m1117/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t337_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1030/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.JsonObject::ToString()
extern const MethodInfo JsonObject_ToString_m1118_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&JsonObject_ToString_m1118/* method */
	, &JsonObject_t227_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1031/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* JsonObject_t227_MethodInfos[] =
{
	&JsonObject__ctor_m1101_MethodInfo,
	&JsonObject_System_Collections_IEnumerable_GetEnumerator_m1102_MethodInfo,
	&JsonObject_Add_m1103_MethodInfo,
	&JsonObject_get_Keys_m1104_MethodInfo,
	&JsonObject_Remove_m1105_MethodInfo,
	&JsonObject_TryGetValue_m1106_MethodInfo,
	&JsonObject_get_Values_m1107_MethodInfo,
	&JsonObject_get_Item_m1108_MethodInfo,
	&JsonObject_set_Item_m1109_MethodInfo,
	&JsonObject_Add_m1110_MethodInfo,
	&JsonObject_Clear_m1111_MethodInfo,
	&JsonObject_Contains_m1112_MethodInfo,
	&JsonObject_CopyTo_m1113_MethodInfo,
	&JsonObject_get_Count_m1114_MethodInfo,
	&JsonObject_get_IsReadOnly_m1115_MethodInfo,
	&JsonObject_Remove_m1116_MethodInfo,
	&JsonObject_GetEnumerator_m1117_MethodInfo,
	&JsonObject_ToString_m1118_MethodInfo,
	NULL
};
extern const MethodInfo JsonObject_get_Keys_m1104_MethodInfo;
static const PropertyInfo JsonObject_t227____Keys_PropertyInfo = 
{
	&JsonObject_t227_il2cpp_TypeInfo/* parent */
	, "Keys"/* name */
	, &JsonObject_get_Keys_m1104_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JsonObject_get_Values_m1107_MethodInfo;
static const PropertyInfo JsonObject_t227____Values_PropertyInfo = 
{
	&JsonObject_t227_il2cpp_TypeInfo/* parent */
	, "Values"/* name */
	, &JsonObject_get_Values_m1107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JsonObject_get_Item_m1108_MethodInfo;
extern const MethodInfo JsonObject_set_Item_m1109_MethodInfo;
static const PropertyInfo JsonObject_t227____Item_PropertyInfo = 
{
	&JsonObject_t227_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &JsonObject_get_Item_m1108_MethodInfo/* get */
	, &JsonObject_set_Item_m1109_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JsonObject_get_Count_m1114_MethodInfo;
static const PropertyInfo JsonObject_t227____Count_PropertyInfo = 
{
	&JsonObject_t227_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &JsonObject_get_Count_m1114_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo JsonObject_get_IsReadOnly_m1115_MethodInfo;
static const PropertyInfo JsonObject_t227____IsReadOnly_PropertyInfo = 
{
	&JsonObject_t227_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &JsonObject_get_IsReadOnly_m1115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* JsonObject_t227_PropertyInfos[] =
{
	&JsonObject_t227____Keys_PropertyInfo,
	&JsonObject_t227____Values_PropertyInfo,
	&JsonObject_t227____Item_PropertyInfo,
	&JsonObject_t227____Count_PropertyInfo,
	&JsonObject_t227____IsReadOnly_PropertyInfo,
	NULL
};
extern const MethodInfo JsonObject_ToString_m1118_MethodInfo;
extern const MethodInfo JsonObject_Add_m1103_MethodInfo;
extern const MethodInfo JsonObject_Remove_m1105_MethodInfo;
extern const MethodInfo JsonObject_TryGetValue_m1106_MethodInfo;
extern const MethodInfo JsonObject_GetEnumerator_m1117_MethodInfo;
extern const MethodInfo JsonObject_System_Collections_IEnumerable_GetEnumerator_m1102_MethodInfo;
extern const MethodInfo JsonObject_Add_m1110_MethodInfo;
extern const MethodInfo JsonObject_Clear_m1111_MethodInfo;
extern const MethodInfo JsonObject_Contains_m1112_MethodInfo;
extern const MethodInfo JsonObject_CopyTo_m1113_MethodInfo;
extern const MethodInfo JsonObject_Remove_m1116_MethodInfo;
static const Il2CppMethodReference JsonObject_t227_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&JsonObject_ToString_m1118_MethodInfo,
	&JsonObject_Add_m1103_MethodInfo,
	&JsonObject_Remove_m1105_MethodInfo,
	&JsonObject_TryGetValue_m1106_MethodInfo,
	&JsonObject_get_Item_m1108_MethodInfo,
	&JsonObject_set_Item_m1109_MethodInfo,
	&JsonObject_get_Keys_m1104_MethodInfo,
	&JsonObject_get_Values_m1107_MethodInfo,
	&JsonObject_GetEnumerator_m1117_MethodInfo,
	&JsonObject_System_Collections_IEnumerable_GetEnumerator_m1102_MethodInfo,
	&JsonObject_get_Count_m1114_MethodInfo,
	&JsonObject_get_IsReadOnly_m1115_MethodInfo,
	&JsonObject_Add_m1110_MethodInfo,
	&JsonObject_Clear_m1111_MethodInfo,
	&JsonObject_Contains_m1112_MethodInfo,
	&JsonObject_CopyTo_m1113_MethodInfo,
	&JsonObject_Remove_m1116_MethodInfo,
};
static bool JsonObject_t227_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IEnumerable_1_t470_0_0_0;
extern const Il2CppType ICollection_1_t471_0_0_0;
static const Il2CppType* JsonObject_t227_InterfacesTypeInfos[] = 
{
	&IDictionary_2_t328_0_0_0,
	&IEnumerable_1_t470_0_0_0,
	&IEnumerable_t339_0_0_0,
	&ICollection_1_t471_0_0_0,
};
static Il2CppInterfaceOffsetPair JsonObject_t227_InterfacesOffsets[] = 
{
	{ &IDictionary_2_t328_0_0_0, 4},
	{ &IEnumerable_1_t470_0_0_0, 11},
	{ &IEnumerable_t339_0_0_0, 12},
	{ &ICollection_1_t471_0_0_0, 13},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType JsonObject_t227_0_0_0;
extern const Il2CppType JsonObject_t227_1_0_0;
struct JsonObject_t227;
const Il2CppTypeDefinitionMetadata JsonObject_t227_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, JsonObject_t227_InterfacesTypeInfos/* implementedInterfaces */
	, JsonObject_t227_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, JsonObject_t227_VTable/* vtableMethods */
	, JsonObject_t227_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 878/* fieldStart */

};
TypeInfo JsonObject_t227_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "JsonObject"/* name */
	, "SimpleJson"/* namespaze */
	, JsonObject_t227_MethodInfos/* methods */
	, JsonObject_t227_PropertyInfos/* properties */
	, NULL/* events */
	, &JsonObject_t227_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 400/* custom_attributes_cache */
	, &JsonObject_t227_0_0_0/* byval_arg */
	, &JsonObject_t227_1_0_0/* this_arg */
	, &JsonObject_t227_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (JsonObject_t227)/* instance_size */
	, sizeof (JsonObject_t227)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 18/* method_count */
	, 5/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 20/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJson.h"
// Metadata Definition SimpleJson.SimpleJson
extern TypeInfo SimpleJson_t230_il2cpp_TypeInfo;
// SimpleJson.SimpleJson
#include "UnityEngine_SimpleJson_SimpleJsonMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo SimpleJson_t230_SimpleJson_TryDeserializeObject_m1119_ParameterInfos[] = 
{
	{"json", 0, 134218765, 0, &String_t_0_0_0},
	{"obj", 1, 134218766, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::TryDeserializeObject(System.String,System.Object&)
extern const MethodInfo SimpleJson_TryDeserializeObject_m1119_MethodInfo = 
{
	"TryDeserializeObject"/* name */
	, (methodPointerType)&SimpleJson_TryDeserializeObject_m1119/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469/* invoker_method */
	, SimpleJson_t230_SimpleJson_TryDeserializeObject_m1119_ParameterInfos/* parameters */
	, 402/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1032/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IJsonSerializerStrategy_t228_0_0_0;
extern const Il2CppType IJsonSerializerStrategy_t228_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeObject_m1120_ParameterInfos[] = 
{
	{"json", 0, 134218767, 0, &Object_t_0_0_0},
	{"jsonSerializerStrategy", 1, 134218768, 0, &IJsonSerializerStrategy_t228_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object,SimpleJson.IJsonSerializerStrategy)
extern const MethodInfo SimpleJson_SerializeObject_m1120_MethodInfo = 
{
	"SerializeObject"/* name */
	, (methodPointerType)&SimpleJson_SerializeObject_m1120/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeObject_m1120_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1033/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeObject_m1121_ParameterInfos[] = 
{
	{"json", 0, 134218769, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::SerializeObject(System.Object)
extern const MethodInfo SimpleJson_SerializeObject_m1121_MethodInfo = 
{
	"SerializeObject"/* name */
	, (methodPointerType)&SimpleJson_SerializeObject_m1121/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeObject_m1121_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1034/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
extern const Il2CppType Int32_t18_1_0_0;
extern const Il2CppType Boolean_t36_1_0_0;
extern const Il2CppType Boolean_t36_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_ParseObject_m1122_ParameterInfos[] = 
{
	{"json", 0, 134218770, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218771, 0, &Int32_t18_1_0_0},
	{"success", 2, 134218772, 0, &Boolean_t36_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472 (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IDictionary`2<System.String,System.Object> SimpleJson.SimpleJson::ParseObject(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseObject_m1122_MethodInfo = 
{
	"ParseObject"/* name */
	, (methodPointerType)&SimpleJson_ParseObject_m1122/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_2_t328_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472/* invoker_method */
	, SimpleJson_t230_SimpleJson_ParseObject_m1122_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1035/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
extern const Il2CppType Boolean_t36_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_ParseArray_m1123_ParameterInfos[] = 
{
	{"json", 0, 134218773, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218774, 0, &Int32_t18_1_0_0},
	{"success", 2, 134218775, 0, &Boolean_t36_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472 (const MethodInfo* method, void* obj, void** args);
// SimpleJson.JsonArray SimpleJson.SimpleJson::ParseArray(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseArray_m1123_MethodInfo = 
{
	"ParseArray"/* name */
	, (methodPointerType)&SimpleJson_ParseArray_m1123/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &JsonArray_t224_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472/* invoker_method */
	, SimpleJson_t230_SimpleJson_ParseArray_m1123_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1036/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
extern const Il2CppType Boolean_t36_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_ParseValue_m1124_ParameterInfos[] = 
{
	{"json", 0, 134218776, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218777, 0, &Int32_t18_1_0_0},
	{"success", 2, 134218778, 0, &Boolean_t36_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472 (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.SimpleJson::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseValue_m1124_MethodInfo = 
{
	"ParseValue"/* name */
	, (methodPointerType)&SimpleJson_ParseValue_m1124/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472/* invoker_method */
	, SimpleJson_t230_SimpleJson_ParseValue_m1124_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1037/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
extern const Il2CppType Boolean_t36_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_ParseString_m1125_ParameterInfos[] = 
{
	{"json", 0, 134218779, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218780, 0, &Int32_t18_1_0_0},
	{"success", 2, 134218781, 0, &Boolean_t36_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472 (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::ParseString(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseString_m1125_MethodInfo = 
{
	"ParseString"/* name */
	, (methodPointerType)&SimpleJson_ParseString_m1125/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472/* invoker_method */
	, SimpleJson_t230_SimpleJson_ParseString_m1125_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1038/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_ConvertFromUtf32_m1126_ParameterInfos[] = 
{
	{"utf32", 0, 134218782, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.SimpleJson::ConvertFromUtf32(System.Int32)
extern const MethodInfo SimpleJson_ConvertFromUtf32_m1126_MethodInfo = 
{
	"ConvertFromUtf32"/* name */
	, (methodPointerType)&SimpleJson_ConvertFromUtf32_m1126/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, SimpleJson_t230_SimpleJson_ConvertFromUtf32_m1126_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1039/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
extern const Il2CppType Boolean_t36_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_ParseNumber_m1127_ParameterInfos[] = 
{
	{"json", 0, 134218783, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218784, 0, &Int32_t18_1_0_0},
	{"success", 2, 134218785, 0, &Boolean_t36_1_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472 (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.SimpleJson::ParseNumber(System.Char[],System.Int32&,System.Boolean&)
extern const MethodInfo SimpleJson_ParseNumber_m1127_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&SimpleJson_ParseNumber_m1127/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t454_BooleanU26_t472/* invoker_method */
	, SimpleJson_t230_SimpleJson_ParseNumber_m1127_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1040/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_GetLastIndexOfNumber_m1128_ParameterInfos[] = 
{
	{"json", 0, 134218786, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218787, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Int32_t18_Object_t_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.SimpleJson::GetLastIndexOfNumber(System.Char[],System.Int32)
extern const MethodInfo SimpleJson_GetLastIndexOfNumber_m1128_MethodInfo = 
{
	"GetLastIndexOfNumber"/* name */
	, (methodPointerType)&SimpleJson_GetLastIndexOfNumber_m1128/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Int32_t18/* invoker_method */
	, SimpleJson_t230_SimpleJson_GetLastIndexOfNumber_m1128_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1041/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_EatWhitespace_m1129_ParameterInfos[] = 
{
	{"json", 0, 134218788, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218789, 0, &Int32_t18_1_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Int32U26_t454 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.SimpleJson::EatWhitespace(System.Char[],System.Int32&)
extern const MethodInfo SimpleJson_EatWhitespace_m1129_MethodInfo = 
{
	"EatWhitespace"/* name */
	, (methodPointerType)&SimpleJson_EatWhitespace_m1129/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Int32U26_t454/* invoker_method */
	, SimpleJson_t230_SimpleJson_EatWhitespace_m1129_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1042/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_LookAhead_m1130_ParameterInfos[] = 
{
	{"json", 0, 134218790, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218791, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Int32_t18_Object_t_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.SimpleJson::LookAhead(System.Char[],System.Int32)
extern const MethodInfo SimpleJson_LookAhead_m1130_MethodInfo = 
{
	"LookAhead"/* name */
	, (methodPointerType)&SimpleJson_LookAhead_m1130/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Int32_t18/* invoker_method */
	, SimpleJson_t230_SimpleJson_LookAhead_m1130_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1043/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType CharU5BU5D_t24_0_0_0;
extern const Il2CppType Int32_t18_1_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_NextToken_m1131_ParameterInfos[] = 
{
	{"json", 0, 134218792, 0, &CharU5BU5D_t24_0_0_0},
	{"index", 1, 134218793, 0, &Int32_t18_1_0_0},
};
extern void* RuntimeInvoker_Int32_t18_Object_t_Int32U26_t454 (const MethodInfo* method, void* obj, void** args);
// System.Int32 SimpleJson.SimpleJson::NextToken(System.Char[],System.Int32&)
extern const MethodInfo SimpleJson_NextToken_m1131_MethodInfo = 
{
	"NextToken"/* name */
	, (methodPointerType)&SimpleJson_NextToken_m1131/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Int32U26_t454/* invoker_method */
	, SimpleJson_t230_SimpleJson_NextToken_m1131_ParameterInfos/* parameters */
	, 403/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1044/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IJsonSerializerStrategy_t228_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StringBuilder_t338_0_0_0;
extern const Il2CppType StringBuilder_t338_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeValue_m1132_ParameterInfos[] = 
{
	{"jsonSerializerStrategy", 0, 134218794, 0, &IJsonSerializerStrategy_t228_0_0_0},
	{"value", 1, 134218795, 0, &Object_t_0_0_0},
	{"builder", 2, 134218796, 0, &StringBuilder_t338_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeValue(SimpleJson.IJsonSerializerStrategy,System.Object,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeValue_m1132_MethodInfo = 
{
	"SerializeValue"/* name */
	, (methodPointerType)&SimpleJson_SerializeValue_m1132/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeValue_m1132_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1045/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IJsonSerializerStrategy_t228_0_0_0;
extern const Il2CppType IEnumerable_t339_0_0_0;
extern const Il2CppType IEnumerable_t339_0_0_0;
extern const Il2CppType StringBuilder_t338_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeObject_m1133_ParameterInfos[] = 
{
	{"jsonSerializerStrategy", 0, 134218797, 0, &IJsonSerializerStrategy_t228_0_0_0},
	{"keys", 1, 134218798, 0, &IEnumerable_t339_0_0_0},
	{"values", 2, 134218799, 0, &IEnumerable_t339_0_0_0},
	{"builder", 3, 134218800, 0, &StringBuilder_t338_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeObject(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Collections.IEnumerable,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeObject_m1133_MethodInfo = 
{
	"SerializeObject"/* name */
	, (methodPointerType)&SimpleJson_SerializeObject_m1133/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeObject_m1133_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1046/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IJsonSerializerStrategy_t228_0_0_0;
extern const Il2CppType IEnumerable_t339_0_0_0;
extern const Il2CppType StringBuilder_t338_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeArray_m1134_ParameterInfos[] = 
{
	{"jsonSerializerStrategy", 0, 134218801, 0, &IJsonSerializerStrategy_t228_0_0_0},
	{"anArray", 1, 134218802, 0, &IEnumerable_t339_0_0_0},
	{"builder", 2, 134218803, 0, &StringBuilder_t338_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeArray(SimpleJson.IJsonSerializerStrategy,System.Collections.IEnumerable,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeArray_m1134_MethodInfo = 
{
	"SerializeArray"/* name */
	, (methodPointerType)&SimpleJson_SerializeArray_m1134/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeArray_m1134_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1047/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType StringBuilder_t338_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeString_m1135_ParameterInfos[] = 
{
	{"aString", 0, 134218804, 0, &String_t_0_0_0},
	{"builder", 1, 134218805, 0, &StringBuilder_t338_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeString(System.String,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeString_m1135_MethodInfo = 
{
	"SerializeString"/* name */
	, (methodPointerType)&SimpleJson_SerializeString_m1135/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeString_m1135_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1048/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType StringBuilder_t338_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_SerializeNumber_m1136_ParameterInfos[] = 
{
	{"number", 0, 134218806, 0, &Object_t_0_0_0},
	{"builder", 1, 134218807, 0, &StringBuilder_t338_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::SerializeNumber(System.Object,System.Text.StringBuilder)
extern const MethodInfo SimpleJson_SerializeNumber_m1136_MethodInfo = 
{
	"SerializeNumber"/* name */
	, (methodPointerType)&SimpleJson_SerializeNumber_m1136/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_SerializeNumber_m1136_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1049/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SimpleJson_t230_SimpleJson_IsNumeric_m1137_ParameterInfos[] = 
{
	{"value", 0, 134218808, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.SimpleJson::IsNumeric(System.Object)
extern const MethodInfo SimpleJson_IsNumeric_m1137_MethodInfo = 
{
	"IsNumeric"/* name */
	, (methodPointerType)&SimpleJson_IsNumeric_m1137/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, SimpleJson_t230_SimpleJson_IsNumeric_m1137_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1050/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.IJsonSerializerStrategy SimpleJson.SimpleJson::get_CurrentJsonSerializerStrategy()
extern const MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m1138_MethodInfo = 
{
	"get_CurrentJsonSerializerStrategy"/* name */
	, (methodPointerType)&SimpleJson_get_CurrentJsonSerializerStrategy_m1138/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &IJsonSerializerStrategy_t228_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1051/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PocoJsonSerializerStrategy_t229_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.PocoJsonSerializerStrategy SimpleJson.SimpleJson::get_PocoJsonSerializerStrategy()
extern const MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m1139_MethodInfo = 
{
	"get_PocoJsonSerializerStrategy"/* name */
	, (methodPointerType)&SimpleJson_get_PocoJsonSerializerStrategy_m1139/* method */
	, &SimpleJson_t230_il2cpp_TypeInfo/* declaring_type */
	, &PocoJsonSerializerStrategy_t229_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1052/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SimpleJson_t230_MethodInfos[] =
{
	&SimpleJson_TryDeserializeObject_m1119_MethodInfo,
	&SimpleJson_SerializeObject_m1120_MethodInfo,
	&SimpleJson_SerializeObject_m1121_MethodInfo,
	&SimpleJson_ParseObject_m1122_MethodInfo,
	&SimpleJson_ParseArray_m1123_MethodInfo,
	&SimpleJson_ParseValue_m1124_MethodInfo,
	&SimpleJson_ParseString_m1125_MethodInfo,
	&SimpleJson_ConvertFromUtf32_m1126_MethodInfo,
	&SimpleJson_ParseNumber_m1127_MethodInfo,
	&SimpleJson_GetLastIndexOfNumber_m1128_MethodInfo,
	&SimpleJson_EatWhitespace_m1129_MethodInfo,
	&SimpleJson_LookAhead_m1130_MethodInfo,
	&SimpleJson_NextToken_m1131_MethodInfo,
	&SimpleJson_SerializeValue_m1132_MethodInfo,
	&SimpleJson_SerializeObject_m1133_MethodInfo,
	&SimpleJson_SerializeArray_m1134_MethodInfo,
	&SimpleJson_SerializeString_m1135_MethodInfo,
	&SimpleJson_SerializeNumber_m1136_MethodInfo,
	&SimpleJson_IsNumeric_m1137_MethodInfo,
	&SimpleJson_get_CurrentJsonSerializerStrategy_m1138_MethodInfo,
	&SimpleJson_get_PocoJsonSerializerStrategy_m1139_MethodInfo,
	NULL
};
extern const MethodInfo SimpleJson_get_CurrentJsonSerializerStrategy_m1138_MethodInfo;
static const PropertyInfo SimpleJson_t230____CurrentJsonSerializerStrategy_PropertyInfo = 
{
	&SimpleJson_t230_il2cpp_TypeInfo/* parent */
	, "CurrentJsonSerializerStrategy"/* name */
	, &SimpleJson_get_CurrentJsonSerializerStrategy_m1138_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo SimpleJson_get_PocoJsonSerializerStrategy_m1139_MethodInfo;
static const PropertyInfo SimpleJson_t230____PocoJsonSerializerStrategy_PropertyInfo = 
{
	&SimpleJson_t230_il2cpp_TypeInfo/* parent */
	, "PocoJsonSerializerStrategy"/* name */
	, &SimpleJson_get_PocoJsonSerializerStrategy_m1139_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 404/* custom_attributes_cache */

};
static const PropertyInfo* SimpleJson_t230_PropertyInfos[] =
{
	&SimpleJson_t230____CurrentJsonSerializerStrategy_PropertyInfo,
	&SimpleJson_t230____PocoJsonSerializerStrategy_PropertyInfo,
	NULL
};
static const Il2CppMethodReference SimpleJson_t230_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool SimpleJson_t230_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SimpleJson_t230_0_0_0;
extern const Il2CppType SimpleJson_t230_1_0_0;
struct SimpleJson_t230;
const Il2CppTypeDefinitionMetadata SimpleJson_t230_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SimpleJson_t230_VTable/* vtableMethods */
	, SimpleJson_t230_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 879/* fieldStart */

};
TypeInfo SimpleJson_t230_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SimpleJson"/* name */
	, "SimpleJson"/* namespaze */
	, SimpleJson_t230_MethodInfos/* methods */
	, SimpleJson_t230_PropertyInfos/* properties */
	, NULL/* events */
	, &SimpleJson_t230_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 401/* custom_attributes_cache */
	, &SimpleJson_t230_0_0_0/* byval_arg */
	, &SimpleJson_t230_1_0_0/* this_arg */
	, &SimpleJson_t230_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SimpleJson_t230)/* instance_size */
	, sizeof (SimpleJson_t230)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(SimpleJson_t230_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048960/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition SimpleJson.IJsonSerializerStrategy
extern TypeInfo IJsonSerializerStrategy_t228_il2cpp_TypeInfo;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo IJsonSerializerStrategy_t228_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1561_ParameterInfos[] = 
{
	{"input", 0, 134218809, 0, &Object_t_0_0_0},
	{"output", 1, 134218810, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.IJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern const MethodInfo IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1561_MethodInfo = 
{
	"TrySerializeNonPrimitiveObject"/* name */
	, NULL/* method */
	, &IJsonSerializerStrategy_t228_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469/* invoker_method */
	, IJsonSerializerStrategy_t228_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1561_ParameterInfos/* parameters */
	, 406/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1053/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IJsonSerializerStrategy_t228_MethodInfos[] =
{
	&IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1561_MethodInfo,
	NULL
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IJsonSerializerStrategy_t228_1_0_0;
struct IJsonSerializerStrategy_t228;
const Il2CppTypeDefinitionMetadata IJsonSerializerStrategy_t228_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo IJsonSerializerStrategy_t228_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IJsonSerializerStrategy"/* name */
	, "SimpleJson"/* namespaze */
	, IJsonSerializerStrategy_t228_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IJsonSerializerStrategy_t228_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 405/* custom_attributes_cache */
	, &IJsonSerializerStrategy_t228_0_0_0/* byval_arg */
	, &IJsonSerializerStrategy_t228_1_0_0/* this_arg */
	, &IJsonSerializerStrategy_t228_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
// Metadata Definition SimpleJson.PocoJsonSerializerStrategy
extern TypeInfo PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo;
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern const MethodInfo PocoJsonSerializerStrategy__ctor_m1140_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy__ctor_m1140/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1054/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const MethodInfo PocoJsonSerializerStrategy__cctor_m1141_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy__cctor_m1141/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1055/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142_ParameterInfos[] = 
{
	{"clrPropertyName", 0, 134218811, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern const MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142_MethodInfo = 
{
	"MapClrMemberNameToJsonFieldName"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1056/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143_ParameterInfos[] = 
{
	{"key", 0, 134218812, 0, &Type_t_0_0_0},
};
extern const Il2CppType ConstructorDelegate_t237_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern const MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143_MethodInfo = 
{
	"ContructorDelegateFactory"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t237_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1057/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_GetterValueFactory_m1144_ParameterInfos[] = 
{
	{"type", 0, 134218813, 0, &Type_t_0_0_0},
};
extern const Il2CppType IDictionary_2_t340_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern const MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m1144_MethodInfo = 
{
	"GetterValueFactory"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_GetterValueFactory_m1144/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_2_t340_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_GetterValueFactory_m1144_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1058/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_SetterValueFactory_m1145_ParameterInfos[] = 
{
	{"type", 0, 134218814, 0, &Type_t_0_0_0},
};
extern const Il2CppType IDictionary_2_t341_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern const MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m1145_MethodInfo = 
{
	"SetterValueFactory"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_SetterValueFactory_m1145/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_2_t341_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_SetterValueFactory_m1145_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 451/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1059/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_ParameterInfos[] = 
{
	{"input", 0, 134218815, 0, &Object_t_0_0_0},
	{"output", 1, 134218816, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_MethodInfo = 
{
	"TrySerializeNonPrimitiveObject"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1060/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Enum_t41_0_0_0;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_SerializeEnum_m1147_ParameterInfos[] = 
{
	{"p", 0, 134218817, 0, &Enum_t41_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern const MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m1147_MethodInfo = 
{
	"SerializeEnum"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_SerializeEnum_m1147/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_SerializeEnum_m1147_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1061/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148_ParameterInfos[] = 
{
	{"input", 0, 134218818, 0, &Object_t_0_0_0},
	{"output", 1, 134218819, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148_MethodInfo = 
{
	"TrySerializeKnownTypes"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148_ParameterInfos/* parameters */
	, 408/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1062/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_1_0_2;
static const ParameterInfo PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149_ParameterInfos[] = 
{
	{"input", 0, 134218820, 0, &Object_t_0_0_0},
	{"output", 1, 134218821, 0, &Object_t_1_0_2},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469 (const MethodInfo* method, void* obj, void** args);
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149_MethodInfo = 
{
	"TrySerializeUnknownTypes"/* name */
	, (methodPointerType)&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149/* method */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t_ObjectU26_t469/* invoker_method */
	, PocoJsonSerializerStrategy_t229_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149_ParameterInfos/* parameters */
	, 409/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1063/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* PocoJsonSerializerStrategy_t229_MethodInfos[] =
{
	&PocoJsonSerializerStrategy__ctor_m1140_MethodInfo,
	&PocoJsonSerializerStrategy__cctor_m1141_MethodInfo,
	&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142_MethodInfo,
	&PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143_MethodInfo,
	&PocoJsonSerializerStrategy_GetterValueFactory_m1144_MethodInfo,
	&PocoJsonSerializerStrategy_SetterValueFactory_m1145_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_MethodInfo,
	&PocoJsonSerializerStrategy_SerializeEnum_m1147_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149_MethodInfo,
	NULL
};
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_GetterValueFactory_m1144_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_SetterValueFactory_m1145_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_SerializeEnum_m1147_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148_MethodInfo;
extern const MethodInfo PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149_MethodInfo;
static const Il2CppMethodReference PocoJsonSerializerStrategy_t229_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_MethodInfo,
	&PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m1142_MethodInfo,
	&PocoJsonSerializerStrategy_ContructorDelegateFactory_m1143_MethodInfo,
	&PocoJsonSerializerStrategy_GetterValueFactory_m1144_MethodInfo,
	&PocoJsonSerializerStrategy_SetterValueFactory_m1145_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m1146_MethodInfo,
	&PocoJsonSerializerStrategy_SerializeEnum_m1147_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeKnownTypes_m1148_MethodInfo,
	&PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m1149_MethodInfo,
};
static bool PocoJsonSerializerStrategy_t229_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PocoJsonSerializerStrategy_t229_InterfacesTypeInfos[] = 
{
	&IJsonSerializerStrategy_t228_0_0_0,
};
static Il2CppInterfaceOffsetPair PocoJsonSerializerStrategy_t229_InterfacesOffsets[] = 
{
	{ &IJsonSerializerStrategy_t228_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType PocoJsonSerializerStrategy_t229_1_0_0;
struct PocoJsonSerializerStrategy_t229;
const Il2CppTypeDefinitionMetadata PocoJsonSerializerStrategy_t229_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, PocoJsonSerializerStrategy_t229_InterfacesTypeInfos/* implementedInterfaces */
	, PocoJsonSerializerStrategy_t229_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PocoJsonSerializerStrategy_t229_VTable/* vtableMethods */
	, PocoJsonSerializerStrategy_t229_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 881/* fieldStart */

};
TypeInfo PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "PocoJsonSerializerStrategy"/* name */
	, "SimpleJson"/* namespaze */
	, PocoJsonSerializerStrategy_t229_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &PocoJsonSerializerStrategy_t229_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 407/* custom_attributes_cache */
	, &PocoJsonSerializerStrategy_t229_0_0_0/* byval_arg */
	, &PocoJsonSerializerStrategy_t229_1_0_0/* this_arg */
	, &PocoJsonSerializerStrategy_t229_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PocoJsonSerializerStrategy_t229)/* instance_size */
	, sizeof (PocoJsonSerializerStrategy_t229)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(PocoJsonSerializerStrategy_t229_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2
extern TypeInfo ThreadSafeDictionary_2_t427_il2cpp_TypeInfo;
extern const Il2CppGenericContainer ThreadSafeDictionary_2_t427_Il2CppGenericContainer;
extern TypeInfo ThreadSafeDictionary_2_t427_gp_TKey_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionary_2_t427_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionary_2_t427_Il2CppGenericContainer, NULL, "TKey", 0, 0 };
extern TypeInfo ThreadSafeDictionary_2_t427_gp_TValue_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionary_2_t427_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionary_2_t427_Il2CppGenericContainer, NULL, "TValue", 1, 0 };
static const Il2CppGenericParameter* ThreadSafeDictionary_2_t427_Il2CppGenericParametersArray[2] = 
{
	&ThreadSafeDictionary_2_t427_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull,
	&ThreadSafeDictionary_2_t427_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer ThreadSafeDictionary_2_t427_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&ThreadSafeDictionary_2_t427_il2cpp_TypeInfo, 2, 0, ThreadSafeDictionary_2_t427_Il2CppGenericParametersArray };
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t475_0_0_0;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t475_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2__ctor_m1562_ParameterInfos[] = 
{
	{"valueFactory", 0, 134218842, 0, &ThreadSafeDictionaryValueFactory_2_t475_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2__ctor_m1562_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2__ctor_m1562_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1082/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::System.Collections.IEnumerable.GetEnumerator()
extern const MethodInfo ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1563_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t317_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1083/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Get_m1564_ParameterInfos[] = 
{
	{"key", 0, 134218843, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_1_0_0_0;
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Get(TKey)
extern const MethodInfo ThreadSafeDictionary_2_Get_m1564_MethodInfo = 
{
	"Get"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionary_2_t427_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Get_m1564_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1084/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_AddValue_m1565_ParameterInfos[] = 
{
	{"key", 0, 134218844, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
};
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::AddValue(TKey)
extern const MethodInfo ThreadSafeDictionary_2_AddValue_m1565_MethodInfo = 
{
	"AddValue"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionary_2_t427_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_AddValue_m1565_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1085/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_1_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Add_m1566_ParameterInfos[] = 
{
	{"key", 0, 134218845, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
	{"value", 1, 134218846, 0, &ThreadSafeDictionary_2_t427_gp_1_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Add(TKey,TValue)
extern const MethodInfo ThreadSafeDictionary_2_Add_m1566_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Add_m1566_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1086/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICollection_1_t476_0_0_0;
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Keys()
extern const MethodInfo ThreadSafeDictionary_2_get_Keys_m1567_MethodInfo = 
{
	"get_Keys"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_1_t476_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1087/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Remove_m1568_ParameterInfos[] = 
{
	{"key", 0, 134218847, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Remove(TKey)
extern const MethodInfo ThreadSafeDictionary_2_Remove_m1568_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Remove_m1568_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1088/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_1_1_0_2;
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_1_1_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_TryGetValue_m1569_ParameterInfos[] = 
{
	{"key", 0, 134218848, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
	{"value", 1, 134218849, 0, &ThreadSafeDictionary_2_t427_gp_1_1_0_2},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::TryGetValue(TKey,TValue&)
extern const MethodInfo ThreadSafeDictionary_2_TryGetValue_m1569_MethodInfo = 
{
	"TryGetValue"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_TryGetValue_m1569_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1089/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ICollection_1_t477_0_0_0;
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Values()
extern const MethodInfo ThreadSafeDictionary_2_get_Values_m1570_MethodInfo = 
{
	"get_Values"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &ICollection_1_t477_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1090/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_get_Item_m1571_ParameterInfos[] = 
{
	{"key", 0, 134218850, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
};
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Item(TKey)
extern const MethodInfo ThreadSafeDictionary_2_get_Item_m1571_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionary_2_t427_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_get_Item_m1571_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1091/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t427_gp_1_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_set_Item_m1572_ParameterInfos[] = 
{
	{"key", 0, 134218851, 0, &ThreadSafeDictionary_2_t427_gp_0_0_0_0},
	{"value", 1, 134218852, 0, &ThreadSafeDictionary_2_t427_gp_1_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::set_Item(TKey,TValue)
extern const MethodInfo ThreadSafeDictionary_2_set_Item_m1572_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_set_Item_m1572_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1092/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t478_0_0_0;
extern const Il2CppType KeyValuePair_2_t478_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Add_m1573_ParameterInfos[] = 
{
	{"item", 0, 134218853, 0, &KeyValuePair_2_t478_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2_Add_m1573_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Add_m1573_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1093/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Clear()
extern const MethodInfo ThreadSafeDictionary_2_Clear_m1574_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1094/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t478_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Contains_m1575_ParameterInfos[] = 
{
	{"item", 0, 134218854, 0, &KeyValuePair_2_t478_0_0_0},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2_Contains_m1575_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Contains_m1575_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1095/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2U5BU5D_t479_0_0_0;
extern const Il2CppType KeyValuePair_2U5BU5D_t479_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_CopyTo_m1576_ParameterInfos[] = 
{
	{"array", 0, 134218855, 0, &KeyValuePair_2U5BU5D_t479_0_0_0},
	{"arrayIndex", 1, 134218856, 0, &Int32_t18_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern const MethodInfo ThreadSafeDictionary_2_CopyTo_m1576_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_CopyTo_m1576_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1096/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_Count()
extern const MethodInfo ThreadSafeDictionary_2_get_Count_m1577_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1097/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::get_IsReadOnly()
extern const MethodInfo ThreadSafeDictionary_2_get_IsReadOnly_m1578_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1098/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType KeyValuePair_2_t478_0_0_0;
static const ParameterInfo ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Remove_m1579_ParameterInfos[] = 
{
	{"item", 0, 134218857, 0, &KeyValuePair_2_t478_0_0_0},
};
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern const MethodInfo ThreadSafeDictionary_2_Remove_m1579_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionary_2_t427_ThreadSafeDictionary_2_Remove_m1579_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1099/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IEnumerator_1_t480_0_0_0;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2::GetEnumerator()
extern const MethodInfo ThreadSafeDictionary_2_GetEnumerator_m1580_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t480_0_0_0/* return_type */
	, NULL/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1100/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadSafeDictionary_2_t427_MethodInfos[] =
{
	&ThreadSafeDictionary_2__ctor_m1562_MethodInfo,
	&ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1563_MethodInfo,
	&ThreadSafeDictionary_2_Get_m1564_MethodInfo,
	&ThreadSafeDictionary_2_AddValue_m1565_MethodInfo,
	&ThreadSafeDictionary_2_Add_m1566_MethodInfo,
	&ThreadSafeDictionary_2_get_Keys_m1567_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m1568_MethodInfo,
	&ThreadSafeDictionary_2_TryGetValue_m1569_MethodInfo,
	&ThreadSafeDictionary_2_get_Values_m1570_MethodInfo,
	&ThreadSafeDictionary_2_get_Item_m1571_MethodInfo,
	&ThreadSafeDictionary_2_set_Item_m1572_MethodInfo,
	&ThreadSafeDictionary_2_Add_m1573_MethodInfo,
	&ThreadSafeDictionary_2_Clear_m1574_MethodInfo,
	&ThreadSafeDictionary_2_Contains_m1575_MethodInfo,
	&ThreadSafeDictionary_2_CopyTo_m1576_MethodInfo,
	&ThreadSafeDictionary_2_get_Count_m1577_MethodInfo,
	&ThreadSafeDictionary_2_get_IsReadOnly_m1578_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m1579_MethodInfo,
	&ThreadSafeDictionary_2_GetEnumerator_m1580_MethodInfo,
	NULL
};
extern const MethodInfo ThreadSafeDictionary_2_get_Keys_m1567_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t427____Keys_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* parent */
	, "Keys"/* name */
	, &ThreadSafeDictionary_2_get_Keys_m1567_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_Values_m1570_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t427____Values_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* parent */
	, "Values"/* name */
	, &ThreadSafeDictionary_2_get_Values_m1570_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_Item_m1571_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_set_Item_m1572_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t427____Item_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ThreadSafeDictionary_2_get_Item_m1571_MethodInfo/* get */
	, &ThreadSafeDictionary_2_set_Item_m1572_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_Count_m1577_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t427____Count_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ThreadSafeDictionary_2_get_Count_m1577_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo ThreadSafeDictionary_2_get_IsReadOnly_m1578_MethodInfo;
static const PropertyInfo ThreadSafeDictionary_2_t427____IsReadOnly_PropertyInfo = 
{
	&ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ThreadSafeDictionary_2_get_IsReadOnly_m1578_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* ThreadSafeDictionary_2_t427_PropertyInfos[] =
{
	&ThreadSafeDictionary_2_t427____Keys_PropertyInfo,
	&ThreadSafeDictionary_2_t427____Values_PropertyInfo,
	&ThreadSafeDictionary_2_t427____Item_PropertyInfo,
	&ThreadSafeDictionary_2_t427____Count_PropertyInfo,
	&ThreadSafeDictionary_2_t427____IsReadOnly_PropertyInfo,
	NULL
};
extern const MethodInfo ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1563_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Add_m1566_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Remove_m1568_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_TryGetValue_m1569_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Add_m1573_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Clear_m1574_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Contains_m1575_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_CopyTo_m1576_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_Remove_m1579_MethodInfo;
extern const MethodInfo ThreadSafeDictionary_2_GetEnumerator_m1580_MethodInfo;
static const Il2CppMethodReference ThreadSafeDictionary_2_t427_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m1563_MethodInfo,
	&ThreadSafeDictionary_2_Add_m1566_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m1568_MethodInfo,
	&ThreadSafeDictionary_2_TryGetValue_m1569_MethodInfo,
	&ThreadSafeDictionary_2_get_Item_m1571_MethodInfo,
	&ThreadSafeDictionary_2_set_Item_m1572_MethodInfo,
	&ThreadSafeDictionary_2_get_Keys_m1567_MethodInfo,
	&ThreadSafeDictionary_2_get_Values_m1570_MethodInfo,
	&ThreadSafeDictionary_2_get_Count_m1577_MethodInfo,
	&ThreadSafeDictionary_2_get_IsReadOnly_m1578_MethodInfo,
	&ThreadSafeDictionary_2_Add_m1573_MethodInfo,
	&ThreadSafeDictionary_2_Clear_m1574_MethodInfo,
	&ThreadSafeDictionary_2_Contains_m1575_MethodInfo,
	&ThreadSafeDictionary_2_CopyTo_m1576_MethodInfo,
	&ThreadSafeDictionary_2_Remove_m1579_MethodInfo,
	&ThreadSafeDictionary_2_GetEnumerator_m1580_MethodInfo,
};
static bool ThreadSafeDictionary_2_t427_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IDictionary_2_t481_0_0_0;
extern const Il2CppType ICollection_1_t482_0_0_0;
extern const Il2CppType IEnumerable_1_t483_0_0_0;
static const Il2CppType* ThreadSafeDictionary_2_t427_InterfacesTypeInfos[] = 
{
	&IEnumerable_t339_0_0_0,
	&IDictionary_2_t481_0_0_0,
	&ICollection_1_t482_0_0_0,
	&IEnumerable_1_t483_0_0_0,
};
static Il2CppInterfaceOffsetPair ThreadSafeDictionary_2_t427_InterfacesOffsets[] = 
{
	{ &IEnumerable_t339_0_0_0, 4},
	{ &IDictionary_2_t481_0_0_0, 5},
	{ &ICollection_1_t482_0_0_0, 12},
	{ &IEnumerable_1_t483_0_0_0, 19},
};
extern const Il2CppGenericMethod Dictionary_2_GetEnumerator_m1638_GenericMethod;
extern const Il2CppType Enumerator_t484_0_0_0;
extern const Il2CppGenericMethod ThreadSafeDictionary_2_AddValue_m1639_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_TryGetValue_m1640_GenericMethod;
extern const Il2CppGenericMethod ThreadSafeDictionaryValueFactory_2_Invoke_m1641_GenericMethod;
extern const Il2CppType Dictionary_2_t485_0_0_0;
extern const Il2CppGenericMethod Dictionary_2__ctor_m1642_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_set_Item_m1643_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2__ctor_m1644_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_get_Keys_m1645_GenericMethod;
extern const Il2CppGenericMethod ThreadSafeDictionary_2_get_Item_m1646_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_get_Values_m1647_GenericMethod;
extern const Il2CppGenericMethod ThreadSafeDictionary_2_Get_m1648_GenericMethod;
extern const Il2CppGenericMethod Dictionary_2_get_Count_m1649_GenericMethod;
static Il2CppRGCTXDefinition ThreadSafeDictionary_2_t427_RGCTXData[15] = 
{
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_GetEnumerator_m1638_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&Enumerator_t484_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionary_2_AddValue_m1639_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_TryGetValue_m1640_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionaryValueFactory_2_Invoke_m1641_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_CLASS, (void*)&Dictionary_2_t485_0_0_0 }/* Class */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2__ctor_m1642_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_set_Item_m1643_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2__ctor_m1644_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_get_Keys_m1645_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionary_2_get_Item_m1646_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_get_Values_m1647_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &ThreadSafeDictionary_2_Get_m1648_GenericMethod }/* Method */,
	{ IL2CPP_RGCTX_DATA_METHOD, &Dictionary_2_get_Count_m1649_GenericMethod }/* Method */,
	{IL2CPP_RGCTX_DATA_INVALID, NULL},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ThreadSafeDictionary_2_t427_0_0_0;
extern const Il2CppType ThreadSafeDictionary_2_t427_1_0_0;
extern TypeInfo ReflectionUtils_t244_il2cpp_TypeInfo;
extern const Il2CppType ReflectionUtils_t244_0_0_0;
struct ThreadSafeDictionary_2_t427;
const Il2CppTypeDefinitionMetadata ThreadSafeDictionary_2_t427_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, ThreadSafeDictionary_2_t427_InterfacesTypeInfos/* implementedInterfaces */
	, ThreadSafeDictionary_2_t427_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ThreadSafeDictionary_2_t427_VTable/* vtableMethods */
	, ThreadSafeDictionary_2_t427_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, ThreadSafeDictionary_2_t427_RGCTXData/* rgctxDefinition */
	, 887/* fieldStart */

};
TypeInfo ThreadSafeDictionary_2_t427_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadSafeDictionary`2"/* name */
	, ""/* namespaze */
	, ThreadSafeDictionary_2_t427_MethodInfos/* methods */
	, ThreadSafeDictionary_2_t427_PropertyInfos/* properties */
	, NULL/* events */
	, &ThreadSafeDictionary_2_t427_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 414/* custom_attributes_cache */
	, &ThreadSafeDictionary_2_t427_0_0_0/* byval_arg */
	, &ThreadSafeDictionary_2_t427_1_0_0/* this_arg */
	, &ThreadSafeDictionary_2_t427_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &ThreadSafeDictionary_2_t427_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048834/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 19/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 20/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/GetDelegate
extern TypeInfo GetDelegate_t235_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo GetDelegate_t235_GetDelegate__ctor_m1150_ParameterInfos[] = 
{
	{"object", 0, 134218858, 0, &Object_t_0_0_0},
	{"method", 1, 134218859, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo GetDelegate__ctor_m1150_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GetDelegate__ctor_m1150/* method */
	, &GetDelegate_t235_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, GetDelegate_t235_GetDelegate__ctor_m1150_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1101/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo GetDelegate_t235_GetDelegate_Invoke_m1151_ParameterInfos[] = 
{
	{"source", 0, 134218860, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern const MethodInfo GetDelegate_Invoke_m1151_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&GetDelegate_Invoke_m1151/* method */
	, &GetDelegate_t235_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, GetDelegate_t235_GetDelegate_Invoke_m1151_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1102/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo GetDelegate_t235_GetDelegate_BeginInvoke_m1152_ParameterInfos[] = 
{
	{"source", 0, 134218861, 0, &Object_t_0_0_0},
	{"callback", 1, 134218862, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218863, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo GetDelegate_BeginInvoke_m1152_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&GetDelegate_BeginInvoke_m1152/* method */
	, &GetDelegate_t235_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, GetDelegate_t235_GetDelegate_BeginInvoke_m1152_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1103/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo GetDelegate_t235_GetDelegate_EndInvoke_m1153_ParameterInfos[] = 
{
	{"result", 0, 134218864, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo GetDelegate_EndInvoke_m1153_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&GetDelegate_EndInvoke_m1153/* method */
	, &GetDelegate_t235_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, GetDelegate_t235_GetDelegate_EndInvoke_m1153_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1104/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GetDelegate_t235_MethodInfos[] =
{
	&GetDelegate__ctor_m1150_MethodInfo,
	&GetDelegate_Invoke_m1151_MethodInfo,
	&GetDelegate_BeginInvoke_m1152_MethodInfo,
	&GetDelegate_EndInvoke_m1153_MethodInfo,
	NULL
};
extern const MethodInfo GetDelegate_Invoke_m1151_MethodInfo;
extern const MethodInfo GetDelegate_BeginInvoke_m1152_MethodInfo;
extern const MethodInfo GetDelegate_EndInvoke_m1153_MethodInfo;
static const Il2CppMethodReference GetDelegate_t235_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&GetDelegate_Invoke_m1151_MethodInfo,
	&GetDelegate_BeginInvoke_m1152_MethodInfo,
	&GetDelegate_EndInvoke_m1153_MethodInfo,
};
static bool GetDelegate_t235_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair GetDelegate_t235_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GetDelegate_t235_0_0_0;
extern const Il2CppType GetDelegate_t235_1_0_0;
struct GetDelegate_t235;
const Il2CppTypeDefinitionMetadata GetDelegate_t235_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, GetDelegate_t235_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, GetDelegate_t235_VTable/* vtableMethods */
	, GetDelegate_t235_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo GetDelegate_t235_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GetDelegate"/* name */
	, ""/* namespaze */
	, GetDelegate_t235_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GetDelegate_t235_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GetDelegate_t235_0_0_0/* byval_arg */
	, &GetDelegate_t235_1_0_0/* this_arg */
	, &GetDelegate_t235_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_GetDelegate_t235/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GetDelegate_t235)/* instance_size */
	, sizeof (GetDelegate_t235)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/SetDelegate
extern TypeInfo SetDelegate_t236_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo SetDelegate_t236_SetDelegate__ctor_m1154_ParameterInfos[] = 
{
	{"object", 0, 134218865, 0, &Object_t_0_0_0},
	{"method", 1, 134218866, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo SetDelegate__ctor_m1154_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SetDelegate__ctor_m1154/* method */
	, &SetDelegate_t236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, SetDelegate_t236_SetDelegate__ctor_m1154_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1105/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetDelegate_t236_SetDelegate_Invoke_m1155_ParameterInfos[] = 
{
	{"source", 0, 134218867, 0, &Object_t_0_0_0},
	{"value", 1, 134218868, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern const MethodInfo SetDelegate_Invoke_m1155_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&SetDelegate_Invoke_m1155/* method */
	, &SetDelegate_t236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, SetDelegate_t236_SetDelegate_Invoke_m1155_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1106/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetDelegate_t236_SetDelegate_BeginInvoke_m1156_ParameterInfos[] = 
{
	{"source", 0, 134218869, 0, &Object_t_0_0_0},
	{"value", 1, 134218870, 0, &Object_t_0_0_0},
	{"callback", 2, 134218871, 0, &AsyncCallback_t8_0_0_0},
	{"object", 3, 134218872, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern const MethodInfo SetDelegate_BeginInvoke_m1156_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&SetDelegate_BeginInvoke_m1156/* method */
	, &SetDelegate_t236_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SetDelegate_t236_SetDelegate_BeginInvoke_m1156_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1107/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo SetDelegate_t236_SetDelegate_EndInvoke_m1157_ParameterInfos[] = 
{
	{"result", 0, 134218873, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo SetDelegate_EndInvoke_m1157_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&SetDelegate_EndInvoke_m1157/* method */
	, &SetDelegate_t236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, SetDelegate_t236_SetDelegate_EndInvoke_m1157_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1108/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SetDelegate_t236_MethodInfos[] =
{
	&SetDelegate__ctor_m1154_MethodInfo,
	&SetDelegate_Invoke_m1155_MethodInfo,
	&SetDelegate_BeginInvoke_m1156_MethodInfo,
	&SetDelegate_EndInvoke_m1157_MethodInfo,
	NULL
};
extern const MethodInfo SetDelegate_Invoke_m1155_MethodInfo;
extern const MethodInfo SetDelegate_BeginInvoke_m1156_MethodInfo;
extern const MethodInfo SetDelegate_EndInvoke_m1157_MethodInfo;
static const Il2CppMethodReference SetDelegate_t236_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&SetDelegate_Invoke_m1155_MethodInfo,
	&SetDelegate_BeginInvoke_m1156_MethodInfo,
	&SetDelegate_EndInvoke_m1157_MethodInfo,
};
static bool SetDelegate_t236_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair SetDelegate_t236_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SetDelegate_t236_0_0_0;
extern const Il2CppType SetDelegate_t236_1_0_0;
struct SetDelegate_t236;
const Il2CppTypeDefinitionMetadata SetDelegate_t236_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, SetDelegate_t236_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, SetDelegate_t236_VTable/* vtableMethods */
	, SetDelegate_t236_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SetDelegate_t236_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SetDelegate"/* name */
	, ""/* namespaze */
	, SetDelegate_t236_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SetDelegate_t236_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SetDelegate_t236_0_0_0/* byval_arg */
	, &SetDelegate_t236_1_0_0/* this_arg */
	, &SetDelegate_t236_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_SetDelegate_t236/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SetDelegate_t236)/* instance_size */
	, sizeof (SetDelegate_t236)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
extern TypeInfo ConstructorDelegate_t237_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ConstructorDelegate_t237_ConstructorDelegate__ctor_m1158_ParameterInfos[] = 
{
	{"object", 0, 134218874, 0, &Object_t_0_0_0},
	{"method", 1, 134218875, 0, &IntPtr_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_IntPtr_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ConstructorDelegate__ctor_m1158_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ConstructorDelegate__ctor_m1158/* method */
	, &ConstructorDelegate_t237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_IntPtr_t/* invoker_method */
	, ConstructorDelegate_t237_ConstructorDelegate__ctor_m1158_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1109/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t17_0_0_0;
extern const Il2CppType ObjectU5BU5D_t17_0_0_0;
static const ParameterInfo ConstructorDelegate_t237_ConstructorDelegate_Invoke_m1159_ParameterInfos[] = 
{
	{"args", 0, 134218876, 415, &ObjectU5BU5D_t17_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern const MethodInfo ConstructorDelegate_Invoke_m1159_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&ConstructorDelegate_Invoke_m1159/* method */
	, &ConstructorDelegate_t237_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ConstructorDelegate_t237_ConstructorDelegate_Invoke_m1159_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1110/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t17_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ConstructorDelegate_t237_ConstructorDelegate_BeginInvoke_m1160_ParameterInfos[] = 
{
	{"args", 0, 134218877, 416, &ObjectU5BU5D_t17_0_0_0},
	{"callback", 1, 134218878, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218879, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern const MethodInfo ConstructorDelegate_BeginInvoke_m1160_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&ConstructorDelegate_BeginInvoke_m1160/* method */
	, &ConstructorDelegate_t237_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, ConstructorDelegate_t237_ConstructorDelegate_BeginInvoke_m1160_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1111/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo ConstructorDelegate_t237_ConstructorDelegate_EndInvoke_m1161_ParameterInfos[] = 
{
	{"result", 0, 134218880, 0, &IAsyncResult_t7_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern const MethodInfo ConstructorDelegate_EndInvoke_m1161_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&ConstructorDelegate_EndInvoke_m1161/* method */
	, &ConstructorDelegate_t237_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ConstructorDelegate_t237_ConstructorDelegate_EndInvoke_m1161_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1112/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ConstructorDelegate_t237_MethodInfos[] =
{
	&ConstructorDelegate__ctor_m1158_MethodInfo,
	&ConstructorDelegate_Invoke_m1159_MethodInfo,
	&ConstructorDelegate_BeginInvoke_m1160_MethodInfo,
	&ConstructorDelegate_EndInvoke_m1161_MethodInfo,
	NULL
};
extern const MethodInfo ConstructorDelegate_Invoke_m1159_MethodInfo;
extern const MethodInfo ConstructorDelegate_BeginInvoke_m1160_MethodInfo;
extern const MethodInfo ConstructorDelegate_EndInvoke_m1161_MethodInfo;
static const Il2CppMethodReference ConstructorDelegate_t237_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&ConstructorDelegate_Invoke_m1159_MethodInfo,
	&ConstructorDelegate_BeginInvoke_m1160_MethodInfo,
	&ConstructorDelegate_EndInvoke_m1161_MethodInfo,
};
static bool ConstructorDelegate_t237_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ConstructorDelegate_t237_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ConstructorDelegate_t237_1_0_0;
struct ConstructorDelegate_t237;
const Il2CppTypeDefinitionMetadata ConstructorDelegate_t237_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ConstructorDelegate_t237_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, ConstructorDelegate_t237_VTable/* vtableMethods */
	, ConstructorDelegate_t237_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ConstructorDelegate_t237_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ConstructorDelegate"/* name */
	, ""/* namespaze */
	, ConstructorDelegate_t237_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ConstructorDelegate_t237_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ConstructorDelegate_t237_0_0_0/* byval_arg */
	, &ConstructorDelegate_t237_1_0_0/* this_arg */
	, &ConstructorDelegate_t237_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_ConstructorDelegate_t237/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ConstructorDelegate_t237)/* instance_size */
	, sizeof (ConstructorDelegate_t237)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo;
extern const Il2CppGenericContainer ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericContainer;
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t428_gp_TKey_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionaryValueFactory_2_t428_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericContainer, NULL, "TKey", 0, 0 };
extern TypeInfo ThreadSafeDictionaryValueFactory_2_t428_gp_TValue_1_il2cpp_TypeInfo;
extern const Il2CppGenericParameter ThreadSafeDictionaryValueFactory_2_t428_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull = { &ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericContainer, NULL, "TValue", 1, 0 };
static const Il2CppGenericParameter* ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericParametersArray[2] = 
{
	&ThreadSafeDictionaryValueFactory_2_t428_gp_TKey_0_il2cpp_TypeInfo_GenericParamFull,
	&ThreadSafeDictionaryValueFactory_2_t428_gp_TValue_1_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo, 2, 0, ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericParametersArray };
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType IntPtr_t_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2__ctor_m1581_ParameterInfos[] = 
{
	{"object", 0, 134218881, 0, &Object_t_0_0_0},
	{"method", 1, 134218882, 0, &IntPtr_t_0_0_0},
};
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::.ctor(System.Object,System.IntPtr)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2__ctor_m1581_MethodInfo = 
{
	".ctor"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2__ctor_m1581_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1113/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t428_gp_0_0_0_0;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t428_gp_0_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2_Invoke_m1582_ParameterInfos[] = 
{
	{"key", 0, 134218883, 0, &ThreadSafeDictionaryValueFactory_2_t428_gp_0_0_0_0},
};
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t428_gp_1_0_0_0;
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::Invoke(TKey)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_Invoke_m1582_MethodInfo = 
{
	"Invoke"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionaryValueFactory_2_t428_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2_Invoke_m1582_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1114/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t428_gp_0_0_0_0;
extern const Il2CppType AsyncCallback_t8_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2_BeginInvoke_m1583_ParameterInfos[] = 
{
	{"key", 0, 134218884, 0, &ThreadSafeDictionaryValueFactory_2_t428_gp_0_0_0_0},
	{"callback", 1, 134218885, 0, &AsyncCallback_t8_0_0_0},
	{"object", 2, 134218886, 0, &Object_t_0_0_0},
};
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_BeginInvoke_m1583_MethodInfo = 
{
	"BeginInvoke"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t7_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2_BeginInvoke_m1583_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1115/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IAsyncResult_t7_0_0_0;
static const ParameterInfo ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2_EndInvoke_m1584_ParameterInfos[] = 
{
	{"result", 0, 134218887, 0, &IAsyncResult_t7_0_0_0},
};
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2::EndInvoke(System.IAsyncResult)
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_EndInvoke_m1584_MethodInfo = 
{
	"EndInvoke"/* name */
	, NULL/* method */
	, &ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo/* declaring_type */
	, &ThreadSafeDictionaryValueFactory_2_t428_gp_1_0_0_0/* return_type */
	, NULL/* invoker_method */
	, ThreadSafeDictionaryValueFactory_2_t428_ThreadSafeDictionaryValueFactory_2_EndInvoke_m1584_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1116/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ThreadSafeDictionaryValueFactory_2_t428_MethodInfos[] =
{
	&ThreadSafeDictionaryValueFactory_2__ctor_m1581_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_Invoke_m1582_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_BeginInvoke_m1583_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_EndInvoke_m1584_MethodInfo,
	NULL
};
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_Invoke_m1582_MethodInfo;
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_BeginInvoke_m1583_MethodInfo;
extern const MethodInfo ThreadSafeDictionaryValueFactory_2_EndInvoke_m1584_MethodInfo;
static const Il2CppMethodReference ThreadSafeDictionaryValueFactory_2_t428_VTable[] =
{
	&MulticastDelegate_Equals_m119_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&MulticastDelegate_GetHashCode_m120_MethodInfo,
	&Object_ToString_m121_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&Delegate_Clone_m123_MethodInfo,
	&MulticastDelegate_GetObjectData_m122_MethodInfo,
	&MulticastDelegate_GetInvocationList_m124_MethodInfo,
	&MulticastDelegate_CombineImpl_m125_MethodInfo,
	&MulticastDelegate_RemoveImpl_m126_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_Invoke_m1582_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_BeginInvoke_m1583_MethodInfo,
	&ThreadSafeDictionaryValueFactory_2_EndInvoke_m1584_MethodInfo,
};
static bool ThreadSafeDictionaryValueFactory_2_t428_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ThreadSafeDictionaryValueFactory_2_t428_InterfacesOffsets[] = 
{
	{ &ICloneable_t44_0_0_0, 4},
	{ &ISerializable_t45_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t428_0_0_0;
extern const Il2CppType ThreadSafeDictionaryValueFactory_2_t428_1_0_0;
struct ThreadSafeDictionaryValueFactory_2_t428;
const Il2CppTypeDefinitionMetadata ThreadSafeDictionaryValueFactory_2_t428_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ThreadSafeDictionaryValueFactory_2_t428_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t10_0_0_0/* parent */
	, ThreadSafeDictionaryValueFactory_2_t428_VTable/* vtableMethods */
	, ThreadSafeDictionaryValueFactory_2_t428_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ThreadSafeDictionaryValueFactory`2"/* name */
	, ""/* namespaze */
	, ThreadSafeDictionaryValueFactory_2_t428_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ThreadSafeDictionaryValueFactory_2_t428_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ThreadSafeDictionaryValueFactory_2_t428_0_0_0/* byval_arg */
	, &ThreadSafeDictionaryValueFactory_2_t428_1_0_0/* this_arg */
	, &ThreadSafeDictionaryValueFactory_2_t428_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &ThreadSafeDictionaryValueFactory_2_t428_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
extern TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern const MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1162_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1162/* method */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1117/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ObjectU5BU5D_t17_0_0_0;
static const ParameterInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1163_ParameterInfos[] = 
{
	{"args", 0, 134218888, 0, &ObjectU5BU5D_t17_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern const MethodInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1163_MethodInfo = 
{
	"<>m__0"/* name */
	, (methodPointerType)&U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1163/* method */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1163_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1118/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_MethodInfos[] =
{
	&U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m1162_MethodInfo,
	&U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m1163_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_0_0_0;
extern const Il2CppType U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_1_0_0;
struct U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239;
const Il2CppTypeDefinitionMetadata U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_VTable/* vtableMethods */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 890/* fieldStart */

};
TypeInfo U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetConstructorByReflection>c__AnonStorey1"/* name */
	, ""/* namespaze */
	, U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 417/* custom_attributes_cache */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_0_0_0/* byval_arg */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_1_0_0/* this_arg */
	, &U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239)/* instance_size */
	, sizeof (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1164_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1164/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1119/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1165_ParameterInfos[] = 
{
	{"source", 0, 134218889, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1165_MethodInfo = 
{
	"<>m__1"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1165/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1165_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1120/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_MethodInfos[] =
{
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m1164_MethodInfo,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m1165_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_0_0_0;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_1_0_0;
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240;
const Il2CppTypeDefinitionMetadata U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_VTable/* vtableMethods */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 891/* fieldStart */

};
TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetGetMethodByReflection>c__AnonStorey2"/* name */
	, ""/* namespaze */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 418/* custom_attributes_cache */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_0_0_0/* byval_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_1_0_0/* this_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240)/* instance_size */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
extern TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1166_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1166/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1121/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1167_ParameterInfos[] = 
{
	{"source", 0, 134218890, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern const MethodInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1167_MethodInfo = 
{
	"<>m__2"/* name */
	, (methodPointerType)&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1167/* method */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1167_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1122/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_MethodInfos[] =
{
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m1166_MethodInfo,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m1167_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_0_0_0;
extern const Il2CppType U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_1_0_0;
struct U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241;
const Il2CppTypeDefinitionMetadata U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_VTable/* vtableMethods */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 892/* fieldStart */

};
TypeInfo U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetGetMethodByReflection>c__AnonStorey3"/* name */
	, ""/* namespaze */
	, U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 419/* custom_attributes_cache */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_0_0_0/* byval_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_1_0_0/* this_arg */
	, &U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241)/* instance_size */
	, sizeof (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1168_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1168/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1123/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1169_ParameterInfos[] = 
{
	{"source", 0, 134218891, 0, &Object_t_0_0_0},
	{"value", 1, 134218892, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1169_MethodInfo = 
{
	"<>m__3"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1169/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1169_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1124/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_MethodInfos[] =
{
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m1168_MethodInfo,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m1169_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_0_0_0;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_1_0_0;
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242;
const Il2CppTypeDefinitionMetadata U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_VTable/* vtableMethods */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 893/* fieldStart */

};
TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetSetMethodByReflection>c__AnonStorey4"/* name */
	, ""/* namespaze */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 420/* custom_attributes_cache */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_0_0_0/* byval_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_1_0_0/* this_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242)/* instance_size */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
extern TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_il2cpp_TypeInfo;
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1170_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1170/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1125/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1171_ParameterInfos[] = 
{
	{"source", 0, 134218893, 0, &Object_t_0_0_0},
	{"value", 1, 134218894, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern const MethodInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1171_MethodInfo = 
{
	"<>m__4"/* name */
	, (methodPointerType)&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1171/* method */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t/* invoker_method */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1171_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 131/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1126/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_MethodInfos[] =
{
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m1170_MethodInfo,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m1171_MethodInfo,
	NULL
};
static const Il2CppMethodReference U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_0_0_0;
extern const Il2CppType U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_1_0_0;
struct U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243;
const Il2CppTypeDefinitionMetadata U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_DefinitionMetadata = 
{
	&ReflectionUtils_t244_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_VTable/* vtableMethods */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 894/* fieldStart */

};
TypeInfo U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetSetMethodByReflection>c__AnonStorey5"/* name */
	, ""/* namespaze */
	, U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 421/* custom_attributes_cache */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_0_0_0/* byval_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_1_0_0/* this_arg */
	, &U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243)/* instance_size */
	, sizeof (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"
// Metadata Definition SimpleJson.Reflection.ReflectionUtils
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern const MethodInfo ReflectionUtils__cctor_m1172_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&ReflectionUtils__cctor_m1172/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1064/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetConstructors_m1173_ParameterInfos[] = 
{
	{"type", 0, 134218822, 0, &Type_t_0_0_0},
};
extern const Il2CppType IEnumerable_1_t342_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern const MethodInfo ReflectionUtils_GetConstructors_m1173_MethodInfo = 
{
	"GetConstructors"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructors_m1173/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t342_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetConstructors_m1173_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1065/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t234_0_0_0;
extern const Il2CppType TypeU5BU5D_t234_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetConstructorInfo_m1174_ParameterInfos[] = 
{
	{"type", 0, 134218823, 0, &Type_t_0_0_0},
	{"argsType", 1, 134218824, 411, &TypeU5BU5D_t234_0_0_0},
};
extern const Il2CppType ConstructorInfo_t238_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern const MethodInfo ReflectionUtils_GetConstructorInfo_m1174_MethodInfo = 
{
	"GetConstructorInfo"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructorInfo_m1174/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t238_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetConstructorInfo_m1174_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1066/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetProperties_m1175_ParameterInfos[] = 
{
	{"type", 0, 134218825, 0, &Type_t_0_0_0},
};
extern const Il2CppType IEnumerable_1_t343_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern const MethodInfo ReflectionUtils_GetProperties_m1175_MethodInfo = 
{
	"GetProperties"/* name */
	, (methodPointerType)&ReflectionUtils_GetProperties_m1175/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t343_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetProperties_m1175_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1067/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetFields_m1176_ParameterInfos[] = 
{
	{"type", 0, 134218826, 0, &Type_t_0_0_0},
};
extern const Il2CppType IEnumerable_1_t344_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern const MethodInfo ReflectionUtils_GetFields_m1176_MethodInfo = 
{
	"GetFields"/* name */
	, (methodPointerType)&ReflectionUtils_GetFields_m1176/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t344_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetFields_m1176_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1068/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetGetterMethodInfo_m1177_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134218827, 0, &PropertyInfo_t_0_0_0},
};
extern const Il2CppType MethodInfo_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetGetterMethodInfo_m1177_MethodInfo = 
{
	"GetGetterMethodInfo"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetterMethodInfo_m1177/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetGetterMethodInfo_m1177_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1069/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetSetterMethodInfo_m1178_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134218828, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetSetterMethodInfo_m1178_MethodInfo = 
{
	"GetSetterMethodInfo"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetterMethodInfo_m1178/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetSetterMethodInfo_m1178_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1070/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t234_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetContructor_m1179_ParameterInfos[] = 
{
	{"type", 0, 134218829, 0, &Type_t_0_0_0},
	{"argsType", 1, 134218830, 412, &TypeU5BU5D_t234_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern const MethodInfo ReflectionUtils_GetContructor_m1179_MethodInfo = 
{
	"GetContructor"/* name */
	, (methodPointerType)&ReflectionUtils_GetContructor_m1179/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t237_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetContructor_m1179_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1071/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType ConstructorInfo_t238_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetConstructorByReflection_m1180_ParameterInfos[] = 
{
	{"constructorInfo", 0, 134218831, 0, &ConstructorInfo_t238_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern const MethodInfo ReflectionUtils_GetConstructorByReflection_m1180_MethodInfo = 
{
	"GetConstructorByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructorByReflection_m1180/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t237_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetConstructorByReflection_m1180_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1072/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType TypeU5BU5D_t234_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetConstructorByReflection_m1181_ParameterInfos[] = 
{
	{"type", 0, 134218832, 0, &Type_t_0_0_0},
	{"argsType", 1, 134218833, 413, &TypeU5BU5D_t234_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern const MethodInfo ReflectionUtils_GetConstructorByReflection_m1181_MethodInfo = 
{
	"GetConstructorByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetConstructorByReflection_m1181/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorDelegate_t237_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetConstructorByReflection_m1181_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1073/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetGetMethod_m1182_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134218834, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetGetMethod_m1182_MethodInfo = 
{
	"GetGetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethod_m1182/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t235_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetGetMethod_m1182_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1074/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetGetMethod_m1183_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134218835, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetGetMethod_m1183_MethodInfo = 
{
	"GetGetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethod_m1183/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t235_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetGetMethod_m1183_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1075/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetGetMethodByReflection_m1184_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134218836, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetGetMethodByReflection_m1184_MethodInfo = 
{
	"GetGetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethodByReflection_m1184/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t235_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetGetMethodByReflection_m1184_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1076/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetGetMethodByReflection_m1185_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134218837, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetGetMethodByReflection_m1185_MethodInfo = 
{
	"GetGetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetGetMethodByReflection_m1185/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &GetDelegate_t235_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetGetMethodByReflection_m1185_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1077/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetSetMethod_m1186_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134218838, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetSetMethod_m1186_MethodInfo = 
{
	"GetSetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethod_m1186/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t236_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetSetMethod_m1186_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1078/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetSetMethod_m1187_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134218839, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetSetMethod_m1187_MethodInfo = 
{
	"GetSetMethod"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethod_m1187/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t236_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetSetMethod_m1187_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1079/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType PropertyInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetSetMethodByReflection_m1188_ParameterInfos[] = 
{
	{"propertyInfo", 0, 134218840, 0, &PropertyInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern const MethodInfo ReflectionUtils_GetSetMethodByReflection_m1188_MethodInfo = 
{
	"GetSetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethodByReflection_m1188/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t236_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetSetMethodByReflection_m1188_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1080/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType FieldInfo_t_0_0_0;
static const ParameterInfo ReflectionUtils_t244_ReflectionUtils_GetSetMethodByReflection_m1189_ParameterInfos[] = 
{
	{"fieldInfo", 0, 134218841, 0, &FieldInfo_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern const MethodInfo ReflectionUtils_GetSetMethodByReflection_m1189_MethodInfo = 
{
	"GetSetMethodByReflection"/* name */
	, (methodPointerType)&ReflectionUtils_GetSetMethodByReflection_m1189/* method */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* declaring_type */
	, &SetDelegate_t236_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, ReflectionUtils_t244_ReflectionUtils_GetSetMethodByReflection_m1189_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1081/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ReflectionUtils_t244_MethodInfos[] =
{
	&ReflectionUtils__cctor_m1172_MethodInfo,
	&ReflectionUtils_GetConstructors_m1173_MethodInfo,
	&ReflectionUtils_GetConstructorInfo_m1174_MethodInfo,
	&ReflectionUtils_GetProperties_m1175_MethodInfo,
	&ReflectionUtils_GetFields_m1176_MethodInfo,
	&ReflectionUtils_GetGetterMethodInfo_m1177_MethodInfo,
	&ReflectionUtils_GetSetterMethodInfo_m1178_MethodInfo,
	&ReflectionUtils_GetContructor_m1179_MethodInfo,
	&ReflectionUtils_GetConstructorByReflection_m1180_MethodInfo,
	&ReflectionUtils_GetConstructorByReflection_m1181_MethodInfo,
	&ReflectionUtils_GetGetMethod_m1182_MethodInfo,
	&ReflectionUtils_GetGetMethod_m1183_MethodInfo,
	&ReflectionUtils_GetGetMethodByReflection_m1184_MethodInfo,
	&ReflectionUtils_GetGetMethodByReflection_m1185_MethodInfo,
	&ReflectionUtils_GetSetMethod_m1186_MethodInfo,
	&ReflectionUtils_GetSetMethod_m1187_MethodInfo,
	&ReflectionUtils_GetSetMethodByReflection_m1188_MethodInfo,
	&ReflectionUtils_GetSetMethodByReflection_m1189_MethodInfo,
	NULL
};
static const Il2CppType* ReflectionUtils_t244_il2cpp_TypeInfo__nestedTypes[10] =
{
	&ThreadSafeDictionary_2_t427_0_0_0,
	&GetDelegate_t235_0_0_0,
	&SetDelegate_t236_0_0_0,
	&ConstructorDelegate_t237_0_0_0,
	&ThreadSafeDictionaryValueFactory_2_t428_0_0_0,
	&U3CGetConstructorByReflectionU3Ec__AnonStorey1_t239_0_0_0,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t240_0_0_0,
	&U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t241_0_0_0,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t242_0_0_0,
	&U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t243_0_0_0,
};
static const Il2CppMethodReference ReflectionUtils_t244_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool ReflectionUtils_t244_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ReflectionUtils_t244_1_0_0;
struct ReflectionUtils_t244;
const Il2CppTypeDefinitionMetadata ReflectionUtils_t244_DefinitionMetadata = 
{
	NULL/* declaringType */
	, ReflectionUtils_t244_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, ReflectionUtils_t244_VTable/* vtableMethods */
	, ReflectionUtils_t244_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 895/* fieldStart */

};
TypeInfo ReflectionUtils_t244_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReflectionUtils"/* name */
	, "SimpleJson.Reflection"/* namespaze */
	, ReflectionUtils_t244_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ReflectionUtils_t244_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 410/* custom_attributes_cache */
	, &ReflectionUtils_t244_0_0_0/* byval_arg */
	, &ReflectionUtils_t244_1_0_0/* this_arg */
	, &ReflectionUtils_t244_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReflectionUtils_t244)/* instance_size */
	, sizeof (ReflectionUtils_t244)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(ReflectionUtils_t244_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 18/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 10/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// Metadata Definition UnityEngine.WrapperlessIcall
extern TypeInfo WrapperlessIcall_t245_il2cpp_TypeInfo;
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern const MethodInfo WrapperlessIcall__ctor_m1190_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WrapperlessIcall__ctor_m1190/* method */
	, &WrapperlessIcall_t245_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1127/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WrapperlessIcall_t245_MethodInfos[] =
{
	&WrapperlessIcall__ctor_m1190_MethodInfo,
	NULL
};
extern const MethodInfo Attribute_Equals_m1608_MethodInfo;
extern const MethodInfo Attribute_GetHashCode_m1529_MethodInfo;
static const Il2CppMethodReference WrapperlessIcall_t245_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool WrapperlessIcall_t245_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern const Il2CppType _Attribute_t452_0_0_0;
static Il2CppInterfaceOffsetPair WrapperlessIcall_t245_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType WrapperlessIcall_t245_0_0_0;
extern const Il2CppType WrapperlessIcall_t245_1_0_0;
extern const Il2CppType Attribute_t136_0_0_0;
struct WrapperlessIcall_t245;
const Il2CppTypeDefinitionMetadata WrapperlessIcall_t245_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WrapperlessIcall_t245_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, WrapperlessIcall_t245_VTable/* vtableMethods */
	, WrapperlessIcall_t245_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WrapperlessIcall_t245_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "WrapperlessIcall"/* name */
	, "UnityEngine"/* namespaze */
	, WrapperlessIcall_t245_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WrapperlessIcall_t245_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &WrapperlessIcall_t245_0_0_0/* byval_arg */
	, &WrapperlessIcall_t245_1_0_0/* this_arg */
	, &WrapperlessIcall_t245_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WrapperlessIcall_t245)/* instance_size */
	, sizeof (WrapperlessIcall_t245)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// Metadata Definition UnityEngine.IL2CPPStructAlignmentAttribute
extern TypeInfo IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo;
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern const MethodInfo IL2CPPStructAlignmentAttribute__ctor_m1191_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IL2CPPStructAlignmentAttribute__ctor_m1191/* method */
	, &IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1128/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* IL2CPPStructAlignmentAttribute_t246_MethodInfos[] =
{
	&IL2CPPStructAlignmentAttribute__ctor_m1191_MethodInfo,
	NULL
};
static const Il2CppMethodReference IL2CPPStructAlignmentAttribute_t246_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool IL2CPPStructAlignmentAttribute_t246_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair IL2CPPStructAlignmentAttribute_t246_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType IL2CPPStructAlignmentAttribute_t246_0_0_0;
extern const Il2CppType IL2CPPStructAlignmentAttribute_t246_1_0_0;
struct IL2CPPStructAlignmentAttribute_t246;
const Il2CppTypeDefinitionMetadata IL2CPPStructAlignmentAttribute_t246_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, IL2CPPStructAlignmentAttribute_t246_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, IL2CPPStructAlignmentAttribute_t246_VTable/* vtableMethods */
	, IL2CPPStructAlignmentAttribute_t246_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 896/* fieldStart */

};
TypeInfo IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "IL2CPPStructAlignmentAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, IL2CPPStructAlignmentAttribute_t246_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &IL2CPPStructAlignmentAttribute_t246_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 422/* custom_attributes_cache */
	, &IL2CPPStructAlignmentAttribute_t246_0_0_0/* byval_arg */
	, &IL2CPPStructAlignmentAttribute_t246_1_0_0/* this_arg */
	, &IL2CPPStructAlignmentAttribute_t246_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IL2CPPStructAlignmentAttribute_t246)/* instance_size */
	, sizeof (IL2CPPStructAlignmentAttribute_t246)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
// Metadata Definition UnityEngine.AttributeHelperEngine
extern TypeInfo AttributeHelperEngine_t250_il2cpp_TypeInfo;
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern const MethodInfo AttributeHelperEngine__cctor_m1192_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&AttributeHelperEngine__cctor_m1192/* method */
	, &AttributeHelperEngine_t250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1129/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo AttributeHelperEngine_t250_AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1193_ParameterInfos[] = 
{
	{"type", 0, 134218895, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const MethodInfo AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1193_MethodInfo = 
{
	"GetParentTypeDisallowingMultipleInclusion"/* name */
	, (methodPointerType)&AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1193/* method */
	, &AttributeHelperEngine_t250_il2cpp_TypeInfo/* declaring_type */
	, &Type_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, AttributeHelperEngine_t250_AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1193_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1130/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo AttributeHelperEngine_t250_AttributeHelperEngine_GetRequiredComponents_m1194_ParameterInfos[] = 
{
	{"klass", 0, 134218896, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const MethodInfo AttributeHelperEngine_GetRequiredComponents_m1194_MethodInfo = 
{
	"GetRequiredComponents"/* name */
	, (methodPointerType)&AttributeHelperEngine_GetRequiredComponents_m1194/* method */
	, &AttributeHelperEngine_t250_il2cpp_TypeInfo/* declaring_type */
	, &TypeU5BU5D_t234_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, AttributeHelperEngine_t250_AttributeHelperEngine_GetRequiredComponents_m1194_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1131/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
static const ParameterInfo AttributeHelperEngine_t250_AttributeHelperEngine_CheckIsEditorScript_m1195_ParameterInfos[] = 
{
	{"klass", 0, 134218897, 0, &Type_t_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const MethodInfo AttributeHelperEngine_CheckIsEditorScript_m1195_MethodInfo = 
{
	"CheckIsEditorScript"/* name */
	, (methodPointerType)&AttributeHelperEngine_CheckIsEditorScript_m1195/* method */
	, &AttributeHelperEngine_t250_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_Object_t/* invoker_method */
	, AttributeHelperEngine_t250_AttributeHelperEngine_CheckIsEditorScript_m1195_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1132/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AttributeHelperEngine_t250_MethodInfos[] =
{
	&AttributeHelperEngine__cctor_m1192_MethodInfo,
	&AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m1193_MethodInfo,
	&AttributeHelperEngine_GetRequiredComponents_m1194_MethodInfo,
	&AttributeHelperEngine_CheckIsEditorScript_m1195_MethodInfo,
	NULL
};
static const Il2CppMethodReference AttributeHelperEngine_t250_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AttributeHelperEngine_t250_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AttributeHelperEngine_t250_0_0_0;
extern const Il2CppType AttributeHelperEngine_t250_1_0_0;
struct AttributeHelperEngine_t250;
const Il2CppTypeDefinitionMetadata AttributeHelperEngine_t250_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AttributeHelperEngine_t250_VTable/* vtableMethods */
	, AttributeHelperEngine_t250_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 897/* fieldStart */

};
TypeInfo AttributeHelperEngine_t250_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AttributeHelperEngine"/* name */
	, "UnityEngine"/* namespaze */
	, AttributeHelperEngine_t250_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AttributeHelperEngine_t250_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AttributeHelperEngine_t250_0_0_0/* byval_arg */
	, &AttributeHelperEngine_t250_1_0_0/* this_arg */
	, &AttributeHelperEngine_t250_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AttributeHelperEngine_t250)/* instance_size */
	, sizeof (AttributeHelperEngine_t250)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(AttributeHelperEngine_t250_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// Metadata Definition UnityEngine.DisallowMultipleComponent
extern TypeInfo DisallowMultipleComponent_t251_il2cpp_TypeInfo;
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"
static const MethodInfo* DisallowMultipleComponent_t251_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference DisallowMultipleComponent_t251_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool DisallowMultipleComponent_t251_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair DisallowMultipleComponent_t251_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType DisallowMultipleComponent_t251_0_0_0;
extern const Il2CppType DisallowMultipleComponent_t251_1_0_0;
struct DisallowMultipleComponent_t251;
const Il2CppTypeDefinitionMetadata DisallowMultipleComponent_t251_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, DisallowMultipleComponent_t251_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, DisallowMultipleComponent_t251_VTable/* vtableMethods */
	, DisallowMultipleComponent_t251_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo DisallowMultipleComponent_t251_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "DisallowMultipleComponent"/* name */
	, "UnityEngine"/* namespaze */
	, DisallowMultipleComponent_t251_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &DisallowMultipleComponent_t251_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 423/* custom_attributes_cache */
	, &DisallowMultipleComponent_t251_0_0_0/* byval_arg */
	, &DisallowMultipleComponent_t251_1_0_0/* this_arg */
	, &DisallowMultipleComponent_t251_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DisallowMultipleComponent_t251)/* instance_size */
	, sizeof (DisallowMultipleComponent_t251)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// Metadata Definition UnityEngine.RequireComponent
extern TypeInfo RequireComponent_t252_il2cpp_TypeInfo;
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"
static const MethodInfo* RequireComponent_t252_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference RequireComponent_t252_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool RequireComponent_t252_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RequireComponent_t252_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType RequireComponent_t252_0_0_0;
extern const Il2CppType RequireComponent_t252_1_0_0;
struct RequireComponent_t252;
const Il2CppTypeDefinitionMetadata RequireComponent_t252_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RequireComponent_t252_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, RequireComponent_t252_VTable/* vtableMethods */
	, RequireComponent_t252_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 900/* fieldStart */

};
TypeInfo RequireComponent_t252_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "RequireComponent"/* name */
	, "UnityEngine"/* namespaze */
	, RequireComponent_t252_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RequireComponent_t252_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 424/* custom_attributes_cache */
	, &RequireComponent_t252_0_0_0/* byval_arg */
	, &RequireComponent_t252_1_0_0/* this_arg */
	, &RequireComponent_t252_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RequireComponent_t252)/* instance_size */
	, sizeof (RequireComponent_t252)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// Metadata Definition UnityEngine.AddComponentMenu
extern TypeInfo AddComponentMenu_t253_il2cpp_TypeInfo;
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AddComponentMenu_t253_AddComponentMenu__ctor_m1196_ParameterInfos[] = 
{
	{"menuName", 0, 134218898, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern const MethodInfo AddComponentMenu__ctor_m1196_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AddComponentMenu__ctor_m1196/* method */
	, &AddComponentMenu_t253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AddComponentMenu_t253_AddComponentMenu__ctor_m1196_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1133/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AddComponentMenu_t253_MethodInfos[] =
{
	&AddComponentMenu__ctor_m1196_MethodInfo,
	NULL
};
static const Il2CppMethodReference AddComponentMenu_t253_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AddComponentMenu_t253_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AddComponentMenu_t253_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AddComponentMenu_t253_0_0_0;
extern const Il2CppType AddComponentMenu_t253_1_0_0;
struct AddComponentMenu_t253;
const Il2CppTypeDefinitionMetadata AddComponentMenu_t253_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AddComponentMenu_t253_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, AddComponentMenu_t253_VTable/* vtableMethods */
	, AddComponentMenu_t253_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 903/* fieldStart */

};
TypeInfo AddComponentMenu_t253_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AddComponentMenu"/* name */
	, "UnityEngine"/* namespaze */
	, AddComponentMenu_t253_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AddComponentMenu_t253_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AddComponentMenu_t253_0_0_0/* byval_arg */
	, &AddComponentMenu_t253_1_0_0/* this_arg */
	, &AddComponentMenu_t253_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AddComponentMenu_t253)/* instance_size */
	, sizeof (AddComponentMenu_t253)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// Metadata Definition UnityEngine.ExecuteInEditMode
extern TypeInfo ExecuteInEditMode_t34_il2cpp_TypeInfo;
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern const MethodInfo ExecuteInEditMode__ctor_m89_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExecuteInEditMode__ctor_m89/* method */
	, &ExecuteInEditMode_t34_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1134/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* ExecuteInEditMode_t34_MethodInfos[] =
{
	&ExecuteInEditMode__ctor_m89_MethodInfo,
	NULL
};
static const Il2CppMethodReference ExecuteInEditMode_t34_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool ExecuteInEditMode_t34_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExecuteInEditMode_t34_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ExecuteInEditMode_t34_0_0_0;
extern const Il2CppType ExecuteInEditMode_t34_1_0_0;
struct ExecuteInEditMode_t34;
const Il2CppTypeDefinitionMetadata ExecuteInEditMode_t34_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExecuteInEditMode_t34_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, ExecuteInEditMode_t34_VTable/* vtableMethods */
	, ExecuteInEditMode_t34_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo ExecuteInEditMode_t34_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExecuteInEditMode"/* name */
	, "UnityEngine"/* namespaze */
	, ExecuteInEditMode_t34_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ExecuteInEditMode_t34_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ExecuteInEditMode_t34_0_0_0/* byval_arg */
	, &ExecuteInEditMode_t34_1_0_0/* this_arg */
	, &ExecuteInEditMode_t34_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExecuteInEditMode_t34)/* instance_size */
	, sizeof (ExecuteInEditMode_t34)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048833/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Metadata Definition UnityEngine.CastHelper`1
extern TypeInfo CastHelper_1_t430_il2cpp_TypeInfo;
extern const Il2CppGenericContainer CastHelper_1_t430_Il2CppGenericContainer;
extern TypeInfo CastHelper_1_t430_gp_T_0_il2cpp_TypeInfo;
extern const Il2CppGenericParameter CastHelper_1_t430_gp_T_0_il2cpp_TypeInfo_GenericParamFull = { &CastHelper_1_t430_Il2CppGenericContainer, NULL, "T", 0, 0 };
static const Il2CppGenericParameter* CastHelper_1_t430_Il2CppGenericParametersArray[1] = 
{
	&CastHelper_1_t430_gp_T_0_il2cpp_TypeInfo_GenericParamFull,
};
extern const Il2CppGenericContainer CastHelper_1_t430_Il2CppGenericContainer = { { NULL, NULL }, NULL, (void*)&CastHelper_1_t430_il2cpp_TypeInfo, 1, 0, CastHelper_1_t430_Il2CppGenericParametersArray };
static const MethodInfo* CastHelper_1_t430_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference CastHelper_1_t430_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool CastHelper_1_t430_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CastHelper_1_t430_0_0_0;
extern const Il2CppType CastHelper_1_t430_1_0_0;
const Il2CppTypeDefinitionMetadata CastHelper_1_t430_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, CastHelper_1_t430_VTable/* vtableMethods */
	, CastHelper_1_t430_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 905/* fieldStart */

};
TypeInfo CastHelper_1_t430_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CastHelper`1"/* name */
	, "UnityEngine"/* namespaze */
	, CastHelper_1_t430_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &CastHelper_1_t430_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CastHelper_1_t430_0_0_0/* byval_arg */
	, &CastHelper_1_t430_1_0_0/* this_arg */
	, &CastHelper_1_t430_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, &CastHelper_1_t430_Il2CppGenericContainer/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, 0/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
// Metadata Definition UnityEngine.SetupCoroutine
extern TypeInfo SetupCoroutine_t254_il2cpp_TypeInfo;
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SetupCoroutine::.ctor()
extern const MethodInfo SetupCoroutine__ctor_m1197_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&SetupCoroutine__ctor_m1197/* method */
	, &SetupCoroutine_t254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1135/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Object_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetupCoroutine_t254_SetupCoroutine_InvokeMember_m1198_ParameterInfos[] = 
{
	{"behaviour", 0, 134218899, 0, &Object_t_0_0_0},
	{"name", 1, 134218900, 0, &String_t_0_0_0},
	{"variable", 2, 134218901, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern const MethodInfo SetupCoroutine_InvokeMember_m1198_MethodInfo = 
{
	"InvokeMember"/* name */
	, (methodPointerType)&SetupCoroutine_InvokeMember_m1198/* method */
	, &SetupCoroutine_t254_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SetupCoroutine_t254_SetupCoroutine_InvokeMember_m1198_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1136/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Object_t_0_0_0;
static const ParameterInfo SetupCoroutine_t254_SetupCoroutine_InvokeStatic_m1199_ParameterInfos[] = 
{
	{"klass", 0, 134218902, 0, &Type_t_0_0_0},
	{"name", 1, 134218903, 0, &String_t_0_0_0},
	{"variable", 2, 134218904, 0, &Object_t_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern const MethodInfo SetupCoroutine_InvokeStatic_m1199_MethodInfo = 
{
	"InvokeStatic"/* name */
	, (methodPointerType)&SetupCoroutine_InvokeStatic_m1199/* method */
	, &SetupCoroutine_t254_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, SetupCoroutine_t254_SetupCoroutine_InvokeStatic_m1199_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1137/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* SetupCoroutine_t254_MethodInfos[] =
{
	&SetupCoroutine__ctor_m1197_MethodInfo,
	&SetupCoroutine_InvokeMember_m1198_MethodInfo,
	&SetupCoroutine_InvokeStatic_m1199_MethodInfo,
	NULL
};
static const Il2CppMethodReference SetupCoroutine_t254_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool SetupCoroutine_t254_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType SetupCoroutine_t254_0_0_0;
extern const Il2CppType SetupCoroutine_t254_1_0_0;
struct SetupCoroutine_t254;
const Il2CppTypeDefinitionMetadata SetupCoroutine_t254_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, SetupCoroutine_t254_VTable/* vtableMethods */
	, SetupCoroutine_t254_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo SetupCoroutine_t254_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "SetupCoroutine"/* name */
	, "UnityEngine"/* namespaze */
	, SetupCoroutine_t254_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &SetupCoroutine_t254_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &SetupCoroutine_t254_0_0_0/* byval_arg */
	, &SetupCoroutine_t254_1_0_0/* this_arg */
	, &SetupCoroutine_t254_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (SetupCoroutine_t254)/* instance_size */
	, sizeof (SetupCoroutine_t254)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// Metadata Definition UnityEngine.WritableAttribute
extern TypeInfo WritableAttribute_t255_il2cpp_TypeInfo;
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.WritableAttribute::.ctor()
extern const MethodInfo WritableAttribute__ctor_m1200_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&WritableAttribute__ctor_m1200/* method */
	, &WritableAttribute_t255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1138/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* WritableAttribute_t255_MethodInfos[] =
{
	&WritableAttribute__ctor_m1200_MethodInfo,
	NULL
};
static const Il2CppMethodReference WritableAttribute_t255_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool WritableAttribute_t255_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair WritableAttribute_t255_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType WritableAttribute_t255_0_0_0;
extern const Il2CppType WritableAttribute_t255_1_0_0;
struct WritableAttribute_t255;
const Il2CppTypeDefinitionMetadata WritableAttribute_t255_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, WritableAttribute_t255_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, WritableAttribute_t255_VTable/* vtableMethods */
	, WritableAttribute_t255_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo WritableAttribute_t255_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "WritableAttribute"/* name */
	, "UnityEngine"/* namespaze */
	, WritableAttribute_t255_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &WritableAttribute_t255_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 425/* custom_attributes_cache */
	, &WritableAttribute_t255_0_0_0/* byval_arg */
	, &WritableAttribute_t255_1_0_0/* this_arg */
	, &WritableAttribute_t255_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (WritableAttribute_t255)/* instance_size */
	, sizeof (WritableAttribute_t255)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
// Metadata Definition UnityEngine.AssemblyIsEditorAssembly
extern TypeInfo AssemblyIsEditorAssembly_t256_il2cpp_TypeInfo;
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern const MethodInfo AssemblyIsEditorAssembly__ctor_m1201_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AssemblyIsEditorAssembly__ctor_m1201/* method */
	, &AssemblyIsEditorAssembly_t256_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1139/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AssemblyIsEditorAssembly_t256_MethodInfos[] =
{
	&AssemblyIsEditorAssembly__ctor_m1201_MethodInfo,
	NULL
};
static const Il2CppMethodReference AssemblyIsEditorAssembly_t256_VTable[] =
{
	&Attribute_Equals_m1608_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Attribute_GetHashCode_m1529_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool AssemblyIsEditorAssembly_t256_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair AssemblyIsEditorAssembly_t256_InterfacesOffsets[] = 
{
	{ &_Attribute_t452_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AssemblyIsEditorAssembly_t256_0_0_0;
extern const Il2CppType AssemblyIsEditorAssembly_t256_1_0_0;
struct AssemblyIsEditorAssembly_t256;
const Il2CppTypeDefinitionMetadata AssemblyIsEditorAssembly_t256_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, AssemblyIsEditorAssembly_t256_InterfacesOffsets/* interfaceOffsets */
	, &Attribute_t136_0_0_0/* parent */
	, AssemblyIsEditorAssembly_t256_VTable/* vtableMethods */
	, AssemblyIsEditorAssembly_t256_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, -1/* fieldStart */

};
TypeInfo AssemblyIsEditorAssembly_t256_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AssemblyIsEditorAssembly"/* name */
	, "UnityEngine"/* namespaze */
	, AssemblyIsEditorAssembly_t256_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &AssemblyIsEditorAssembly_t256_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 426/* custom_attributes_cache */
	, &AssemblyIsEditorAssembly_t256_0_0_0/* byval_arg */
	, &AssemblyIsEditorAssembly_t256_1_0_0/* this_arg */
	, &AssemblyIsEditorAssembly_t256_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AssemblyIsEditorAssembly_t256)/* instance_size */
	, sizeof (AssemblyIsEditorAssembly_t256)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
extern TypeInfo GcUserProfileData_t257_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"
extern const Il2CppType UserProfile_t269_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern const MethodInfo GcUserProfileData_ToUserProfile_m1202_MethodInfo = 
{
	"ToUserProfile"/* name */
	, (methodPointerType)&GcUserProfileData_ToUserProfile_m1202/* method */
	, &GcUserProfileData_t257_il2cpp_TypeInfo/* declaring_type */
	, &UserProfile_t269_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1140/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UserProfileU5BU5D_t68_1_0_0;
extern const Il2CppType UserProfileU5BU5D_t68_1_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo GcUserProfileData_t257_GcUserProfileData_AddToArray_m1203_ParameterInfos[] = 
{
	{"array", 0, 134218905, 0, &UserProfileU5BU5D_t68_1_0_0},
	{"number", 1, 134218906, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_UserProfileU5BU5DU26_t439_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern const MethodInfo GcUserProfileData_AddToArray_m1203_MethodInfo = 
{
	"AddToArray"/* name */
	, (methodPointerType)&GcUserProfileData_AddToArray_m1203/* method */
	, &GcUserProfileData_t257_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_UserProfileU5BU5DU26_t439_Int32_t18/* invoker_method */
	, GcUserProfileData_t257_GcUserProfileData_AddToArray_m1203_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1141/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcUserProfileData_t257_MethodInfos[] =
{
	&GcUserProfileData_ToUserProfile_m1202_MethodInfo,
	&GcUserProfileData_AddToArray_m1203_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcUserProfileData_t257_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool GcUserProfileData_t257_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcUserProfileData_t257_0_0_0;
extern const Il2CppType GcUserProfileData_t257_1_0_0;
const Il2CppTypeDefinitionMetadata GcUserProfileData_t257_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, GcUserProfileData_t257_VTable/* vtableMethods */
	, GcUserProfileData_t257_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 907/* fieldStart */

};
TypeInfo GcUserProfileData_t257_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcUserProfileData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcUserProfileData_t257_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcUserProfileData_t257_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcUserProfileData_t257_0_0_0/* byval_arg */
	, &GcUserProfileData_t257_1_0_0/* this_arg */
	, &GcUserProfileData_t257_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GcUserProfileData_t257)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcUserProfileData_t257)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
extern TypeInfo GcAchievementDescriptionData_t258_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"
extern const Il2CppType AchievementDescription_t271_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern const MethodInfo GcAchievementDescriptionData_ToAchievementDescription_m1204_MethodInfo = 
{
	"ToAchievementDescription"/* name */
	, (methodPointerType)&GcAchievementDescriptionData_ToAchievementDescription_m1204/* method */
	, &GcAchievementDescriptionData_t258_il2cpp_TypeInfo/* declaring_type */
	, &AchievementDescription_t271_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1142/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcAchievementDescriptionData_t258_MethodInfos[] =
{
	&GcAchievementDescriptionData_ToAchievementDescription_m1204_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcAchievementDescriptionData_t258_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool GcAchievementDescriptionData_t258_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcAchievementDescriptionData_t258_0_0_0;
extern const Il2CppType GcAchievementDescriptionData_t258_1_0_0;
const Il2CppTypeDefinitionMetadata GcAchievementDescriptionData_t258_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, GcAchievementDescriptionData_t258_VTable/* vtableMethods */
	, GcAchievementDescriptionData_t258_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 911/* fieldStart */

};
TypeInfo GcAchievementDescriptionData_t258_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcAchievementDescriptionData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcAchievementDescriptionData_t258_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcAchievementDescriptionData_t258_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcAchievementDescriptionData_t258_0_0_0/* byval_arg */
	, &GcAchievementDescriptionData_t258_1_0_0/* this_arg */
	, &GcAchievementDescriptionData_t258_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GcAchievementDescriptionData_t258)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcAchievementDescriptionData_t258)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
extern TypeInfo GcAchievementData_t259_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"
extern const Il2CppType Achievement_t270_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern const MethodInfo GcAchievementData_ToAchievement_m1205_MethodInfo = 
{
	"ToAchievement"/* name */
	, (methodPointerType)&GcAchievementData_ToAchievement_m1205/* method */
	, &GcAchievementData_t259_il2cpp_TypeInfo/* declaring_type */
	, &Achievement_t270_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1143/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcAchievementData_t259_MethodInfos[] =
{
	&GcAchievementData_ToAchievement_m1205_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcAchievementData_t259_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool GcAchievementData_t259_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcAchievementData_t259_0_0_0;
extern const Il2CppType GcAchievementData_t259_1_0_0;
const Il2CppTypeDefinitionMetadata GcAchievementData_t259_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, GcAchievementData_t259_VTable/* vtableMethods */
	, GcAchievementData_t259_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 918/* fieldStart */

};
TypeInfo GcAchievementData_t259_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcAchievementData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcAchievementData_t259_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcAchievementData_t259_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcAchievementData_t259_0_0_0/* byval_arg */
	, &GcAchievementData_t259_1_0_0/* this_arg */
	, &GcAchievementData_t259_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)GcAchievementData_t259_marshal/* marshal_to_native_func */
	, (methodPointerType)GcAchievementData_t259_marshal_back/* marshal_from_native_func */
	, (methodPointerType)GcAchievementData_t259_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (GcAchievementData_t259)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcAchievementData_t259)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(GcAchievementData_t259_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
// Metadata Definition UnityEngine.SocialPlatforms.GameCenter.GcScoreData
extern TypeInfo GcScoreData_t260_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"
extern const Il2CppType Score_t272_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern const MethodInfo GcScoreData_ToScore_m1206_MethodInfo = 
{
	"ToScore"/* name */
	, (methodPointerType)&GcScoreData_ToScore_m1206/* method */
	, &GcScoreData_t260_il2cpp_TypeInfo/* declaring_type */
	, &Score_t272_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1144/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GcScoreData_t260_MethodInfos[] =
{
	&GcScoreData_ToScore_m1206_MethodInfo,
	NULL
};
static const Il2CppMethodReference GcScoreData_t260_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool GcScoreData_t260_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GcScoreData_t260_0_0_0;
extern const Il2CppType GcScoreData_t260_1_0_0;
const Il2CppTypeDefinitionMetadata GcScoreData_t260_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, GcScoreData_t260_VTable/* vtableMethods */
	, GcScoreData_t260_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 923/* fieldStart */

};
TypeInfo GcScoreData_t260_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GcScoreData"/* name */
	, "UnityEngine.SocialPlatforms.GameCenter"/* namespaze */
	, GcScoreData_t260_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GcScoreData_t260_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GcScoreData_t260_0_0_0/* byval_arg */
	, &GcScoreData_t260_1_0_0/* this_arg */
	, &GcScoreData_t260_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)GcScoreData_t260_marshal/* marshal_to_native_func */
	, (methodPointerType)GcScoreData_t260_marshal_back/* marshal_from_native_func */
	, (methodPointerType)GcScoreData_t260_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (GcScoreData_t260)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (GcScoreData_t260)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(GcScoreData_t260_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
// Metadata Definition UnityEngine.Resolution
extern TypeInfo Resolution_t261_il2cpp_TypeInfo;
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Resolution::get_width()
extern const MethodInfo Resolution_get_width_m1207_MethodInfo = 
{
	"get_width"/* name */
	, (methodPointerType)&Resolution_get_width_m1207/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1145/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo Resolution_t261_Resolution_set_width_m1208_ParameterInfos[] = 
{
	{"value", 0, 134218907, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern const MethodInfo Resolution_set_width_m1208_MethodInfo = 
{
	"set_width"/* name */
	, (methodPointerType)&Resolution_set_width_m1208/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, Resolution_t261_Resolution_set_width_m1208_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1146/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Resolution::get_height()
extern const MethodInfo Resolution_get_height_m1209_MethodInfo = 
{
	"get_height"/* name */
	, (methodPointerType)&Resolution_get_height_m1209/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1147/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo Resolution_t261_Resolution_set_height_m1210_ParameterInfos[] = 
{
	{"value", 0, 134218908, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern const MethodInfo Resolution_set_height_m1210_MethodInfo = 
{
	"set_height"/* name */
	, (methodPointerType)&Resolution_set_height_m1210/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, Resolution_t261_Resolution_set_height_m1210_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1148/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern const MethodInfo Resolution_get_refreshRate_m1211_MethodInfo = 
{
	"get_refreshRate"/* name */
	, (methodPointerType)&Resolution_get_refreshRate_m1211/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1149/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo Resolution_t261_Resolution_set_refreshRate_m1212_ParameterInfos[] = 
{
	{"value", 0, 134218909, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern const MethodInfo Resolution_set_refreshRate_m1212_MethodInfo = 
{
	"set_refreshRate"/* name */
	, (methodPointerType)&Resolution_set_refreshRate_m1212/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, Resolution_t261_Resolution_set_refreshRate_m1212_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1150/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.Resolution::ToString()
extern const MethodInfo Resolution_ToString_m1213_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Resolution_ToString_m1213/* method */
	, &Resolution_t261_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1151/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Resolution_t261_MethodInfos[] =
{
	&Resolution_get_width_m1207_MethodInfo,
	&Resolution_set_width_m1208_MethodInfo,
	&Resolution_get_height_m1209_MethodInfo,
	&Resolution_set_height_m1210_MethodInfo,
	&Resolution_get_refreshRate_m1211_MethodInfo,
	&Resolution_set_refreshRate_m1212_MethodInfo,
	&Resolution_ToString_m1213_MethodInfo,
	NULL
};
extern const MethodInfo Resolution_get_width_m1207_MethodInfo;
extern const MethodInfo Resolution_set_width_m1208_MethodInfo;
static const PropertyInfo Resolution_t261____width_PropertyInfo = 
{
	&Resolution_t261_il2cpp_TypeInfo/* parent */
	, "width"/* name */
	, &Resolution_get_width_m1207_MethodInfo/* get */
	, &Resolution_set_width_m1208_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Resolution_get_height_m1209_MethodInfo;
extern const MethodInfo Resolution_set_height_m1210_MethodInfo;
static const PropertyInfo Resolution_t261____height_PropertyInfo = 
{
	&Resolution_t261_il2cpp_TypeInfo/* parent */
	, "height"/* name */
	, &Resolution_get_height_m1209_MethodInfo/* get */
	, &Resolution_set_height_m1210_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Resolution_get_refreshRate_m1211_MethodInfo;
extern const MethodInfo Resolution_set_refreshRate_m1212_MethodInfo;
static const PropertyInfo Resolution_t261____refreshRate_PropertyInfo = 
{
	&Resolution_t261_il2cpp_TypeInfo/* parent */
	, "refreshRate"/* name */
	, &Resolution_get_refreshRate_m1211_MethodInfo/* get */
	, &Resolution_set_refreshRate_m1212_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Resolution_t261_PropertyInfos[] =
{
	&Resolution_t261____width_PropertyInfo,
	&Resolution_t261____height_PropertyInfo,
	&Resolution_t261____refreshRate_PropertyInfo,
	NULL
};
extern const MethodInfo Resolution_ToString_m1213_MethodInfo;
static const Il2CppMethodReference Resolution_t261_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&Resolution_ToString_m1213_MethodInfo,
};
static bool Resolution_t261_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Resolution_t261_0_0_0;
extern const Il2CppType Resolution_t261_1_0_0;
const Il2CppTypeDefinitionMetadata Resolution_t261_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, Resolution_t261_VTable/* vtableMethods */
	, Resolution_t261_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 930/* fieldStart */

};
TypeInfo Resolution_t261_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Resolution"/* name */
	, "UnityEngine"/* namespaze */
	, Resolution_t261_MethodInfos/* methods */
	, Resolution_t261_PropertyInfos/* properties */
	, NULL/* events */
	, &Resolution_t261_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Resolution_t261_0_0_0/* byval_arg */
	, &Resolution_t261_1_0_0/* this_arg */
	, &Resolution_t261_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Resolution_t261)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Resolution_t261)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Resolution_t261 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
// Metadata Definition UnityEngine.RenderBuffer
extern TypeInfo RenderBuffer_t262_il2cpp_TypeInfo;
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"
static const MethodInfo* RenderBuffer_t262_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference RenderBuffer_t262_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool RenderBuffer_t262_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType RenderBuffer_t262_0_0_0;
extern const Il2CppType RenderBuffer_t262_1_0_0;
const Il2CppTypeDefinitionMetadata RenderBuffer_t262_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, RenderBuffer_t262_VTable/* vtableMethods */
	, RenderBuffer_t262_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 933/* fieldStart */

};
TypeInfo RenderBuffer_t262_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "RenderBuffer"/* name */
	, "UnityEngine"/* namespaze */
	, RenderBuffer_t262_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &RenderBuffer_t262_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &RenderBuffer_t262_0_0_0/* byval_arg */
	, &RenderBuffer_t262_1_0_0/* this_arg */
	, &RenderBuffer_t262_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RenderBuffer_t262)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (RenderBuffer_t262)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(RenderBuffer_t262 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// Metadata Definition UnityEngine.CameraClearFlags
extern TypeInfo CameraClearFlags_t263_il2cpp_TypeInfo;
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"
static const MethodInfo* CameraClearFlags_t263_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference CameraClearFlags_t263_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool CameraClearFlags_t263_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair CameraClearFlags_t263_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType CameraClearFlags_t263_0_0_0;
extern const Il2CppType CameraClearFlags_t263_1_0_0;
const Il2CppTypeDefinitionMetadata CameraClearFlags_t263_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CameraClearFlags_t263_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, CameraClearFlags_t263_VTable/* vtableMethods */
	, CameraClearFlags_t263_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 935/* fieldStart */

};
TypeInfo CameraClearFlags_t263_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CameraClearFlags"/* name */
	, "UnityEngine"/* namespaze */
	, CameraClearFlags_t263_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t18_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &CameraClearFlags_t263_0_0_0/* byval_arg */
	, &CameraClearFlags_t263_1_0_0/* this_arg */
	, &CameraClearFlags_t263_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CameraClearFlags_t263)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (CameraClearFlags_t263)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// Metadata Definition UnityEngine.TextureFormat
extern TypeInfo TextureFormat_t264_il2cpp_TypeInfo;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"
static const MethodInfo* TextureFormat_t264_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference TextureFormat_t264_VTable[] =
{
	&Enum_Equals_m94_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Enum_GetHashCode_m95_MethodInfo,
	&Enum_ToString_m96_MethodInfo,
	&Enum_ToString_m97_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m98_MethodInfo,
	&Enum_System_IConvertible_ToByte_m99_MethodInfo,
	&Enum_System_IConvertible_ToChar_m100_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m101_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m102_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m103_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m104_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m105_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m106_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m107_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m108_MethodInfo,
	&Enum_ToString_m109_MethodInfo,
	&Enum_System_IConvertible_ToType_m110_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m111_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m112_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m113_MethodInfo,
	&Enum_CompareTo_m114_MethodInfo,
	&Enum_GetTypeCode_m115_MethodInfo,
};
static bool TextureFormat_t264_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair TextureFormat_t264_InterfacesOffsets[] = 
{
	{ &IFormattable_t38_0_0_0, 4},
	{ &IConvertible_t39_0_0_0, 5},
	{ &IComparable_t40_0_0_0, 21},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType TextureFormat_t264_0_0_0;
extern const Il2CppType TextureFormat_t264_1_0_0;
const Il2CppTypeDefinitionMetadata TextureFormat_t264_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, TextureFormat_t264_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t41_0_0_0/* parent */
	, TextureFormat_t264_VTable/* vtableMethods */
	, TextureFormat_t264_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 941/* fieldStart */

};
TypeInfo TextureFormat_t264_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "TextureFormat"/* name */
	, "UnityEngine"/* namespaze */
	, TextureFormat_t264_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &Int32_t18_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &TextureFormat_t264_0_0_0/* byval_arg */
	, &TextureFormat_t264_1_0_0/* this_arg */
	, &TextureFormat_t264_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TextureFormat_t264)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (TextureFormat_t264)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 45/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
// Metadata Definition UnityEngine.Rendering.ReflectionProbeBlendInfo
extern TypeInfo ReflectionProbeBlendInfo_t265_il2cpp_TypeInfo;
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"
static const MethodInfo* ReflectionProbeBlendInfo_t265_MethodInfos[] =
{
	NULL
};
static const Il2CppMethodReference ReflectionProbeBlendInfo_t265_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool ReflectionProbeBlendInfo_t265_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType ReflectionProbeBlendInfo_t265_0_0_0;
extern const Il2CppType ReflectionProbeBlendInfo_t265_1_0_0;
const Il2CppTypeDefinitionMetadata ReflectionProbeBlendInfo_t265_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, ReflectionProbeBlendInfo_t265_VTable/* vtableMethods */
	, ReflectionProbeBlendInfo_t265_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 986/* fieldStart */

};
TypeInfo ReflectionProbeBlendInfo_t265_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "ReflectionProbeBlendInfo"/* name */
	, "UnityEngine.Rendering"/* namespaze */
	, ReflectionProbeBlendInfo_t265_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &ReflectionProbeBlendInfo_t265_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &ReflectionProbeBlendInfo_t265_0_0_0/* byval_arg */
	, &ReflectionProbeBlendInfo_t265_1_0_0/* this_arg */
	, &ReflectionProbeBlendInfo_t265_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ReflectionProbeBlendInfo_t265)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (ReflectionProbeBlendInfo_t265)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048841/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjects.h"
// Metadata Definition UnityEngine.GUIStateObjects
extern TypeInfo GUIStateObjects_t267_il2cpp_TypeInfo;
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjectsMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.GUIStateObjects::.cctor()
extern const MethodInfo GUIStateObjects__cctor_m1214_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&GUIStateObjects__cctor_m1214/* method */
	, &GUIStateObjects_t267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1152/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Type_t_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo GUIStateObjects_t267_GUIStateObjects_GetStateObject_m1215_ParameterInfos[] = 
{
	{"t", 0, 134218910, 0, &Type_t_0_0_0},
	{"controlID", 1, 134218911, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
extern const MethodInfo GUIStateObjects_GetStateObject_m1215_MethodInfo = 
{
	"GetStateObject"/* name */
	, (methodPointerType)&GUIStateObjects_GetStateObject_m1215/* method */
	, &GUIStateObjects_t267_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t18/* invoker_method */
	, GUIStateObjects_t267_GUIStateObjects_GetStateObject_m1215_ParameterInfos/* parameters */
	, 427/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1153/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* GUIStateObjects_t267_MethodInfos[] =
{
	&GUIStateObjects__cctor_m1214_MethodInfo,
	&GUIStateObjects_GetStateObject_m1215_MethodInfo,
	NULL
};
static const Il2CppMethodReference GUIStateObjects_t267_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Object_ToString_m121_MethodInfo,
};
static bool GUIStateObjects_t267_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType GUIStateObjects_t267_0_0_0;
extern const Il2CppType GUIStateObjects_t267_1_0_0;
struct GUIStateObjects_t267;
const Il2CppTypeDefinitionMetadata GUIStateObjects_t267_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, GUIStateObjects_t267_VTable/* vtableMethods */
	, GUIStateObjects_t267_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 988/* fieldStart */

};
TypeInfo GUIStateObjects_t267_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "GUIStateObjects"/* name */
	, "UnityEngine"/* namespaze */
	, GUIStateObjects_t267_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &GUIStateObjects_t267_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &GUIStateObjects_t267_0_0_0/* byval_arg */
	, &GUIStateObjects_t267_1_0_0/* this_arg */
	, &GUIStateObjects_t267_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GUIStateObjects_t267)/* instance_size */
	, sizeof (GUIStateObjects_t267)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(GUIStateObjects_t267_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.LocalUser
extern TypeInfo LocalUser_t69_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern const MethodInfo LocalUser__ctor_m1216_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LocalUser__ctor_m1216/* method */
	, &LocalUser_t69_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1154/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IUserProfileU5BU5D_t268_0_0_0;
extern const Il2CppType IUserProfileU5BU5D_t268_0_0_0;
static const ParameterInfo LocalUser_t69_LocalUser_SetFriends_m1217_ParameterInfos[] = 
{
	{"friends", 0, 134218912, 0, &IUserProfileU5BU5D_t268_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern const MethodInfo LocalUser_SetFriends_m1217_MethodInfo = 
{
	"SetFriends"/* name */
	, (methodPointerType)&LocalUser_SetFriends_m1217/* method */
	, &LocalUser_t69_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, LocalUser_t69_LocalUser_SetFriends_m1217_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1155/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo LocalUser_t69_LocalUser_SetAuthenticated_m1218_ParameterInfos[] = 
{
	{"value", 0, 134218913, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern const MethodInfo LocalUser_SetAuthenticated_m1218_MethodInfo = 
{
	"SetAuthenticated"/* name */
	, (methodPointerType)&LocalUser_SetAuthenticated_m1218/* method */
	, &LocalUser_t69_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, LocalUser_t69_LocalUser_SetAuthenticated_m1218_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1156/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Boolean_t36_0_0_0;
static const ParameterInfo LocalUser_t69_LocalUser_SetUnderage_m1219_ParameterInfos[] = 
{
	{"value", 0, 134218914, 0, &Boolean_t36_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_SByte_t37 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern const MethodInfo LocalUser_SetUnderage_m1219_MethodInfo = 
{
	"SetUnderage"/* name */
	, (methodPointerType)&LocalUser_SetUnderage_m1219/* method */
	, &LocalUser_t69_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_SByte_t37/* invoker_method */
	, LocalUser_t69_LocalUser_SetUnderage_m1219_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1157/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern const MethodInfo LocalUser_get_authenticated_m1220_MethodInfo = 
{
	"get_authenticated"/* name */
	, (methodPointerType)&LocalUser_get_authenticated_m1220/* method */
	, &LocalUser_t69_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1158/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* LocalUser_t69_MethodInfos[] =
{
	&LocalUser__ctor_m1216_MethodInfo,
	&LocalUser_SetFriends_m1217_MethodInfo,
	&LocalUser_SetAuthenticated_m1218_MethodInfo,
	&LocalUser_SetUnderage_m1219_MethodInfo,
	&LocalUser_get_authenticated_m1220_MethodInfo,
	NULL
};
extern const MethodInfo LocalUser_get_authenticated_m1220_MethodInfo;
static const PropertyInfo LocalUser_t69____authenticated_PropertyInfo = 
{
	&LocalUser_t69_il2cpp_TypeInfo/* parent */
	, "authenticated"/* name */
	, &LocalUser_get_authenticated_m1220_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* LocalUser_t69_PropertyInfos[] =
{
	&LocalUser_t69____authenticated_PropertyInfo,
	NULL
};
extern const MethodInfo UserProfile_ToString_m1223_MethodInfo;
extern const MethodInfo UserProfile_get_userName_m1227_MethodInfo;
extern const MethodInfo UserProfile_get_id_m1228_MethodInfo;
extern const MethodInfo UserProfile_get_isFriend_m1229_MethodInfo;
extern const MethodInfo UserProfile_get_state_m1230_MethodInfo;
static const Il2CppMethodReference LocalUser_t69_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&UserProfile_ToString_m1223_MethodInfo,
	&UserProfile_get_userName_m1227_MethodInfo,
	&UserProfile_get_id_m1228_MethodInfo,
	&UserProfile_get_isFriend_m1229_MethodInfo,
	&UserProfile_get_state_m1230_MethodInfo,
	&LocalUser_get_authenticated_m1220_MethodInfo,
};
static bool LocalUser_t69_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ILocalUser_t312_0_0_0;
extern const Il2CppType IUserProfile_t432_0_0_0;
static const Il2CppType* LocalUser_t69_InterfacesTypeInfos[] = 
{
	&ILocalUser_t312_0_0_0,
	&IUserProfile_t432_0_0_0,
};
static Il2CppInterfaceOffsetPair LocalUser_t69_InterfacesOffsets[] = 
{
	{ &IUserProfile_t432_0_0_0, 4},
	{ &ILocalUser_t312_0_0_0, 8},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType LocalUser_t69_0_0_0;
extern const Il2CppType LocalUser_t69_1_0_0;
struct LocalUser_t69;
const Il2CppTypeDefinitionMetadata LocalUser_t69_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, LocalUser_t69_InterfacesTypeInfos/* implementedInterfaces */
	, LocalUser_t69_InterfacesOffsets/* interfaceOffsets */
	, &UserProfile_t269_0_0_0/* parent */
	, LocalUser_t69_VTable/* vtableMethods */
	, LocalUser_t69_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 989/* fieldStart */

};
TypeInfo LocalUser_t69_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "LocalUser"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, LocalUser_t69_MethodInfos/* methods */
	, LocalUser_t69_PropertyInfos/* properties */
	, NULL/* events */
	, &LocalUser_t69_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &LocalUser_t69_0_0_0/* byval_arg */
	, &LocalUser_t69_1_0_0/* this_arg */
	, &LocalUser_t69_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LocalUser_t69)/* instance_size */
	, sizeof (LocalUser_t69)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.UserProfile
extern TypeInfo UserProfile_t269_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern const MethodInfo UserProfile__ctor_m1221_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserProfile__ctor_m1221/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1159/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType UserState_t280_0_0_0;
extern const Il2CppType UserState_t280_0_0_0;
extern const Il2CppType Texture2D_t77_0_0_0;
extern const Il2CppType Texture2D_t77_0_0_0;
static const ParameterInfo UserProfile_t269_UserProfile__ctor_m1222_ParameterInfos[] = 
{
	{"name", 0, 134218915, 0, &String_t_0_0_0},
	{"id", 1, 134218916, 0, &String_t_0_0_0},
	{"friend", 2, 134218917, 0, &Boolean_t36_0_0_0},
	{"state", 3, 134218918, 0, &UserState_t280_0_0_0},
	{"image", 4, 134218919, 0, &Texture2D_t77_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t_SByte_t37_Int32_t18_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern const MethodInfo UserProfile__ctor_m1222_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UserProfile__ctor_m1222/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t_SByte_t37_Int32_t18_Object_t/* invoker_method */
	, UserProfile_t269_UserProfile__ctor_m1222_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1160/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern const MethodInfo UserProfile_ToString_m1223_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&UserProfile_ToString_m1223/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1161/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UserProfile_t269_UserProfile_SetUserName_m1224_ParameterInfos[] = 
{
	{"name", 0, 134218920, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern const MethodInfo UserProfile_SetUserName_m1224_MethodInfo = 
{
	"SetUserName"/* name */
	, (methodPointerType)&UserProfile_SetUserName_m1224/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, UserProfile_t269_UserProfile_SetUserName_m1224_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1162/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo UserProfile_t269_UserProfile_SetUserID_m1225_ParameterInfos[] = 
{
	{"id", 0, 134218921, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern const MethodInfo UserProfile_SetUserID_m1225_MethodInfo = 
{
	"SetUserID"/* name */
	, (methodPointerType)&UserProfile_SetUserID_m1225/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, UserProfile_t269_UserProfile_SetUserID_m1225_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1163/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Texture2D_t77_0_0_0;
static const ParameterInfo UserProfile_t269_UserProfile_SetImage_m1226_ParameterInfos[] = 
{
	{"image", 0, 134218922, 0, &Texture2D_t77_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern const MethodInfo UserProfile_SetImage_m1226_MethodInfo = 
{
	"SetImage"/* name */
	, (methodPointerType)&UserProfile_SetImage_m1226/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, UserProfile_t269_UserProfile_SetImage_m1226_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1164/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern const MethodInfo UserProfile_get_userName_m1227_MethodInfo = 
{
	"get_userName"/* name */
	, (methodPointerType)&UserProfile_get_userName_m1227/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1165/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern const MethodInfo UserProfile_get_id_m1228_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&UserProfile_get_id_m1228/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1166/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern const MethodInfo UserProfile_get_isFriend_m1229_MethodInfo = 
{
	"get_isFriend"/* name */
	, (methodPointerType)&UserProfile_get_isFriend_m1229/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1167/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_UserState_t280 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern const MethodInfo UserProfile_get_state_m1230_MethodInfo = 
{
	"get_state"/* name */
	, (methodPointerType)&UserProfile_get_state_m1230/* method */
	, &UserProfile_t269_il2cpp_TypeInfo/* declaring_type */
	, &UserState_t280_0_0_0/* return_type */
	, RuntimeInvoker_UserState_t280/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1168/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* UserProfile_t269_MethodInfos[] =
{
	&UserProfile__ctor_m1221_MethodInfo,
	&UserProfile__ctor_m1222_MethodInfo,
	&UserProfile_ToString_m1223_MethodInfo,
	&UserProfile_SetUserName_m1224_MethodInfo,
	&UserProfile_SetUserID_m1225_MethodInfo,
	&UserProfile_SetImage_m1226_MethodInfo,
	&UserProfile_get_userName_m1227_MethodInfo,
	&UserProfile_get_id_m1228_MethodInfo,
	&UserProfile_get_isFriend_m1229_MethodInfo,
	&UserProfile_get_state_m1230_MethodInfo,
	NULL
};
static const PropertyInfo UserProfile_t269____userName_PropertyInfo = 
{
	&UserProfile_t269_il2cpp_TypeInfo/* parent */
	, "userName"/* name */
	, &UserProfile_get_userName_m1227_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo UserProfile_t269____id_PropertyInfo = 
{
	&UserProfile_t269_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &UserProfile_get_id_m1228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo UserProfile_t269____isFriend_PropertyInfo = 
{
	&UserProfile_t269_il2cpp_TypeInfo/* parent */
	, "isFriend"/* name */
	, &UserProfile_get_isFriend_m1229_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo UserProfile_t269____state_PropertyInfo = 
{
	&UserProfile_t269_il2cpp_TypeInfo/* parent */
	, "state"/* name */
	, &UserProfile_get_state_m1230_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* UserProfile_t269_PropertyInfos[] =
{
	&UserProfile_t269____userName_PropertyInfo,
	&UserProfile_t269____id_PropertyInfo,
	&UserProfile_t269____isFriend_PropertyInfo,
	&UserProfile_t269____state_PropertyInfo,
	NULL
};
static const Il2CppMethodReference UserProfile_t269_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&UserProfile_ToString_m1223_MethodInfo,
	&UserProfile_get_userName_m1227_MethodInfo,
	&UserProfile_get_id_m1228_MethodInfo,
	&UserProfile_get_isFriend_m1229_MethodInfo,
	&UserProfile_get_state_m1230_MethodInfo,
};
static bool UserProfile_t269_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UserProfile_t269_InterfacesTypeInfos[] = 
{
	&IUserProfile_t432_0_0_0,
};
static Il2CppInterfaceOffsetPair UserProfile_t269_InterfacesOffsets[] = 
{
	{ &IUserProfile_t432_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType UserProfile_t269_1_0_0;
struct UserProfile_t269;
const Il2CppTypeDefinitionMetadata UserProfile_t269_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UserProfile_t269_InterfacesTypeInfos/* implementedInterfaces */
	, UserProfile_t269_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UserProfile_t269_VTable/* vtableMethods */
	, UserProfile_t269_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 992/* fieldStart */

};
TypeInfo UserProfile_t269_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UserProfile"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, UserProfile_t269_MethodInfos/* methods */
	, UserProfile_t269_PropertyInfos/* properties */
	, NULL/* events */
	, &UserProfile_t269_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &UserProfile_t269_0_0_0/* byval_arg */
	, &UserProfile_t269_1_0_0/* this_arg */
	, &UserProfile_t269_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UserProfile_t269)/* instance_size */
	, sizeof (UserProfile_t269)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 4/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Achievement
extern TypeInfo Achievement_t270_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t42_0_0_0;
extern const Il2CppType Double_t42_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType DateTime_t90_0_0_0;
extern const Il2CppType DateTime_t90_0_0_0;
static const ParameterInfo Achievement_t270_Achievement__ctor_m1231_ParameterInfos[] = 
{
	{"id", 0, 134218923, 0, &String_t_0_0_0},
	{"percentCompleted", 1, 134218924, 0, &Double_t42_0_0_0},
	{"completed", 2, 134218925, 0, &Boolean_t36_0_0_0},
	{"hidden", 3, 134218926, 0, &Boolean_t36_0_0_0},
	{"lastReportedDate", 4, 134218927, 0, &DateTime_t90_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Double_t42_SByte_t37_SByte_t37_DateTime_t90 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern const MethodInfo Achievement__ctor_m1231_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m1231/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Double_t42_SByte_t37_SByte_t37_DateTime_t90/* invoker_method */
	, Achievement_t270_Achievement__ctor_m1231_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1169/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Double_t42_0_0_0;
static const ParameterInfo Achievement_t270_Achievement__ctor_m1232_ParameterInfos[] = 
{
	{"id", 0, 134218928, 0, &String_t_0_0_0},
	{"percent", 1, 134218929, 0, &Double_t42_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Double_t42 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern const MethodInfo Achievement__ctor_m1232_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m1232/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Double_t42/* invoker_method */
	, Achievement_t270_Achievement__ctor_m1232_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1170/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern const MethodInfo Achievement__ctor_m1233_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Achievement__ctor_m1233/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1171/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern const MethodInfo Achievement_ToString_m1234_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Achievement_ToString_m1234/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1172/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern const MethodInfo Achievement_get_id_m1235_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&Achievement_get_id_m1235/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 430/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1173/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Achievement_t270_Achievement_set_id_m1236_ParameterInfos[] = 
{
	{"value", 0, 134218930, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern const MethodInfo Achievement_set_id_m1236_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&Achievement_set_id_m1236/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Achievement_t270_Achievement_set_id_m1236_ParameterInfos/* parameters */
	, 431/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1174/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Double_t42 (const MethodInfo* method, void* obj, void** args);
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern const MethodInfo Achievement_get_percentCompleted_m1237_MethodInfo = 
{
	"get_percentCompleted"/* name */
	, (methodPointerType)&Achievement_get_percentCompleted_m1237/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Double_t42_0_0_0/* return_type */
	, RuntimeInvoker_Double_t42/* invoker_method */
	, NULL/* parameters */
	, 432/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1175/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Double_t42_0_0_0;
static const ParameterInfo Achievement_t270_Achievement_set_percentCompleted_m1238_ParameterInfos[] = 
{
	{"value", 0, 134218931, 0, &Double_t42_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Double_t42 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern const MethodInfo Achievement_set_percentCompleted_m1238_MethodInfo = 
{
	"set_percentCompleted"/* name */
	, (methodPointerType)&Achievement_set_percentCompleted_m1238/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Double_t42/* invoker_method */
	, Achievement_t270_Achievement_set_percentCompleted_m1238_ParameterInfos/* parameters */
	, 433/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1176/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern const MethodInfo Achievement_get_completed_m1239_MethodInfo = 
{
	"get_completed"/* name */
	, (methodPointerType)&Achievement_get_completed_m1239/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1177/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern const MethodInfo Achievement_get_hidden_m1240_MethodInfo = 
{
	"get_hidden"/* name */
	, (methodPointerType)&Achievement_get_hidden_m1240/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1178/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_DateTime_t90 (const MethodInfo* method, void* obj, void** args);
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern const MethodInfo Achievement_get_lastReportedDate_m1241_MethodInfo = 
{
	"get_lastReportedDate"/* name */
	, (methodPointerType)&Achievement_get_lastReportedDate_m1241/* method */
	, &Achievement_t270_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t90_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t90/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1179/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Achievement_t270_MethodInfos[] =
{
	&Achievement__ctor_m1231_MethodInfo,
	&Achievement__ctor_m1232_MethodInfo,
	&Achievement__ctor_m1233_MethodInfo,
	&Achievement_ToString_m1234_MethodInfo,
	&Achievement_get_id_m1235_MethodInfo,
	&Achievement_set_id_m1236_MethodInfo,
	&Achievement_get_percentCompleted_m1237_MethodInfo,
	&Achievement_set_percentCompleted_m1238_MethodInfo,
	&Achievement_get_completed_m1239_MethodInfo,
	&Achievement_get_hidden_m1240_MethodInfo,
	&Achievement_get_lastReportedDate_m1241_MethodInfo,
	NULL
};
extern const MethodInfo Achievement_get_id_m1235_MethodInfo;
extern const MethodInfo Achievement_set_id_m1236_MethodInfo;
static const PropertyInfo Achievement_t270____id_PropertyInfo = 
{
	&Achievement_t270_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &Achievement_get_id_m1235_MethodInfo/* get */
	, &Achievement_set_id_m1236_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_percentCompleted_m1237_MethodInfo;
extern const MethodInfo Achievement_set_percentCompleted_m1238_MethodInfo;
static const PropertyInfo Achievement_t270____percentCompleted_PropertyInfo = 
{
	&Achievement_t270_il2cpp_TypeInfo/* parent */
	, "percentCompleted"/* name */
	, &Achievement_get_percentCompleted_m1237_MethodInfo/* get */
	, &Achievement_set_percentCompleted_m1238_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_completed_m1239_MethodInfo;
static const PropertyInfo Achievement_t270____completed_PropertyInfo = 
{
	&Achievement_t270_il2cpp_TypeInfo/* parent */
	, "completed"/* name */
	, &Achievement_get_completed_m1239_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_hidden_m1240_MethodInfo;
static const PropertyInfo Achievement_t270____hidden_PropertyInfo = 
{
	&Achievement_t270_il2cpp_TypeInfo/* parent */
	, "hidden"/* name */
	, &Achievement_get_hidden_m1240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Achievement_get_lastReportedDate_m1241_MethodInfo;
static const PropertyInfo Achievement_t270____lastReportedDate_PropertyInfo = 
{
	&Achievement_t270_il2cpp_TypeInfo/* parent */
	, "lastReportedDate"/* name */
	, &Achievement_get_lastReportedDate_m1241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Achievement_t270_PropertyInfos[] =
{
	&Achievement_t270____id_PropertyInfo,
	&Achievement_t270____percentCompleted_PropertyInfo,
	&Achievement_t270____completed_PropertyInfo,
	&Achievement_t270____hidden_PropertyInfo,
	&Achievement_t270____lastReportedDate_PropertyInfo,
	NULL
};
extern const MethodInfo Achievement_ToString_m1234_MethodInfo;
static const Il2CppMethodReference Achievement_t270_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Achievement_ToString_m1234_MethodInfo,
	&Achievement_get_id_m1235_MethodInfo,
	&Achievement_set_id_m1236_MethodInfo,
	&Achievement_get_percentCompleted_m1237_MethodInfo,
	&Achievement_set_percentCompleted_m1238_MethodInfo,
	&Achievement_get_completed_m1239_MethodInfo,
	&Achievement_get_hidden_m1240_MethodInfo,
	&Achievement_get_lastReportedDate_m1241_MethodInfo,
};
static bool Achievement_t270_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IAchievement_t316_0_0_0;
static const Il2CppType* Achievement_t270_InterfacesTypeInfos[] = 
{
	&IAchievement_t316_0_0_0,
};
static Il2CppInterfaceOffsetPair Achievement_t270_InterfacesOffsets[] = 
{
	{ &IAchievement_t316_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Achievement_t270_1_0_0;
struct Achievement_t270;
const Il2CppTypeDefinitionMetadata Achievement_t270_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Achievement_t270_InterfacesTypeInfos/* implementedInterfaces */
	, Achievement_t270_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Achievement_t270_VTable/* vtableMethods */
	, Achievement_t270_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 997/* fieldStart */

};
TypeInfo Achievement_t270_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Achievement"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Achievement_t270_MethodInfos/* methods */
	, Achievement_t270_PropertyInfos/* properties */
	, NULL/* events */
	, &Achievement_t270_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Achievement_t270_0_0_0/* byval_arg */
	, &Achievement_t270_1_0_0/* this_arg */
	, &Achievement_t270_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Achievement_t270)/* instance_size */
	, sizeof (Achievement_t270)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 5/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.AchievementDescription
extern TypeInfo AchievementDescription_t271_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Texture2D_t77_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Boolean_t36_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo AchievementDescription_t271_AchievementDescription__ctor_m1242_ParameterInfos[] = 
{
	{"id", 0, 134218932, 0, &String_t_0_0_0},
	{"title", 1, 134218933, 0, &String_t_0_0_0},
	{"image", 2, 134218934, 0, &Texture2D_t77_0_0_0},
	{"achievedDescription", 3, 134218935, 0, &String_t_0_0_0},
	{"unachievedDescription", 4, 134218936, 0, &String_t_0_0_0},
	{"hidden", 5, 134218937, 0, &Boolean_t36_0_0_0},
	{"points", 6, 134218938, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Object_t_Object_t_Object_t_Object_t_SByte_t37_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern const MethodInfo AchievementDescription__ctor_m1242_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AchievementDescription__ctor_m1242/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Object_t_Object_t_Object_t_Object_t_SByte_t37_Int32_t18/* invoker_method */
	, AchievementDescription_t271_AchievementDescription__ctor_m1242_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 7/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1180/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern const MethodInfo AchievementDescription_ToString_m1243_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&AchievementDescription_ToString_m1243/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1181/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Texture2D_t77_0_0_0;
static const ParameterInfo AchievementDescription_t271_AchievementDescription_SetImage_m1244_ParameterInfos[] = 
{
	{"image", 0, 134218939, 0, &Texture2D_t77_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern const MethodInfo AchievementDescription_SetImage_m1244_MethodInfo = 
{
	"SetImage"/* name */
	, (methodPointerType)&AchievementDescription_SetImage_m1244/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AchievementDescription_t271_AchievementDescription_SetImage_m1244_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1182/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern const MethodInfo AchievementDescription_get_id_m1245_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&AchievementDescription_get_id_m1245/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 435/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1183/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo AchievementDescription_t271_AchievementDescription_set_id_m1246_ParameterInfos[] = 
{
	{"value", 0, 134218940, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern const MethodInfo AchievementDescription_set_id_m1246_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&AchievementDescription_set_id_m1246/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, AchievementDescription_t271_AchievementDescription_set_id_m1246_ParameterInfos/* parameters */
	, 436/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1184/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern const MethodInfo AchievementDescription_get_title_m1247_MethodInfo = 
{
	"get_title"/* name */
	, (methodPointerType)&AchievementDescription_get_title_m1247/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1185/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern const MethodInfo AchievementDescription_get_achievedDescription_m1248_MethodInfo = 
{
	"get_achievedDescription"/* name */
	, (methodPointerType)&AchievementDescription_get_achievedDescription_m1248/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1186/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern const MethodInfo AchievementDescription_get_unachievedDescription_m1249_MethodInfo = 
{
	"get_unachievedDescription"/* name */
	, (methodPointerType)&AchievementDescription_get_unachievedDescription_m1249/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1187/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Boolean_t36 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern const MethodInfo AchievementDescription_get_hidden_m1250_MethodInfo = 
{
	"get_hidden"/* name */
	, (methodPointerType)&AchievementDescription_get_hidden_m1250/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1188/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern const MethodInfo AchievementDescription_get_points_m1251_MethodInfo = 
{
	"get_points"/* name */
	, (methodPointerType)&AchievementDescription_get_points_m1251/* method */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1189/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* AchievementDescription_t271_MethodInfos[] =
{
	&AchievementDescription__ctor_m1242_MethodInfo,
	&AchievementDescription_ToString_m1243_MethodInfo,
	&AchievementDescription_SetImage_m1244_MethodInfo,
	&AchievementDescription_get_id_m1245_MethodInfo,
	&AchievementDescription_set_id_m1246_MethodInfo,
	&AchievementDescription_get_title_m1247_MethodInfo,
	&AchievementDescription_get_achievedDescription_m1248_MethodInfo,
	&AchievementDescription_get_unachievedDescription_m1249_MethodInfo,
	&AchievementDescription_get_hidden_m1250_MethodInfo,
	&AchievementDescription_get_points_m1251_MethodInfo,
	NULL
};
extern const MethodInfo AchievementDescription_get_id_m1245_MethodInfo;
extern const MethodInfo AchievementDescription_set_id_m1246_MethodInfo;
static const PropertyInfo AchievementDescription_t271____id_PropertyInfo = 
{
	&AchievementDescription_t271_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &AchievementDescription_get_id_m1245_MethodInfo/* get */
	, &AchievementDescription_set_id_m1246_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_title_m1247_MethodInfo;
static const PropertyInfo AchievementDescription_t271____title_PropertyInfo = 
{
	&AchievementDescription_t271_il2cpp_TypeInfo/* parent */
	, "title"/* name */
	, &AchievementDescription_get_title_m1247_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_achievedDescription_m1248_MethodInfo;
static const PropertyInfo AchievementDescription_t271____achievedDescription_PropertyInfo = 
{
	&AchievementDescription_t271_il2cpp_TypeInfo/* parent */
	, "achievedDescription"/* name */
	, &AchievementDescription_get_achievedDescription_m1248_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_unachievedDescription_m1249_MethodInfo;
static const PropertyInfo AchievementDescription_t271____unachievedDescription_PropertyInfo = 
{
	&AchievementDescription_t271_il2cpp_TypeInfo/* parent */
	, "unachievedDescription"/* name */
	, &AchievementDescription_get_unachievedDescription_m1249_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_hidden_m1250_MethodInfo;
static const PropertyInfo AchievementDescription_t271____hidden_PropertyInfo = 
{
	&AchievementDescription_t271_il2cpp_TypeInfo/* parent */
	, "hidden"/* name */
	, &AchievementDescription_get_hidden_m1250_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo AchievementDescription_get_points_m1251_MethodInfo;
static const PropertyInfo AchievementDescription_t271____points_PropertyInfo = 
{
	&AchievementDescription_t271_il2cpp_TypeInfo/* parent */
	, "points"/* name */
	, &AchievementDescription_get_points_m1251_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* AchievementDescription_t271_PropertyInfos[] =
{
	&AchievementDescription_t271____id_PropertyInfo,
	&AchievementDescription_t271____title_PropertyInfo,
	&AchievementDescription_t271____achievedDescription_PropertyInfo,
	&AchievementDescription_t271____unachievedDescription_PropertyInfo,
	&AchievementDescription_t271____hidden_PropertyInfo,
	&AchievementDescription_t271____points_PropertyInfo,
	NULL
};
extern const MethodInfo AchievementDescription_ToString_m1243_MethodInfo;
static const Il2CppMethodReference AchievementDescription_t271_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&AchievementDescription_ToString_m1243_MethodInfo,
	&AchievementDescription_get_id_m1245_MethodInfo,
	&AchievementDescription_set_id_m1246_MethodInfo,
	&AchievementDescription_get_title_m1247_MethodInfo,
	&AchievementDescription_get_achievedDescription_m1248_MethodInfo,
	&AchievementDescription_get_unachievedDescription_m1249_MethodInfo,
	&AchievementDescription_get_hidden_m1250_MethodInfo,
	&AchievementDescription_get_points_m1251_MethodInfo,
};
static bool AchievementDescription_t271_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IAchievementDescription_t433_0_0_0;
static const Il2CppType* AchievementDescription_t271_InterfacesTypeInfos[] = 
{
	&IAchievementDescription_t433_0_0_0,
};
static Il2CppInterfaceOffsetPair AchievementDescription_t271_InterfacesOffsets[] = 
{
	{ &IAchievementDescription_t433_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType AchievementDescription_t271_1_0_0;
struct AchievementDescription_t271;
const Il2CppTypeDefinitionMetadata AchievementDescription_t271_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, AchievementDescription_t271_InterfacesTypeInfos/* implementedInterfaces */
	, AchievementDescription_t271_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AchievementDescription_t271_VTable/* vtableMethods */
	, AchievementDescription_t271_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1002/* fieldStart */

};
TypeInfo AchievementDescription_t271_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "AchievementDescription"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, AchievementDescription_t271_MethodInfos/* methods */
	, AchievementDescription_t271_PropertyInfos/* properties */
	, NULL/* events */
	, &AchievementDescription_t271_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &AchievementDescription_t271_0_0_0/* byval_arg */
	, &AchievementDescription_t271_1_0_0/* this_arg */
	, &AchievementDescription_t271_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AchievementDescription_t271)/* instance_size */
	, sizeof (AchievementDescription_t271)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 6/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Score
extern TypeInfo Score_t272_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t376_0_0_0;
extern const Il2CppType Int64_t376_0_0_0;
static const ParameterInfo Score_t272_Score__ctor_m1252_ParameterInfos[] = 
{
	{"leaderboardID", 0, 134218941, 0, &String_t_0_0_0},
	{"value", 1, 134218942, 0, &Int64_t376_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Int64_t376 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern const MethodInfo Score__ctor_m1252_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Score__ctor_m1252/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Int64_t376/* invoker_method */
	, Score_t272_Score__ctor_m1252_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1190/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int64_t376_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType DateTime_t90_0_0_0;
extern const Il2CppType String_t_0_0_0;
extern const Il2CppType Int32_t18_0_0_0;
static const ParameterInfo Score_t272_Score__ctor_m1253_ParameterInfos[] = 
{
	{"leaderboardID", 0, 134218943, 0, &String_t_0_0_0},
	{"value", 1, 134218944, 0, &Int64_t376_0_0_0},
	{"userID", 2, 134218945, 0, &String_t_0_0_0},
	{"date", 3, 134218946, 0, &DateTime_t90_0_0_0},
	{"formattedValue", 4, 134218947, 0, &String_t_0_0_0},
	{"rank", 5, 134218948, 0, &Int32_t18_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t_Int64_t376_Object_t_DateTime_t90_Object_t_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern const MethodInfo Score__ctor_m1253_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Score__ctor_m1253/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t_Int64_t376_Object_t_DateTime_t90_Object_t_Int32_t18/* invoker_method */
	, Score_t272_Score__ctor_m1253_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1191/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern const MethodInfo Score_ToString_m1254_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Score_ToString_m1254/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1192/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern const MethodInfo Score_get_leaderboardID_m1255_MethodInfo = 
{
	"get_leaderboardID"/* name */
	, (methodPointerType)&Score_get_leaderboardID_m1255/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 439/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1193/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Score_t272_Score_set_leaderboardID_m1256_ParameterInfos[] = 
{
	{"value", 0, 134218949, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern const MethodInfo Score_set_leaderboardID_m1256_MethodInfo = 
{
	"set_leaderboardID"/* name */
	, (methodPointerType)&Score_set_leaderboardID_m1256/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Score_t272_Score_set_leaderboardID_m1256_ParameterInfos/* parameters */
	, 440/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1194/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Int64_t376 (const MethodInfo* method, void* obj, void** args);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern const MethodInfo Score_get_value_m1257_MethodInfo = 
{
	"get_value"/* name */
	, (methodPointerType)&Score_get_value_m1257/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t376_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t376/* invoker_method */
	, NULL/* parameters */
	, 441/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1195/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Int64_t376_0_0_0;
static const ParameterInfo Score_t272_Score_set_value_m1258_ParameterInfos[] = 
{
	{"value", 0, 134218950, 0, &Int64_t376_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int64_t376 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern const MethodInfo Score_set_value_m1258_MethodInfo = 
{
	"set_value"/* name */
	, (methodPointerType)&Score_set_value_m1258/* method */
	, &Score_t272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int64_t376/* invoker_method */
	, Score_t272_Score_set_value_m1258_ParameterInfos/* parameters */
	, 442/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1196/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Score_t272_MethodInfos[] =
{
	&Score__ctor_m1252_MethodInfo,
	&Score__ctor_m1253_MethodInfo,
	&Score_ToString_m1254_MethodInfo,
	&Score_get_leaderboardID_m1255_MethodInfo,
	&Score_set_leaderboardID_m1256_MethodInfo,
	&Score_get_value_m1257_MethodInfo,
	&Score_set_value_m1258_MethodInfo,
	NULL
};
extern const MethodInfo Score_get_leaderboardID_m1255_MethodInfo;
extern const MethodInfo Score_set_leaderboardID_m1256_MethodInfo;
static const PropertyInfo Score_t272____leaderboardID_PropertyInfo = 
{
	&Score_t272_il2cpp_TypeInfo/* parent */
	, "leaderboardID"/* name */
	, &Score_get_leaderboardID_m1255_MethodInfo/* get */
	, &Score_set_leaderboardID_m1256_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Score_get_value_m1257_MethodInfo;
extern const MethodInfo Score_set_value_m1258_MethodInfo;
static const PropertyInfo Score_t272____value_PropertyInfo = 
{
	&Score_t272_il2cpp_TypeInfo/* parent */
	, "value"/* name */
	, &Score_get_value_m1257_MethodInfo/* get */
	, &Score_set_value_m1258_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Score_t272_PropertyInfos[] =
{
	&Score_t272____leaderboardID_PropertyInfo,
	&Score_t272____value_PropertyInfo,
	NULL
};
extern const MethodInfo Score_ToString_m1254_MethodInfo;
static const Il2CppMethodReference Score_t272_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Score_ToString_m1254_MethodInfo,
	&Score_get_leaderboardID_m1255_MethodInfo,
	&Score_set_leaderboardID_m1256_MethodInfo,
	&Score_get_value_m1257_MethodInfo,
	&Score_set_value_m1258_MethodInfo,
};
static bool Score_t272_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType IScore_t273_0_0_0;
static const Il2CppType* Score_t272_InterfacesTypeInfos[] = 
{
	&IScore_t273_0_0_0,
};
static Il2CppInterfaceOffsetPair Score_t272_InterfacesOffsets[] = 
{
	{ &IScore_t273_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Score_t272_1_0_0;
struct Score_t272;
const Il2CppTypeDefinitionMetadata Score_t272_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Score_t272_InterfacesTypeInfos/* implementedInterfaces */
	, Score_t272_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Score_t272_VTable/* vtableMethods */
	, Score_t272_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1009/* fieldStart */

};
TypeInfo Score_t272_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Score"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Score_t272_MethodInfos/* methods */
	, Score_t272_PropertyInfos/* properties */
	, NULL/* events */
	, &Score_t272_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Score_t272_0_0_0/* byval_arg */
	, &Score_t272_1_0_0/* this_arg */
	, &Score_t272_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Score_t272)/* instance_size */
	, sizeof (Score_t272)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
// Metadata Definition UnityEngine.SocialPlatforms.Impl.Leaderboard
extern TypeInfo Leaderboard_t72_il2cpp_TypeInfo;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"
extern void* RuntimeInvoker_Void_t35 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern const MethodInfo Leaderboard__ctor_m1259_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Leaderboard__ctor_m1259/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1197/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern const MethodInfo Leaderboard_ToString_m1260_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Leaderboard_ToString_m1260/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1198/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IScore_t273_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_SetLocalUserScore_m1261_ParameterInfos[] = 
{
	{"score", 0, 134218951, 0, &IScore_t273_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern const MethodInfo Leaderboard_SetLocalUserScore_m1261_MethodInfo = 
{
	"SetLocalUserScore"/* name */
	, (methodPointerType)&Leaderboard_SetLocalUserScore_m1261/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Leaderboard_t72_Leaderboard_SetLocalUserScore_m1261_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1199/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UInt32_t368_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_SetMaxRange_m1262_ParameterInfos[] = 
{
	{"maxRange", 0, 134218952, 0, &UInt32_t368_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern const MethodInfo Leaderboard_SetMaxRange_m1262_MethodInfo = 
{
	"SetMaxRange"/* name */
	, (methodPointerType)&Leaderboard_SetMaxRange_m1262/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, Leaderboard_t72_Leaderboard_SetMaxRange_m1262_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1200/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType IScoreU5BU5D_t274_0_0_0;
extern const Il2CppType IScoreU5BU5D_t274_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_SetScores_m1263_ParameterInfos[] = 
{
	{"scores", 0, 134218953, 0, &IScoreU5BU5D_t274_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern const MethodInfo Leaderboard_SetScores_m1263_MethodInfo = 
{
	"SetScores"/* name */
	, (methodPointerType)&Leaderboard_SetScores_m1263/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Leaderboard_t72_Leaderboard_SetScores_m1263_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1201/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_SetTitle_m1264_ParameterInfos[] = 
{
	{"title", 0, 134218954, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern const MethodInfo Leaderboard_SetTitle_m1264_MethodInfo = 
{
	"SetTitle"/* name */
	, (methodPointerType)&Leaderboard_SetTitle_m1264/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Leaderboard_t72_Leaderboard_SetTitle_m1264_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1202/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType StringU5BU5D_t20_0_0_0;
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern const MethodInfo Leaderboard_GetUserFilter_m1265_MethodInfo = 
{
	"GetUserFilter"/* name */
	, (methodPointerType)&Leaderboard_GetUserFilter_m1265/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t20_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1203/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern void* RuntimeInvoker_Object_t (const MethodInfo* method, void* obj, void** args);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern const MethodInfo Leaderboard_get_id_m1266_MethodInfo = 
{
	"get_id"/* name */
	, (methodPointerType)&Leaderboard_get_id_m1266/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, 447/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1204/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_set_id_m1267_ParameterInfos[] = 
{
	{"value", 0, 134218955, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern const MethodInfo Leaderboard_set_id_m1267_MethodInfo = 
{
	"set_id"/* name */
	, (methodPointerType)&Leaderboard_set_id_m1267/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, Leaderboard_t72_Leaderboard_set_id_m1267_ParameterInfos/* parameters */
	, 448/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1205/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UserScope_t281_0_0_0;
extern void* RuntimeInvoker_UserScope_t281 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern const MethodInfo Leaderboard_get_userScope_m1268_MethodInfo = 
{
	"get_userScope"/* name */
	, (methodPointerType)&Leaderboard_get_userScope_m1268/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &UserScope_t281_0_0_0/* return_type */
	, RuntimeInvoker_UserScope_t281/* invoker_method */
	, NULL/* parameters */
	, 449/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1206/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType UserScope_t281_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_set_userScope_m1269_ParameterInfos[] = 
{
	{"value", 0, 134218956, 0, &UserScope_t281_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern const MethodInfo Leaderboard_set_userScope_m1269_MethodInfo = 
{
	"set_userScope"/* name */
	, (methodPointerType)&Leaderboard_set_userScope_m1269/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, Leaderboard_t72_Leaderboard_set_userScope_m1269_ParameterInfos/* parameters */
	, 450/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1207/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Range_t275_0_0_0;
extern void* RuntimeInvoker_Range_t275 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern const MethodInfo Leaderboard_get_range_m1270_MethodInfo = 
{
	"get_range"/* name */
	, (methodPointerType)&Leaderboard_get_range_m1270/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Range_t275_0_0_0/* return_type */
	, RuntimeInvoker_Range_t275/* invoker_method */
	, NULL/* parameters */
	, 451/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1208/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType Range_t275_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_set_range_m1271_ParameterInfos[] = 
{
	{"value", 0, 134218957, 0, &Range_t275_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Range_t275 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern const MethodInfo Leaderboard_set_range_m1271_MethodInfo = 
{
	"set_range"/* name */
	, (methodPointerType)&Leaderboard_set_range_m1271/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Range_t275/* invoker_method */
	, Leaderboard_t72_Leaderboard_set_range_m1271_ParameterInfos/* parameters */
	, 452/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1209/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeScope_t282_0_0_0;
extern void* RuntimeInvoker_TimeScope_t282 (const MethodInfo* method, void* obj, void** args);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern const MethodInfo Leaderboard_get_timeScope_m1272_MethodInfo = 
{
	"get_timeScope"/* name */
	, (methodPointerType)&Leaderboard_get_timeScope_m1272/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &TimeScope_t282_0_0_0/* return_type */
	, RuntimeInvoker_TimeScope_t282/* invoker_method */
	, NULL/* parameters */
	, 453/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1210/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType TimeScope_t282_0_0_0;
static const ParameterInfo Leaderboard_t72_Leaderboard_set_timeScope_m1273_ParameterInfos[] = 
{
	{"value", 0, 134218958, 0, &TimeScope_t282_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Int32_t18 (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern const MethodInfo Leaderboard_set_timeScope_m1273_MethodInfo = 
{
	"set_timeScope"/* name */
	, (methodPointerType)&Leaderboard_set_timeScope_m1273/* method */
	, &Leaderboard_t72_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Int32_t18/* invoker_method */
	, Leaderboard_t72_Leaderboard_set_timeScope_m1273_ParameterInfos/* parameters */
	, 454/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1211/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* Leaderboard_t72_MethodInfos[] =
{
	&Leaderboard__ctor_m1259_MethodInfo,
	&Leaderboard_ToString_m1260_MethodInfo,
	&Leaderboard_SetLocalUserScore_m1261_MethodInfo,
	&Leaderboard_SetMaxRange_m1262_MethodInfo,
	&Leaderboard_SetScores_m1263_MethodInfo,
	&Leaderboard_SetTitle_m1264_MethodInfo,
	&Leaderboard_GetUserFilter_m1265_MethodInfo,
	&Leaderboard_get_id_m1266_MethodInfo,
	&Leaderboard_set_id_m1267_MethodInfo,
	&Leaderboard_get_userScope_m1268_MethodInfo,
	&Leaderboard_set_userScope_m1269_MethodInfo,
	&Leaderboard_get_range_m1270_MethodInfo,
	&Leaderboard_set_range_m1271_MethodInfo,
	&Leaderboard_get_timeScope_m1272_MethodInfo,
	&Leaderboard_set_timeScope_m1273_MethodInfo,
	NULL
};
extern const MethodInfo Leaderboard_get_id_m1266_MethodInfo;
extern const MethodInfo Leaderboard_set_id_m1267_MethodInfo;
static const PropertyInfo Leaderboard_t72____id_PropertyInfo = 
{
	&Leaderboard_t72_il2cpp_TypeInfo/* parent */
	, "id"/* name */
	, &Leaderboard_get_id_m1266_MethodInfo/* get */
	, &Leaderboard_set_id_m1267_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Leaderboard_get_userScope_m1268_MethodInfo;
extern const MethodInfo Leaderboard_set_userScope_m1269_MethodInfo;
static const PropertyInfo Leaderboard_t72____userScope_PropertyInfo = 
{
	&Leaderboard_t72_il2cpp_TypeInfo/* parent */
	, "userScope"/* name */
	, &Leaderboard_get_userScope_m1268_MethodInfo/* get */
	, &Leaderboard_set_userScope_m1269_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Leaderboard_get_range_m1270_MethodInfo;
extern const MethodInfo Leaderboard_set_range_m1271_MethodInfo;
static const PropertyInfo Leaderboard_t72____range_PropertyInfo = 
{
	&Leaderboard_t72_il2cpp_TypeInfo/* parent */
	, "range"/* name */
	, &Leaderboard_get_range_m1270_MethodInfo/* get */
	, &Leaderboard_set_range_m1271_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
extern const MethodInfo Leaderboard_get_timeScope_m1272_MethodInfo;
extern const MethodInfo Leaderboard_set_timeScope_m1273_MethodInfo;
static const PropertyInfo Leaderboard_t72____timeScope_PropertyInfo = 
{
	&Leaderboard_t72_il2cpp_TypeInfo/* parent */
	, "timeScope"/* name */
	, &Leaderboard_get_timeScope_m1272_MethodInfo/* get */
	, &Leaderboard_set_timeScope_m1273_MethodInfo/* set */
	, 0/* attrs */
	, 0/* custom_attributes_cache */

};
static const PropertyInfo* Leaderboard_t72_PropertyInfos[] =
{
	&Leaderboard_t72____id_PropertyInfo,
	&Leaderboard_t72____userScope_PropertyInfo,
	&Leaderboard_t72____range_PropertyInfo,
	&Leaderboard_t72____timeScope_PropertyInfo,
	NULL
};
extern const MethodInfo Leaderboard_ToString_m1260_MethodInfo;
static const Il2CppMethodReference Leaderboard_t72_VTable[] =
{
	&Object_Equals_m1599_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&Object_GetHashCode_m1600_MethodInfo,
	&Leaderboard_ToString_m1260_MethodInfo,
	&Leaderboard_get_id_m1266_MethodInfo,
	&Leaderboard_get_userScope_m1268_MethodInfo,
	&Leaderboard_get_range_m1270_MethodInfo,
	&Leaderboard_get_timeScope_m1272_MethodInfo,
	&Leaderboard_set_id_m1267_MethodInfo,
	&Leaderboard_set_userScope_m1269_MethodInfo,
	&Leaderboard_set_range_m1271_MethodInfo,
	&Leaderboard_set_timeScope_m1273_MethodInfo,
};
static bool Leaderboard_t72_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern const Il2CppType ILeaderboard_t315_0_0_0;
static const Il2CppType* Leaderboard_t72_InterfacesTypeInfos[] = 
{
	&ILeaderboard_t315_0_0_0,
};
static Il2CppInterfaceOffsetPair Leaderboard_t72_InterfacesOffsets[] = 
{
	{ &ILeaderboard_t315_0_0_0, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType Leaderboard_t72_0_0_0;
extern const Il2CppType Leaderboard_t72_1_0_0;
struct Leaderboard_t72;
const Il2CppTypeDefinitionMetadata Leaderboard_t72_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Leaderboard_t72_InterfacesTypeInfos/* implementedInterfaces */
	, Leaderboard_t72_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Leaderboard_t72_VTable/* vtableMethods */
	, Leaderboard_t72_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1015/* fieldStart */

};
TypeInfo Leaderboard_t72_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "Leaderboard"/* name */
	, "UnityEngine.SocialPlatforms.Impl"/* namespaze */
	, Leaderboard_t72_MethodInfos/* methods */
	, Leaderboard_t72_PropertyInfos/* properties */
	, NULL/* events */
	, &Leaderboard_t72_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &Leaderboard_t72_0_0_0/* byval_arg */
	, &Leaderboard_t72_1_0_0/* this_arg */
	, &Leaderboard_t72_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Leaderboard_t72)/* instance_size */
	, sizeof (Leaderboard_t72)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 15/* method_count */
	, 4/* property_count */
	, 10/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
// Metadata Definition UnityEngine.SendMouseEvents/HitInfo
extern TypeInfo HitInfo_t276_il2cpp_TypeInfo;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"
extern const Il2CppType String_t_0_0_0;
static const ParameterInfo HitInfo_t276_HitInfo_SendMessage_m1274_ParameterInfos[] = 
{
	{"name", 0, 134218963, 0, &String_t_0_0_0},
};
extern void* RuntimeInvoker_Void_t35_Object_t (const MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern const MethodInfo HitInfo_SendMessage_m1274_MethodInfo = 
{
	"SendMessage"/* name */
	, (methodPointerType)&HitInfo_SendMessage_m1274/* method */
	, &HitInfo_t276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t35_0_0_0/* return_type */
	, RuntimeInvoker_Void_t35_Object_t/* invoker_method */
	, HitInfo_t276_HitInfo_SendMessage_m1274_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1215/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HitInfo_t276_0_0_0;
extern const Il2CppType HitInfo_t276_0_0_0;
extern const Il2CppType HitInfo_t276_0_0_0;
static const ParameterInfo HitInfo_t276_HitInfo_Compare_m1275_ParameterInfos[] = 
{
	{"lhs", 0, 134218964, 0, &HitInfo_t276_0_0_0},
	{"rhs", 1, 134218965, 0, &HitInfo_t276_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_HitInfo_t276_HitInfo_t276 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern const MethodInfo HitInfo_Compare_m1275_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&HitInfo_Compare_m1275/* method */
	, &HitInfo_t276_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_HitInfo_t276_HitInfo_t276/* invoker_method */
	, HitInfo_t276_HitInfo_Compare_m1275_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1216/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern const Il2CppType HitInfo_t276_0_0_0;
static const ParameterInfo HitInfo_t276_HitInfo_op_Implicit_m1276_ParameterInfos[] = 
{
	{"exists", 0, 134218966, 0, &HitInfo_t276_0_0_0},
};
extern void* RuntimeInvoker_Boolean_t36_HitInfo_t276 (const MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern const MethodInfo HitInfo_op_Implicit_m1276_MethodInfo = 
{
	"op_Implicit"/* name */
	, (methodPointerType)&HitInfo_op_Implicit_m1276/* method */
	, &HitInfo_t276_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t36_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t36_HitInfo_t276/* invoker_method */
	, HitInfo_t276_HitInfo_op_Implicit_m1276_ParameterInfos/* parameters */
	, 0/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 1217/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static const MethodInfo* HitInfo_t276_MethodInfos[] =
{
	&HitInfo_SendMessage_m1274_MethodInfo,
	&HitInfo_Compare_m1275_MethodInfo,
	&HitInfo_op_Implicit_m1276_MethodInfo,
	NULL
};
static const Il2CppMethodReference HitInfo_t276_VTable[] =
{
	&ValueType_Equals_m116_MethodInfo,
	&Object_Finalize_m91_MethodInfo,
	&ValueType_GetHashCode_m117_MethodInfo,
	&ValueType_ToString_m118_MethodInfo,
};
static bool HitInfo_t276_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern const Il2CppType HitInfo_t276_1_0_0;
extern TypeInfo SendMouseEvents_t279_il2cpp_TypeInfo;
extern const Il2CppType SendMouseEvents_t279_0_0_0;
const Il2CppTypeDefinitionMetadata HitInfo_t276_DefinitionMetadata = 
{
	&SendMouseEvents_t279_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t43_0_0_0/* parent */
	, HitInfo_t276_VTable/* vtableMethods */
	, HitInfo_t276_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */
	, 1025/* fieldStart */

};
TypeInfo HitInfo_t276_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "HitInfo"/* name */
	, ""/* namespaze */
	, HitInfo_t276_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* events */
	, &HitInfo_t276_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, 0/* custom_attributes_cache */
	, &HitInfo_t276_0_0_0/* byval_arg */
	, &HitInfo_t276_1_0_0/* this_arg */
	, &HitInfo_t276_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (HitInfo_t276)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (HitInfo_t276)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
