#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::shipSpeed
	float ___shipSpeed_2;
	// System.Single PlayerController::padding
	float ___padding_3;
	// UnityEngine.GameObject PlayerController::projectile
	GameObject_t1756533147 * ___projectile_4;
	// System.Single PlayerController::beamSpeed
	float ___beamSpeed_5;
	// System.Single PlayerController::beamRate
	float ___beamRate_6;
	// System.Single PlayerController::health
	float ___health_7;
	// System.Single PlayerController::xMax
	float ___xMax_8;
	// System.Single PlayerController::xMin
	float ___xMin_9;
	// UnityEngine.AudioClip PlayerController::playerFiresSFX
	AudioClip_t1932558630 * ___playerFiresSFX_10;

public:
	inline static int32_t get_offset_of_shipSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___shipSpeed_2)); }
	inline float get_shipSpeed_2() const { return ___shipSpeed_2; }
	inline float* get_address_of_shipSpeed_2() { return &___shipSpeed_2; }
	inline void set_shipSpeed_2(float value)
	{
		___shipSpeed_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___padding_3)); }
	inline float get_padding_3() const { return ___padding_3; }
	inline float* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(float value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_projectile_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___projectile_4)); }
	inline GameObject_t1756533147 * get_projectile_4() const { return ___projectile_4; }
	inline GameObject_t1756533147 ** get_address_of_projectile_4() { return &___projectile_4; }
	inline void set_projectile_4(GameObject_t1756533147 * value)
	{
		___projectile_4 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_4, value);
	}

	inline static int32_t get_offset_of_beamSpeed_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___beamSpeed_5)); }
	inline float get_beamSpeed_5() const { return ___beamSpeed_5; }
	inline float* get_address_of_beamSpeed_5() { return &___beamSpeed_5; }
	inline void set_beamSpeed_5(float value)
	{
		___beamSpeed_5 = value;
	}

	inline static int32_t get_offset_of_beamRate_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___beamRate_6)); }
	inline float get_beamRate_6() const { return ___beamRate_6; }
	inline float* get_address_of_beamRate_6() { return &___beamRate_6; }
	inline void set_beamRate_6(float value)
	{
		___beamRate_6 = value;
	}

	inline static int32_t get_offset_of_health_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___health_7)); }
	inline float get_health_7() const { return ___health_7; }
	inline float* get_address_of_health_7() { return &___health_7; }
	inline void set_health_7(float value)
	{
		___health_7 = value;
	}

	inline static int32_t get_offset_of_xMax_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xMax_8)); }
	inline float get_xMax_8() const { return ___xMax_8; }
	inline float* get_address_of_xMax_8() { return &___xMax_8; }
	inline void set_xMax_8(float value)
	{
		___xMax_8 = value;
	}

	inline static int32_t get_offset_of_xMin_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___xMin_9)); }
	inline float get_xMin_9() const { return ___xMin_9; }
	inline float* get_address_of_xMin_9() { return &___xMin_9; }
	inline void set_xMin_9(float value)
	{
		___xMin_9 = value;
	}

	inline static int32_t get_offset_of_playerFiresSFX_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerFiresSFX_10)); }
	inline AudioClip_t1932558630 * get_playerFiresSFX_10() const { return ___playerFiresSFX_10; }
	inline AudioClip_t1932558630 ** get_address_of_playerFiresSFX_10() { return &___playerFiresSFX_10; }
	inline void set_playerFiresSFX_10(AudioClip_t1932558630 * value)
	{
		___playerFiresSFX_10 = value;
		Il2CppCodeGenWriteBarrier(&___playerFiresSFX_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
