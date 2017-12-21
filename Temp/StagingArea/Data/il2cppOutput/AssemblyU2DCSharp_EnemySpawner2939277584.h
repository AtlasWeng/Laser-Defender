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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2939277584  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t1756533147 * ___enemyPrefab_2;
	// System.Single EnemySpawner::spawnWidth
	float ___spawnWidth_3;
	// System.Single EnemySpawner::spawnHeight
	float ___spawnHeight_4;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_5;
	// System.Single EnemySpawner::padding
	float ___padding_6;
	// System.Single EnemySpawner::movingSpeed
	float ___movingSpeed_7;
	// System.Boolean EnemySpawner::movingRight
	bool ___movingRight_8;
	// System.Single EnemySpawner::xMax
	float ___xMax_9;
	// System.Single EnemySpawner::xMin
	float ___xMin_10;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___enemyPrefab_2)); }
	inline GameObject_t1756533147 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t1756533147 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_spawnWidth_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnWidth_3)); }
	inline float get_spawnWidth_3() const { return ___spawnWidth_3; }
	inline float* get_address_of_spawnWidth_3() { return &___spawnWidth_3; }
	inline void set_spawnWidth_3(float value)
	{
		___spawnWidth_3 = value;
	}

	inline static int32_t get_offset_of_spawnHeight_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnHeight_4)); }
	inline float get_spawnHeight_4() const { return ___spawnHeight_4; }
	inline float* get_address_of_spawnHeight_4() { return &___spawnHeight_4; }
	inline void set_spawnHeight_4(float value)
	{
		___spawnHeight_4 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnDelay_5)); }
	inline float get_spawnDelay_5() const { return ___spawnDelay_5; }
	inline float* get_address_of_spawnDelay_5() { return &___spawnDelay_5; }
	inline void set_spawnDelay_5(float value)
	{
		___spawnDelay_5 = value;
	}

	inline static int32_t get_offset_of_padding_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___padding_6)); }
	inline float get_padding_6() const { return ___padding_6; }
	inline float* get_address_of_padding_6() { return &___padding_6; }
	inline void set_padding_6(float value)
	{
		___padding_6 = value;
	}

	inline static int32_t get_offset_of_movingSpeed_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___movingSpeed_7)); }
	inline float get_movingSpeed_7() const { return ___movingSpeed_7; }
	inline float* get_address_of_movingSpeed_7() { return &___movingSpeed_7; }
	inline void set_movingSpeed_7(float value)
	{
		___movingSpeed_7 = value;
	}

	inline static int32_t get_offset_of_movingRight_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___movingRight_8)); }
	inline bool get_movingRight_8() const { return ___movingRight_8; }
	inline bool* get_address_of_movingRight_8() { return &___movingRight_8; }
	inline void set_movingRight_8(bool value)
	{
		___movingRight_8 = value;
	}

	inline static int32_t get_offset_of_xMax_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___xMax_9)); }
	inline float get_xMax_9() const { return ___xMax_9; }
	inline float* get_address_of_xMax_9() { return &___xMax_9; }
	inline void set_xMax_9(float value)
	{
		___xMax_9 = value;
	}

	inline static int32_t get_offset_of_xMin_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___xMin_10)); }
	inline float get_xMin_10() const { return ___xMin_10; }
	inline float* get_address_of_xMin_10() { return &___xMin_10; }
	inline void set_xMin_10(float value)
	{
		___xMin_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
