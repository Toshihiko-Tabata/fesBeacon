#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1074;
// System.IO.Stream
struct Stream_t830;
// System.Text.Encoding
struct Encoding_t319;
// System.Char[]
struct CharU5BU5D_t24;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m5815 (UnexceptionalStreamWriter_t1074 * __this, Stream_t830 * ___stream, Encoding_t319 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m5816 (UnexceptionalStreamWriter_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m5817 (UnexceptionalStreamWriter_t1074 * __this, CharU5BU5D_t24* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m5818 (UnexceptionalStreamWriter_t1074 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m5819 (UnexceptionalStreamWriter_t1074 * __this, CharU5BU5D_t24* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m5820 (UnexceptionalStreamWriter_t1074 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
