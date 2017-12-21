#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectController
struct  ObjectController_t1726962475  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Renderer ObjectController::objRenderer
	Renderer_t257310565 * ___objRenderer_2;

public:
	inline static int32_t get_offset_of_objRenderer_2() { return static_cast<int32_t>(offsetof(ObjectController_t1726962475, ___objRenderer_2)); }
	inline Renderer_t257310565 * get_objRenderer_2() const { return ___objRenderer_2; }
	inline Renderer_t257310565 ** get_address_of_objRenderer_2() { return &___objRenderer_2; }
	inline void set_objRenderer_2(Renderer_t257310565 * value)
	{
		___objRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___objRenderer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
