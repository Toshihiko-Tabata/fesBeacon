﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.EnvoyInfo
struct EnvoyInfo_t1206;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t754;

// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void EnvoyInfo__ctor_m6555 (EnvoyInfo_t1206 * __this, Object_t * ___sinks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m6556 (EnvoyInfo_t1206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;