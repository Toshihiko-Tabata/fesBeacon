#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t528;
// System.Net.WebRequest
struct WebRequest_t527;
// System.Uri
struct Uri_t222;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m1753 (FileWebRequestCreator_t528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t527 * FileWebRequestCreator_Create_m1754 (FileWebRequestCreator_t528 * __this, Uri_t222 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
