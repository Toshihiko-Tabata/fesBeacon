#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t652;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t645;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t650;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t651;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t684;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C" void CaptureAssertion__ctor_m2411 (CaptureAssertion_t652 * __this, Literal_t651 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void CaptureAssertion_set_CapturingGroup_m2412 (CaptureAssertion_t652 * __this, CapturingGroup_t645 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void CaptureAssertion_Compile_m2413 (CaptureAssertion_t652 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C" bool CaptureAssertion_IsComplex_m2414 (CaptureAssertion_t652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C" ExpressionAssertion_t650 * CaptureAssertion_get_Alternate_m2415 (CaptureAssertion_t652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
