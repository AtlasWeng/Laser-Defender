#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Projectile
struct  Projectile_t4036506763  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Projectile::damage
	float ___damage_2;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___damage_2)); }
	inline float get_damage_2() const { return ___damage_2; }
	inline float* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(float value)
	{
		___damage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
