#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1209;
// System.MarshalByRefObject
struct MarshalByRefObject_t550;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1207;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C" void ClientIdentity__ctor_m6563 (ClientIdentity_t1209 * __this, String_t* ___objectUri, ObjRef_t1207 * ___objRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C" MarshalByRefObject_t550 * ClientIdentity_get_ClientProxy_m6564 (ClientIdentity_t1209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C" void ClientIdentity_set_ClientProxy_m6565 (ClientIdentity_t1209 * __this, MarshalByRefObject_t550 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1207 * ClientIdentity_CreateObjRef_m6566 (ClientIdentity_t1209 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m6567 (ClientIdentity_t1209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
