#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// SpaceBuddy
struct SpaceBuddy_t1413940218;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DUnityScript_SpaceBuddy1413940218.h"
#include "AssemblyU2DUnityScript_SpaceBuddy1413940218MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Application354826772MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623MethodDeclarations.h"
#include "UnityEngine_UnityEngine_PlayerPrefs3325146001MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices1910041954MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI4082743951MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Rect3681755626MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpaceBuddy::.ctor()
extern "C"  void SpaceBuddy__ctor_m2519044712 (SpaceBuddy_t1413940218 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		__this->set_power_2((20.0f));
		__this->set_speed_3((3.0f));
		__this->set_camSpeed_4((100.0f));
		__this->set_lavaSpeed_5((100.0f));
		return;
	}
}
// System.Void SpaceBuddy::Start()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1393023544;
extern Il2CppCodeGenString* _stringLiteral2247021248;
extern const uint32_t SpaceBuddy_Start_m2620322376_MetadataUsageId;
extern "C"  void SpaceBuddy_Start_m2620322376 (SpaceBuddy_t1413940218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpaceBuddy_Start_m2620322376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m1151756873(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, _stringLiteral1393023544, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		AudioClip_t1932558630 * L_2 = __this->get_winclip_10();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		float L_5 = PlayerPrefs_GetFloat_m2188986939(NULL /*static, unused*/, _stringLiteral2247021248, (((float)((float)0))), /*hidden argument*/NULL);
		__this->set_score_12(L_5);
	}

IL_003c:
	{
		return;
	}
}
// System.Void SpaceBuddy::OnGUI()
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* RuntimeServices_t1910041954_il2cpp_TypeInfo_var;
extern Il2CppClass* GUI_t4082743951_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4155697506;
extern const uint32_t SpaceBuddy_OnGUI_m2795652664_MetadataUsageId;
extern "C"  void SpaceBuddy_OnGUI_m2795652664 (SpaceBuddy_t1413940218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpaceBuddy_OnGUI_m2795652664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t3681755626  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m1220545469(&L_0, (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)10)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)30)))), /*hidden argument*/NULL);
		float L_1 = __this->get_score_12();
		float L_2 = L_1;
		Il2CppObject * L_3 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1910041954_il2cpp_TypeInfo_var);
		String_t* L_4 = RuntimeServices_op_Addition_m3403021532(NULL /*static, unused*/, _stringLiteral4155697506, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t4082743951_il2cpp_TypeInfo_var);
		GUI_Box_m2739364838(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpaceBuddy::FixedUpdate()
extern "C"  void SpaceBuddy_FixedUpdate_m539667823 (SpaceBuddy_t1413940218 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void SpaceBuddy::MoveCharacter() */, __this);
		return;
	}
}
// System.Void SpaceBuddy::MoveCharacter()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t SpaceBuddy_MoveCharacter_m1546429488_MetadataUsageId;
extern "C"  void SpaceBuddy_MoveCharacter_m1546429488 (SpaceBuddy_t1413940218 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpaceBuddy_MoveCharacter_m1546429488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_3();
		Vector3_t2243707580  L_4 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Transform_Translate_m3316827744(L_1, L_6, /*hidden argument*/NULL);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Vector3_get_right_m1884123822(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_speed_3();
		Vector3_t2243707580  L_11 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Transform_Translate_m3316827744(L_8, L_13, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void SpaceBuddy::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2247021248;
extern Il2CppCodeGenString* _stringLiteral3675648761;
extern Il2CppCodeGenString* _stringLiteral2621208;
extern Il2CppCodeGenString* _stringLiteral4092831223;
extern Il2CppCodeGenString* _stringLiteral1393023544;
extern Il2CppCodeGenString* _stringLiteral3336788593;
extern const uint32_t SpaceBuddy_OnTriggerEnter2D_m1649262864_MetadataUsageId;
extern "C"  void SpaceBuddy_OnTriggerEnter2D_m1649262864 (SpaceBuddy_t1413940218 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpaceBuddy_OnTriggerEnter2D_m1649262864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_score_12();
		__this->set_score_12(((float)((float)L_0+(float)(50.0f))));
		AudioClip_t1932558630 * L_1 = __this->get_jumpclip_9();
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		float L_4 = __this->get_score_12();
		PlayerPrefs_SetFloat_m1496426569(NULL /*static, unused*/, _stringLiteral2247021248, L_4, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_5 = __this->get_spaceBuddy_6();
		float L_6 = __this->get_power_2();
		Vector2_t2243707579  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3067419446(&L_7, (((float)((float)0))), L_6, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_5, L_7, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_8 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral3675648761, /*hidden argument*/NULL);
		__this->set_cam_7(L_8);
		GameObject_t1756533147 * L_9 = GameObject_Find_m836511350(NULL /*static, unused*/, _stringLiteral2621208, /*hidden argument*/NULL);
		__this->set_lava_8(L_9);
		GameObject_t1756533147 * L_10 = __this->get_cam_7();
		Transform_t3275118058 * L_11 = GameObject_get_transform_m909382139(L_10, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Vector3_get_up_m2725403797(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = __this->get_camSpeed_4();
		Vector3_t2243707580  L_14 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		float L_15 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		Transform_Translate_m3316827744(L_11, L_16, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_17 = __this->get_lava_8();
		Transform_t3275118058 * L_18 = GameObject_get_transform_m909382139(L_17, /*hidden argument*/NULL);
		Vector3_t2243707580  L_19 = Vector3_get_up_m2725403797(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_20 = __this->get_lavaSpeed_5();
		Vector3_t2243707580  L_21 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_23 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Transform_Translate_m3316827744(L_18, L_23, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_24 = ___other0;
		GameObject_t1756533147 * L_25 = Component_get_gameObject_m3105766835(L_24, /*hidden argument*/NULL);
		String_t* L_26 = Object_get_name_m2079638459(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_26, _stringLiteral2621208, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		AudioClip_t1932558630 * L_28 = __this->get_loseclip_11();
		Transform_t3275118058 * L_29 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_30 = Transform_get_position_m1104419803(L_29, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (((float)((float)0))), /*hidden argument*/NULL);
	}

IL_00fb:
	{
		Collider2D_t646061738 * L_31 = ___other0;
		GameObject_t1756533147 * L_32 = Component_get_gameObject_m3105766835(L_31, /*hidden argument*/NULL);
		String_t* L_33 = Object_get_name_m2079638459(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_33, _stringLiteral4092831223, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_011f;
		}
	}
	{
		Application_LoadLevel_m393995325(NULL /*static, unused*/, _stringLiteral1393023544, /*hidden argument*/NULL);
	}

IL_011f:
	{
		Collider2D_t646061738 * L_35 = ___other0;
		GameObject_t1756533147 * L_36 = Component_get_gameObject_m3105766835(L_35, /*hidden argument*/NULL);
		String_t* L_37 = Object_get_name_m2079638459(L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_38 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_37, _stringLiteral3336788593, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0156;
		}
	}
	{
		AudioClip_t1932558630 * L_39 = __this->get_winclip_10();
		Transform_t3275118058 * L_40 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_41 = Transform_get_position_m1104419803(L_40, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m1513558507(NULL /*static, unused*/, L_39, L_41, /*hidden argument*/NULL);
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (((float)((float)0))), /*hidden argument*/NULL);
	}

IL_0156:
	{
		return;
	}
}
// System.Void SpaceBuddy::Main()
extern "C"  void SpaceBuddy_Main_m3799301679 (SpaceBuddy_t1413940218 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
