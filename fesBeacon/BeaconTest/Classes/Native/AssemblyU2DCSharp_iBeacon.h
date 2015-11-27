#pragma once
#include <stdint.h>
// System.String
struct String_t;
// iBeacon
struct iBeacon_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// iBeacon
struct  iBeacon_t1  : public MonoBehaviour_t2
{
	// System.Boolean iBeacon::m_generate
	bool ___m_generate_2;
	// System.String iBeacon::m_uuid
	String_t* ___m_uuid_3;
	// System.String iBeacon::m_identifier
	String_t* ___m_identifier_4;
	// System.Int32 iBeacon::m_major
	int32_t ___m_major_5;
	// System.Int32 iBeacon::m_minor
	int32_t ___m_minor_6;
};
struct iBeacon_t1_StaticFields{
	// iBeacon iBeacon::m_instance
	iBeacon_t1 * ___m_instance_7;
};
