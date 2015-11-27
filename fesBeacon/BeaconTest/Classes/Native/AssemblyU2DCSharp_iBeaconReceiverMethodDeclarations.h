#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iBeaconReceiver
struct iBeaconReceiver_t13;
// iBeaconReceiver/BeaconRangeChanged
struct BeaconRangeChanged_t9;
// iBeaconReceiver/BeaconArrived
struct BeaconArrived_t11;
// iBeaconReceiver/BeaconOutOfRange
struct BeaconOutOfRange_t12;
// System.String
struct String_t;

// System.Void iBeaconReceiver::.ctor()
extern "C" void iBeaconReceiver__ctor_m26 (iBeaconReceiver_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::add_BeaconRangeChangedEvent(iBeaconReceiver/BeaconRangeChanged)
extern "C" void iBeaconReceiver_add_BeaconRangeChangedEvent_m27 (Object_t * __this /* static, unused */, BeaconRangeChanged_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::remove_BeaconRangeChangedEvent(iBeaconReceiver/BeaconRangeChanged)
extern "C" void iBeaconReceiver_remove_BeaconRangeChangedEvent_m28 (Object_t * __this /* static, unused */, BeaconRangeChanged_t9 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::add_BeaconArrivedEvent(iBeaconReceiver/BeaconArrived)
extern "C" void iBeaconReceiver_add_BeaconArrivedEvent_m29 (Object_t * __this /* static, unused */, BeaconArrived_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::remove_BeaconArrivedEvent(iBeaconReceiver/BeaconArrived)
extern "C" void iBeaconReceiver_remove_BeaconArrivedEvent_m30 (Object_t * __this /* static, unused */, BeaconArrived_t11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::add_BeaconOutOfRangeEvent(iBeaconReceiver/BeaconOutOfRange)
extern "C" void iBeaconReceiver_add_BeaconOutOfRangeEvent_m31 (Object_t * __this /* static, unused */, BeaconOutOfRange_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::remove_BeaconOutOfRangeEvent(iBeaconReceiver/BeaconOutOfRange)
extern "C" void iBeaconReceiver_remove_BeaconOutOfRangeEvent_m32 (Object_t * __this /* static, unused */, BeaconOutOfRange_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::Awake()
extern "C" void iBeaconReceiver_Awake_m33 (iBeaconReceiver_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::InitReceiver(System.String,System.String,System.Boolean)
extern "C" void iBeaconReceiver_InitReceiver_m34 (Object_t * __this /* static, unused */, String_t* ___uuid, String_t* ___regionIdentifier, bool ___shouldLog, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::StopIOSScan()
extern "C" void iBeaconReceiver_StopIOSScan_m35 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::Start()
extern "C" void iBeaconReceiver_Start_m36 (iBeaconReceiver_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::Init()
extern "C" void iBeaconReceiver_Init_m37 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::Stop()
extern "C" void iBeaconReceiver_Stop_m38 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::Scan()
extern "C" void iBeaconReceiver_Scan_m39 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver::RangeBeacons(System.String)
extern "C" void iBeaconReceiver_RangeBeacons_m40 (iBeaconReceiver_t13 * __this, String_t* ___beacons, const MethodInfo* method) IL2CPP_METHOD_ATTR;
