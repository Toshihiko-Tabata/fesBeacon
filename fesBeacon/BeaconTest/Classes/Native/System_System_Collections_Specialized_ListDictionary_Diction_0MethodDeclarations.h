#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct DictionaryNodeEnumerator_t507;
// System.Object
struct Object_t;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t506;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t504;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::.ctor(System.Collections.Specialized.ListDictionary)
extern "C" void DictionaryNodeEnumerator__ctor_m1677 (DictionaryNodeEnumerator_t507 * __this, ListDictionary_t504 * ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::FailFast()
extern "C" void DictionaryNodeEnumerator_FailFast_m1678 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::MoveNext()
extern "C" bool DictionaryNodeEnumerator_MoveNext_m1679 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::Reset()
extern "C" void DictionaryNodeEnumerator_Reset_m1680 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Current()
extern "C" Object_t * DictionaryNodeEnumerator_get_Current_m1681 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_DictionaryNode()
extern "C" DictionaryNode_t506 * DictionaryNodeEnumerator_get_DictionaryNode_m1682 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Entry()
extern "C" DictionaryEntry_t675  DictionaryNodeEnumerator_get_Entry_m1683 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Key()
extern "C" Object_t * DictionaryNodeEnumerator_get_Key_m1684 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::get_Value()
extern "C" Object_t * DictionaryNodeEnumerator_get_Value_m1685 (DictionaryNodeEnumerator_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
