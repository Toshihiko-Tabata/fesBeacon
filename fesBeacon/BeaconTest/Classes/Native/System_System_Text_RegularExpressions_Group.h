﻿#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Group
struct Group_t601;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t600;
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_Capture.h"
// System.Text.RegularExpressions.Group
struct  Group_t601  : public Capture_t598
{
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t600 * ___captures_5;
};
struct Group_t601_StaticFields{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t601 * ___Fail_3;
};
