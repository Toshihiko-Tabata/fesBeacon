#pragma once
#include <stdint.h>
// System.String
struct String_t;
// iBeaconReceiver
struct iBeaconReceiver_t13;
// System.Collections.Generic.List`1<Beacon>
struct List_1_t6;
// iBeaconReceiver/BeaconRangeChanged
struct BeaconRangeChanged_t9;
// iBeaconReceiver/BeaconArrived
struct BeaconArrived_t11;
// iBeaconReceiver/BeaconOutOfRange
struct BeaconOutOfRange_t12;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// iBeaconReceiver
struct  iBeaconReceiver_t13  : public MonoBehaviour_t2
{
	// System.String iBeaconReceiver::uuid
	String_t* ___uuid_2;
	// System.String iBeaconReceiver::region
	String_t* ___region_3;
	// System.Collections.Generic.List`1<Beacon> iBeaconReceiver::m_beacons
	List_1_t6 * ___m_beacons_5;
};
struct iBeaconReceiver_t13_StaticFields{
	// iBeaconReceiver iBeaconReceiver::m_instance
	iBeaconReceiver_t13 * ___m_instance_4;
	// iBeaconReceiver/BeaconRangeChanged iBeaconReceiver::BeaconRangeChangedEvent
	BeaconRangeChanged_t9 * ___BeaconRangeChangedEvent_6;
	// iBeaconReceiver/BeaconArrived iBeaconReceiver::BeaconArrivedEvent
	BeaconArrived_t11 * ___BeaconArrivedEvent_7;
	// iBeaconReceiver/BeaconOutOfRange iBeaconReceiver::BeaconOutOfRangeEvent
	BeaconOutOfRange_t12 * ___BeaconOutOfRangeEvent_8;
};
