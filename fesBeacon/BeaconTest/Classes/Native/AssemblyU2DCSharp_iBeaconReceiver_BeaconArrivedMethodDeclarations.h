#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iBeaconReceiver/BeaconArrived
struct BeaconArrived_t11;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Beacon
#include "AssemblyU2DCSharp_Beacon.h"

// System.Void iBeaconReceiver/BeaconArrived::.ctor(System.Object,System.IntPtr)
extern "C" void BeaconArrived__ctor_m18 (BeaconArrived_t11 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver/BeaconArrived::Invoke(Beacon)
extern "C" void BeaconArrived_Invoke_m19 (BeaconArrived_t11 * __this, Beacon_t5  ___beacon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Beacon
#include "AssemblyU2DCSharp_BeaconMethodDeclarations.h"
extern "C" void pinvoke_delegate_wrapper_BeaconArrived_t11(Il2CppObject* delegate, Beacon_t5  ___beacon);
// System.IAsyncResult iBeaconReceiver/BeaconArrived::BeginInvoke(Beacon,System.AsyncCallback,System.Object)
extern "C" Object_t * BeaconArrived_BeginInvoke_m20 (BeaconArrived_t11 * __this, Beacon_t5  ___beacon, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver/BeaconArrived::EndInvoke(System.IAsyncResult)
extern "C" void BeaconArrived_EndInvoke_m21 (BeaconArrived_t11 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
