#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iBeaconReceiver/BeaconRangeChanged
struct BeaconRangeChanged_t9;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<Beacon>
struct List_1_t6;
// System.IAsyncResult
struct IAsyncResult_t7;
// System.AsyncCallback
struct AsyncCallback_t8;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void iBeaconReceiver/BeaconRangeChanged::.ctor(System.Object,System.IntPtr)
extern "C" void BeaconRangeChanged__ctor_m14 (BeaconRangeChanged_t9 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver/BeaconRangeChanged::Invoke(System.Collections.Generic.List`1<Beacon>)
extern "C" void BeaconRangeChanged_Invoke_m15 (BeaconRangeChanged_t9 * __this, List_1_t6 * ___beacons, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult iBeaconReceiver/BeaconRangeChanged::BeginInvoke(System.Collections.Generic.List`1<Beacon>,System.AsyncCallback,System.Object)
extern "C" Object_t * BeaconRangeChanged_BeginInvoke_m16 (BeaconRangeChanged_t9 * __this, List_1_t6 * ___beacons, AsyncCallback_t8 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iBeaconReceiver/BeaconRangeChanged::EndInvoke(System.IAsyncResult)
extern "C" void BeaconRangeChanged_EndInvoke_m17 (BeaconRangeChanged_t9 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
