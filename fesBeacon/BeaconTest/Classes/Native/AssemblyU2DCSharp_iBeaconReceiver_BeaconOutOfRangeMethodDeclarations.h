#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iBeaconReceiver/BeaconOutOfRange
struct BeaconOutOfRange_t12;
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

// System.Void iBeaconReceiver/BeaconOutOfRange::.ctor(System.Object,System.IntPtr)
extern "C" void BeaconOutOfRange__ctor_m22 (BeaconOutOfRange_t12 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver/BeaconOutOfRange::Invoke(Beacon)
extern "C" void BeaconOutOfRange_Invoke_m23 (BeaconOutOfRange_t12 * __this, Beacon_t5  ___beacon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Beacon
#include "AssemblyU2DCSharp_BeaconMethodDeclarations.h"
extern "C" void pinvoke_delegate_wrapper_BeaconOutOfRange_t12(Il2CppObject* delegate, Beacon_t5  ___beacon);
// System.IAsyncResult iBeaconReceiver/BeaconOutOfRange::BeginInvoke(Beacon,System.AsyncCallback,System.Object)
extern "C" Object_t * BeaconOutOfRange_BeginInvoke_m24 (BeaconOutOfRange_t12 * __this, Beacon_t5  ___beacon, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver/BeaconOutOfRange::EndInvoke(System.IAsyncResult)
extern "C" void BeaconOutOfRange_EndInvoke_m25 (BeaconOutOfRange_t12 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
