#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t533;
// System.Net.WebRequest
struct WebRequest_t527;
// System.Uri
struct Uri_t222;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m1761 (HttpRequestCreator_t533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t527 * HttpRequestCreator_Create_m1762 (HttpRequestCreator_t533 * __this, Uri_t222 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
