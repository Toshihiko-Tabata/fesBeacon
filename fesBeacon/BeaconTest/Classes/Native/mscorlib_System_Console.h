﻿#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t712;
// System.IO.TextReader
struct TextReader_t994;
// System.Text.Encoding
struct Encoding_t319;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t711  : public Object_t
{
};
struct Console_t711_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t712 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t712 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t994 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t319 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t319 * ___outputEncoding_4;
};
