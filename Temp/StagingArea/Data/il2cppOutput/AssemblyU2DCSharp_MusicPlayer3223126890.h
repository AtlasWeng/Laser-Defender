#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// MusicPlayer
struct MusicPlayer_t3223126890;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicPlayer
struct  MusicPlayer_t3223126890  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip MusicPlayer::startClip
	AudioClip_t1932558630 * ___startClip_3;
	// UnityEngine.AudioClip MusicPlayer::gameClip
	AudioClip_t1932558630 * ___gameClip_4;
	// UnityEngine.AudioClip MusicPlayer::endClip
	AudioClip_t1932558630 * ___endClip_5;
	// UnityEngine.AudioSource MusicPlayer::_audio
	AudioSource_t1135106623 * ____audio_6;

public:
	inline static int32_t get_offset_of_startClip_3() { return static_cast<int32_t>(offsetof(MusicPlayer_t3223126890, ___startClip_3)); }
	inline AudioClip_t1932558630 * get_startClip_3() const { return ___startClip_3; }
	inline AudioClip_t1932558630 ** get_address_of_startClip_3() { return &___startClip_3; }
	inline void set_startClip_3(AudioClip_t1932558630 * value)
	{
		___startClip_3 = value;
		Il2CppCodeGenWriteBarrier(&___startClip_3, value);
	}

	inline static int32_t get_offset_of_gameClip_4() { return static_cast<int32_t>(offsetof(MusicPlayer_t3223126890, ___gameClip_4)); }
	inline AudioClip_t1932558630 * get_gameClip_4() const { return ___gameClip_4; }
	inline AudioClip_t1932558630 ** get_address_of_gameClip_4() { return &___gameClip_4; }
	inline void set_gameClip_4(AudioClip_t1932558630 * value)
	{
		___gameClip_4 = value;
		Il2CppCodeGenWriteBarrier(&___gameClip_4, value);
	}

	inline static int32_t get_offset_of_endClip_5() { return static_cast<int32_t>(offsetof(MusicPlayer_t3223126890, ___endClip_5)); }
	inline AudioClip_t1932558630 * get_endClip_5() const { return ___endClip_5; }
	inline AudioClip_t1932558630 ** get_address_of_endClip_5() { return &___endClip_5; }
	inline void set_endClip_5(AudioClip_t1932558630 * value)
	{
		___endClip_5 = value;
		Il2CppCodeGenWriteBarrier(&___endClip_5, value);
	}

	inline static int32_t get_offset_of__audio_6() { return static_cast<int32_t>(offsetof(MusicPlayer_t3223126890, ____audio_6)); }
	inline AudioSource_t1135106623 * get__audio_6() const { return ____audio_6; }
	inline AudioSource_t1135106623 ** get_address_of__audio_6() { return &____audio_6; }
	inline void set__audio_6(AudioSource_t1135106623 * value)
	{
		____audio_6 = value;
		Il2CppCodeGenWriteBarrier(&____audio_6, value);
	}
};

struct MusicPlayer_t3223126890_StaticFields
{
public:
	// MusicPlayer MusicPlayer::instance
	MusicPlayer_t3223126890 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MusicPlayer_t3223126890_StaticFields, ___instance_2)); }
	inline MusicPlayer_t3223126890 * get_instance_2() const { return ___instance_2; }
	inline MusicPlayer_t3223126890 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MusicPlayer_t3223126890 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
