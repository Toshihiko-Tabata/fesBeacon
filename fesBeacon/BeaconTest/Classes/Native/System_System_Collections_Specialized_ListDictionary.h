#pragma once
#include <stdint.h>
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t506;
// System.Collections.IComparer
struct IComparer_t508;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t504  : public Object_t
{
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t506 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	Object_t * ___comparer_3;
};
