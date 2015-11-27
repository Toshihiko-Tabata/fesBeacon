#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t697;
struct RSAParameters_t697_marshaled;

void RSAParameters_t697_marshal(const RSAParameters_t697& unmarshaled, RSAParameters_t697_marshaled& marshaled);
void RSAParameters_t697_marshal_back(const RSAParameters_t697_marshaled& marshaled, RSAParameters_t697& unmarshaled);
void RSAParameters_t697_marshal_cleanup(RSAParameters_t697_marshaled& marshaled);
