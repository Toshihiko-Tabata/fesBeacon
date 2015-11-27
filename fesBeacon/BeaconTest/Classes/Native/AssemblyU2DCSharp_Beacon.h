#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// BeaconRange
#include "AssemblyU2DCSharp_BeaconRange.h"
// Beacon
struct  Beacon_t5 
{
	// System.String Beacon::UUID
	String_t* ___UUID_0;
	// System.Int32 Beacon::major
	int32_t ___major_1;
	// System.Int32 Beacon::minor
	int32_t ___minor_2;
	// BeaconRange Beacon::range
	int32_t ___range_3;
	// System.Int32 Beacon::strength
	int32_t ___strength_4;
	// System.Double Beacon::accuracy
	double ___accuracy_5;
};
// Native definition for marshalling of: Beacon
struct Beacon_t5_marshaled
{
	char* ___UUID_0;
	int32_t ___major_1;
	int32_t ___minor_2;
	int32_t ___range_3;
	int32_t ___strength_4;
	double ___accuracy_5;
};
