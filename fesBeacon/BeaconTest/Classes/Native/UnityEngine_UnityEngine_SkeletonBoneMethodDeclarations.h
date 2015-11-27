#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t178;
struct SkeletonBone_t178_marshaled;

void SkeletonBone_t178_marshal(const SkeletonBone_t178& unmarshaled, SkeletonBone_t178_marshaled& marshaled);
void SkeletonBone_t178_marshal_back(const SkeletonBone_t178_marshaled& marshaled, SkeletonBone_t178& unmarshaled);
void SkeletonBone_t178_marshal_cleanup(SkeletonBone_t178_marshaled& marshaled);
