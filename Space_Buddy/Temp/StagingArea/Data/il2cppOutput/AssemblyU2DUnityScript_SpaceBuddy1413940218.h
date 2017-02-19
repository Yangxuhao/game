#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpaceBuddy
struct  SpaceBuddy_t1413940218  : public MonoBehaviour_t1158329972
{
public:
	// System.Single SpaceBuddy::power
	float ___power_2;
	// System.Single SpaceBuddy::speed
	float ___speed_3;
	// System.Single SpaceBuddy::camSpeed
	float ___camSpeed_4;
	// System.Single SpaceBuddy::lavaSpeed
	float ___lavaSpeed_5;
	// UnityEngine.Rigidbody2D SpaceBuddy::spaceBuddy
	Rigidbody2D_t502193897 * ___spaceBuddy_6;
	// UnityEngine.GameObject SpaceBuddy::cam
	GameObject_t1756533147 * ___cam_7;
	// UnityEngine.GameObject SpaceBuddy::lava
	GameObject_t1756533147 * ___lava_8;
	// UnityEngine.AudioClip SpaceBuddy::jumpclip
	AudioClip_t1932558630 * ___jumpclip_9;
	// UnityEngine.AudioClip SpaceBuddy::winclip
	AudioClip_t1932558630 * ___winclip_10;
	// UnityEngine.AudioClip SpaceBuddy::loseclip
	AudioClip_t1932558630 * ___loseclip_11;
	// System.Single SpaceBuddy::score
	float ___score_12;

public:
	inline static int32_t get_offset_of_power_2() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___power_2)); }
	inline float get_power_2() const { return ___power_2; }
	inline float* get_address_of_power_2() { return &___power_2; }
	inline void set_power_2(float value)
	{
		___power_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_camSpeed_4() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___camSpeed_4)); }
	inline float get_camSpeed_4() const { return ___camSpeed_4; }
	inline float* get_address_of_camSpeed_4() { return &___camSpeed_4; }
	inline void set_camSpeed_4(float value)
	{
		___camSpeed_4 = value;
	}

	inline static int32_t get_offset_of_lavaSpeed_5() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___lavaSpeed_5)); }
	inline float get_lavaSpeed_5() const { return ___lavaSpeed_5; }
	inline float* get_address_of_lavaSpeed_5() { return &___lavaSpeed_5; }
	inline void set_lavaSpeed_5(float value)
	{
		___lavaSpeed_5 = value;
	}

	inline static int32_t get_offset_of_spaceBuddy_6() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___spaceBuddy_6)); }
	inline Rigidbody2D_t502193897 * get_spaceBuddy_6() const { return ___spaceBuddy_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_spaceBuddy_6() { return &___spaceBuddy_6; }
	inline void set_spaceBuddy_6(Rigidbody2D_t502193897 * value)
	{
		___spaceBuddy_6 = value;
		Il2CppCodeGenWriteBarrier(&___spaceBuddy_6, value);
	}

	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___cam_7)); }
	inline GameObject_t1756533147 * get_cam_7() const { return ___cam_7; }
	inline GameObject_t1756533147 ** get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(GameObject_t1756533147 * value)
	{
		___cam_7 = value;
		Il2CppCodeGenWriteBarrier(&___cam_7, value);
	}

	inline static int32_t get_offset_of_lava_8() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___lava_8)); }
	inline GameObject_t1756533147 * get_lava_8() const { return ___lava_8; }
	inline GameObject_t1756533147 ** get_address_of_lava_8() { return &___lava_8; }
	inline void set_lava_8(GameObject_t1756533147 * value)
	{
		___lava_8 = value;
		Il2CppCodeGenWriteBarrier(&___lava_8, value);
	}

	inline static int32_t get_offset_of_jumpclip_9() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___jumpclip_9)); }
	inline AudioClip_t1932558630 * get_jumpclip_9() const { return ___jumpclip_9; }
	inline AudioClip_t1932558630 ** get_address_of_jumpclip_9() { return &___jumpclip_9; }
	inline void set_jumpclip_9(AudioClip_t1932558630 * value)
	{
		___jumpclip_9 = value;
		Il2CppCodeGenWriteBarrier(&___jumpclip_9, value);
	}

	inline static int32_t get_offset_of_winclip_10() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___winclip_10)); }
	inline AudioClip_t1932558630 * get_winclip_10() const { return ___winclip_10; }
	inline AudioClip_t1932558630 ** get_address_of_winclip_10() { return &___winclip_10; }
	inline void set_winclip_10(AudioClip_t1932558630 * value)
	{
		___winclip_10 = value;
		Il2CppCodeGenWriteBarrier(&___winclip_10, value);
	}

	inline static int32_t get_offset_of_loseclip_11() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___loseclip_11)); }
	inline AudioClip_t1932558630 * get_loseclip_11() const { return ___loseclip_11; }
	inline AudioClip_t1932558630 ** get_address_of_loseclip_11() { return &___loseclip_11; }
	inline void set_loseclip_11(AudioClip_t1932558630 * value)
	{
		___loseclip_11 = value;
		Il2CppCodeGenWriteBarrier(&___loseclip_11, value);
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(SpaceBuddy_t1413940218, ___score_12)); }
	inline float get_score_12() const { return ___score_12; }
	inline float* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(float value)
	{
		___score_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
