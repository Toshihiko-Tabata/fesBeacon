#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t699;
struct DSAParameters_t699_marshaled;

void DSAParameters_t699_marshal(const DSAParameters_t699& unmarshaled, DSAParameters_t699_marshaled& marshaled);
void DSAParameters_t699_marshal_back(const DSAParameters_t699_marshaled& marshaled, DSAParameters_t699& unmarshaled);
void DSAParameters_t699_marshal_cleanup(DSAParameters_t699_marshaled& marshaled);
