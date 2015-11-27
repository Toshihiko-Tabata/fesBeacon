#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t144;
struct CacheIndex_t144_marshaled;

void CacheIndex_t144_marshal(const CacheIndex_t144& unmarshaled, CacheIndex_t144_marshaled& marshaled);
void CacheIndex_t144_marshal_back(const CacheIndex_t144_marshaled& marshaled, CacheIndex_t144& unmarshaled);
void CacheIndex_t144_marshal_cleanup(CacheIndex_t144_marshaled& marshaled);
