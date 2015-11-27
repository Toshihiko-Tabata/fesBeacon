#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t529;
// System.Net.WebRequest
struct WebRequest_t527;
// System.Uri
struct Uri_t222;

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m1755 (FtpRequestCreator_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t527 * FtpRequestCreator_Create_m1756 (FtpRequestCreator_t529 * __this, Uri_t222 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
