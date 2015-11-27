#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t989;
// System.Collections.Stack
struct Stack_t310;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t990  : public SmallXmlParser_t991
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t989 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t989 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t310 * ___stack_15;
};
