﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t142;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t318;
// System.Byte[]
struct ByteU5BU5D_t141;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t319;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m703 (WWWForm_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m704 (WWWForm_t142 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m705 (WWWForm_t142 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t319 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m706 (WWWForm_t142 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t318 * WWWForm_get_headers_m707 (WWWForm_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t141* WWWForm_get_data_m708 (WWWForm_t142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
