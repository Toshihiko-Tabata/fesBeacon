#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// iBeacon
#include "AssemblyU2DCSharp_iBeacon.h"
#ifndef _MSC_VER
#else
#endif
// iBeacon
#include "AssemblyU2DCSharp_iBeaconMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"


// System.Void iBeacon::.ctor()
extern "C" void iBeacon__ctor_m0 (iBeacon_t1 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m49(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeacon::InitBeaconServer(System.String,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" {void DEFAULT_CALL InitBeaconServer(char*, char*, int32_t, int32_t, int32_t);}
extern "C" void iBeacon_InitBeaconServer_m1 (Object_t * __this /* static, unused */, String_t* ___uuid, String_t* ___region, bool ___shouldLog, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, int32_t, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)InitBeaconServer;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'InitBeaconServer'"));
		}
	}

	// Marshaling of parameter '___uuid' to native representation
	char* ____uuid_marshaled = { 0 };
	____uuid_marshaled = il2cpp_codegen_marshal_string(___uuid);

	// Marshaling of parameter '___region' to native representation
	char* ____region_marshaled = { 0 };
	____region_marshaled = il2cpp_codegen_marshal_string(___region);

	// Marshaling of parameter '___shouldLog' to native representation

	// Marshaling of parameter '___major' to native representation

	// Marshaling of parameter '___minor' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____uuid_marshaled, ____region_marshaled, ___shouldLog, ___major, ___minor);

	// Marshaling cleanup of parameter '___uuid' native representation
	il2cpp_codegen_marshal_free(____uuid_marshaled);
	____uuid_marshaled = NULL;

	// Marshaling cleanup of parameter '___region' native representation
	il2cpp_codegen_marshal_free(____region_marshaled);
	____region_marshaled = NULL;

	// Marshaling cleanup of parameter '___shouldLog' native representation

	// Marshaling cleanup of parameter '___major' native representation

	// Marshaling cleanup of parameter '___minor' native representation

}
// System.Void iBeacon::Transmit(System.Boolean)
extern "C" {void DEFAULT_CALL Transmit(int32_t);}
extern "C" void iBeacon_Transmit_m2 (Object_t * __this /* static, unused */, bool ___transmit, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)Transmit;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Transmit'"));
		}
	}

	// Marshaling of parameter '___transmit' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___transmit);

	// Marshaling cleanup of parameter '___transmit' native representation

}
// System.Void iBeacon::Awake()
extern TypeInfo* iBeacon_t1_il2cpp_TypeInfo_var;
extern "C" void iBeacon_Awake_m3 (iBeacon_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeacon_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		((iBeacon_t1_StaticFields*)iBeacon_t1_il2cpp_TypeInfo_var->static_fields)->___m_instance_7 = __this;
		return;
	}
}
// System.Void iBeacon::Start()
extern "C" void iBeacon_Start_m4 (iBeacon_t1 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void iBeacon::Init()
extern TypeInfo* iBeacon_t1_il2cpp_TypeInfo_var;
extern "C" void iBeacon_Init_m5 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeacon_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		iBeacon_t1 * L_0 = ((iBeacon_t1_StaticFields*)iBeacon_t1_il2cpp_TypeInfo_var->static_fields)->___m_instance_7;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___m_uuid_3);
		iBeacon_t1 * L_2 = ((iBeacon_t1_StaticFields*)iBeacon_t1_il2cpp_TypeInfo_var->static_fields)->___m_instance_7;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___m_identifier_4);
		iBeacon_t1 * L_4 = ((iBeacon_t1_StaticFields*)iBeacon_t1_il2cpp_TypeInfo_var->static_fields)->___m_instance_7;
		NullCheck(L_4);
		int32_t L_5 = (L_4->___m_major_5);
		iBeacon_t1 * L_6 = ((iBeacon_t1_StaticFields*)iBeacon_t1_il2cpp_TypeInfo_var->static_fields)->___m_instance_7;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___m_minor_6);
		iBeacon_InitBeaconServer_m1(NULL /*static, unused*/, L_1, L_3, 1, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeacon::Update()
extern TypeInfo* Guid_t16_il2cpp_TypeInfo_var;
extern "C" void iBeacon_Update_m6 (iBeacon_t1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Guid_t16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	Guid_t16  V_0 = {0};
	{
		bool L_0 = Application_get_isEditor_m50(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		bool L_1 = (__this->___m_generate_2);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		__this->___m_generate_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t16_il2cpp_TypeInfo_var);
		Guid_t16  L_2 = Guid_NewGuid_m51(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = Guid_ToString_m52((&V_0), /*hidden argument*/NULL);
		__this->___m_uuid_3 = L_3;
	}

IL_002f:
	{
		return;
	}
}
// System.Void iBeacon::Transmit()
extern "C" void iBeacon_Transmit_m7 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		iBeacon_Transmit_m2(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeacon::StopTransmit()
extern "C" void iBeacon_StopTransmit_m8 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		iBeacon_Transmit_m2(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// iBeaconExample
#include "AssemblyU2DCSharp_iBeaconExample.h"
#ifndef _MSC_VER
#else
#endif
// iBeaconExample
#include "AssemblyU2DCSharp_iBeaconExampleMethodDeclarations.h"



// System.Void iBeaconExample::.ctor()
extern "C" void iBeaconExample__ctor_m9 (iBeaconExample_t3 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m49(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconExample::Start()
extern "C" void iBeaconExample_Start_m10 (iBeaconExample_t3 * __this, const MethodInfo* method)
{
	{
		iBeacon_Init_m5(NULL /*static, unused*/, /*hidden argument*/NULL);
		iBeacon_Transmit_m7(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconExample::Update()
extern "C" void iBeaconExample_Update_m11 (iBeaconExample_t3 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// BeaconRange
#include "AssemblyU2DCSharp_BeaconRange.h"
#ifndef _MSC_VER
#else
#endif
// BeaconRange
#include "AssemblyU2DCSharp_BeaconRangeMethodDeclarations.h"



// Beacon
#include "AssemblyU2DCSharp_Beacon.h"
#ifndef _MSC_VER
#else
#endif
// Beacon
#include "AssemblyU2DCSharp_BeaconMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
#include "mscorlib_ArrayTypes.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void Beacon::.ctor(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Double)
extern "C" void Beacon__ctor_m12 (Beacon_t5 * __this, String_t* ____uuid, int32_t ____major, int32_t ____minor, int32_t ____range, int32_t ____strength, double ____accuracy, const MethodInfo* method)
{
	{
		String_t* L_0 = ____uuid;
		__this->___UUID_0 = L_0;
		int32_t L_1 = ____major;
		__this->___major_1 = L_1;
		int32_t L_2 = ____minor;
		__this->___minor_2 = L_2;
		int32_t L_3 = ____range;
		__this->___range_3 = L_3;
		int32_t L_4 = ____strength;
		__this->___strength_4 = L_4;
		double L_5 = ____accuracy;
		__this->___accuracy_5 = L_5;
		return;
	}
}
// System.String Beacon::ToString()
extern TypeInfo* ObjectU5BU5D_t17_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t18_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconRange_t4_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Beacon_ToString_m13 (Beacon_t5 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t17_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		BeaconRange_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t17* L_0 = ((ObjectU5BU5D_t17*)SZArrayNew(ObjectU5BU5D_t17_il2cpp_TypeInfo_var, 8));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral1;
		ObjectU5BU5D_t17* L_1 = L_0;
		String_t* L_2 = (__this->___UUID_0);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t17* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral2;
		ObjectU5BU5D_t17* L_4 = L_3;
		int32_t L_5 = (__this->___major_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t18_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_7;
		ObjectU5BU5D_t17* L_8 = L_4;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)(String_t*) &_stringLiteral3;
		ObjectU5BU5D_t17* L_9 = L_8;
		int32_t L_10 = (__this->___minor_2);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t18_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 5);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t17* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral4;
		ObjectU5BU5D_t17* L_14 = L_13;
		int32_t L_15 = (__this->___range_3);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(BeaconRange_t4_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_17);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_18);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_18;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m53(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		return L_19;
	}
}
// Conversion methods for marshalling of: Beacon
void Beacon_t5_marshal(const Beacon_t5& unmarshaled, Beacon_t5_marshaled& marshaled)
{
	marshaled.___UUID_0 = il2cpp_codegen_marshal_string(unmarshaled.___UUID_0);
	marshaled.___major_1 = unmarshaled.___major_1;
	marshaled.___minor_2 = unmarshaled.___minor_2;
	marshaled.___range_3 = unmarshaled.___range_3;
	marshaled.___strength_4 = unmarshaled.___strength_4;
	marshaled.___accuracy_5 = unmarshaled.___accuracy_5;
}
void Beacon_t5_marshal_back(const Beacon_t5_marshaled& marshaled, Beacon_t5& unmarshaled)
{
	unmarshaled.___UUID_0 = il2cpp_codegen_marshal_string_result(marshaled.___UUID_0);
	unmarshaled.___major_1 = marshaled.___major_1;
	unmarshaled.___minor_2 = marshaled.___minor_2;
	unmarshaled.___range_3 = marshaled.___range_3;
	unmarshaled.___strength_4 = marshaled.___strength_4;
	unmarshaled.___accuracy_5 = marshaled.___accuracy_5;
}
// Conversion method for clean up from marshalling of: Beacon
void Beacon_t5_marshal_cleanup(Beacon_t5_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___UUID_0);
	marshaled.___UUID_0 = NULL;
}
// iBeaconReceiver/BeaconRangeChanged
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconRangeChanged.h"
#ifndef _MSC_VER
#else
#endif
// iBeaconReceiver/BeaconRangeChanged
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconRangeChangedMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.List`1<Beacon>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void iBeaconReceiver/BeaconRangeChanged::.ctor(System.Object,System.IntPtr)
extern "C" void BeaconRangeChanged__ctor_m14 (BeaconRangeChanged_t9 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void iBeaconReceiver/BeaconRangeChanged::Invoke(System.Collections.Generic.List`1<Beacon>)
extern "C" void BeaconRangeChanged_Invoke_m15 (BeaconRangeChanged_t9 * __this, List_1_t6 * ___beacons, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BeaconRangeChanged_Invoke_m15((BeaconRangeChanged_t9 *)__this->___prev_9,___beacons, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, List_1_t6 * ___beacons, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___beacons,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, List_1_t6 * ___beacons, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___beacons,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___beacons,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult iBeaconReceiver/BeaconRangeChanged::BeginInvoke(System.Collections.Generic.List`1<Beacon>,System.AsyncCallback,System.Object)
extern "C" Object_t * BeaconRangeChanged_BeginInvoke_m16 (BeaconRangeChanged_t9 * __this, List_1_t6 * ___beacons, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___beacons;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void iBeaconReceiver/BeaconRangeChanged::EndInvoke(System.IAsyncResult)
extern "C" void BeaconRangeChanged_EndInvoke_m17 (BeaconRangeChanged_t9 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// iBeaconReceiver/BeaconArrived
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconArrived.h"
#ifndef _MSC_VER
#else
#endif
// iBeaconReceiver/BeaconArrived
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconArrivedMethodDeclarations.h"



// System.Void iBeaconReceiver/BeaconArrived::.ctor(System.Object,System.IntPtr)
extern "C" void BeaconArrived__ctor_m18 (BeaconArrived_t11 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void iBeaconReceiver/BeaconArrived::Invoke(Beacon)
extern "C" void BeaconArrived_Invoke_m19 (BeaconArrived_t11 * __this, Beacon_t5  ___beacon, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BeaconArrived_Invoke_m19((BeaconArrived_t11 *)__this->___prev_9,___beacon, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Beacon_t5  ___beacon, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___beacon,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Beacon_t5  ___beacon, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___beacon,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_BeaconArrived_t11(Il2CppObject* delegate, Beacon_t5  ___beacon)
{
	typedef void (STDCALL *native_function_ptr_type)(Beacon_t5_marshaled);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___beacon' to native representation
	Beacon_t5_marshaled ____beacon_marshaled = { 0 };
	Beacon_t5_marshal(___beacon, ____beacon_marshaled);

	// Native function invocation
	_il2cpp_pinvoke_func(____beacon_marshaled);

	// Marshaling cleanup of parameter '___beacon' native representation
	Beacon_t5_marshal_cleanup(____beacon_marshaled);

}
// System.IAsyncResult iBeaconReceiver/BeaconArrived::BeginInvoke(Beacon,System.AsyncCallback,System.Object)
extern TypeInfo* Beacon_t5_il2cpp_TypeInfo_var;
extern "C" Object_t * BeaconArrived_BeginInvoke_m20 (BeaconArrived_t11 * __this, Beacon_t5  ___beacon, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Beacon_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Beacon_t5_il2cpp_TypeInfo_var, &___beacon);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void iBeaconReceiver/BeaconArrived::EndInvoke(System.IAsyncResult)
extern "C" void BeaconArrived_EndInvoke_m21 (BeaconArrived_t11 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// iBeaconReceiver/BeaconOutOfRange
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconOutOfRange.h"
#ifndef _MSC_VER
#else
#endif
// iBeaconReceiver/BeaconOutOfRange
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconOutOfRangeMethodDeclarations.h"



// System.Void iBeaconReceiver/BeaconOutOfRange::.ctor(System.Object,System.IntPtr)
extern "C" void BeaconOutOfRange__ctor_m22 (BeaconOutOfRange_t12 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void iBeaconReceiver/BeaconOutOfRange::Invoke(Beacon)
extern "C" void BeaconOutOfRange_Invoke_m23 (BeaconOutOfRange_t12 * __this, Beacon_t5  ___beacon, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BeaconOutOfRange_Invoke_m23((BeaconOutOfRange_t12 *)__this->___prev_9,___beacon, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Beacon_t5  ___beacon, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___beacon,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Beacon_t5  ___beacon, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___beacon,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_BeaconOutOfRange_t12(Il2CppObject* delegate, Beacon_t5  ___beacon)
{
	typedef void (STDCALL *native_function_ptr_type)(Beacon_t5_marshaled);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___beacon' to native representation
	Beacon_t5_marshaled ____beacon_marshaled = { 0 };
	Beacon_t5_marshal(___beacon, ____beacon_marshaled);

	// Native function invocation
	_il2cpp_pinvoke_func(____beacon_marshaled);

	// Marshaling cleanup of parameter '___beacon' native representation
	Beacon_t5_marshal_cleanup(____beacon_marshaled);

}
// System.IAsyncResult iBeaconReceiver/BeaconOutOfRange::BeginInvoke(Beacon,System.AsyncCallback,System.Object)
extern TypeInfo* Beacon_t5_il2cpp_TypeInfo_var;
extern "C" Object_t * BeaconOutOfRange_BeginInvoke_m24 (BeaconOutOfRange_t12 * __this, Beacon_t5  ___beacon, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Beacon_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Beacon_t5_il2cpp_TypeInfo_var, &___beacon);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void iBeaconReceiver/BeaconOutOfRange::EndInvoke(System.IAsyncResult)
extern "C" void BeaconOutOfRange_EndInvoke_m25 (BeaconOutOfRange_t12 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// iBeaconReceiver
#include "AssemblyU2DCSharp_iBeaconReceiver.h"
#ifndef _MSC_VER
#else
#endif
// iBeaconReceiver
#include "AssemblyU2DCSharp_iBeaconReceiverMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Collections.Generic.List`1/Enumerator<Beacon>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.Collections.Generic.List`1<Beacon>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Beacon>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_genMethodDeclarations.h"


// System.Void iBeaconReceiver::.ctor()
extern "C" void iBeaconReceiver__ctor_m26 (iBeaconReceiver_t13 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m49(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiver::add_BeaconRangeChangedEvent(iBeaconReceiver/BeaconRangeChanged)
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconRangeChanged_t9_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_add_BeaconRangeChangedEvent_m27 (Object_t * __this /* static, unused */, BeaconRangeChanged_t9 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		BeaconRangeChanged_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		BeaconRangeChanged_t9 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconRangeChangedEvent_6;
		BeaconRangeChanged_t9 * L_1 = ___value;
		Delegate_t19 * L_2 = Delegate_Combine_m54(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconRangeChangedEvent_6 = ((BeaconRangeChanged_t9 *)Castclass(L_2, BeaconRangeChanged_t9_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void iBeaconReceiver::remove_BeaconRangeChangedEvent(iBeaconReceiver/BeaconRangeChanged)
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconRangeChanged_t9_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_remove_BeaconRangeChangedEvent_m28 (Object_t * __this /* static, unused */, BeaconRangeChanged_t9 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		BeaconRangeChanged_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		BeaconRangeChanged_t9 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconRangeChangedEvent_6;
		BeaconRangeChanged_t9 * L_1 = ___value;
		Delegate_t19 * L_2 = Delegate_Remove_m55(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconRangeChangedEvent_6 = ((BeaconRangeChanged_t9 *)Castclass(L_2, BeaconRangeChanged_t9_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void iBeaconReceiver::add_BeaconArrivedEvent(iBeaconReceiver/BeaconArrived)
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconArrived_t11_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_add_BeaconArrivedEvent_m29 (Object_t * __this /* static, unused */, BeaconArrived_t11 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		BeaconArrived_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		BeaconArrived_t11 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconArrivedEvent_7;
		BeaconArrived_t11 * L_1 = ___value;
		Delegate_t19 * L_2 = Delegate_Combine_m54(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconArrivedEvent_7 = ((BeaconArrived_t11 *)Castclass(L_2, BeaconArrived_t11_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void iBeaconReceiver::remove_BeaconArrivedEvent(iBeaconReceiver/BeaconArrived)
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconArrived_t11_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_remove_BeaconArrivedEvent_m30 (Object_t * __this /* static, unused */, BeaconArrived_t11 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		BeaconArrived_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		BeaconArrived_t11 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconArrivedEvent_7;
		BeaconArrived_t11 * L_1 = ___value;
		Delegate_t19 * L_2 = Delegate_Remove_m55(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconArrivedEvent_7 = ((BeaconArrived_t11 *)Castclass(L_2, BeaconArrived_t11_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void iBeaconReceiver::add_BeaconOutOfRangeEvent(iBeaconReceiver/BeaconOutOfRange)
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconOutOfRange_t12_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_add_BeaconOutOfRangeEvent_m31 (Object_t * __this /* static, unused */, BeaconOutOfRange_t12 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		BeaconOutOfRange_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		BeaconOutOfRange_t12 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconOutOfRangeEvent_8;
		BeaconOutOfRange_t12 * L_1 = ___value;
		Delegate_t19 * L_2 = Delegate_Combine_m54(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconOutOfRangeEvent_8 = ((BeaconOutOfRange_t12 *)Castclass(L_2, BeaconOutOfRange_t12_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void iBeaconReceiver::remove_BeaconOutOfRangeEvent(iBeaconReceiver/BeaconOutOfRange)
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconOutOfRange_t12_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_remove_BeaconOutOfRangeEvent_m32 (Object_t * __this /* static, unused */, BeaconOutOfRange_t12 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		BeaconOutOfRange_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		BeaconOutOfRange_t12 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconOutOfRangeEvent_8;
		BeaconOutOfRange_t12 * L_1 = ___value;
		Delegate_t19 * L_2 = Delegate_Remove_m55(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconOutOfRangeEvent_8 = ((BeaconOutOfRange_t12 *)Castclass(L_2, BeaconOutOfRange_t12_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void iBeaconReceiver::Awake()
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_Awake_m33 (iBeaconReceiver_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___m_instance_4 = __this;
		return;
	}
}
// System.Void iBeaconReceiver::InitReceiver(System.String,System.String,System.Boolean)
extern "C" {void DEFAULT_CALL InitReceiver(char*, char*, int32_t);}
extern "C" void iBeaconReceiver_InitReceiver_m34 (Object_t * __this /* static, unused */, String_t* ___uuid, String_t* ___regionIdentifier, bool ___shouldLog, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)InitReceiver;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'InitReceiver'"));
		}
	}

	// Marshaling of parameter '___uuid' to native representation
	char* ____uuid_marshaled = { 0 };
	____uuid_marshaled = il2cpp_codegen_marshal_string(___uuid);

	// Marshaling of parameter '___regionIdentifier' to native representation
	char* ____regionIdentifier_marshaled = { 0 };
	____regionIdentifier_marshaled = il2cpp_codegen_marshal_string(___regionIdentifier);

	// Marshaling of parameter '___shouldLog' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____uuid_marshaled, ____regionIdentifier_marshaled, ___shouldLog);

	// Marshaling cleanup of parameter '___uuid' native representation
	il2cpp_codegen_marshal_free(____uuid_marshaled);
	____uuid_marshaled = NULL;

	// Marshaling cleanup of parameter '___regionIdentifier' native representation
	il2cpp_codegen_marshal_free(____regionIdentifier_marshaled);
	____regionIdentifier_marshaled = NULL;

	// Marshaling cleanup of parameter '___shouldLog' native representation

}
// System.Void iBeaconReceiver::StopIOSScan()
extern "C" {void DEFAULT_CALL StopIOSScan();}
extern "C" void iBeaconReceiver_StopIOSScan_m35 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)StopIOSScan;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'StopIOSScan'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void iBeaconReceiver::Start()
extern TypeInfo* List_1_t6_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m56_MethodInfo_var;
extern "C" void iBeaconReceiver_Start_m36 (iBeaconReceiver_t13 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		List_1__ctor_m56_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t6 * L_0 = (List_1_t6 *)il2cpp_codegen_object_new (List_1_t6_il2cpp_TypeInfo_var);
		List_1__ctor_m56(L_0, /*hidden argument*/List_1__ctor_m56_MethodInfo_var);
		__this->___m_beacons_5 = L_0;
		return;
	}
}
// System.Void iBeaconReceiver::Init()
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_Init_m37 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		iBeaconReceiver_t13 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___m_instance_4;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___uuid_2);
		iBeaconReceiver_t13 * L_2 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___m_instance_4;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___region_3);
		iBeaconReceiver_InitReceiver_m34(NULL /*static, unused*/, L_1, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiver::Stop()
extern "C" void iBeaconReceiver_Stop_m38 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		iBeaconReceiver_Stop_m38(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiver::Scan()
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiver_Scan_m39 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		iBeaconReceiver_t13 * L_0 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___m_instance_4;
		NullCheck(L_0);
		String_t* L_1 = (L_0->___uuid_2);
		iBeaconReceiver_t13 * L_2 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___m_instance_4;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___region_3);
		iBeaconReceiver_InitReceiver_m34(NULL /*static, unused*/, L_1, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiver::RangeBeacons(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t24_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t22_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t25_il2cpp_TypeInfo_var;
extern TypeInfo* iBeaconReceiver_t13_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m61_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m64_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m65_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m66_MethodInfo_var;
extern "C" void iBeaconReceiver_RangeBeacons_m40 (iBeaconReceiver_t13 * __this, String_t* ___beacons, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		CharU5BU5D_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		List_1_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Enumerator_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		IDisposable_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		iBeaconReceiver_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1__ctor_m61_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		List_1_GetEnumerator_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Enumerator_get_Current_m65_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Enumerator_MoveNext_m66_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t20* V_1 = {0};
	List_1_t21 * V_2 = {0};
	String_t* V_3 = {0};
	StringU5BU5D_t20* V_4 = {0};
	int32_t V_5 = 0;
	StringU5BU5D_t20* V_6 = {0};
	String_t* V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	double V_12 = 0.0;
	Beacon_t5  V_13 = {0};
	int32_t V_14 = 0;
	bool V_15 = false;
	Beacon_t5  V_16 = {0};
	Enumerator_t22  V_17 = {0};
	int32_t V_18 = 0;
	Beacon_t5  V_19 = {0};
	Exception_t23 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t23 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___beacons;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m57(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_01e8;
		}
	}
	{
		String_t* L_2 = ___beacons;
		String_t* L_3 = ___beacons;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m58(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_5 = String_Remove_m59(L_2, ((int32_t)((int32_t)L_4-(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		CharU5BU5D_t24* L_7 = ((CharU5BU5D_t24*)SZArrayNew(CharU5BU5D_t24_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_7, 0)) = (uint16_t)((int32_t)59);
		NullCheck(L_6);
		StringU5BU5D_t20* L_8 = String_Split_m60(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		List_1_t21 * L_9 = (List_1_t21 *)il2cpp_codegen_object_new (List_1_t21_il2cpp_TypeInfo_var);
		List_1__ctor_m61(L_9, /*hidden argument*/List_1__ctor_m61_MethodInfo_var);
		V_2 = L_9;
		StringU5BU5D_t20* L_10 = V_1;
		V_4 = L_10;
		V_5 = 0;
		goto IL_0154;
	}

IL_003d:
	{
		StringU5BU5D_t20* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_11, L_13));
		String_t* L_14 = V_3;
		CharU5BU5D_t24* L_15 = ((CharU5BU5D_t24*)SZArrayNew(CharU5BU5D_t24_il2cpp_TypeInfo_var, 1));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_14);
		StringU5BU5D_t20* L_16 = String_Split_m60(L_14, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		StringU5BU5D_t20* L_17 = V_6;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 0);
		int32_t L_18 = 0;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_18));
		List_1_t21 * L_19 = V_2;
		String_t* L_20 = V_7;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(19 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_19, L_20);
		StringU5BU5D_t20* L_21 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		int32_t L_22 = 1;
		int32_t L_23 = Int32_Parse_m62(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_21, L_22)), /*hidden argument*/NULL);
		V_8 = L_23;
		StringU5BU5D_t20* L_24 = V_6;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		int32_t L_25 = 2;
		int32_t L_26 = Int32_Parse_m62(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_24, L_25)), /*hidden argument*/NULL);
		V_9 = L_26;
		StringU5BU5D_t20* L_27 = V_6;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 3);
		int32_t L_28 = 3;
		int32_t L_29 = Int32_Parse_m62(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_27, L_28)), /*hidden argument*/NULL);
		V_10 = L_29;
		StringU5BU5D_t20* L_30 = V_6;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 4);
		int32_t L_31 = 4;
		int32_t L_32 = Int32_Parse_m62(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_30, L_31)), /*hidden argument*/NULL);
		V_11 = L_32;
		StringU5BU5D_t20* L_33 = V_6;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 5);
		int32_t L_34 = 5;
		double L_35 = Double_Parse_m63(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_34)), /*hidden argument*/NULL);
		V_12 = L_35;
		String_t* L_36 = V_7;
		int32_t L_37 = V_8;
		int32_t L_38 = V_9;
		int32_t L_39 = V_10;
		int32_t L_40 = V_11;
		double L_41 = V_12;
		Beacon__ctor_m12((&V_13), L_36, L_37, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		V_14 = 0;
		V_15 = 0;
		List_1_t6 * L_42 = (__this->___m_beacons_5);
		NullCheck(L_42);
		Enumerator_t22  L_43 = List_1_GetEnumerator_m64(L_42, /*hidden argument*/List_1_GetEnumerator_m64_MethodInfo_var);
		V_17 = L_43;
	}

IL_00c1:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f4;
		}

IL_00c6:
		{
			Beacon_t5  L_44 = Enumerator_get_Current_m65((&V_17), /*hidden argument*/Enumerator_get_Current_m65_MethodInfo_var);
			V_16 = L_44;
			String_t* L_45 = ((&V_16)->___UUID_0);
			String_t* L_46 = V_7;
			NullCheck(L_45);
			bool L_47 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_45, L_46);
			if (!L_47)
			{
				goto IL_00f4;
			}
		}

IL_00e2:
		{
			List_1_t6 * L_48 = (__this->___m_beacons_5);
			Beacon_t5  L_49 = V_16;
			NullCheck(L_48);
			int32_t L_50 = (int32_t)VirtFuncInvoker1< int32_t, Beacon_t5  >::Invoke(25 /* System.Int32 System.Collections.Generic.List`1<Beacon>::IndexOf(!0) */, L_48, L_49);
			V_14 = L_50;
			V_15 = 1;
		}

IL_00f4:
		{
			bool L_51 = Enumerator_MoveNext_m66((&V_17), /*hidden argument*/Enumerator_MoveNext_m66_MethodInfo_var);
			if (L_51)
			{
				goto IL_00c6;
			}
		}

IL_0100:
		{
			IL2CPP_LEAVE(0x112, FINALLY_0105);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t23 *)e.ex;
		goto FINALLY_0105;
	}

FINALLY_0105:
	{ // begin finally (depth: 1)
		Enumerator_t22  L_52 = V_17;
		Enumerator_t22  L_53 = L_52;
		Object_t * L_54 = Box(Enumerator_t22_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_54);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t25_il2cpp_TypeInfo_var, L_54);
		IL2CPP_END_FINALLY(261)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(261)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t23 *)
	}

IL_0112:
	{
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_012b;
		}
	}
	{
		List_1_t6 * L_56 = (__this->___m_beacons_5);
		int32_t L_57 = V_14;
		NullCheck(L_56);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<Beacon>::RemoveAt(System.Int32) */, L_56, L_57);
		goto IL_0141;
	}

IL_012b:
	{
		BeaconArrived_t11 * L_58 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconArrivedEvent_7;
		if (!L_58)
		{
			goto IL_0141;
		}
	}
	{
		BeaconArrived_t11 * L_59 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconArrivedEvent_7;
		Beacon_t5  L_60 = V_13;
		NullCheck(L_59);
		VirtActionInvoker1< Beacon_t5  >::Invoke(10 /* System.Void iBeaconReceiver/BeaconArrived::Invoke(Beacon) */, L_59, L_60);
	}

IL_0141:
	{
		List_1_t6 * L_61 = (__this->___m_beacons_5);
		Beacon_t5  L_62 = V_13;
		NullCheck(L_61);
		VirtActionInvoker1< Beacon_t5  >::Invoke(19 /* System.Void System.Collections.Generic.List`1<Beacon>::Add(!0) */, L_61, L_62);
		int32_t L_63 = V_5;
		V_5 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_0154:
	{
		int32_t L_64 = V_5;
		StringU5BU5D_t20* L_65 = V_4;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)(((int32_t)(((Array_t *)L_65)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		V_18 = 0;
		goto IL_01bc;
	}

IL_0167:
	{
		List_1_t21 * L_66 = V_2;
		List_1_t6 * L_67 = (__this->___m_beacons_5);
		int32_t L_68 = V_18;
		NullCheck(L_67);
		Beacon_t5  L_69 = (Beacon_t5 )VirtFuncInvoker1< Beacon_t5 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Beacon>::get_Item(System.Int32) */, L_67, L_68);
		V_19 = L_69;
		String_t* L_70 = ((&V_19)->___UUID_0);
		NullCheck(L_66);
		bool L_71 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0) */, L_66, L_70);
		if (L_71)
		{
			goto IL_01b6;
		}
	}
	{
		BeaconOutOfRange_t12 * L_72 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconOutOfRangeEvent_8;
		if (!L_72)
		{
			goto IL_01a9;
		}
	}
	{
		BeaconOutOfRange_t12 * L_73 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconOutOfRangeEvent_8;
		List_1_t6 * L_74 = (__this->___m_beacons_5);
		int32_t L_75 = V_18;
		NullCheck(L_74);
		Beacon_t5  L_76 = (Beacon_t5 )VirtFuncInvoker1< Beacon_t5 , int32_t >::Invoke(28 /* !0 System.Collections.Generic.List`1<Beacon>::get_Item(System.Int32) */, L_74, L_75);
		NullCheck(L_73);
		VirtActionInvoker1< Beacon_t5  >::Invoke(10 /* System.Void iBeaconReceiver/BeaconOutOfRange::Invoke(Beacon) */, L_73, L_76);
	}

IL_01a9:
	{
		List_1_t6 * L_77 = (__this->___m_beacons_5);
		int32_t L_78 = V_18;
		NullCheck(L_77);
		VirtActionInvoker1< int32_t >::Invoke(27 /* System.Void System.Collections.Generic.List`1<Beacon>::RemoveAt(System.Int32) */, L_77, L_78);
	}

IL_01b6:
	{
		int32_t L_79 = V_18;
		V_18 = ((int32_t)((int32_t)L_79+(int32_t)1));
	}

IL_01bc:
	{
		int32_t L_80 = V_18;
		List_1_t6 * L_81 = (__this->___m_beacons_5);
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<Beacon>::get_Count() */, L_81);
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_0167;
		}
	}
	{
		BeaconRangeChanged_t9 * L_83 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconRangeChangedEvent_6;
		if (!L_83)
		{
			goto IL_01e8;
		}
	}
	{
		BeaconRangeChanged_t9 * L_84 = ((iBeaconReceiver_t13_StaticFields*)iBeaconReceiver_t13_il2cpp_TypeInfo_var->static_fields)->___BeaconRangeChangedEvent_6;
		List_1_t6 * L_85 = (__this->___m_beacons_5);
		NullCheck(L_84);
		VirtActionInvoker1< List_1_t6 * >::Invoke(10 /* System.Void iBeaconReceiver/BeaconRangeChanged::Invoke(System.Collections.Generic.List`1<Beacon>) */, L_84, L_85);
	}

IL_01e8:
	{
		return;
	}
}
// iBeaconReceiverExample
#include "AssemblyU2DCSharp_iBeaconReceiverExample.h"
#ifndef _MSC_VER
#else
#endif
// iBeaconReceiverExample
#include "AssemblyU2DCSharp_iBeaconReceiverExampleMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"


// System.Void iBeaconReceiverExample::.ctor()
extern TypeInfo* List_1_t6_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m56_MethodInfo_var;
extern "C" void iBeaconReceiverExample__ctor_m41 (iBeaconReceiverExample_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		List_1__ctor_m56_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t6 * L_0 = (List_1_t6 *)il2cpp_codegen_object_new (List_1_t6_il2cpp_TypeInfo_var);
		List_1__ctor_m56(L_0, /*hidden argument*/List_1__ctor_m56_MethodInfo_var);
		__this->___mybeacons_3 = L_0;
		__this->___scanning_4 = 1;
		MonoBehaviour__ctor_m49(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiverExample::Start()
extern TypeInfo* BeaconRangeChanged_t9_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconArrived_t11_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconOutOfRange_t12_il2cpp_TypeInfo_var;
extern const MethodInfo* iBeaconReceiverExample_OnBeaconRangeChanged_m47_MethodInfo_var;
extern const MethodInfo* iBeaconReceiverExample_OnBeaconArrived_m45_MethodInfo_var;
extern const MethodInfo* iBeaconReceiverExample_OnBeaconOutOfRange_m46_MethodInfo_var;
extern "C" void iBeaconReceiverExample_Start_m42 (iBeaconReceiverExample_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BeaconRangeChanged_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		BeaconArrived_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		BeaconOutOfRange_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iBeaconReceiverExample_OnBeaconRangeChanged_m47_MethodInfo_var = il2cpp_codegen_method_info_from_index(6);
		iBeaconReceiverExample_OnBeaconArrived_m45_MethodInfo_var = il2cpp_codegen_method_info_from_index(7);
		iBeaconReceiverExample_OnBeaconOutOfRange_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)iBeaconReceiverExample_OnBeaconRangeChanged_m47_MethodInfo_var };
		BeaconRangeChanged_t9 * L_1 = (BeaconRangeChanged_t9 *)il2cpp_codegen_object_new (BeaconRangeChanged_t9_il2cpp_TypeInfo_var);
		BeaconRangeChanged__ctor_m14(L_1, __this, L_0, /*hidden argument*/NULL);
		iBeaconReceiver_add_BeaconRangeChangedEvent_m27(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)iBeaconReceiverExample_OnBeaconArrived_m45_MethodInfo_var };
		BeaconArrived_t11 * L_3 = (BeaconArrived_t11 *)il2cpp_codegen_object_new (BeaconArrived_t11_il2cpp_TypeInfo_var);
		BeaconArrived__ctor_m18(L_3, __this, L_2, /*hidden argument*/NULL);
		iBeaconReceiver_add_BeaconArrivedEvent_m29(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IntPtr_t L_4 = { (void*)iBeaconReceiverExample_OnBeaconOutOfRange_m46_MethodInfo_var };
		BeaconOutOfRange_t12 * L_5 = (BeaconOutOfRange_t12 *)il2cpp_codegen_object_new (BeaconOutOfRange_t12_il2cpp_TypeInfo_var);
		BeaconOutOfRange__ctor_m22(L_5, __this, L_4, /*hidden argument*/NULL);
		iBeaconReceiver_add_BeaconOutOfRangeEvent_m31(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		iBeaconReceiver_Init_m37(NULL /*static, unused*/, /*hidden argument*/NULL);
		Debug_Log_m67(NULL /*static, unused*/, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiverExample::OnDestroy()
extern TypeInfo* BeaconRangeChanged_t9_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconArrived_t11_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconOutOfRange_t12_il2cpp_TypeInfo_var;
extern const MethodInfo* iBeaconReceiverExample_OnBeaconRangeChanged_m47_MethodInfo_var;
extern const MethodInfo* iBeaconReceiverExample_OnBeaconArrived_m45_MethodInfo_var;
extern const MethodInfo* iBeaconReceiverExample_OnBeaconOutOfRange_m46_MethodInfo_var;
extern "C" void iBeaconReceiverExample_OnDestroy_m43 (iBeaconReceiverExample_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BeaconRangeChanged_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		BeaconArrived_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		BeaconOutOfRange_t12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		iBeaconReceiverExample_OnBeaconRangeChanged_m47_MethodInfo_var = il2cpp_codegen_method_info_from_index(6);
		iBeaconReceiverExample_OnBeaconArrived_m45_MethodInfo_var = il2cpp_codegen_method_info_from_index(7);
		iBeaconReceiverExample_OnBeaconOutOfRange_m46_MethodInfo_var = il2cpp_codegen_method_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)iBeaconReceiverExample_OnBeaconRangeChanged_m47_MethodInfo_var };
		BeaconRangeChanged_t9 * L_1 = (BeaconRangeChanged_t9 *)il2cpp_codegen_object_new (BeaconRangeChanged_t9_il2cpp_TypeInfo_var);
		BeaconRangeChanged__ctor_m14(L_1, __this, L_0, /*hidden argument*/NULL);
		iBeaconReceiver_remove_BeaconRangeChangedEvent_m28(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)iBeaconReceiverExample_OnBeaconArrived_m45_MethodInfo_var };
		BeaconArrived_t11 * L_3 = (BeaconArrived_t11 *)il2cpp_codegen_object_new (BeaconArrived_t11_il2cpp_TypeInfo_var);
		BeaconArrived__ctor_m18(L_3, __this, L_2, /*hidden argument*/NULL);
		iBeaconReceiver_remove_BeaconArrivedEvent_m30(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IntPtr_t L_4 = { (void*)iBeaconReceiverExample_OnBeaconOutOfRange_m46_MethodInfo_var };
		BeaconOutOfRange_t12 * L_5 = (BeaconOutOfRange_t12 *)il2cpp_codegen_object_new (BeaconOutOfRange_t12_il2cpp_TypeInfo_var);
		BeaconOutOfRange__ctor_m22(L_5, __this, L_4, /*hidden argument*/NULL);
		iBeaconReceiver_remove_BeaconOutOfRangeEvent_m32(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiverExample::Update()
extern "C" void iBeaconReceiverExample_Update_m44 (iBeaconReceiverExample_t14 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void iBeaconReceiverExample::OnBeaconArrived(Beacon)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiverExample_OnBeaconArrived_m45 (iBeaconReceiverExample_t14 * __this, Beacon_t5  ___beacon, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Beacon_ToString_m13((&___beacon), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m68(NULL /*static, unused*/, (String_t*) &_stringLiteral6, L_0, /*hidden argument*/NULL);
		Debug_Log_m67(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiverExample::OnBeaconOutOfRange(Beacon)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void iBeaconReceiverExample_OnBeaconOutOfRange_m46 (iBeaconReceiverExample_t14 * __this, Beacon_t5  ___beacon, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Beacon_ToString_m13((&___beacon), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m68(NULL /*static, unused*/, (String_t*) &_stringLiteral7, L_0, /*hidden argument*/NULL);
		Debug_Log_m67(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iBeaconReceiverExample::OnBeaconRangeChanged(System.Collections.Generic.List`1<Beacon>)
extern "C" void iBeaconReceiverExample_OnBeaconRangeChanged_m47 (iBeaconReceiverExample_t14 * __this, List_1_t6 * ___beacons, const MethodInfo* method)
{
	{
		List_1_t6 * L_0 = ___beacons;
		__this->___mybeacons_3 = L_0;
		return;
	}
}
// System.Void iBeaconReceiverExample::OnGUI()
extern TypeInfo* GUI_t27_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t29_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t26_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t18_il2cpp_TypeInfo_var;
extern TypeInfo* BeaconRange_t4_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t22_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t25_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m64_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m65_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m66_MethodInfo_var;
extern "C" void iBeaconReceiverExample_OnGUI_m48 (iBeaconReceiverExample_t14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		GUIContent_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		GUIStyle_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Int32_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		BeaconRange_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Enumerator_t22_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		IDisposable_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		List_1_GetEnumerator_m64_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		Enumerator_get_Current_m65_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		Enumerator_MoveNext_m66_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	GUIStyle_t26 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Beacon_t5  V_3 = {0};
	Enumerator_t22  V_4 = {0};
	Exception_t23 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t23 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t27_il2cpp_TypeInfo_var);
		GUISkin_t28 * L_0 = GUI_get_skin_m69(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIStyle_t26 * L_1 = GUISkin_GetStyle_m70(L_0, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		V_0 = L_1;
		GUIStyle_t26 * L_2 = V_0;
		NullCheck(L_2);
		GUIStyle_set_fontSize_m71(L_2, ((int32_t)25), /*hidden argument*/NULL);
		V_1 = (10.0f);
		GUIStyle_t26 * L_3 = V_0;
		GUIContent_t29 * L_4 = (GUIContent_t29 *)il2cpp_codegen_object_new (GUIContent_t29_il2cpp_TypeInfo_var);
		GUIContent__ctor_m72(L_4, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m73(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		float L_6 = GUIStyle_CalcHeight_m74(L_3, L_4, (((float)((int32_t)((int32_t)L_5-(int32_t)((int32_t)20))))), /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = V_1;
		int32_t L_8 = Screen_get_width_m73(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = V_2;
		Rect_t30  L_10 = {0};
		Rect__ctor_m75(&L_10, L_7, (10.0f), (((float)((int32_t)((int32_t)L_8-(int32_t)((int32_t)20))))), L_9, /*hidden argument*/NULL);
		GUI_Label_m76(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		float L_11 = V_1;
		float L_12 = V_2;
		V_1 = ((float)((float)L_11+(float)L_12));
		float L_13 = V_1;
		int32_t L_14 = Screen_get_width_m73(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_15 = Screen_get_height_m77(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_16 = V_1;
		Rect_t30  L_17 = {0};
		Rect__ctor_m75(&L_17, (10.0f), L_13, (((float)((int32_t)((int32_t)L_14-(int32_t)((int32_t)20))))), ((float)((float)((float)((float)(((float)L_15))-(float)L_16))-(float)(10.0f))), /*hidden argument*/NULL);
		Vector2_t15  L_18 = (__this->___scrolldistance_2);
		int32_t L_19 = Screen_get_width_m73(NULL /*static, unused*/, /*hidden argument*/NULL);
		List_1_t6 * L_20 = (__this->___mybeacons_3);
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Collections.Generic.List`1<Beacon>::get_Count() */, L_20);
		Rect_t30  L_22 = {0};
		Rect__ctor_m75(&L_22, (0.0f), (0.0f), (((float)((int32_t)((int32_t)L_19-(int32_t)((int32_t)20))))), (((float)((int32_t)((int32_t)L_21*(int32_t)((int32_t)100))))), /*hidden argument*/NULL);
		Vector2_t15  L_23 = GUI_BeginScrollView_m78(NULL /*static, unused*/, L_17, L_18, L_22, /*hidden argument*/NULL);
		__this->___scrolldistance_2 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t26_il2cpp_TypeInfo_var);
		GUIStyle_t26 * L_24 = GUIStyle_op_Implicit_m79(NULL /*static, unused*/, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t31* L_25 = ((GUILayoutOptionU5BU5D_t31*)SZArrayNew(GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var, 2));
		int32_t L_26 = Screen_get_width_m73(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayoutOption_t32 * L_27 = GUILayout_Width_m80(NULL /*static, unused*/, (((float)((int32_t)((int32_t)L_26-(int32_t)((int32_t)20))))), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_27);
		*((GUILayoutOption_t32 **)(GUILayoutOption_t32 **)SZArrayLdElema(L_25, 0)) = (GUILayoutOption_t32 *)L_27;
		GUILayoutOptionU5BU5D_t31* L_28 = L_25;
		GUILayoutOption_t32 * L_29 = GUILayout_Height_m81(NULL /*static, unused*/, (50.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		ArrayElementTypeCheck (L_28, L_29);
		*((GUILayoutOption_t32 **)(GUILayoutOption_t32 **)SZArrayLdElema(L_28, 1)) = (GUILayoutOption_t32 *)L_29;
		GUILayout_BeginVertical_m82(NULL /*static, unused*/, L_24, L_28, /*hidden argument*/NULL);
		List_1_t6 * L_30 = (__this->___mybeacons_3);
		NullCheck(L_30);
		Enumerator_t22  L_31 = List_1_GetEnumerator_m64(L_30, /*hidden argument*/List_1_GetEnumerator_m64_MethodInfo_var);
		V_4 = L_31;
	}

IL_00f5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0186;
		}

IL_00fa:
		{
			Beacon_t5  L_32 = Enumerator_get_Current_m65((&V_4), /*hidden argument*/Enumerator_get_Current_m65_MethodInfo_var);
			V_3 = L_32;
			String_t* L_33 = ((&V_3)->___UUID_0);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m68(NULL /*static, unused*/, (String_t*) &_stringLiteral1, L_33, /*hidden argument*/NULL);
			GUILayout_Label_m83(NULL /*static, unused*/, L_34, ((GUILayoutOptionU5BU5D_t31*)SZArrayNew(GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
			int32_t L_35 = ((&V_3)->___major_1);
			int32_t L_36 = L_35;
			Object_t * L_37 = Box(Int32_t18_il2cpp_TypeInfo_var, &L_36);
			String_t* L_38 = String_Concat_m84(NULL /*static, unused*/, (String_t*) &_stringLiteral11, L_37, /*hidden argument*/NULL);
			GUILayout_Label_m83(NULL /*static, unused*/, L_38, ((GUILayoutOptionU5BU5D_t31*)SZArrayNew(GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
			int32_t L_39 = ((&V_3)->___minor_2);
			int32_t L_40 = L_39;
			Object_t * L_41 = Box(Int32_t18_il2cpp_TypeInfo_var, &L_40);
			String_t* L_42 = String_Concat_m84(NULL /*static, unused*/, (String_t*) &_stringLiteral12, L_41, /*hidden argument*/NULL);
			GUILayout_Label_m83(NULL /*static, unused*/, L_42, ((GUILayoutOptionU5BU5D_t31*)SZArrayNew(GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
			int32_t L_43 = ((&V_3)->___range_3);
			int32_t L_44 = L_43;
			Object_t * L_45 = Box(BeaconRange_t4_il2cpp_TypeInfo_var, &L_44);
			NullCheck(L_45);
			String_t* L_46 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_45);
			String_t* L_47 = String_Concat_m68(NULL /*static, unused*/, (String_t*) &_stringLiteral13, L_46, /*hidden argument*/NULL);
			GUILayout_Label_m83(NULL /*static, unused*/, L_47, ((GUILayoutOptionU5BU5D_t31*)SZArrayNew(GUILayoutOptionU5BU5D_t31_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		}

IL_0186:
		{
			bool L_48 = Enumerator_MoveNext_m66((&V_4), /*hidden argument*/Enumerator_MoveNext_m66_MethodInfo_var);
			if (L_48)
			{
				goto IL_00fa;
			}
		}

IL_0192:
		{
			IL2CPP_LEAVE(0x1A4, FINALLY_0197);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t23 *)e.ex;
		goto FINALLY_0197;
	}

FINALLY_0197:
	{ // begin finally (depth: 1)
		Enumerator_t22  L_49 = V_4;
		Enumerator_t22  L_50 = L_49;
		Object_t * L_51 = Box(Enumerator_t22_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_51);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t25_il2cpp_TypeInfo_var, L_51);
		IL2CPP_END_FINALLY(407)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(407)
	{
		IL2CPP_JUMP_TBL(0x1A4, IL_01a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t23 *)
	}

IL_01a4:
	{
		GUILayout_EndVertical_m85(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t27_il2cpp_TypeInfo_var);
		GUI_EndScrollView_m86(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
