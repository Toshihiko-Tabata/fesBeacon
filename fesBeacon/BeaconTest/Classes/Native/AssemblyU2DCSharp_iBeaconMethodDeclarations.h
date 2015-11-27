#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iBeacon
struct iBeacon_t1;
// System.String
struct String_t;

// System.Void iBeacon::.ctor()
extern "C" void iBeacon__ctor_m0 (iBeacon_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::InitBeaconServer(System.String,System.String,System.Boolean,System.Int32,System.Int32)
extern "C" void iBeacon_InitBeaconServer_m1 (Object_t * __this /* static, unused */, String_t* ___uuid, String_t* ___region, bool ___shouldLog, int32_t ___major, int32_t ___minor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::Transmit(System.Boolean)
extern "C" void iBeacon_Transmit_m2 (Object_t * __this /* static, unused */, bool ___transmit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::Awake()
extern "C" void iBeacon_Awake_m3 (iBeacon_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::Start()
extern "C" void iBeacon_Start_m4 (iBeacon_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::Init()
extern "C" void iBeacon_Init_m5 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::Update()
extern "C" void iBeacon_Update_m6 (iBeacon_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::Transmit()
extern "C" void iBeacon_Transmit_m7 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeacon::StopTransmit()
extern "C" void iBeacon_StopTransmit_m8 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
