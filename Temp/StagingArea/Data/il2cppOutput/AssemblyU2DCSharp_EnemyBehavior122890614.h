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
// ScoreKeeper
struct ScoreKeeper_t1955354816;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyBehavior
struct  EnemyBehavior_t122890614  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EnemyBehavior::enemyHealth
	float ___enemyHealth_2;
	// System.Single EnemyBehavior::projectileSpeed
	float ___projectileSpeed_3;
	// UnityEngine.GameObject EnemyBehavior::projectilePrefab
	GameObject_t1756533147 * ___projectilePrefab_4;
	// System.Single EnemyBehavior::shotsPerSeconds
	float ___shotsPerSeconds_5;
	// ScoreKeeper EnemyBehavior::scoreKeeper
	ScoreKeeper_t1955354816 * ___scoreKeeper_6;
	// System.Int32 EnemyBehavior::scoreValue
	int32_t ___scoreValue_7;
	// UnityEngine.AudioClip EnemyBehavior::enemyFiresSFX
	AudioClip_t1932558630 * ___enemyFiresSFX_8;
	// UnityEngine.AudioClip EnemyBehavior::enemyDestroiedSFX
	AudioClip_t1932558630 * ___enemyDestroiedSFX_9;

public:
	inline static int32_t get_offset_of_enemyHealth_2() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___enemyHealth_2)); }
	inline float get_enemyHealth_2() const { return ___enemyHealth_2; }
	inline float* get_address_of_enemyHealth_2() { return &___enemyHealth_2; }
	inline void set_enemyHealth_2(float value)
	{
		___enemyHealth_2 = value;
	}

	inline static int32_t get_offset_of_projectileSpeed_3() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___projectileSpeed_3)); }
	inline float get_projectileSpeed_3() const { return ___projectileSpeed_3; }
	inline float* get_address_of_projectileSpeed_3() { return &___projectileSpeed_3; }
	inline void set_projectileSpeed_3(float value)
	{
		___projectileSpeed_3 = value;
	}

	inline static int32_t get_offset_of_projectilePrefab_4() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___projectilePrefab_4)); }
	inline GameObject_t1756533147 * get_projectilePrefab_4() const { return ___projectilePrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_projectilePrefab_4() { return &___projectilePrefab_4; }
	inline void set_projectilePrefab_4(GameObject_t1756533147 * value)
	{
		___projectilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___projectilePrefab_4, value);
	}

	inline static int32_t get_offset_of_shotsPerSeconds_5() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___shotsPerSeconds_5)); }
	inline float get_shotsPerSeconds_5() const { return ___shotsPerSeconds_5; }
	inline float* get_address_of_shotsPerSeconds_5() { return &___shotsPerSeconds_5; }
	inline void set_shotsPerSeconds_5(float value)
	{
		___shotsPerSeconds_5 = value;
	}

	inline static int32_t get_offset_of_scoreKeeper_6() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___scoreKeeper_6)); }
	inline ScoreKeeper_t1955354816 * get_scoreKeeper_6() const { return ___scoreKeeper_6; }
	inline ScoreKeeper_t1955354816 ** get_address_of_scoreKeeper_6() { return &___scoreKeeper_6; }
	inline void set_scoreKeeper_6(ScoreKeeper_t1955354816 * value)
	{
		___scoreKeeper_6 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_6, value);
	}

	inline static int32_t get_offset_of_scoreValue_7() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___scoreValue_7)); }
	inline int32_t get_scoreValue_7() const { return ___scoreValue_7; }
	inline int32_t* get_address_of_scoreValue_7() { return &___scoreValue_7; }
	inline void set_scoreValue_7(int32_t value)
	{
		___scoreValue_7 = value;
	}

	inline static int32_t get_offset_of_enemyFiresSFX_8() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___enemyFiresSFX_8)); }
	inline AudioClip_t1932558630 * get_enemyFiresSFX_8() const { return ___enemyFiresSFX_8; }
	inline AudioClip_t1932558630 ** get_address_of_enemyFiresSFX_8() { return &___enemyFiresSFX_8; }
	inline void set_enemyFiresSFX_8(AudioClip_t1932558630 * value)
	{
		___enemyFiresSFX_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyFiresSFX_8, value);
	}

	inline static int32_t get_offset_of_enemyDestroiedSFX_9() { return static_cast<int32_t>(offsetof(EnemyBehavior_t122890614, ___enemyDestroiedSFX_9)); }
	inline AudioClip_t1932558630 * get_enemyDestroiedSFX_9() const { return ___enemyDestroiedSFX_9; }
	inline AudioClip_t1932558630 ** get_address_of_enemyDestroiedSFX_9() { return &___enemyDestroiedSFX_9; }
	inline void set_enemyDestroiedSFX_9(AudioClip_t1932558630 * value)
	{
		___enemyDestroiedSFX_9 = value;
		Il2CppCodeGenWriteBarrier(&___enemyDestroiedSFX_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
