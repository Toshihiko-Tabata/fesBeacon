﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t643;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t641;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t684;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t659;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
extern "C" void Group__ctor_m2375 (Group_t643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C" void Group_AppendExpression_m2376 (Group_t643 * __this, Expression_t641 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void Group_Compile_m2377 (Group_t643 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
extern "C" void Group_GetWidth_m2378 (Group_t643 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
extern "C" AnchorInfo_t659 * Group_GetAnchorInfo_m2379 (Group_t643 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
