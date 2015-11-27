#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
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
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
extern TypeInfo iBeacon_t1_il2cpp_TypeInfo;
// iBeacon
#include "AssemblyU2DCSharp_iBeacon.h"
extern TypeInfo iBeaconExample_t3_il2cpp_TypeInfo;
// iBeaconExample
#include "AssemblyU2DCSharp_iBeaconExample.h"
extern TypeInfo BeaconRange_t4_il2cpp_TypeInfo;
// BeaconRange
#include "AssemblyU2DCSharp_BeaconRange.h"
extern TypeInfo Beacon_t5_il2cpp_TypeInfo;
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"
extern TypeInfo BeaconRangeChanged_t9_il2cpp_TypeInfo;
// iBeaconReceiver/BeaconRangeChanged
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconRangeChanged.h"
extern TypeInfo BeaconArrived_t11_il2cpp_TypeInfo;
// iBeaconReceiver/BeaconArrived
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconArrived.h"
extern TypeInfo BeaconOutOfRange_t12_il2cpp_TypeInfo;
// iBeaconReceiver/BeaconOutOfRange
#include "AssemblyU2DCSharp_iBeaconReceiver_BeaconOutOfRange.h"
extern TypeInfo iBeaconReceiver_t13_il2cpp_TypeInfo;
// iBeaconReceiver
#include "AssemblyU2DCSharp_iBeaconReceiver.h"
extern TypeInfo iBeaconReceiverExample_t14_il2cpp_TypeInfo;
// iBeaconReceiverExample
#include "AssemblyU2DCSharp_iBeaconReceiverExample.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharp_Assembly_Types[11] = 
{
	&U3CModuleU3E_t0_il2cpp_TypeInfo,
	&iBeacon_t1_il2cpp_TypeInfo,
	&iBeaconExample_t3_il2cpp_TypeInfo,
	&BeaconRange_t4_il2cpp_TypeInfo,
	&Beacon_t5_il2cpp_TypeInfo,
	&BeaconRangeChanged_t9_il2cpp_TypeInfo,
	&BeaconArrived_t11_il2cpp_TypeInfo,
	&BeaconOutOfRange_t12_il2cpp_TypeInfo,
	&iBeaconReceiver_t13_il2cpp_TypeInfo,
	&iBeaconReceiverExample_t14_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
Il2CppAssembly g_AssemblyU2DCSharp_Assembly = 
{
	{ "Assembly-CSharp", NULL, NULL, NULL, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharp_dll_Image,
	1,
};
extern const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_Assembly_AttributeGenerators[3];
static const char* s_StringTable[26] = 
{
	"m_generate",
	"m_uuid",
	"m_identifier",
	"m_major",
	"m_minor",
	"m_instance",
	"value__",
	"UNKNOWN",
	"FAR",
	"NEAR",
	"IMMEDIATE",
	"UUID",
	"major",
	"minor",
	"range",
	"strength",
	"accuracy",
	"uuid",
	"region",
	"m_beacons",
	"BeaconRangeChangedEvent",
	"BeaconArrivedEvent",
	"BeaconOutOfRangeEvent",
	"scrolldistance",
	"mybeacons",
	"scanning",
};
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
static const Il2CppFieldDefinition s_FieldTable[27] = 
{
	{ 0, 29, offsetof(iBeacon_t1, ___m_generate_2), 0 } ,
	{ 1, 30, offsetof(iBeacon_t1, ___m_uuid_3), 0 } ,
	{ 2, 30, offsetof(iBeacon_t1, ___m_identifier_4), 0 } ,
	{ 3, 31, offsetof(iBeacon_t1, ___m_major_5), 0 } ,
	{ 4, 31, offsetof(iBeacon_t1, ___m_minor_6), 0 } ,
	{ 5, 32, offsetof(iBeacon_t1_StaticFields, ___m_instance_7), 0 } ,
	{ 6, 37, offsetof(BeaconRange_t4, ___value___1) + sizeof(Object_t), 0 } ,
	{ 7, 38, 0, 0 } ,
	{ 8, 38, 0, 0 } ,
	{ 9, 38, 0, 0 } ,
	{ 10, 38, 0, 0 } ,
	{ 11, 30, offsetof(Beacon_t5, ___UUID_0) + sizeof(Object_t), 0 } ,
	{ 12, 31, offsetof(Beacon_t5, ___major_1) + sizeof(Object_t), 0 } ,
	{ 13, 31, offsetof(Beacon_t5, ___minor_2) + sizeof(Object_t), 0 } ,
	{ 14, 45, offsetof(Beacon_t5, ___range_3) + sizeof(Object_t), 0 } ,
	{ 15, 31, offsetof(Beacon_t5, ___strength_4) + sizeof(Object_t), 0 } ,
	{ 16, 46, offsetof(Beacon_t5, ___accuracy_5) + sizeof(Object_t), 0 } ,
	{ 17, 30, offsetof(iBeaconReceiver_t13, ___uuid_2), 0 } ,
	{ 18, 30, offsetof(iBeaconReceiver_t13, ___region_3), 0 } ,
	{ 5, 58, offsetof(iBeaconReceiver_t13_StaticFields, ___m_instance_4), 0 } ,
	{ 19, 59, offsetof(iBeaconReceiver_t13, ___m_beacons_5), 0 } ,
	{ 20, 60, offsetof(iBeaconReceiver_t13_StaticFields, ___BeaconRangeChangedEvent_6), 0 } ,
	{ 21, 61, offsetof(iBeaconReceiver_t13_StaticFields, ___BeaconArrivedEvent_7), 0 } ,
	{ 22, 62, offsetof(iBeaconReceiver_t13_StaticFields, ___BeaconOutOfRangeEvent_8), 0 } ,
	{ 23, 64, offsetof(iBeaconReceiverExample_t14, ___scrolldistance_2), 0 } ,
	{ 24, 59, offsetof(iBeaconReceiverExample_t14, ___mybeacons_3), 0 } ,
	{ 25, 65, offsetof(iBeaconReceiverExample_t14, ___scanning_4), 0 } ,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
static const Il2CppFieldDefaultValue s_DefaultValues[4] = 
{
	{ 7, 4, 0 },
	{ 8, 4, 4 },
	{ 9, 4, 8 },
	{ 10, 4, 12 },
};
static const uint8_t s_DefaultValueDataTable[16] = 
{
	0x00,
	0x00,
	0x00,
	0x00,
	0x01,
	0x00,
	0x00,
	0x00,
	0x02,
	0x00,
	0x00,
	0x00,
	0x03,
	0x00,
	0x00,
	0x00,
};
Il2CppImage g_AssemblyU2DCSharp_dll_Image = 
{
	 "Assembly-CSharp.dll" ,
	&g_AssemblyU2DCSharp_Assembly,
	g_AssemblyU2DCSharp_Assembly_Types,
	10,
	NULL,
	s_StringTable,
	26,
	s_FieldTable,
	27,
	s_DefaultValues,
	4,
	s_DefaultValueDataTable,
	16,
	3,
	NULL,
	g_AssemblyU2DCSharp_Assembly_AttributeGenerators,
};
