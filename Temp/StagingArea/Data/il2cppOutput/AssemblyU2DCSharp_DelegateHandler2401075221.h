#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// DelegateHandler/OnButtonClickDelegate
struct OnButtonClickDelegate_t1055686502;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DelegateHandler
struct  DelegateHandler_t2401075221  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct DelegateHandler_t2401075221_StaticFields
{
public:
	// DelegateHandler/OnButtonClickDelegate DelegateHandler::buttonClickDelegate
	OnButtonClickDelegate_t1055686502 * ___buttonClickDelegate_2;

public:
	inline static int32_t get_offset_of_buttonClickDelegate_2() { return static_cast<int32_t>(offsetof(DelegateHandler_t2401075221_StaticFields, ___buttonClickDelegate_2)); }
	inline OnButtonClickDelegate_t1055686502 * get_buttonClickDelegate_2() const { return ___buttonClickDelegate_2; }
	inline OnButtonClickDelegate_t1055686502 ** get_address_of_buttonClickDelegate_2() { return &___buttonClickDelegate_2; }
	inline void set_buttonClickDelegate_2(OnButtonClickDelegate_t1055686502 * value)
	{
		___buttonClickDelegate_2 = value;
		Il2CppCodeGenWriteBarrier(&___buttonClickDelegate_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
