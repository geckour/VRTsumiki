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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8;
// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>
struct List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F;
// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>
struct List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_tDECBF737A96DF978685F6386C44B9284190E43C7;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEditor.XR.LegacyInputHelpers.CameraOffset
struct CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F;
// UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29
struct U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.LegacyInputHelpers.ArmModel
struct ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E;
// UnityEngine.XR.LegacyInputHelpers.ArmModelTransition
struct ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818;
// UnityEngine.XR.LegacyInputHelpers.ArmModelTransition[]
struct ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6;
// UnityEngine.XR.LegacyInputHelpers.SwingArmModel
struct SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579;
// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel
struct TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB;
// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData[]
struct ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7;
// UnityEngine.XR.XRInputSubsystem[]
struct XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06;

IL2CPP_EXTERN_C RuntimeClass* ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral41565F7C6C5345CE413C300EC4DFEDF464D7A0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8D321E2A9DEC28C842A47091F36A971F96005711;
IL2CPP_EXTERN_C String_t* _stringLiteralA44755AADA53889F28EEF130E57C6A18C5BBFE3C;
IL2CPP_EXTERN_C String_t* _stringLiteralCF784CE1CFD8D3FAB486CE0BFFB3AAFF50EDDEE8;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F38E8D02434BDC6108658151DD9B8B4BD7E44A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m09C0F69BAD3F901475940B872CEC10690C6C4C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3525A0E8727916DD27150C650D75C67613F096E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0762C17032C6858338065940E7AF5AEAD6C4C13E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5BBA7DCB1113DD06AE1D364A6EA35646FE6AB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA9057F42AF5FB2CCA527070CC866D76A4595CA87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m8FD3D2B2ABED426E66D343AF824E7EC3F730EC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5DECF95F09BC92A35BC40C1E7914988FEC310FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC3782A3F75F13B413715108B25F8C2DA84578026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF7C25A59E6E4615BBC64374DD0DAC158BF1564C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m58AFC034BC13285ADE6ABCC93A614D3CC7DCAF4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m632E222FF6E83A321BA7782F8FE6ED56CD284606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m3A912FAA9193C37CE01B09FE9B223975B29B1B2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m5B95C6031E80B0738C08F35BE482D1E4B0F62F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_mE8B6F31805AB346EED4CCC65D0DC466AAD71108A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ArmModel_ApplyExtensionOffset_m353A0A37ED99B93D1A85C598FD5680CDDE6F7FC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_ApplyInverseNeckModel_mE7E8842A6D94ACC2FCC3FE6BD08696924F64D48D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_ApplyRotationToJoints_m5C2502E5D9357036C7EBAF808C4B901E0B96F773_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_CalculateExtensionRatio_mD5D73A95585CA8D853ECF272BC9DBACC81F1DC86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_CalculateFinalJointRotations_m5525B9E8D8536B78C0D209D1E2404AEF79BDA64A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_CalculateLerpRotation_mAD379B2D70BC43747DD84C5A5789F34943DEBDA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_GetControllerRotation_m3AA2C877C77E9C72CF970C36B25905CEFC19B2D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_GetPoseFromProvider_mDB806260D7866C6D0C9CA460BDBD8FF3823ECCE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_SetUntransformedJointPositions_mC447D930EF57E0BBA292A4B75D374DD1A2D0E535_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_TryGetAngularAcceleration_mDA0B0E023E878DD878877CB14A7AEF0932CBB145_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_TryGetAngularVelocity_mD8018D93E0FFE5C0B4AABFD517E01AB93474C474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_TryGetForwardVector_m8A8A196699D6723AD4BCE5413615EB7CB7BE4A56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_TryGetPosition_mB48EAB4D5C8B59D52FF2B88C17D500378EC79290_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_UpdateNeckPosition_mB5C842D7B269D56FCF2670173A86576AD2AB705C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_UpdateTorsoDirection_m11E4E1564C91F575E8108F87A26CD2DA4C295971_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel__cctor_mD596D096B222A2BF61812D94C196788702354150_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel__ctor_m923FA495F842BF9DA2B0C50180E9498CEBCAB838_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArmModel_get_shoulderPosition_mB75161B5741A489BB5A81B16615920F8B4D39790_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraOffset_Awake_m7A94421CE8DE26F43CF4D9D41D7BB53F62681AF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraOffset_RepeatInitializeCamera_mC704BE5F9265B5B13BC23E7BFA4EB531F08AF26A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraOffset_SetupCameraLegacy_mA23BE3667BFF01CC7E0C7B4FB9390B26C11A34E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraOffset_SetupCamera_mBEEAA13DA8BDE9D6A4FFE3AB434CBEC562A60926_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraOffset__cctor_mD0A9B0A22844EEE32A3682C1E54291EA6E7FD637_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SwingArmModel_CalculateFinalJointRotations_m0D59DAF7F27D8CC3513DA4BF000A476ABD265872_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SwingArmModel__ctor_mC5CABBAA2C1E63A6A1AB4AA731B33C35C796FFA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel_GetPoseFromProvider_m00E26A7E6F311767928AE21A5F15312DE22662F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel_Queue_m421B9D1BD17E685EA5920A2F479A164212241F84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel_Queue_mBCE6B344D26F6D39517BA9E2F9F78990FD8F40CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel_RemoveJustStartingTransitions_m953D994D076E6F93C99630AEBEEBB329E6D6A99B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel_RemoveOldestTransition_m608FCE3471422FA847E4ED8B312DF7BE9B2E8387_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel_UpdateBlends_m2045B9BBA0377ECAF7941D7DF432B38C2B6A9DF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionArmModel__ctor_m84EB9610E749854578C03329B11E4FDA09B75CD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_mE8B6F31805AB346EED4CCC65D0DC466AAD71108A_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5;
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8FD8702C746DD25CDFA248F38EB4945891E5D74A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>
struct  List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F, ____items_1)); }
	inline ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6* get__items_1() const { return ____items_1; }
	inline ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F_StaticFields, ____emptyArray_5)); }
	inline ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ArmModelTransitionU5BU5D_tAAB7CB68320E09A5C5EFB68D5466D20F29B6FED6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData>
struct  List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3, ____items_1)); }
	inline ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* get__items_1() const { return ____items_1; }
	inline ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3_StaticFields, ____emptyArray_5)); }
	inline ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct  List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14, ____items_1)); }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemU5BU5D_t82F200506A7C1032DE5CADFD4E7B0770EF2A15F5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct  List_1_tDECBF737A96DF978685F6386C44B9284190E43C7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____items_1)); }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_StaticFields, ____emptyArray_5)); }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29
struct  U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD  : public RuntimeObject
{
public:
	// System.Int32 UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEditor.XR.LegacyInputHelpers.CameraOffset UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::<>4__this
	CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD, ___U3CU3E4__this_2)); }
	inline CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.XR.LegacyInputHelpers.ArmModelTransition
struct  ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818  : public RuntimeObject
{
public:
	// System.String UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::m_KeyName
	String_t* ___m_KeyName_0;
	// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::m_ArmModel
	ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___m_ArmModel_1;

public:
	inline static int32_t get_offset_of_m_KeyName_0() { return static_cast<int32_t>(offsetof(ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818, ___m_KeyName_0)); }
	inline String_t* get_m_KeyName_0() const { return ___m_KeyName_0; }
	inline String_t** get_address_of_m_KeyName_0() { return &___m_KeyName_0; }
	inline void set_m_KeyName_0(String_t* value)
	{
		___m_KeyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ArmModel_1() { return static_cast<int32_t>(offsetof(ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818, ___m_ArmModel_1)); }
	inline ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * get_m_ArmModel_1() const { return ___m_ArmModel_1; }
	inline ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E ** get_address_of_m_ArmModel_1() { return &___m_ArmModel_1; }
	inline void set_m_ArmModel_1(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * value)
	{
		___m_ArmModel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArmModel_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>
struct  Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01, ___list_0)); }
	inline List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * get_list_0() const { return ___list_0; }
	inline List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01, ___current_3)); }
	inline ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * get_current_3() const { return ___current_3; }
	inline ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData
struct  ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 
{
public:
	// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData::armModel
	ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___armModel_0;
	// System.Single UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData::currentBlendAmount
	float ___currentBlendAmount_1;

public:
	inline static int32_t get_offset_of_armModel_0() { return static_cast<int32_t>(offsetof(ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4, ___armModel_0)); }
	inline ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * get_armModel_0() const { return ___armModel_0; }
	inline ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E ** get_address_of_armModel_0() { return &___armModel_0; }
	inline void set_armModel_0(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * value)
	{
		___armModel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armModel_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentBlendAmount_1() { return static_cast<int32_t>(offsetof(ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4, ___currentBlendAmount_1)); }
	inline float get_currentBlendAmount_1() const { return ___currentBlendAmount_1; }
	inline float* get_address_of_currentBlendAmount_1() { return &___currentBlendAmount_1; }
	inline void set_currentBlendAmount_1(float value)
	{
		___currentBlendAmount_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
struct ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_pinvoke
{
	ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___armModel_0;
	float ___currentBlendAmount_1;
};
// Native definition for COM marshalling of UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
struct ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_com
{
	ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___armModel_0;
	float ___currentBlendAmount_1;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode
struct  UserRequestedTrackingMode_t1CEDFBA6C68AD03D32BBE3F805F14280277A913C 
{
public:
	// System.Int32 UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserRequestedTrackingMode_t1CEDFBA6C68AD03D32BBE3F805F14280277A913C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.SpatialTracking.PoseDataFlags
struct  PoseDataFlags_t89C5BF634AE03CFA5228748718F72FAA04A103C7 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.PoseDataFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseDataFlags_t89C5BF634AE03CFA5228748718F72FAA04A103C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingOriginModeFlags
struct  TrackingOriginModeFlags_t99F07374B49B56D7A4AB1AB8EB456ACDD00B0A52 
{
public:
	// System.Int32 UnityEngine.XR.TrackingOriginModeFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingOriginModeFlags_t99F07374B49B56D7A4AB1AB8EB456ACDD00B0A52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.TrackingSpaceType
struct  TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.XR.XRNodeState
struct  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Acceleration_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularAcceleration_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct  XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7  : public IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___trackingOriginUpdated_2)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___boundaryChanged_3)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___m_DeviceIdsCache_4)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEditor.XR.LegacyInputHelpers.CameraOffset
struct  CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraFloorOffsetObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CameraFloorOffsetObject_5;
	// UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_RequestedTrackingMode
	int32_t ___m_RequestedTrackingMode_6;
	// UnityEngine.XR.TrackingOriginModeFlags UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_TrackingOriginMode
	int32_t ___m_TrackingOriginMode_7;
	// UnityEngine.XR.TrackingSpaceType UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_TrackingSpace
	int32_t ___m_TrackingSpace_8;
	// System.Single UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraYOffset
	float ___m_CameraYOffset_9;
	// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraInitialized
	bool ___m_CameraInitialized_10;
	// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::m_CameraInitializing
	bool ___m_CameraInitializing_11;

public:
	inline static int32_t get_offset_of_m_CameraFloorOffsetObject_5() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_CameraFloorOffsetObject_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CameraFloorOffsetObject_5() const { return ___m_CameraFloorOffsetObject_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CameraFloorOffsetObject_5() { return &___m_CameraFloorOffsetObject_5; }
	inline void set_m_CameraFloorOffsetObject_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CameraFloorOffsetObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CameraFloorOffsetObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_RequestedTrackingMode_6() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_RequestedTrackingMode_6)); }
	inline int32_t get_m_RequestedTrackingMode_6() const { return ___m_RequestedTrackingMode_6; }
	inline int32_t* get_address_of_m_RequestedTrackingMode_6() { return &___m_RequestedTrackingMode_6; }
	inline void set_m_RequestedTrackingMode_6(int32_t value)
	{
		___m_RequestedTrackingMode_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingOriginMode_7() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_TrackingOriginMode_7)); }
	inline int32_t get_m_TrackingOriginMode_7() const { return ___m_TrackingOriginMode_7; }
	inline int32_t* get_address_of_m_TrackingOriginMode_7() { return &___m_TrackingOriginMode_7; }
	inline void set_m_TrackingOriginMode_7(int32_t value)
	{
		___m_TrackingOriginMode_7 = value;
	}

	inline static int32_t get_offset_of_m_TrackingSpace_8() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_TrackingSpace_8)); }
	inline int32_t get_m_TrackingSpace_8() const { return ___m_TrackingSpace_8; }
	inline int32_t* get_address_of_m_TrackingSpace_8() { return &___m_TrackingSpace_8; }
	inline void set_m_TrackingSpace_8(int32_t value)
	{
		___m_TrackingSpace_8 = value;
	}

	inline static int32_t get_offset_of_m_CameraYOffset_9() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_CameraYOffset_9)); }
	inline float get_m_CameraYOffset_9() const { return ___m_CameraYOffset_9; }
	inline float* get_address_of_m_CameraYOffset_9() { return &___m_CameraYOffset_9; }
	inline void set_m_CameraYOffset_9(float value)
	{
		___m_CameraYOffset_9 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitialized_10() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_CameraInitialized_10)); }
	inline bool get_m_CameraInitialized_10() const { return ___m_CameraInitialized_10; }
	inline bool* get_address_of_m_CameraInitialized_10() { return &___m_CameraInitialized_10; }
	inline void set_m_CameraInitialized_10(bool value)
	{
		___m_CameraInitialized_10 = value;
	}

	inline static int32_t get_offset_of_m_CameraInitializing_11() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F, ___m_CameraInitializing_11)); }
	inline bool get_m_CameraInitializing_11() const { return ___m_CameraInitializing_11; }
	inline bool* get_address_of_m_CameraInitializing_11() { return &___m_CameraInitializing_11; }
	inline void set_m_CameraInitializing_11(bool value)
	{
		___m_CameraInitializing_11 = value;
	}
};

struct CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEditor.XR.LegacyInputHelpers.CameraOffset::s_InputSubsystems
	List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * ___s_InputSubsystems_12;

public:
	inline static int32_t get_offset_of_s_InputSubsystems_12() { return static_cast<int32_t>(offsetof(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields, ___s_InputSubsystems_12)); }
	inline List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * get_s_InputSubsystems_12() const { return ___s_InputSubsystems_12; }
	inline List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 ** get_address_of_s_InputSubsystems_12() { return &___s_InputSubsystems_12; }
	inline void set_s_InputSubsystems_12(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * value)
	{
		___s_InputSubsystems_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystems_12), (void*)value);
	}
};


// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct  BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.XR.LegacyInputHelpers.ArmModel
struct  ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E  : public BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B
{
public:
	// UnityEngine.Pose UnityEngine.XR.LegacyInputHelpers.ArmModel::m_FinalPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_FinalPose_4;
	// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::m_HeadPoseSource
	int32_t ___m_HeadPoseSource_6;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowRestPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ElbowRestPosition_7;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_WristRestPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_WristRestPosition_8;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ControllerRestPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ControllerRestPosition_9;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ArmExtensionOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ArmExtensionOffset_10;
	// System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowBendRatio
	float ___m_ElbowBendRatio_11;
	// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::m_IsLockedToNeck
	bool ___m_IsLockedToNeck_12;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_NeckPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NeckPosition_13;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ElbowPosition_14;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ElbowRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_ElbowRotation_15;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_WristPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_WristPosition_16;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_WristRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_WristRotation_17;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ControllerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_ControllerPosition_18;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_ControllerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_ControllerRotation_19;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_HandedMultiplier
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_HandedMultiplier_20;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::m_TorsoDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_TorsoDirection_21;
	// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::m_TorsoRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_TorsoRotation_22;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListOrientation
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___xrNodeStateListOrientation_33;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListPosition
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___xrNodeStateListPosition_34;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListAngularAcceleration
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___xrNodeStateListAngularAcceleration_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.LegacyInputHelpers.ArmModel::xrNodeStateListAngularVelocity
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___xrNodeStateListAngularVelocity_36;

public:
	inline static int32_t get_offset_of_m_FinalPose_4() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_FinalPose_4)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_FinalPose_4() const { return ___m_FinalPose_4; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_FinalPose_4() { return &___m_FinalPose_4; }
	inline void set_m_FinalPose_4(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_FinalPose_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_HeadPoseSource_6() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_HeadPoseSource_6)); }
	inline int32_t get_m_HeadPoseSource_6() const { return ___m_HeadPoseSource_6; }
	inline int32_t* get_address_of_m_HeadPoseSource_6() { return &___m_HeadPoseSource_6; }
	inline void set_m_HeadPoseSource_6(int32_t value)
	{
		___m_HeadPoseSource_6 = value;
	}

	inline static int32_t get_offset_of_m_ElbowRestPosition_7() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ElbowRestPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ElbowRestPosition_7() const { return ___m_ElbowRestPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ElbowRestPosition_7() { return &___m_ElbowRestPosition_7; }
	inline void set_m_ElbowRestPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ElbowRestPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_WristRestPosition_8() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_WristRestPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_WristRestPosition_8() const { return ___m_WristRestPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_WristRestPosition_8() { return &___m_WristRestPosition_8; }
	inline void set_m_WristRestPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_WristRestPosition_8 = value;
	}

	inline static int32_t get_offset_of_m_ControllerRestPosition_9() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ControllerRestPosition_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ControllerRestPosition_9() const { return ___m_ControllerRestPosition_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ControllerRestPosition_9() { return &___m_ControllerRestPosition_9; }
	inline void set_m_ControllerRestPosition_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ControllerRestPosition_9 = value;
	}

	inline static int32_t get_offset_of_m_ArmExtensionOffset_10() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ArmExtensionOffset_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ArmExtensionOffset_10() const { return ___m_ArmExtensionOffset_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ArmExtensionOffset_10() { return &___m_ArmExtensionOffset_10; }
	inline void set_m_ArmExtensionOffset_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ArmExtensionOffset_10 = value;
	}

	inline static int32_t get_offset_of_m_ElbowBendRatio_11() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ElbowBendRatio_11)); }
	inline float get_m_ElbowBendRatio_11() const { return ___m_ElbowBendRatio_11; }
	inline float* get_address_of_m_ElbowBendRatio_11() { return &___m_ElbowBendRatio_11; }
	inline void set_m_ElbowBendRatio_11(float value)
	{
		___m_ElbowBendRatio_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLockedToNeck_12() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_IsLockedToNeck_12)); }
	inline bool get_m_IsLockedToNeck_12() const { return ___m_IsLockedToNeck_12; }
	inline bool* get_address_of_m_IsLockedToNeck_12() { return &___m_IsLockedToNeck_12; }
	inline void set_m_IsLockedToNeck_12(bool value)
	{
		___m_IsLockedToNeck_12 = value;
	}

	inline static int32_t get_offset_of_m_NeckPosition_13() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_NeckPosition_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NeckPosition_13() const { return ___m_NeckPosition_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NeckPosition_13() { return &___m_NeckPosition_13; }
	inline void set_m_NeckPosition_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NeckPosition_13 = value;
	}

	inline static int32_t get_offset_of_m_ElbowPosition_14() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ElbowPosition_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ElbowPosition_14() const { return ___m_ElbowPosition_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ElbowPosition_14() { return &___m_ElbowPosition_14; }
	inline void set_m_ElbowPosition_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ElbowPosition_14 = value;
	}

	inline static int32_t get_offset_of_m_ElbowRotation_15() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ElbowRotation_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_ElbowRotation_15() const { return ___m_ElbowRotation_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_ElbowRotation_15() { return &___m_ElbowRotation_15; }
	inline void set_m_ElbowRotation_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_ElbowRotation_15 = value;
	}

	inline static int32_t get_offset_of_m_WristPosition_16() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_WristPosition_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_WristPosition_16() const { return ___m_WristPosition_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_WristPosition_16() { return &___m_WristPosition_16; }
	inline void set_m_WristPosition_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_WristPosition_16 = value;
	}

	inline static int32_t get_offset_of_m_WristRotation_17() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_WristRotation_17)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_WristRotation_17() const { return ___m_WristRotation_17; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_WristRotation_17() { return &___m_WristRotation_17; }
	inline void set_m_WristRotation_17(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_WristRotation_17 = value;
	}

	inline static int32_t get_offset_of_m_ControllerPosition_18() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ControllerPosition_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_ControllerPosition_18() const { return ___m_ControllerPosition_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_ControllerPosition_18() { return &___m_ControllerPosition_18; }
	inline void set_m_ControllerPosition_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_ControllerPosition_18 = value;
	}

	inline static int32_t get_offset_of_m_ControllerRotation_19() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_ControllerRotation_19)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_ControllerRotation_19() const { return ___m_ControllerRotation_19; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_ControllerRotation_19() { return &___m_ControllerRotation_19; }
	inline void set_m_ControllerRotation_19(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_ControllerRotation_19 = value;
	}

	inline static int32_t get_offset_of_m_HandedMultiplier_20() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_HandedMultiplier_20)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_HandedMultiplier_20() const { return ___m_HandedMultiplier_20; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_HandedMultiplier_20() { return &___m_HandedMultiplier_20; }
	inline void set_m_HandedMultiplier_20(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_HandedMultiplier_20 = value;
	}

	inline static int32_t get_offset_of_m_TorsoDirection_21() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_TorsoDirection_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_TorsoDirection_21() const { return ___m_TorsoDirection_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_TorsoDirection_21() { return &___m_TorsoDirection_21; }
	inline void set_m_TorsoDirection_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_TorsoDirection_21 = value;
	}

	inline static int32_t get_offset_of_m_TorsoRotation_22() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___m_TorsoRotation_22)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_TorsoRotation_22() const { return ___m_TorsoRotation_22; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_TorsoRotation_22() { return &___m_TorsoRotation_22; }
	inline void set_m_TorsoRotation_22(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_TorsoRotation_22 = value;
	}

	inline static int32_t get_offset_of_xrNodeStateListOrientation_33() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___xrNodeStateListOrientation_33)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_xrNodeStateListOrientation_33() const { return ___xrNodeStateListOrientation_33; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_xrNodeStateListOrientation_33() { return &___xrNodeStateListOrientation_33; }
	inline void set_xrNodeStateListOrientation_33(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___xrNodeStateListOrientation_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListOrientation_33), (void*)value);
	}

	inline static int32_t get_offset_of_xrNodeStateListPosition_34() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___xrNodeStateListPosition_34)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_xrNodeStateListPosition_34() const { return ___xrNodeStateListPosition_34; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_xrNodeStateListPosition_34() { return &___xrNodeStateListPosition_34; }
	inline void set_xrNodeStateListPosition_34(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___xrNodeStateListPosition_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListPosition_34), (void*)value);
	}

	inline static int32_t get_offset_of_xrNodeStateListAngularAcceleration_35() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___xrNodeStateListAngularAcceleration_35)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_xrNodeStateListAngularAcceleration_35() const { return ___xrNodeStateListAngularAcceleration_35; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_xrNodeStateListAngularAcceleration_35() { return &___xrNodeStateListAngularAcceleration_35; }
	inline void set_xrNodeStateListAngularAcceleration_35(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___xrNodeStateListAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListAngularAcceleration_35), (void*)value);
	}

	inline static int32_t get_offset_of_xrNodeStateListAngularVelocity_36() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E, ___xrNodeStateListAngularVelocity_36)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_xrNodeStateListAngularVelocity_36() const { return ___xrNodeStateListAngularVelocity_36; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_xrNodeStateListAngularVelocity_36() { return &___xrNodeStateListAngularVelocity_36; }
	inline void set_xrNodeStateListAngularVelocity_36(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___xrNodeStateListAngularVelocity_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xrNodeStateListAngularVelocity_36), (void*)value);
	}
};

struct ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_ELBOW_REST_POSITION
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___DEFAULT_ELBOW_REST_POSITION_23;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_WRIST_REST_POSITION
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___DEFAULT_WRIST_REST_POSITION_24;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_CONTROLLER_REST_POSITION
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___DEFAULT_CONTROLLER_REST_POSITION_25;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::DEFAULT_ARM_EXTENSION_OFFSET
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___DEFAULT_ARM_EXTENSION_OFFSET_26;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::SHOULDER_POSITION
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___SHOULDER_POSITION_29;
	// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::NECK_OFFSET
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___NECK_OFFSET_30;

public:
	inline static int32_t get_offset_of_DEFAULT_ELBOW_REST_POSITION_23() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields, ___DEFAULT_ELBOW_REST_POSITION_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_DEFAULT_ELBOW_REST_POSITION_23() const { return ___DEFAULT_ELBOW_REST_POSITION_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_DEFAULT_ELBOW_REST_POSITION_23() { return &___DEFAULT_ELBOW_REST_POSITION_23; }
	inline void set_DEFAULT_ELBOW_REST_POSITION_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___DEFAULT_ELBOW_REST_POSITION_23 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_WRIST_REST_POSITION_24() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields, ___DEFAULT_WRIST_REST_POSITION_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_DEFAULT_WRIST_REST_POSITION_24() const { return ___DEFAULT_WRIST_REST_POSITION_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_DEFAULT_WRIST_REST_POSITION_24() { return &___DEFAULT_WRIST_REST_POSITION_24; }
	inline void set_DEFAULT_WRIST_REST_POSITION_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___DEFAULT_WRIST_REST_POSITION_24 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_CONTROLLER_REST_POSITION_25() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields, ___DEFAULT_CONTROLLER_REST_POSITION_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_DEFAULT_CONTROLLER_REST_POSITION_25() const { return ___DEFAULT_CONTROLLER_REST_POSITION_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_DEFAULT_CONTROLLER_REST_POSITION_25() { return &___DEFAULT_CONTROLLER_REST_POSITION_25; }
	inline void set_DEFAULT_CONTROLLER_REST_POSITION_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___DEFAULT_CONTROLLER_REST_POSITION_25 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_ARM_EXTENSION_OFFSET_26() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields, ___DEFAULT_ARM_EXTENSION_OFFSET_26)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_DEFAULT_ARM_EXTENSION_OFFSET_26() const { return ___DEFAULT_ARM_EXTENSION_OFFSET_26; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_DEFAULT_ARM_EXTENSION_OFFSET_26() { return &___DEFAULT_ARM_EXTENSION_OFFSET_26; }
	inline void set_DEFAULT_ARM_EXTENSION_OFFSET_26(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___DEFAULT_ARM_EXTENSION_OFFSET_26 = value;
	}

	inline static int32_t get_offset_of_SHOULDER_POSITION_29() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields, ___SHOULDER_POSITION_29)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_SHOULDER_POSITION_29() const { return ___SHOULDER_POSITION_29; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_SHOULDER_POSITION_29() { return &___SHOULDER_POSITION_29; }
	inline void set_SHOULDER_POSITION_29(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___SHOULDER_POSITION_29 = value;
	}

	inline static int32_t get_offset_of_NECK_OFFSET_30() { return static_cast<int32_t>(offsetof(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields, ___NECK_OFFSET_30)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_NECK_OFFSET_30() const { return ___NECK_OFFSET_30; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_NECK_OFFSET_30() { return &___NECK_OFFSET_30; }
	inline void set_NECK_OFFSET_30(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___NECK_OFFSET_30 = value;
	}
};


// UnityEngine.XR.LegacyInputHelpers.SwingArmModel
struct  SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579  : public ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E
{
public:
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShoulderRotationRatio
	float ___m_ShoulderRotationRatio_37;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ElbowRotationRatio
	float ___m_ElbowRotationRatio_38;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_WristRotationRatio
	float ___m_WristRotationRatio_39;
	// UnityEngine.Vector2 UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_JointShiftAngle
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_JointShiftAngle_40;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_JointShiftExponent
	float ___m_JointShiftExponent_41;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShiftedShoulderRotationRatio
	float ___m_ShiftedShoulderRotationRatio_42;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShiftedElbowRotationRatio
	float ___m_ShiftedElbowRotationRatio_43;
	// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::m_ShiftedWristRotationRatio
	float ___m_ShiftedWristRotationRatio_44;

public:
	inline static int32_t get_offset_of_m_ShoulderRotationRatio_37() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_ShoulderRotationRatio_37)); }
	inline float get_m_ShoulderRotationRatio_37() const { return ___m_ShoulderRotationRatio_37; }
	inline float* get_address_of_m_ShoulderRotationRatio_37() { return &___m_ShoulderRotationRatio_37; }
	inline void set_m_ShoulderRotationRatio_37(float value)
	{
		___m_ShoulderRotationRatio_37 = value;
	}

	inline static int32_t get_offset_of_m_ElbowRotationRatio_38() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_ElbowRotationRatio_38)); }
	inline float get_m_ElbowRotationRatio_38() const { return ___m_ElbowRotationRatio_38; }
	inline float* get_address_of_m_ElbowRotationRatio_38() { return &___m_ElbowRotationRatio_38; }
	inline void set_m_ElbowRotationRatio_38(float value)
	{
		___m_ElbowRotationRatio_38 = value;
	}

	inline static int32_t get_offset_of_m_WristRotationRatio_39() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_WristRotationRatio_39)); }
	inline float get_m_WristRotationRatio_39() const { return ___m_WristRotationRatio_39; }
	inline float* get_address_of_m_WristRotationRatio_39() { return &___m_WristRotationRatio_39; }
	inline void set_m_WristRotationRatio_39(float value)
	{
		___m_WristRotationRatio_39 = value;
	}

	inline static int32_t get_offset_of_m_JointShiftAngle_40() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_JointShiftAngle_40)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_JointShiftAngle_40() const { return ___m_JointShiftAngle_40; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_JointShiftAngle_40() { return &___m_JointShiftAngle_40; }
	inline void set_m_JointShiftAngle_40(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_JointShiftAngle_40 = value;
	}

	inline static int32_t get_offset_of_m_JointShiftExponent_41() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_JointShiftExponent_41)); }
	inline float get_m_JointShiftExponent_41() const { return ___m_JointShiftExponent_41; }
	inline float* get_address_of_m_JointShiftExponent_41() { return &___m_JointShiftExponent_41; }
	inline void set_m_JointShiftExponent_41(float value)
	{
		___m_JointShiftExponent_41 = value;
	}

	inline static int32_t get_offset_of_m_ShiftedShoulderRotationRatio_42() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_ShiftedShoulderRotationRatio_42)); }
	inline float get_m_ShiftedShoulderRotationRatio_42() const { return ___m_ShiftedShoulderRotationRatio_42; }
	inline float* get_address_of_m_ShiftedShoulderRotationRatio_42() { return &___m_ShiftedShoulderRotationRatio_42; }
	inline void set_m_ShiftedShoulderRotationRatio_42(float value)
	{
		___m_ShiftedShoulderRotationRatio_42 = value;
	}

	inline static int32_t get_offset_of_m_ShiftedElbowRotationRatio_43() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_ShiftedElbowRotationRatio_43)); }
	inline float get_m_ShiftedElbowRotationRatio_43() const { return ___m_ShiftedElbowRotationRatio_43; }
	inline float* get_address_of_m_ShiftedElbowRotationRatio_43() { return &___m_ShiftedElbowRotationRatio_43; }
	inline void set_m_ShiftedElbowRotationRatio_43(float value)
	{
		___m_ShiftedElbowRotationRatio_43 = value;
	}

	inline static int32_t get_offset_of_m_ShiftedWristRotationRatio_44() { return static_cast<int32_t>(offsetof(SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579, ___m_ShiftedWristRotationRatio_44)); }
	inline float get_m_ShiftedWristRotationRatio_44() const { return ___m_ShiftedWristRotationRatio_44; }
	inline float* get_address_of_m_ShiftedWristRotationRatio_44() { return &___m_ShiftedWristRotationRatio_44; }
	inline void set_m_ShiftedWristRotationRatio_44(float value)
	{
		___m_ShiftedWristRotationRatio_44 = value;
	}
};


// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel
struct  TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB  : public ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E
{
public:
	// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::m_CurrentArmModelComponent
	ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___m_CurrentArmModelComponent_37;
	// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition> UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::m_ArmModelTransitions
	List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * ___m_ArmModelTransitions_38;
	// System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData> UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::armModelBlendData
	List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * ___armModelBlendData_44;
	// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::currentBlendingArmModel
	ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  ___currentBlendingArmModel_45;

public:
	inline static int32_t get_offset_of_m_CurrentArmModelComponent_37() { return static_cast<int32_t>(offsetof(TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB, ___m_CurrentArmModelComponent_37)); }
	inline ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * get_m_CurrentArmModelComponent_37() const { return ___m_CurrentArmModelComponent_37; }
	inline ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E ** get_address_of_m_CurrentArmModelComponent_37() { return &___m_CurrentArmModelComponent_37; }
	inline void set_m_CurrentArmModelComponent_37(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * value)
	{
		___m_CurrentArmModelComponent_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentArmModelComponent_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_ArmModelTransitions_38() { return static_cast<int32_t>(offsetof(TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB, ___m_ArmModelTransitions_38)); }
	inline List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * get_m_ArmModelTransitions_38() const { return ___m_ArmModelTransitions_38; }
	inline List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F ** get_address_of_m_ArmModelTransitions_38() { return &___m_ArmModelTransitions_38; }
	inline void set_m_ArmModelTransitions_38(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * value)
	{
		___m_ArmModelTransitions_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ArmModelTransitions_38), (void*)value);
	}

	inline static int32_t get_offset_of_armModelBlendData_44() { return static_cast<int32_t>(offsetof(TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB, ___armModelBlendData_44)); }
	inline List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * get_armModelBlendData_44() const { return ___armModelBlendData_44; }
	inline List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 ** get_address_of_armModelBlendData_44() { return &___armModelBlendData_44; }
	inline void set_armModelBlendData_44(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * value)
	{
		___armModelBlendData_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___armModelBlendData_44), (void*)value);
	}

	inline static int32_t get_offset_of_currentBlendingArmModel_45() { return static_cast<int32_t>(offsetof(TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB, ___currentBlendingArmModel_45)); }
	inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  get_currentBlendingArmModel_45() const { return ___currentBlendingArmModel_45; }
	inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 * get_address_of_currentBlendingArmModel_45() { return &___currentBlendingArmModel_45; }
	inline void set_currentBlendingArmModel_45(ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  value)
	{
		___currentBlendingArmModel_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___currentBlendingArmModel_45))->___armModel_0), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  m_Items[1];

public:
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.LegacyInputHelpers.TransitionArmModel_ArmModelBlendData[]
struct ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  m_Items[1];

public:
	inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___armModel_0), (void*)NULL);
	}
	inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___armModel_0), (void*)NULL);
	}
};


// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_m9FA2C44F50ABCA87067022DCE45EDB246AE863B3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___instances0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_gshared_inline (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_gshared_inline (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_gshared (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_gshared_inline (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB5BBA7DCB1113DD06AE1D364A6EA35646FE6AB0E_gshared (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_gshared_inline (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60_gshared (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3A912FAA9193C37CE01B09FE9B223975B29B1B2A_gshared (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m8FD3D2B2ABED426E66D343AF824E7EC3F730EC6C_gshared (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF7C25A59E6E4615BBC64374DD0DAC158BF1564C2_gshared (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___capacity0, const RuntimeMethod* method);

// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::TryInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::UpgradeTrackingSpaceToTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_UpgradeTrackingSpaceToTrackingOriginMode_m2A4EBBD897548A9C6084023972030530F722BFF5 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEditor.XR.LegacyInputHelpers.CameraOffset::RepeatInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraOffset_RepeatInitializeCamera_mC704BE5F9265B5B13BC23E7BFA4EB531F08AF26A (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset/<RepeatInitializeCamera>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29__ctor_m43D6285C7E009567F5C4B8ED1A751836C62FB4AB (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m5B95C6031E80B0738C08F35BE482D1E4B0F62F5D (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * ___instances0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_m9FA2C44F50ABCA87067022DCE45EDB246AE863B3_gshared)(___instances0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Count()
inline int32_t List_1_get_Count_m58AFC034BC13285ADE6ABCC93A614D3CC7DCAF4B_inline (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::get_Item(System.Int32)
inline XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * List_1_get_Item_m632E222FF6E83A321BA7782F8FE6ED56CD284606_inline (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * (*) (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_mBEEAA13DA8BDE9D6A4FFE3AB434CBEC562A60926 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * ___subsystem0, const RuntimeMethod* method);
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCameraLegacy(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_SetupCameraLegacy_mA23BE3667BFF01CC7E0C7B4FB9390B26C11A34E2 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, int32_t ___trackingSpace0, const RuntimeMethod* method);
// System.Single UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_cameraYOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float CameraOffset_get_cameraYOffset_m179605BA4EF979AB40395A8BB00E4AA7A9355C7E_inline (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, const RuntimeMethod* method);
// UnityEngine.XR.TrackingOriginModeFlags UnityEngine.XR.XRInputSubsystem::GetSupportedTrackingOriginModes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRInputSubsystem_GetSupportedTrackingOriginModes_mCDF5409E1EEC5ACC8943FF107019392F15B6A527 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TrySetTrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, int32_t ___origin0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryRecenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryRecenter_m0975070B146718061370769F64F9BD4187E64AC4 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88 (int32_t ___trackingSpaceType0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_Recenter_m9E41FD9CCAB56D752856D1D1C5C31A2E2570EC6A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void List_1__ctor_m5DECF95F09BC92A35BC40C1E7914988FEC310FF5 (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.LegacyInputHelpers.ArmModel::get_finalPose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ArmModel_get_finalPose_mD3B9995AB4D903424BA317A215E8085250FAD033_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetForwardVector(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetForwardVector_m8A8A196699D6723AD4BCE5413615EB7CB7BE4A56 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___forward1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::get_poseSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ArmModel_get_poseSource_m24F54C3405E8C9D6E4E233AE4181DE578B7EC33B_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularAcceleration(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularAcceleration_mDA0B0E023E878DD878877CB14A7AEF0932CBB145 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularAccel1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___fromDirection0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___toDirection1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetPosition(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetPosition_mB48EAB4D5C8B59D52FF2B88C17D500378EC79290 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::GetControllerRotation(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_GetControllerRotation_m3AA2C877C77E9C72CF970C36B25905CEFC19B2D9 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___xyRotation1, float* ___xAngle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Quaternion_Angle_m09599D660B724D330E5C7FE2FB1C8716161B3DD1 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetRotation(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Pose_get_forward_m5F53BEDB69214F4DDFDF862EBC71E8855C3088F1 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___nodeStates0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Count()
inline int32_t List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_inline (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, const RuntimeMethod*))List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::get_Item(System.Int32)
inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_inline (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, int32_t, const RuntimeMethod*))List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7 (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m2AE7B2C4907BB94036A74133FEE1389E273D38B9 (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mD3F619954C89FF16045960AAEF4D5218E17B6E8C (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularAcceleration(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularAcceleration_m854B72CEABA3C93C6D4531A8B2604E0B0D0FCFDF (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularAcceleration0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularVelocity_m9F2EEFAA31908F300256EF70F66C0B4A036F78BA (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocity0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174 (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, const RuntimeMethod*))List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_m4E406A4762035060023A01F085CBC06610D5510E (BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_maxJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_maxJointShiftAngle_m06932904B55880C096F92E35AB5EEA5D05703014 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_minJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_minJointShiftAngle_mD1392AB1D9B003AA0CA1665ACE5CF6E35DF0C193 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel__ctor_m923FA495F842BF9DA2B0C50180E9498CEBCAB838 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::GetEnumerator()
inline Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01  List_1_GetEnumerator_mA9057F42AF5FB2CCA527070CC866D76A4595CA87 (List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01  (*) (List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::get_Current()
inline ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * Enumerator_get_Current_m0762C17032C6858338065940E7AF5AEAD6C4C13E_inline (Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 * __this, const RuntimeMethod* method)
{
	return ((  ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * (*) (Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.String UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_transitionKeyName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ArmModelTransition_get_transitionKeyName_m4921E2CB3E2461E113D2C61E82F17F9AC7CD1D83_inline (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_armModel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ArmModelTransition_get_armModel_mC69193F90AE562A734A973A9087F2B050413DD0F_inline (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::Queue(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_Queue_mBCE6B344D26F6D39517BA9E2F9F78990FD8F40CB (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___newArmModel0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::MoveNext()
inline bool Enumerator_MoveNext_m3525A0E8727916DD27150C650D75C67613F096E1 (Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::Dispose()
inline void Enumerator_Dispose_m09C0F69BAD3F901475940B872CEC10690C6C4C70 (Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveJustStartingTransitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveJustStartingTransitions_m953D994D076E6F93C99630AEBEEBB329E6D6A99B (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Count()
inline int32_t List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_inline (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, const RuntimeMethod*))List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveOldestTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveOldestTransition_m608FCE3471422FA847E4ED8B312DF7BE9B2E8387 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::Add(!0)
inline void List_1_Add_mB5BBA7DCB1113DD06AE1D364A6EA35646FE6AB0E (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 , const RuntimeMethod*))List_1_Add_mB5BBA7DCB1113DD06AE1D364A6EA35646FE6AB0E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::get_Item(System.Int32)
inline ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_inline (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60 (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::UpdateBlends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionArmModel_UpdateBlends_m2045B9BBA0377ECAF7941D7DF432B38C2B6A9DF1 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method);
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::get_currentArmModelComponent()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * TransitionArmModel_get_currentArmModelComponent_m404661E224BDF00DB599E387A86C4CA1D890DD96_inline (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_neckPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_neckPosition_mCB262A3B2066C1B87F560B10B498EEEB50D31B15_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_elbowPosition_mD164603D41D61693BF1D5B7356DB11A634913D1D_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_wristPosition_m56DD8A7111ACFF4280FA219A660B0E0EDD9E9AD9_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_wristRotation_mAD076708A63D44E9FF091290F018EFA684A86825_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularVelocity(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularVelocity_mD8018D93E0FFE5C0B4AABFD517E01AB93474C474 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angVel1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m3A912FAA9193C37CE01B09FE9B223975B29B1B2A (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, int32_t, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 , const RuntimeMethod*))List_1_set_Item_m3A912FAA9193C37CE01B09FE9B223975B29B1B2A_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m8FD3D2B2ABED426E66D343AF824E7EC3F730EC6C (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m8FD3D2B2ABED426E66D343AF824E7EC3F730EC6C_gshared)(__this, ___index0, ___count1, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m994E4759C25BF0E9DD4179C10E3979558137CCF0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_finalPose(UnityEngine.Pose)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ArmModel_set_finalPose_m6C490D419B78FC61209C2007DBE44EF0522596BB_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.ArmModelTransition>::.ctor()
inline void List_1__ctor_mC3782A3F75F13B413715108B25F8C2DA84578026 (List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData>::.ctor(System.Int32)
inline void List_1__ctor_mF7C25A59E6E4615BBC64374DD0DAC158BF1564C2 (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *, int32_t, const RuntimeMethod*))List_1__ctor_mF7C25A59E6E4615BBC64374DD0DAC158BF1564C2_gshared)(__this, ___capacity0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_cameraFloorOffsetObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * CameraOffset_get_cameraFloorOffsetObject_m59CECE40D39A6E21E54C681DF47314D6BF3E8670 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_CameraFloorOffsetObject_5();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_cameraFloorOffsetObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_cameraFloorOffsetObject_mD44DC44A71E11A3B67E1B658772D9C20320982BB (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_m_CameraFloorOffsetObject_5(L_0);
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15(__this, /*hidden argument*/NULL);
		// public GameObject cameraFloorOffsetObject { get { return m_CameraFloorOffsetObject; } set { m_CameraFloorOffsetObject = value; SetupCamera(); } }
		return;
	}
}
// UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraOffset_get_requestedTrackingMode_m951345CC388C1955DEB07154827134F9E21743C2 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		int32_t L_0 = __this->get_m_RequestedTrackingMode_6();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_requestedTrackingMode(UnityEditor.XR.LegacyInputHelpers.UserRequestedTrackingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_requestedTrackingMode_m70B7D4E2D875C6C570F16AF349BC398B28CEA326 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		int32_t L_0 = ___value0;
		__this->set_m_RequestedTrackingMode_6(L_0);
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302(__this, /*hidden argument*/NULL);
		// public UserRequestedTrackingMode requestedTrackingMode { get { return m_RequestedTrackingMode; } set { m_RequestedTrackingMode = value; TryInitializeCamera(); } }
		return;
	}
}
// UnityEngine.XR.TrackingOriginModeFlags UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_TrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraOffset_get_TrackingOriginMode_mC876F33F17291A502FFA4885B989942E564D94B2 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		int32_t L_0 = __this->get_m_TrackingOriginMode_7();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_TrackingOriginMode(UnityEngine.XR.TrackingOriginModeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_TrackingOriginMode_mB20A2F79A8AD7FD8AEF0083623618D11B38D957D (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		int32_t L_0 = ___value0;
		__this->set_m_TrackingOriginMode_7(L_0);
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302(__this, /*hidden argument*/NULL);
		// public TrackingOriginModeFlags TrackingOriginMode { get { return m_TrackingOriginMode; } set { m_TrackingOriginMode = value; TryInitializeCamera(); } }
		return;
	}
}
// UnityEngine.XR.TrackingSpaceType UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_trackingSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraOffset_get_trackingSpace_mD7BD0F0080889A37AC0B3526D1703986BE551E0B (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		int32_t L_0 = __this->get_m_TrackingSpace_8();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_trackingSpace(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_trackingSpace_m7C4D0EF85EF6310AEC65C24EC7A7648424D8B7A7 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		int32_t L_0 = ___value0;
		__this->set_m_TrackingSpace_8(L_0);
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302(__this, /*hidden argument*/NULL);
		// public TrackingSpaceType trackingSpace { get { return m_TrackingSpace; } set { m_TrackingSpace = value; TryInitializeCamera(); } }
		return;
	}
}
// System.Single UnityEditor.XR.LegacyInputHelpers.CameraOffset::get_cameraYOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOffset_get_cameraYOffset_m179605BA4EF979AB40395A8BB00E4AA7A9355C7E (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		float L_0 = __this->get_m_CameraYOffset_9();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::set_cameraYOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_set_cameraYOffset_m012958C7B6A0BFFD042A771CEAC569744BA3D827 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		float L_0 = ___value0;
		__this->set_m_CameraYOffset_9(L_0);
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302(__this, /*hidden argument*/NULL);
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::UpgradeTrackingSpaceToTrackingOriginMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_UpgradeTrackingSpaceToTrackingOriginMode_m2A4EBBD897548A9C6084023972030530F722BFF5 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (m_TrackingOriginMode == TrackingOriginModeFlags.Unknown && m_TrackingSpace <= TrackingSpaceType.RoomScale)
		int32_t L_0 = __this->get_m_TrackingOriginMode_7();
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingSpace_8();
		if ((((int32_t)L_1) > ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		// switch (m_TrackingSpace)
		int32_t L_2 = __this->get_m_TrackingSpace_8();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		// m_TrackingOriginMode = TrackingOriginModeFlags.Floor;
		__this->set_m_TrackingOriginMode_7(2);
		// break;
		goto IL_002f;
	}

IL_0028:
	{
		// m_TrackingOriginMode = TrackingOriginModeFlags.Device;
		__this->set_m_TrackingOriginMode_7(1);
	}

IL_002f:
	{
		// m_TrackingSpace = (TrackingSpaceType)3;
		__this->set_m_TrackingSpace_8(3);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_Awake_m7A94421CE8DE26F43CF4D9D41D7BB53F62681AF7 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraOffset_Awake_m7A94421CE8DE26F43CF4D9D41D7BB53F62681AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_CameraFloorOffsetObject)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_CameraFloorOffsetObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogWarning("No camera container specified for XR Rig, using attached GameObject");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralF5F38E8D02434BDC6108658151DD9B8B4BD7E44A, /*hidden argument*/NULL);
		// m_CameraFloorOffsetObject = this.gameObject;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		__this->set_m_CameraFloorOffsetObject_5(L_2);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_Start_m1E303E2B6C4118FED517B8CA49A9189CEF00D9B1 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// TryInitializeCamera();
		CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_OnValidate_m7CF4C2139FA449701D2321BCB2466EFC65698E65 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// UpgradeTrackingSpaceToTrackingOriginMode();
		CameraOffset_UpgradeTrackingSpaceToTrackingOriginMode_m2A4EBBD897548A9C6084023972030530F722BFF5(__this, /*hidden argument*/NULL);
		// TryInitializeCamera();
		CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::TryInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_TryInitializeCamera_mCAA11F59A52C3EB749D33700CA195F14CB46D302 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// m_CameraInitialized = SetupCamera();
		bool L_0 = CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15(__this, /*hidden argument*/NULL);
		__this->set_m_CameraInitialized_10(L_0);
		// if (!m_CameraInitialized & !m_CameraInitializing)
		bool L_1 = __this->get_m_CameraInitialized_10();
		bool L_2 = __this->get_m_CameraInitializing_11();
		if (!((int32_t)((int32_t)((((int32_t)L_1) == ((int32_t)0))? 1 : 0)&(int32_t)((((int32_t)L_2) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_002e;
		}
	}
	{
		// StartCoroutine(RepeatInitializeCamera());
		RuntimeObject* L_3 = CameraOffset_RepeatInitializeCamera_mC704BE5F9265B5B13BC23E7BFA4EB531F08AF26A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_3, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEditor.XR.LegacyInputHelpers.CameraOffset::RepeatInitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraOffset_RepeatInitializeCamera_mC704BE5F9265B5B13BC23E7BFA4EB531F08AF26A (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraOffset_RepeatInitializeCamera_mC704BE5F9265B5B13BC23E7BFA4EB531F08AF26A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * L_0 = (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD *)il2cpp_codegen_object_new(U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD_il2cpp_TypeInfo_var);
		U3CRepeatInitializeCameraU3Ed__29__ctor_m43D6285C7E009567F5C4B8ED1A751836C62FB4AB(L_0, 0, /*hidden argument*/NULL);
		U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// SubsystemManager.GetInstances<XRInputSubsystem>(s_InputSubsystems);
		IL2CPP_RUNTIME_CLASS_INIT(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var);
		List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * L_0 = ((CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m5B95C6031E80B0738C08F35BE482D1E4B0F62F5D(L_0, /*hidden argument*/SubsystemManager_GetInstances_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m5B95C6031E80B0738C08F35BE482D1E4B0F62F5D_RuntimeMethod_var);
		// bool initialized = true;
		V_0 = (bool)1;
		// if (s_InputSubsystems.Count != 0)
		List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * L_1 = ((CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m58AFC034BC13285ADE6ABCC93A614D3CC7DCAF4B_inline(L_1, /*hidden argument*/List_1_get_Count_m58AFC034BC13285ADE6ABCC93A614D3CC7DCAF4B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		// initialized &= SetupCamera(s_InputSubsystems[i]);
		bool L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var);
		List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * L_4 = ((CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_6 = List_1_get_Item_m632E222FF6E83A321BA7782F8FE6ED56CD284606_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m632E222FF6E83A321BA7782F8FE6ED56CD284606_RuntimeMethod_var);
		bool L_7 = CameraOffset_SetupCamera_mBEEAA13DA8BDE9D6A4FFE3AB434CBEC562A60926(__this, L_6, /*hidden argument*/NULL);
		V_0 = (bool)((int32_t)((int32_t)L_3&(int32_t)L_7));
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		// for (int i = 0; i < s_InputSubsystems.Count; i++)
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var);
		List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * L_10 = ((CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var))->get_s_InputSubsystems_12();
		NullCheck(L_10);
		int32_t L_11 = List_1_get_Count_m58AFC034BC13285ADE6ABCC93A614D3CC7DCAF4B_inline(L_10, /*hidden argument*/List_1_get_Count_m58AFC034BC13285ADE6ABCC93A614D3CC7DCAF4B_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_001c;
		}
	}
	{
		// }
		goto IL_005c;
	}

IL_0043:
	{
		// if (m_RequestedTrackingMode == UserRequestedTrackingMode.Floor)
		int32_t L_12 = __this->get_m_RequestedTrackingMode_6();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_0055;
		}
	}
	{
		// SetupCameraLegacy(TrackingSpaceType.RoomScale);
		CameraOffset_SetupCameraLegacy_mA23BE3667BFF01CC7E0C7B4FB9390B26C11A34E2(__this, 1, /*hidden argument*/NULL);
		// }
		goto IL_005c;
	}

IL_0055:
	{
		// SetupCameraLegacy(TrackingSpaceType.Stationary);
		CameraOffset_SetupCameraLegacy_mA23BE3667BFF01CC7E0C7B4FB9390B26C11A34E2(__this, 0, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// return initialized;
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCamera(UnityEngine.XR.XRInputSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraOffset_SetupCamera_mBEEAA13DA8BDE9D6A4FFE3AB434CBEC562A60926 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * ___subsystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraOffset_SetupCamera_mBEEAA13DA8BDE9D6A4FFE3AB434CBEC562A60926_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (subsystem == null)
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = ___subsystem0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// bool trackingSettingsSet = false;
		V_0 = (bool)0;
		// float desiredOffset = cameraYOffset;
		float L_1 = CameraOffset_get_cameraYOffset_m179605BA4EF979AB40395A8BB00E4AA7A9355C7E_inline(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// var currentMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_2 = ___subsystem0;
		NullCheck(L_2);
		int32_t L_3 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		// var supportedModes = subsystem.GetSupportedTrackingOriginModes();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_4 = ___subsystem0;
		NullCheck(L_4);
		int32_t L_5 = XRInputSubsystem_GetSupportedTrackingOriginModes_mCDF5409E1EEC5ACC8943FF107019392F15B6A527(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		// TrackingOriginModeFlags requestedMode = TrackingOriginModeFlags.Unknown;
		V_4 = 0;
		// if (m_RequestedTrackingMode == UserRequestedTrackingMode.Default)
		int32_t L_6 = __this->get_m_RequestedTrackingMode_6();
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// requestedMode = currentMode;
		int32_t L_7 = V_2;
		V_4 = L_7;
		// }
		goto IL_0052;
	}

IL_002c:
	{
		// else if(m_RequestedTrackingMode == UserRequestedTrackingMode.Device)
		int32_t L_8 = __this->get_m_RequestedTrackingMode_6();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		// requestedMode = TrackingOriginModeFlags.Device;
		V_4 = 1;
		// }
		goto IL_0052;
	}

IL_003a:
	{
		// else if (m_RequestedTrackingMode == UserRequestedTrackingMode.Floor)
		int32_t L_9 = __this->get_m_RequestedTrackingMode_6();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		// requestedMode = TrackingOriginModeFlags.Floor;
		V_4 = 2;
		// }
		goto IL_0052;
	}

IL_0048:
	{
		// Debug.LogWarning("Unknown Requested Tracking Mode");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralA44755AADA53889F28EEF130E57C6A18C5BBFE3C, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// if (requestedMode == TrackingOriginModeFlags.Floor)
		int32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0088;
		}
	}
	{
		// if ((supportedModes & (TrackingOriginModeFlags.Floor | TrackingOriginModeFlags.Unknown)) == 0)
		int32_t L_11 = V_3;
		if (((int32_t)((int32_t)L_11&(int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		// Debug.LogWarning("CameraOffset.SetupCamera: Attempting to set the tracking space to Floor, but that is not supported by the SDK.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralCF784CE1CFD8D3FAB486CE0BFFB3AAFF50EDDEE8, /*hidden argument*/NULL);
		// m_TrackingOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_12 = ___subsystem0;
		NullCheck(L_12);
		int32_t L_13 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(L_12, /*hidden argument*/NULL);
		__this->set_m_TrackingOriginMode_7(L_13);
		// return true;
		return (bool)1;
	}

IL_0074:
	{
		// if (subsystem.TrySetTrackingOriginMode(requestedMode))
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_14 = ___subsystem0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00bb;
		}
	}
	{
		// desiredOffset = 0.0f;
		V_1 = (0.0f);
		// trackingSettingsSet = true;
		V_0 = (bool)1;
		// }
		goto IL_00bb;
	}

IL_0088:
	{
		// else if (requestedMode == TrackingOriginModeFlags.Device)
		int32_t L_17 = V_4;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_00bb;
		}
	}
	{
		// if ((supportedModes & (TrackingOriginModeFlags.Device | TrackingOriginModeFlags.Unknown)) == 0)
		int32_t L_18 = V_3;
		if (((int32_t)((int32_t)L_18&(int32_t)1)))
		{
			goto IL_00aa;
		}
	}
	{
		// Debug.LogWarning("CameraOffset.SetupCamera: Attempting to set the tracking space to Device, but that is not supported by the SDK.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral8D321E2A9DEC28C842A47091F36A971F96005711, /*hidden argument*/NULL);
		// m_TrackingOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_19 = ___subsystem0;
		NullCheck(L_19);
		int32_t L_20 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(L_19, /*hidden argument*/NULL);
		__this->set_m_TrackingOriginMode_7(L_20);
		// return true;
		return (bool)1;
	}

IL_00aa:
	{
		// if (subsystem.TrySetTrackingOriginMode(requestedMode))
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_21 = ___subsystem0;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		bool L_23 = XRInputSubsystem_TrySetTrackingOriginMode_m97E57816CA750B4EB524C9C3DD69756DF0DDD3D4(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00bb;
		}
	}
	{
		// trackingSettingsSet = subsystem.TryRecenter();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_24 = ___subsystem0;
		NullCheck(L_24);
		bool L_25 = XRInputSubsystem_TryRecenter_m0975070B146718061370769F64F9BD4187E64AC4(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
	}

IL_00bb:
	{
		// m_TrackingOriginMode = subsystem.GetTrackingOriginMode();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_26 = ___subsystem0;
		NullCheck(L_26);
		int32_t L_27 = XRInputSubsystem_GetTrackingOriginMode_m03F3DB2919B28E0A2C174F7E8210A7F2697A5A45(L_26, /*hidden argument*/NULL);
		__this->set_m_TrackingOriginMode_7(L_27);
		// if (trackingSettingsSet)
		bool L_28 = V_0;
		if (!L_28)
		{
			goto IL_0117;
		}
	}
	{
		// if (m_CameraFloorOffsetObject)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_m_CameraFloorOffsetObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0117;
		}
	}
	{
		// m_CameraFloorOffsetObject.transform.localPosition = new Vector3(m_CameraFloorOffsetObject.transform.localPosition.x, desiredOffset, m_CameraFloorOffsetObject.transform.localPosition.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_31, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		float L_37 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_38);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_42), L_36, L_37, L_41, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_32, L_42, /*hidden argument*/NULL);
	}

IL_0117:
	{
		// return trackingSettingsSet;
		bool L_43 = V_0;
		return L_43;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::SetupCameraLegacy(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset_SetupCameraLegacy_mA23BE3667BFF01CC7E0C7B4FB9390B26C11A34E2 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, int32_t ___trackingSpace0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraOffset_SetupCameraLegacy_mA23BE3667BFF01CC7E0C7B4FB9390B26C11A34E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float cameraYOffset = m_CameraYOffset;
		float L_0 = __this->get_m_CameraYOffset_9();
		V_0 = L_0;
		// XRDevice.SetTrackingSpaceType(trackingSpace);
		int32_t L_1 = ___trackingSpace0;
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88(L_1, /*hidden argument*/NULL);
		// if (trackingSpace == TrackingSpaceType.Stationary)
		int32_t L_2 = ___trackingSpace0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// InputTracking.Recenter();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_Recenter_m9E41FD9CCAB56D752856D1D1C5C31A2E2570EC6A(/*hidden argument*/NULL);
		goto IL_0022;
	}

IL_0018:
	{
		// else if (trackingSpace == TrackingSpaceType.RoomScale)
		int32_t L_3 = ___trackingSpace0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// cameraYOffset = 0;
		V_0 = (0.0f);
	}

IL_0022:
	{
		// m_TrackingSpace = trackingSpace;
		int32_t L_4 = ___trackingSpace0;
		__this->set_m_TrackingSpace_8(L_4);
		// if (m_CameraFloorOffsetObject)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_m_CameraFloorOffsetObject_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		// m_CameraFloorOffsetObject.transform.localPosition = new Vector3(m_CameraFloorOffsetObject.transform.localPosition.x, cameraYOffset, m_CameraFloorOffsetObject.transform.localPosition.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		float L_13 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_m_CameraFloorOffsetObject_5();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), L_12, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_8, L_18, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset__ctor_m32E2210051C09464D768B5DCBB1674D8F9EA5E87 (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// float m_CameraYOffset = k_DefaultCameraYOffset;
		__this->set_m_CameraYOffset_9((1.36144f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOffset__cctor_mD0A9B0A22844EEE32A3682C1E54291EA6E7FD637 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraOffset__cctor_mD0A9B0A22844EEE32A3682C1E54291EA6E7FD637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<XRInputSubsystem> s_InputSubsystems = new List<XRInputSubsystem>();
		List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 * L_0 = (List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14 *)il2cpp_codegen_object_new(List_1_tB9361D2821AB1F10DAEE60BA99EAF76670BE9C14_il2cpp_TypeInfo_var);
		List_1__ctor_m5DECF95F09BC92A35BC40C1E7914988FEC310FF5(L_0, /*hidden argument*/List_1__ctor_m5DECF95F09BC92A35BC40C1E7914988FEC310FF5_RuntimeMethod_var);
		((CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_StaticFields*)il2cpp_codegen_static_fields_for(CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F_il2cpp_TypeInfo_var))->set_s_InputSubsystems_12(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29__ctor_m43D6285C7E009567F5C4B8ED1A751836C62FB4AB (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29_System_IDisposable_Dispose_m17F14A09DBD73876EE2966D2A514388CC4341C1C (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRepeatInitializeCameraU3Ed__29_MoveNext_mC58A32CCA720E6716563B3307D1BC42812BED55D (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0065;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// m_CameraInitializing = true;
		CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * L_3 = V_1;
		NullCheck(L_3);
		L_3->set_m_CameraInitializing_11((bool)1);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0040:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_006c;
	}

IL_0049:
	{
		// m_CameraInitialized = SetupCamera();
		CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * L_4 = V_1;
		CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = CameraOffset_SetupCamera_m95B814ACABD4CE821EF65F872C01819D190DEC15(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_m_CameraInitialized_10(L_6);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0065:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_006c:
	{
		// while (!m_CameraInitialized)
		CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->get_m_CameraInitialized_10();
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// m_CameraInitializing = false;
		CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * L_9 = V_1;
		NullCheck(L_9);
		L_9->set_m_CameraInitializing_11((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRepeatInitializeCameraU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43B90A8CE01AC6A6E1649E1E6D391B16AEDA14C2 (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_mE8B6F31805AB346EED4CCC65D0DC466AAD71108A (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_mE8B6F31805AB346EED4CCC65D0DC466AAD71108A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_Reset_mE8B6F31805AB346EED4CCC65D0DC466AAD71108A_RuntimeMethod_var);
	}
}
// System.Object UnityEditor.XR.LegacyInputHelpers.CameraOffset_<RepeatInitializeCamera>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRepeatInitializeCameraU3Ed__29_System_Collections_IEnumerator_get_Current_m54DAB7B21E930CDFF72500887B8D062A468AEF4E (U3CRepeatInitializeCameraU3Ed__29_tB0488D3291826E3C78E66C9A02C0D91FA76F94BD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.XR.LegacyInputHelpers.ArmModel::GetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArmModel_GetPoseFromProvider_mDB806260D7866C6D0C9CA460BDBD8FF3823ECCE6 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_GetPoseFromProvider_mDB806260D7866C6D0C9CA460BDBD8FF3823ECCE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OnControllerInputUpdated())
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// output = finalPose;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_1 = ___output0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = ArmModel_get_finalPose_mD3B9995AB4D903424BA317A215E8085250FAD033_inline(__this, /*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_1 = L_2;
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;
		return (int32_t)(3);
	}

IL_0016:
	{
		// output = Pose.identity;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_4 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_3 = L_4;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// UnityEngine.Pose UnityEngine.XR.LegacyInputHelpers.ArmModel::get_finalPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ArmModel_get_finalPose_mD3B9995AB4D903424BA317A215E8085250FAD033 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FinalPose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_FinalPose_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_finalPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_finalPose_m6C490D419B78FC61209C2007DBE44EF0522596BB (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FinalPose = value; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___value0;
		__this->set_m_FinalPose_4(L_0);
		// set { m_FinalPose = value; }
		return;
	}
}
// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::get_poseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArmModel_get_poseSource_m24F54C3405E8C9D6E4E233AE4181DE578B7EC33B (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseSource; }
		int32_t L_0 = __this->get_m_PoseSource_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_poseSource(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_poseSource_m78863C8C42D0E4DBF9069D48269C12BF3C5F067E (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_PoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		// set { m_PoseSource = value; }
		return;
	}
}
// UnityEngine.XR.XRNode UnityEngine.XR.LegacyInputHelpers.ArmModel::get_headGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArmModel_get_headGameObject_m8B1BDF17AB29C0EFD064DFEB2A17CC9472E539F8 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HeadPoseSource; }
		int32_t L_0 = __this->get_m_HeadPoseSource_6();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_headGameObject(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_headGameObject_m42830D417C7D1A37ED9958478109C5EC56259E75 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HeadPoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_HeadPoseSource_6(L_0);
		// set { m_HeadPoseSource = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowRestPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_elbowRestPosition_m29575157CAAB36B4E431A2DE04685678DEBD762A (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ElbowRestPosition; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ElbowRestPosition_7();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_elbowRestPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_elbowRestPosition_mC1312968C977D9D4536D88D393AF55608301B560 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ElbowRestPosition = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_m_ElbowRestPosition_7(L_0);
		// set { m_ElbowRestPosition = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristRestPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_wristRestPosition_mDB54EBFCCAB06C25039BB9A0388A37F779354F1C (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_WristRestPosition; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_WristRestPosition_8();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_wristRestPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_wristRestPosition_m0540BF44669B3876A3F317556C50F53EA23A33E8 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_WristRestPosition = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_m_WristRestPosition_8(L_0);
		// set { m_WristRestPosition = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerRestPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_controllerRestPosition_m7793B0627D5FE653E88B1464B7211692B55AA233 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ControllerRestPosition; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ControllerRestPosition_9();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_controllerRestPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_controllerRestPosition_mBAE40015F02E3FBEA195E1F4F054145C410C232C (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ControllerRestPosition = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_m_ControllerRestPosition_9(L_0);
		// set { m_ControllerRestPosition = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_armExtensionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_armExtensionOffset_mCE0008FACC466E0D3B52B87F30E81B768260097D (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ArmExtensionOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ArmExtensionOffset_10();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_armExtensionOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_armExtensionOffset_m77E0AE2C020754036EE79365B8C26D5B48C69918 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ArmExtensionOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_m_ArmExtensionOffset_10(L_0);
		// set { m_ArmExtensionOffset = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowBendRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArmModel_get_elbowBendRatio_mD0BEFFDA120D0318CFD9F03DD7A85741A84FB82B (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ElbowBendRatio; }
		float L_0 = __this->get_m_ElbowBendRatio_11();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_elbowBendRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_elbowBendRatio_mD74CCC06E20B7F46A3BE968347B1EE26C501D258 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ElbowBendRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ElbowBendRatio_11(L_0);
		// set { m_ElbowBendRatio = value; }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::get_isLockedToNeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_get_isLockedToNeck_m9F8820CD36AA025750F1A20EDB32CC3E03FDAFD1 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsLockedToNeck; }
		bool L_0 = __this->get_m_IsLockedToNeck_12();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::set_isLockedToNeck(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_set_isLockedToNeck_mA615E4111216414E0D9D45BB1F964AD09A37028F (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_IsLockedToNeck = value; }
		bool L_0 = ___value0;
		__this->set_m_IsLockedToNeck_12(L_0);
		// set { m_IsLockedToNeck = value; }
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_neckPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_neckPosition_mCB262A3B2066C1B87F560B10B498EEEB50D31B15 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_NeckPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_NeckPosition_13();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_shoulderPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_shoulderPosition_mB75161B5741A489BB5A81B16615920F8B4D39790 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_get_shoulderPosition_mB75161B5741A489BB5A81B16615920F8B4D39790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector3 retVal = m_NeckPosition + m_TorsoRotation * Vector3.Scale(SHOULDER_POSITION, m_HandedMultiplier);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_NeckPosition_13();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_m_TorsoRotation_22();
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_SHOULDER_POSITION_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_m_HandedMultiplier_20();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_1, L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_5, /*hidden argument*/NULL);
		// return retVal;
		return L_6;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_shoulderRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_shoulderRotation_m24A2DFE18B6C47418AA10567087B623FB7A07360 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_TorsoRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_TorsoRotation_22();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_elbowPosition_mD164603D41D61693BF1D5B7356DB11A634913D1D (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ElbowPosition_14();
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_elbowRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_ElbowRotation_15();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_wristPosition_m56DD8A7111ACFF4280FA219A660B0E0EDD9E9AD9 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_WristPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_WristPosition_16();
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_wristRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_wristRotation_mAD076708A63D44E9FF091290F018EFA684A86825 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_WristRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_WristRotation_17();
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ControllerPosition_18();
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::get_controllerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_ControllerRotation_19();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_OnEnable_mA9E47F8D9C7350BEE0E82FBE1855B63570CA965E (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// UpdateTorsoDirection(true);
		VirtFuncInvoker1< bool, bool >::Invoke(10 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateTorsoDirection(System.Boolean) */, __this, (bool)1);
		// OnControllerInputUpdated();
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_OnDisable_m04C283B3AC22C690588A50E42737D4E27336327B (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_OnControllerInputUpdated_mFB6A5C555049CAF5B7CF2510B2503B2456F981A0 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// UpdateHandedness();
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateHandedness() */, __this);
		// if (UpdateTorsoDirection(false))
		bool L_0 = VirtFuncInvoker1< bool, bool >::Invoke(10 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateTorsoDirection(System.Boolean) */, __this, (bool)0);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// if (UpdateNeckPosition())
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateNeckPosition() */, __this);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if (ApplyArmModel())
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyArmModel() */, __this);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0021:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_UpdateHandedness_m3F2FAE778D5896D62FD9DE0255AB62DC3D586D0E (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// m_HandedMultiplier.Set(0, 1, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_m_HandedMultiplier_20();
		Vector3_Set_m8F08F9B5324A755A28A0832DCA2A0CB19423E5EC((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		// if (m_PoseSource == XRNode.RightHand || m_PoseSource == XRNode.TrackingReference)
		int32_t L_1 = __this->get_m_PoseSource_5();
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = __this->get_m_PoseSource_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_003d;
		}
	}

IL_002c:
	{
		// m_HandedMultiplier.x = 1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_3 = __this->get_address_of_m_HandedMultiplier_20();
		L_3->set_x_2((1.0f));
		// }
		return;
	}

IL_003d:
	{
		// else if (m_PoseSource == XRNode.LeftHand)
		int32_t L_4 = __this->get_m_PoseSource_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0056;
		}
	}
	{
		// m_HandedMultiplier.x = -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_m_HandedMultiplier_20();
		L_5->set_x_2((-1.0f));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateTorsoDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_UpdateTorsoDirection_m11E4E1564C91F575E8108F87A26CD2DA4C295971 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, bool ___forceImmediate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_UpdateTorsoDirection_m11E4E1564C91F575E8108F87A26CD2DA4C295971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector3 gazeDirection = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (TryGetForwardVector(m_HeadPoseSource, out gazeDirection))
		int32_t L_0 = __this->get_m_HeadPoseSource_6();
		bool L_1 = ArmModel_TryGetForwardVector_m8A8A196699D6723AD4BCE5413615EB7CB7BE4A56(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// gazeDirection.y = 0.0f;
		(&V_0)->set_y_3((0.0f));
		// gazeDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		// if (forceImmediate)
		bool L_2 = ___forceImmediate0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// m_TorsoDirection = gazeDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_0;
		__this->set_m_TorsoDirection_21(L_3);
		// }
		goto IL_007d;
	}

IL_0037:
	{
		// if (TryGetAngularAcceleration(poseSource, out angAccel))
		int32_t L_4 = ArmModel_get_poseSource_m24F54C3405E8C9D6E4E233AE4181DE578B7EC33B_inline(__this, /*hidden argument*/NULL);
		bool L_5 = ArmModel_TryGetAngularAcceleration_mDA0B0E023E878DD878877CB14A7AEF0932CBB145(__this, L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// float angularVelocity = angAccel.magnitude;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// float gazeFilterStrength = Mathf.Clamp((angularVelocity - 0.2f) / 45.0f, 0.0f, 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)((float)((float)il2cpp_codegen_subtract((float)L_6, (float)(0.2f)))/(float)(45.0f))), (0.0f), (0.1f), /*hidden argument*/NULL);
		V_2 = L_7;
		// m_TorsoDirection = Vector3.Slerp(m_TorsoDirection, gazeDirection, gazeFilterStrength);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_m_TorsoDirection_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107(L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_TorsoDirection_21(L_11);
	}

IL_007d:
	{
		// m_TorsoRotation = Quaternion.FromToRotation(Vector3.forward, m_TorsoDirection);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = __this->get_m_TorsoDirection_21();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_12, L_13, /*hidden argument*/NULL);
		__this->set_m_TorsoRotation_22(L_14);
		// return true;
		return (bool)1;
	}

IL_0095:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::UpdateNeckPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_UpdateNeckPosition_mB5C842D7B269D56FCF2670173A86576AD2AB705C (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_UpdateNeckPosition_mB5C842D7B269D56FCF2670173A86576AD2AB705C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_IsLockedToNeck && TryGetPosition(m_HeadPoseSource, out m_NeckPosition))
		bool L_0 = __this->get_m_IsLockedToNeck_12();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = __this->get_m_HeadPoseSource_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_m_NeckPosition_13();
		bool L_3 = ArmModel_TryGetPosition_mB48EAB4D5C8B59D52FF2B88C17D500378EC79290(__this, L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// return ApplyInverseNeckModel(m_NeckPosition, out m_NeckPosition);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_m_NeckPosition_13();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_5 = __this->get_address_of_m_NeckPosition_13();
		bool L_6 = VirtFuncInvoker2< bool, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * >::Invoke(19 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyInverseNeckModel(UnityEngine.Vector3,UnityEngine.Vector3&) */, __this, L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_5);
		return L_6;
	}

IL_002f:
	{
		// m_NeckPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_m_NeckPosition_13(L_7);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyArmModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_ApplyArmModel_m1A19EE7463568C72239A964022C2F50C782DD19E (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// SetUntransformedJointPositions();
		VirtActionInvoker0::Invoke(13 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::SetUntransformedJointPositions() */, __this);
		// if (GetControllerRotation(out controllerOrientation, out xyRotation, out xAngle))
		bool L_0 = ArmModel_GetControllerRotation_m3AA2C877C77E9C72CF970C36B25905CEFC19B2D9(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), (float*)(&V_2), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// float extensionRatio = CalculateExtensionRatio(xAngle);
		float L_1 = V_2;
		float L_2 = VirtFuncInvoker1< float, float >::Invoke(14 /* System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateExtensionRatio(System.Single) */, __this, L_1);
		V_3 = L_2;
		// ApplyExtensionOffset(extensionRatio);
		float L_3 = V_3;
		VirtActionInvoker1< float >::Invoke(15 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyExtensionOffset(System.Single) */, __this, L_3);
		// Quaternion lerpRotation = CalculateLerpRotation(xyRotation, extensionRatio);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_1;
		float L_5 = V_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = VirtFuncInvoker2< Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , float >::Invoke(16 /* UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateLerpRotation(UnityEngine.Quaternion,System.Single) */, __this, L_4, L_5);
		V_4 = L_6;
		// CalculateFinalJointRotations(controllerOrientation, xyRotation, lerpRotation);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = V_4;
		VirtActionInvoker3< Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(17 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateFinalJointRotations(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion) */, __this, L_7, L_8, L_9);
		// ApplyRotationToJoints();
		VirtActionInvoker0::Invoke(18 /* System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyRotationToJoints() */, __this);
		// m_FinalPose.position = m_ControllerPosition;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_10 = __this->get_address_of_m_FinalPose_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = __this->get_m_ControllerPosition_18();
		L_10->set_position_0(L_11);
		// m_FinalPose.rotation = m_ControllerRotation;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_12 = __this->get_address_of_m_FinalPose_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get_m_ControllerRotation_19();
		L_12->set_rotation_1(L_13);
		// return true;
		return (bool)1;
	}

IL_0061:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::SetUntransformedJointPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_SetUntransformedJointPositions_mC447D930EF57E0BBA292A4B75D374DD1A2D0E535 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_SetUntransformedJointPositions_mC447D930EF57E0BBA292A4B75D374DD1A2D0E535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ElbowPosition = Vector3.Scale(m_ElbowRestPosition, m_HandedMultiplier);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ElbowRestPosition_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_m_HandedMultiplier_20();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_0, L_1, /*hidden argument*/NULL);
		__this->set_m_ElbowPosition_14(L_2);
		// m_WristPosition = Vector3.Scale(m_WristRestPosition, m_HandedMultiplier);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_m_WristRestPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_m_HandedMultiplier_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_WristPosition_16(L_5);
		// m_ControllerPosition = Vector3.Scale(m_ControllerRestPosition, m_HandedMultiplier);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_m_ControllerRestPosition_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_m_HandedMultiplier_20();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_ControllerPosition_18(L_8);
		// }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateExtensionRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ArmModel_CalculateExtensionRatio_mD5D73A95585CA8D853ECF272BC9DBACC81F1DC86 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, float ___xAngle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_CalculateExtensionRatio_mD5D73A95585CA8D853ECF272BC9DBACC81F1DC86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float normalizedAngle = (xAngle - MIN_EXTENSION_ANGLE) / (MAX_EXTENSION_ANGLE - MIN_EXTENSION_ANGLE);
		float L_0 = ___xAngle0;
		// float extensionRatio = Mathf.Clamp(normalizedAngle, 0.0f, 1.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)(7.0f)))/(float)(53.0f))), (0.0f), (1.0f), /*hidden argument*/NULL);
		// return extensionRatio;
		return L_1;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyExtensionOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_ApplyExtensionOffset_m353A0A37ED99B93D1A85C598FD5680CDDE6F7FC2 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, float ___extensionRatio0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_ApplyExtensionOffset_m353A0A37ED99B93D1A85C598FD5680CDDE6F7FC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 extensionOffset = Vector3.Scale(m_ArmExtensionOffset, m_HandedMultiplier);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ArmExtensionOffset_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_m_HandedMultiplier_20();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// m_ElbowPosition += extensionOffset * extensionRatio;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = __this->get_m_ElbowPosition_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		float L_5 = ___extensionRatio0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_6, /*hidden argument*/NULL);
		__this->set_m_ElbowPosition_14(L_7);
		// }
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateLerpRotation(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_CalculateLerpRotation_mAD379B2D70BC43747DD84C5A5789F34943DEBDA2 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___xyRotation0, float ___extensionRatio1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_CalculateLerpRotation_mAD379B2D70BC43747DD84C5A5789F34943DEBDA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float totalAngle = Quaternion.Angle(xyRotation, Quaternion.identity);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___xyRotation0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		float L_2 = Quaternion_Angle_m09599D660B724D330E5C7FE2FB1C8716161B3DD1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float lerpSuppresion = 1.0f - Mathf.Pow(totalAngle / 180.0f, 6.0f);
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = powf(((float)((float)L_3/(float)(180.0f))), (6.0f));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4));
		// float inverseElbowBendRatio = 1.0f - m_ElbowBendRatio;
		float L_5 = __this->get_m_ElbowBendRatio_11();
		// float lerpValue = inverseElbowBendRatio + m_ElbowBendRatio * extensionRatio * EXTENSION_WEIGHT;
		float L_6 = __this->get_m_ElbowBendRatio_11();
		float L_7 = ___extensionRatio1;
		V_2 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)(0.4f)))));
		// lerpValue *= lerpSuppresion;
		float L_8 = V_2;
		float L_9 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
		// return Quaternion.Lerp(Quaternion.identity, xyRotation, lerpValue);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = ___xyRotation0;
		float L_12 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::CalculateFinalJointRotations(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_CalculateFinalJointRotations_m5525B9E8D8536B78C0D209D1E2404AEF79BDA64A (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___controllerOrientation0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___xyRotation1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lerpRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_CalculateFinalJointRotations_m5525B9E8D8536B78C0D209D1E2404AEF79BDA64A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ElbowRotation = m_TorsoRotation * Quaternion.Inverse(lerpRotation) * xyRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_TorsoRotation_22();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___lerpRotation2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_1, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_0, L_2, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___xyRotation1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_ElbowRotation_15(L_5);
		// m_WristRotation = m_ElbowRotation * lerpRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = __this->get_m_ElbowRotation_15();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = ___lerpRotation2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_WristRotation_17(L_8);
		// m_ControllerRotation = m_TorsoRotation * controllerOrientation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = __this->get_m_TorsoRotation_22();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = ___controllerOrientation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_ControllerRotation_19(L_11);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyRotationToJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel_ApplyRotationToJoints_m5C2502E5D9357036C7EBAF808C4B901E0B96F773 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_ApplyRotationToJoints_m5C2502E5D9357036C7EBAF808C4B901E0B96F773_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ElbowPosition = m_NeckPosition + m_TorsoRotation * m_ElbowPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_NeckPosition_13();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_m_TorsoRotation_22();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_m_ElbowPosition_14();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_3, /*hidden argument*/NULL);
		__this->set_m_ElbowPosition_14(L_4);
		// m_WristPosition = m_ElbowPosition + m_ElbowRotation * m_WristPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_m_ElbowPosition_14();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = __this->get_m_ElbowRotation_15();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_m_WristPosition_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_8, /*hidden argument*/NULL);
		__this->set_m_WristPosition_16(L_9);
		// m_ControllerPosition = m_WristPosition + m_WristRotation * m_ControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_m_WristPosition_16();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = __this->get_m_WristRotation_17();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_m_ControllerPosition_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_11, L_12, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_10, L_13, /*hidden argument*/NULL);
		__this->set_m_ControllerPosition_18(L_14);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::ApplyInverseNeckModel(UnityEngine.Vector3,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_ApplyInverseNeckModel_mE7E8842A6D94ACC2FCC3FE6BD08696924F64D48D (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___headPosition0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___calculatedPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_ApplyInverseNeckModel_mE7E8842A6D94ACC2FCC3FE6BD08696924F64D48D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion headRotation = new Quaternion();
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 ));
		// if (TryGetRotation(m_HeadPoseSource, out headRotation))
		int32_t L_0 = __this->get_m_HeadPoseSource_6();
		bool L_1 = ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// Vector3 rotatedNeckOffset =
		//     headRotation * NECK_OFFSET - NECK_OFFSET.y * Vector3.up;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_NECK_OFFSET_30();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_2, L_3, /*hidden argument*/NULL);
		float L_5 = (((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_address_of_NECK_OFFSET_30())->get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_5, L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// headPosition -= rotatedNeckOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___headPosition0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		___headPosition0 = L_11;
		// calculatedPosition = headPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_12 = ___calculatedPosition1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = ___headPosition0;
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_12 = L_13;
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// calculatedPosition = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_14 = ___calculatedPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_14 = L_15;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetForwardVector(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetForwardVector_m8A8A196699D6723AD4BCE5413615EB7CB7BE4A56 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___forward1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_TryGetForwardVector_m8A8A196699D6723AD4BCE5413615EB7CB7BE4A56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Pose tmpPose = new Pose();
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 ));
		// if (TryGetRotation(node, out tmpPose.rotation) &&
		//     TryGetPosition(node, out tmpPose.position))
		int32_t L_0 = ___node0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = (&V_0)->get_address_of_rotation_1();
		bool L_2 = ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = ___node0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = (&V_0)->get_address_of_position_0();
		bool L_5 = ArmModel_TryGetPosition_mB48EAB4D5C8B59D52FF2B88C17D500378EC79290(__this, L_3, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// forward = tmpPose.forward;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_6 = ___forward1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Pose_get_forward_m5F53BEDB69214F4DDFDF862EBC71E8855C3088F1((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&V_0), /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_6 = L_7;
		// return true;
		return (bool)1;
	}

IL_0037:
	{
		// forward = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = ___forward1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8 = L_9;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetRotation(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListOrientation);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = __this->get_xrNodeStateListOrientation_33();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListOrientation.Count;
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_1 = __this->get_xrNodeStateListOrientation_33();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_inline(L_1, /*hidden argument*/List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListOrientation[i];
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_3 = __this->get_xrNodeStateListOrientation_33();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_5 = List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6 = XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetRotation(out rotation))
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_8 = ___rotation1;
		bool L_9 = XRNodeState_TryGetRotation_m2AE7B2C4907BB94036A74133FEE1389E273D38B9((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// rotation = Quaternion.identity;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_13 = ___rotation1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetPosition(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetPosition_mB48EAB4D5C8B59D52FF2B88C17D500378EC79290 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_TryGetPosition_mB48EAB4D5C8B59D52FF2B88C17D500378EC79290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListPosition);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = __this->get_xrNodeStateListPosition_34();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListPosition.Count;
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_1 = __this->get_xrNodeStateListPosition_34();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_inline(L_1, /*hidden argument*/List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListPosition[i];
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_3 = __this->get_xrNodeStateListPosition_34();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_5 = List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6 = XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetPosition(out position))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = ___position1;
		bool L_9 = XRNodeState_TryGetPosition_mD3F619954C89FF16045960AAEF4D5218E17B6E8C((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// position = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularAcceleration(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularAcceleration_mDA0B0E023E878DD878877CB14A7AEF0932CBB145 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularAccel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_TryGetAngularAcceleration_mDA0B0E023E878DD878877CB14A7AEF0932CBB145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListAngularAcceleration);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = __this->get_xrNodeStateListAngularAcceleration_35();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListAngularAcceleration.Count;
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_1 = __this->get_xrNodeStateListAngularAcceleration_35();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_inline(L_1, /*hidden argument*/List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListAngularAcceleration[i];
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_3 = __this->get_xrNodeStateListAngularAcceleration_35();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_5 = List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6 = XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetAngularAcceleration(out angularAccel))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = ___angularAccel1;
		bool L_9 = XRNodeState_TryGetAngularAcceleration_m854B72CEABA3C93C6D4531A8B2604E0B0D0FCFDF((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// angularAccel = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = ___angularAccel1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::TryGetAngularVelocity(UnityEngine.XR.XRNode,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_TryGetAngularVelocity_mD8018D93E0FFE5C0B4AABFD517E01AB93474C474 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, int32_t ___node0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angVel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_TryGetAngularVelocity_mD8018D93E0FFE5C0B4AABFD517E01AB93474C474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// XR.InputTracking.GetNodeStates(xrNodeStateListAngularVelocity);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = __this->get_xrNodeStateListAngularVelocity_36();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B(L_0, /*hidden argument*/NULL);
		// var length = xrNodeStateListAngularVelocity.Count;
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_1 = __this->get_xrNodeStateListAngularVelocity_36();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_inline(L_1, /*hidden argument*/List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < length; ++i)
		V_2 = 0;
		goto IL_0042;
	}

IL_001b:
	{
		// nodeState = xrNodeStateListAngularVelocity[i];
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_3 = __this->get_xrNodeStateListAngularVelocity_36();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_5 = List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_RuntimeMethod_var);
		V_1 = L_5;
		// if (nodeState.nodeType == node)
		int32_t L_6 = XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = ___node0;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_003e;
		}
	}
	{
		// if (nodeState.TryGetAngularVelocity(out angVel))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = ___angVel1;
		bool L_9 = XRNodeState_TryGetAngularVelocity_m9F2EEFAA31908F300256EF70F66C0B4A036F78BA((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0042:
	{
		// for (int i = 0; i < length; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001b;
		}
	}
	{
		// angVel = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = ___angVel1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_13 = L_14;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::GetControllerRotation(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArmModel_GetControllerRotation_m3AA2C877C77E9C72CF970C36B25905CEFC19B2D9 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___xyRotation1, float* ___xAngle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel_GetControllerRotation_m3AA2C877C77E9C72CF970C36B25905CEFC19B2D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TryGetRotation(poseSource, out rotation))
		int32_t L_0 = ArmModel_get_poseSource_m24F54C3405E8C9D6E4E233AE4181DE578B7EC33B_inline(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = ___rotation0;
		bool L_2 = ArmModel_TryGetRotation_m9406C9ED5E37FA0023A3C645D6D608EC91FCAE8B(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// rotation = Quaternion.Inverse(m_TorsoRotation) * rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_3 = ___rotation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = __this->get_m_TorsoRotation_22();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_4, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_6 = ___rotation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = (*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_6);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_5, L_7, /*hidden argument*/NULL);
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_3 = L_8;
		// Vector3 controllerForward = rotation * Vector3.forward;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_9 = ___rotation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = (*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		// xAngle = 90.0f - Vector3.Angle(controllerForward, Vector3.up);
		float* L_13 = ___xAngle2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_16 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_14, L_15, /*hidden argument*/NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)(90.0f), (float)L_16));
		// xyRotation = Quaternion.FromToRotation(Vector3.forward, controllerForward);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_17 = ___xyRotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_FromToRotation_m9FEC4227991508EC27E2C3664AC7DDD4E69BA9BB(L_18, L_19, /*hidden argument*/NULL);
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_17 = L_20;
		// return true;
		return (bool)1;
	}

IL_0062:
	{
		// rotation = Quaternion.identity;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_21 = ___rotation0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_21 = L_22;
		// xyRotation = Quaternion.identity;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_23 = ___xyRotation1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_23 = L_24;
		// xAngle = 0.0f;
		float* L_25 = ___xAngle2;
		*((float*)L_25) = (float)(0.0f);
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel__ctor_m923FA495F842BF9DA2B0C50180E9498CEBCAB838 (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel__ctor_m923FA495F842BF9DA2B0C50180E9498CEBCAB838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRNode m_PoseSource = XRNode.LeftHand;
		__this->set_m_PoseSource_5(4);
		// XRNode m_HeadPoseSource = XRNode.CenterEye;
		__this->set_m_HeadPoseSource_6(2);
		// Vector3 m_ElbowRestPosition = DEFAULT_ELBOW_REST_POSITION;
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_DEFAULT_ELBOW_REST_POSITION_23();
		__this->set_m_ElbowRestPosition_7(L_0);
		// Vector3 m_WristRestPosition = DEFAULT_WRIST_REST_POSITION;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_DEFAULT_WRIST_REST_POSITION_24();
		__this->set_m_WristRestPosition_8(L_1);
		// Vector3 m_ControllerRestPosition = DEFAULT_CONTROLLER_REST_POSITION;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_DEFAULT_CONTROLLER_REST_POSITION_25();
		__this->set_m_ControllerRestPosition_9(L_2);
		// Vector3 m_ArmExtensionOffset = DEFAULT_ARM_EXTENSION_OFFSET;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->get_DEFAULT_ARM_EXTENSION_OFFSET_26();
		__this->set_m_ArmExtensionOffset_10(L_3);
		// float m_ElbowBendRatio = DEFAULT_ELBOW_BEND_RATIO;
		__this->set_m_ElbowBendRatio_11((0.6f));
		// bool m_IsLockedToNeck = true;
		__this->set_m_IsLockedToNeck_12((bool)1);
		// List<XR.XRNodeState> xrNodeStateListOrientation = new List<XRNodeState>();
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_4 = (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *)il2cpp_codegen_object_new(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var);
		List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174(L_4, /*hidden argument*/List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_RuntimeMethod_var);
		__this->set_xrNodeStateListOrientation_33(L_4);
		// List<XR.XRNodeState> xrNodeStateListPosition = new List<XRNodeState>();
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_5 = (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *)il2cpp_codegen_object_new(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var);
		List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174(L_5, /*hidden argument*/List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_RuntimeMethod_var);
		__this->set_xrNodeStateListPosition_34(L_5);
		// List<XR.XRNodeState> xrNodeStateListAngularAcceleration = new List<XRNodeState>();
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_6 = (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *)il2cpp_codegen_object_new(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var);
		List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174(L_6, /*hidden argument*/List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_RuntimeMethod_var);
		__this->set_xrNodeStateListAngularAcceleration_35(L_6);
		// List<XR.XRNodeState> xrNodeStateListAngularVelocity = new List<XRNodeState>();
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_7 = (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *)il2cpp_codegen_object_new(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var);
		List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174(L_7, /*hidden argument*/List_1__ctor_m4E0BC9CC7370255DE118FC5F4FD8745439CC9174_RuntimeMethod_var);
		__this->set_xrNodeStateListAngularVelocity_36(L_7);
		BasePoseProvider__ctor_m4E406A4762035060023A01F085CBC06610D5510E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModel::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModel__cctor_mD596D096B222A2BF61812D94C196788702354150 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArmModel__cctor_mD596D096B222A2BF61812D94C196788702354150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected static readonly Vector3 DEFAULT_ELBOW_REST_POSITION = new Vector3(0.195f, -0.5f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.195f), (-0.5f), (0.005f), /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->set_DEFAULT_ELBOW_REST_POSITION_23(L_0);
		// protected static readonly Vector3 DEFAULT_WRIST_REST_POSITION = new Vector3(0.0f, 0.0f, 0.25f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.0f), (0.0f), (0.25f), /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->set_DEFAULT_WRIST_REST_POSITION_24(L_1);
		// protected static readonly Vector3 DEFAULT_CONTROLLER_REST_POSITION = new Vector3(0.0f, 0.0f, 0.05f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (0.0f), (0.0f), (0.05f), /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->set_DEFAULT_CONTROLLER_REST_POSITION_25(L_2);
		// protected static readonly Vector3 DEFAULT_ARM_EXTENSION_OFFSET = new Vector3(-0.13f, 0.14f, 0.08f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), (-0.13f), (0.14f), (0.08f), /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->set_DEFAULT_ARM_EXTENSION_OFFSET_26(L_3);
		// protected static readonly Vector3 SHOULDER_POSITION = new Vector3(0.17f, -0.2f, -0.03f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), (0.17f), (-0.2f), (-0.03f), /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->set_SHOULDER_POSITION_29(L_4);
		// protected static readonly Vector3 NECK_OFFSET = new Vector3(0.0f, 0.075f, 0.08f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (0.0f), (0.075f), (0.08f), /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_StaticFields*)il2cpp_codegen_static_fields_for(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var))->set_NECK_OFFSET_30(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_transitionKeyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArmModelTransition_get_transitionKeyName_m4921E2CB3E2461E113D2C61E82F17F9AC7CD1D83 (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_KeyName; }
		String_t* L_0 = __this->get_m_KeyName_0();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::set_transitionKeyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModelTransition_set_transitionKeyName_m0A84BDF5D3FB50B3DC772276192B496490BFF595 (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { m_KeyName = value; }
		String_t* L_0 = ___value0;
		__this->set_m_KeyName_0(L_0);
		// set { m_KeyName = value; }
		return;
	}
}
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::get_armModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ArmModelTransition_get_armModel_mC69193F90AE562A734A973A9087F2B050413DD0F (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ArmModel; }
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = __this->get_m_ArmModel_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::set_armModel(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModelTransition_set_armModel_m995AEEC0782699644B58E5038CDEB343EE6FD15C (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ArmModel = value; }
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = ___value0;
		__this->set_m_ArmModel_1(L_0);
		// set { m_ArmModel = value; }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.ArmModelTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArmModelTransition__ctor_mC9F1C1AE33C8B3F81EA5504E6AB0D0E522E2C9B0 (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shoulderRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shoulderRotationRatio_mE18BB4D8C8E0654A420CC2E0A4163671B7892423 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShoulderRotationRatio; }
		float L_0 = __this->get_m_ShoulderRotationRatio_37();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shoulderRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shoulderRotationRatio_m999657F45E85AEC0E158EC90CEB03307ED7FFA08 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShoulderRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShoulderRotationRatio_37(L_0);
		// set { m_ShoulderRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_elbowRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_elbowRotationRatio_m92FA99E8C1102C09A4D80C863E7C8F9073154C6A (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ElbowRotationRatio; }
		float L_0 = __this->get_m_ElbowRotationRatio_38();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_elbowRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_elbowRotationRatio_m477988D736757DCB770E7DF07C2A63AF621EE5DE (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ElbowRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ElbowRotationRatio_38(L_0);
		// set { m_ElbowRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_wristRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_wristRotationRatio_mAB71B1D35787708317F807D2F87B9F8170E09D74 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_WristRotationRatio; }
		float L_0 = __this->get_m_WristRotationRatio_39();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_wristRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_wristRotationRatio_m209F4BD1B98607E76764CA1C40F574166EC0F2C9 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_WristRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_WristRotationRatio_39(L_0);
		// set { m_WristRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_minJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_minJointShiftAngle_mD1392AB1D9B003AA0CA1665ACE5CF6E35DF0C193 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_JointShiftAngle.x; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = L_0->get_x_0();
		return L_1;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_minJointShiftAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_minJointShiftAngle_mE6F9BECC847DF0E4A4EFA25E93BBC20EB8607B7B (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_JointShiftAngle.x = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = ___value0;
		L_0->set_x_0(L_1);
		// set { m_JointShiftAngle.x = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_maxJointShiftAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_maxJointShiftAngle_m06932904B55880C096F92E35AB5EEA5D05703014 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_JointShiftAngle.y; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = L_0->get_y_1();
		return L_1;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_maxJointShiftAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_maxJointShiftAngle_m7D79990909494637D45C6F33DCE32CDAE3C7D8FA (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_JointShiftAngle.y = value; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_m_JointShiftAngle_40();
		float L_1 = ___value0;
		L_0->set_y_1(L_1);
		// set { m_JointShiftAngle.y = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_jointShiftExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_jointShiftExponent_m9381E873D6E41ECD5ED98BE464BFFD60531406C8 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_JointShiftExponent; }
		float L_0 = __this->get_m_JointShiftExponent_41();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_jointShiftExponent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_jointShiftExponent_mD2A78F99B74BD015BB133ED9DB6D0386F5173544 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_JointShiftExponent = value; }
		float L_0 = ___value0;
		__this->set_m_JointShiftExponent_41(L_0);
		// set { m_JointShiftExponent = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shiftedShoulderRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shiftedShoulderRotationRatio_m5385028E0FD2E075416DA3F01CB0CA90BFD842A4 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShiftedShoulderRotationRatio; }
		float L_0 = __this->get_m_ShiftedShoulderRotationRatio_42();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shiftedShoulderRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shiftedShoulderRotationRatio_mC694BC16C0A68F45CF48FA75526B20C6A3D2CE5A (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShiftedShoulderRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShiftedShoulderRotationRatio_42(L_0);
		// set { m_ShiftedShoulderRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shiftedElbowRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shiftedElbowRotationRatio_mA505E42BD23635FB2A49B22B537542523EE89241 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShiftedElbowRotationRatio; }
		float L_0 = __this->get_m_ShiftedElbowRotationRatio_43();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shiftedElbowRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shiftedElbowRotationRatio_m9E5A47BC77D79326BE244566946DF0C831B92BF3 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShiftedElbowRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShiftedElbowRotationRatio_43(L_0);
		// set { m_ShiftedElbowRotationRatio = value; }
		return;
	}
}
// System.Single UnityEngine.XR.LegacyInputHelpers.SwingArmModel::get_shiftedWristRotationRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SwingArmModel_get_shiftedWristRotationRatio_m42A37604F72E2895EC75C18A710E3C09FA05AAA0 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShiftedWristRotationRatio; }
		float L_0 = __this->get_m_ShiftedWristRotationRatio_44();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::set_shiftedWristRotationRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_set_shiftedWristRotationRatio_m195C4EAE94688F879DD3DD1C960E6378B037FE32 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ShiftedWristRotationRatio = value; }
		float L_0 = ___value0;
		__this->set_m_ShiftedWristRotationRatio_44(L_0);
		// set { m_ShiftedWristRotationRatio = value; }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::CalculateFinalJointRotations(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel_CalculateFinalJointRotations_m0D59DAF7F27D8CC3513DA4BF000A476ABD265872 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___controllerOrientation0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___xyRotation1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lerpRotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwingArmModel_CalculateFinalJointRotations_m0D59DAF7F27D8CC3513DA4BF000A476ABD265872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// float totalAngle = Quaternion.Angle(xyRotation, Quaternion.identity);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___xyRotation1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		float L_2 = Quaternion_Angle_m09599D660B724D330E5C7FE2FB1C8716161B3DD1(L_0, L_1, /*hidden argument*/NULL);
		// float jointShiftAngleRange = maxJointShiftAngle - minJointShiftAngle;
		float L_3 = SwingArmModel_get_maxJointShiftAngle_m06932904B55880C096F92E35AB5EEA5D05703014(__this, /*hidden argument*/NULL);
		float L_4 = SwingArmModel_get_minJointShiftAngle_mD1392AB1D9B003AA0CA1665ACE5CF6E35DF0C193(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4));
		// float angleRatio = Mathf.Clamp01((totalAngle - minJointShiftAngle) / jointShiftAngleRange);
		float L_5 = SwingArmModel_get_minJointShiftAngle_mD1392AB1D9B003AA0CA1665ACE5CF6E35DF0C193(__this, /*hidden argument*/NULL);
		float L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)((float)il2cpp_codegen_subtract((float)L_2, (float)L_5))/(float)L_6)), /*hidden argument*/NULL);
		// float jointShiftRatio = Mathf.Pow(angleRatio, m_JointShiftExponent);
		float L_8 = __this->get_m_JointShiftExponent_41();
		float L_9 = powf(L_7, L_8);
		V_1 = L_9;
		// float finalShoulderRatio = Mathf.Lerp(m_ShoulderRotationRatio, m_ShiftedShoulderRotationRatio, jointShiftRatio);
		float L_10 = __this->get_m_ShoulderRotationRatio_37();
		float L_11 = __this->get_m_ShiftedShoulderRotationRatio_42();
		float L_12 = V_1;
		float L_13 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// float finalElbowRatio = Mathf.Lerp(m_ElbowRotationRatio, m_ShiftedElbowRotationRatio, jointShiftRatio);
		float L_14 = __this->get_m_ElbowRotationRatio_38();
		float L_15 = __this->get_m_ShiftedElbowRotationRatio_43();
		float L_16 = V_1;
		float L_17 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_14, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// float finalWristRatio = Mathf.Lerp(m_WristRotationRatio, m_ShiftedWristRotationRatio, jointShiftRatio);
		float L_18 = __this->get_m_WristRotationRatio_39();
		float L_19 = __this->get_m_ShiftedWristRotationRatio_44();
		float L_20 = V_1;
		float L_21 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_18, L_19, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		// Quaternion swingShoulderRot = Quaternion.Lerp(Quaternion.identity, xyRotation, finalShoulderRatio);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = ___xyRotation1;
		float L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_22, L_23, L_24, /*hidden argument*/NULL);
		V_5 = L_25;
		// Quaternion swingElbowRot = Quaternion.Lerp(Quaternion.identity, xyRotation, finalElbowRatio);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = ___xyRotation1;
		float L_28 = V_3;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_26, L_27, L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		// Quaternion swingWristRot = Quaternion.Lerp(Quaternion.identity, xyRotation, finalWristRatio);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_31 = ___xyRotation1;
		float L_32 = V_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_30, L_31, L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		// Quaternion shoulderRotation = m_TorsoRotation * swingShoulderRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->get_m_TorsoRotation_22();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = V_5;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_34, L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		// m_ElbowRotation = shoulderRotation * swingElbowRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = V_8;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = V_6;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_39 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_37, L_38, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ElbowRotation_15(L_39);
		// m_WristRotation = elbowRotation * swingWristRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E_inline(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = V_7;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_40, L_41, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_WristRotation_17(L_42);
		// m_ControllerRotation = m_TorsoRotation * controllerOrientation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = ((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->get_m_TorsoRotation_22();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_44 = ___controllerOrientation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_43, L_44, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ControllerRotation_19(L_45);
		// m_TorsoRotation = shoulderRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = V_8;
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_TorsoRotation_22(L_46);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.SwingArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwingArmModel__ctor_mC5CABBAA2C1E63A6A1AB4AA731B33C35C796FFA7 (SwingArmModel_t94A8E38317D7A80F2440DB246699A710B37F7579 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwingArmModel__ctor_mC5CABBAA2C1E63A6A1AB4AA731B33C35C796FFA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float m_ShoulderRotationRatio = 0.5f;
		__this->set_m_ShoulderRotationRatio_37((0.5f));
		// float m_ElbowRotationRatio = 0.3f;
		__this->set_m_ElbowRotationRatio_38((0.3f));
		// float m_WristRotationRatio = 0.2f;
		__this->set_m_WristRotationRatio_39((0.2f));
		// Vector2 m_JointShiftAngle = new Vector2(160.0f, 180.0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_0), (160.0f), (180.0f), /*hidden argument*/NULL);
		__this->set_m_JointShiftAngle_40(L_0);
		// float m_JointShiftExponent = 6.0f;
		__this->set_m_JointShiftExponent_41((6.0f));
		// float m_ShiftedShoulderRotationRatio = 0.1f;
		__this->set_m_ShiftedShoulderRotationRatio_42((0.1f));
		// float m_ShiftedElbowRotationRatio = 0.4f;
		__this->set_m_ShiftedElbowRotationRatio_43((0.4f));
		// float m_ShiftedWristRotationRatio = 0.5f;
		__this->set_m_ShiftedWristRotationRatio_44((0.5f));
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var);
		ArmModel__ctor_m923FA495F842BF9DA2B0C50180E9498CEBCAB838(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.LegacyInputHelpers.ArmModel UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::get_currentArmModelComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * TransitionArmModel_get_currentArmModelComponent_m404661E224BDF00DB599E387A86C4CA1D890DD96 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentArmModelComponent; }
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = __this->get_m_CurrentArmModelComponent_37();
		return L_0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::set_currentArmModelComponent(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_set_currentArmModelComponent_m6BB7B85AC38578482F2E84CCF1E53AF070D89329 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_CurrentArmModelComponent = value;  }
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = ___value0;
		__this->set_m_CurrentArmModelComponent_37(L_0);
		// set { m_CurrentArmModelComponent = value;  }
		return;
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::Queue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionArmModel_Queue_m421B9D1BD17E685EA5920A2F479A164212241F84 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel_Queue_m421B9D1BD17E685EA5920A2F479A164212241F84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach(var am in m_ArmModelTransitions)
		List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * L_0 = __this->get_m_ArmModelTransitions_38();
		NullCheck(L_0);
		Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01  L_1 = List_1_GetEnumerator_mA9057F42AF5FB2CCA527070CC866D76A4595CA87(L_0, /*hidden argument*/List_1_GetEnumerator_mA9057F42AF5FB2CCA527070CC866D76A4595CA87_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_000e:
		{
			// foreach(var am in m_ArmModelTransitions)
			ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * L_2 = Enumerator_get_Current_m0762C17032C6858338065940E7AF5AEAD6C4C13E_inline((Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0762C17032C6858338065940E7AF5AEAD6C4C13E_RuntimeMethod_var);
			V_1 = L_2;
			// if(am.transitionKeyName == key)
			ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = ArmModelTransition_get_transitionKeyName_m4921E2CB3E2461E113D2C61E82F17F9AC7CD1D83_inline(L_3, /*hidden argument*/NULL);
			String_t* L_5 = ___key0;
			bool L_6 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0034;
			}
		}

IL_0024:
		{
			// Queue(am.armModel);
			ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * L_7 = V_1;
			NullCheck(L_7);
			ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_8 = ArmModelTransition_get_armModel_mC69193F90AE562A734A973A9087F2B050413DD0F_inline(L_7, /*hidden argument*/NULL);
			TransitionArmModel_Queue_mBCE6B344D26F6D39517BA9E2F9F78990FD8F40CB(__this, L_8, /*hidden argument*/NULL);
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x4F, FINALLY_003f);
		}

IL_0034:
		{
			// foreach(var am in m_ArmModelTransitions)
			bool L_9 = Enumerator_MoveNext_m3525A0E8727916DD27150C650D75C67613F096E1((Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m3525A0E8727916DD27150C650D75C67613F096E1_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_000e;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m09C0F69BAD3F901475940B872CEC10690C6C4C70((Enumerator_tCED820881FF24D05C0958C67E0D4BBB9EB609C01 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m09C0F69BAD3F901475940B872CEC10690C6C4C70_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// return false;
		return (bool)0;
	}

IL_004f:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::Queue(UnityEngine.XR.LegacyInputHelpers.ArmModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_Queue_mBCE6B344D26F6D39517BA9E2F9F78990FD8F40CB (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ___newArmModel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel_Queue_mBCE6B344D26F6D39517BA9E2F9F78990FD8F40CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(newArmModel == null)
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = ___newArmModel0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if(m_CurrentArmModelComponent == null)
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_2 = __this->get_m_CurrentArmModelComponent_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// m_CurrentArmModelComponent = newArmModel;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_4 = ___newArmModel0;
		__this->set_m_CurrentArmModelComponent_37(L_4);
	}

IL_001f:
	{
		// RemoveJustStartingTransitions();
		TransitionArmModel_RemoveJustStartingTransitions_m953D994D076E6F93C99630AEBEEBB329E6D6A99B(__this, /*hidden argument*/NULL);
		// if (armModelBlendData.Count == MAX_ACTIVE_TRANSITIONS)
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_5 = __this->get_armModelBlendData_44();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_inline(L_5, /*hidden argument*/List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_003a;
		}
	}
	{
		// RemoveOldestTransition();
		TransitionArmModel_RemoveOldestTransition_m608FCE3471422FA847E4ED8B312DF7BE9B2E8387(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// var ambd = new ArmModelBlendData();
		il2cpp_codegen_initobj((&V_0), sizeof(ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 ));
		// ambd.armModel = newArmModel;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_7 = ___newArmModel0;
		(&V_0)->set_armModel_0(L_7);
		// ambd.currentBlendAmount = 0.0f;
		(&V_0)->set_currentBlendAmount_1((0.0f));
		// armModelBlendData.Add(ambd);
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_8 = __this->get_armModelBlendData_44();
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_9 = V_0;
		NullCheck(L_8);
		List_1_Add_mB5BBA7DCB1113DD06AE1D364A6EA35646FE6AB0E(L_8, L_9, /*hidden argument*/List_1_Add_mB5BBA7DCB1113DD06AE1D364A6EA35646FE6AB0E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveJustStartingTransitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveJustStartingTransitions_m953D994D076E6F93C99630AEBEEBB329E6D6A99B (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel_RemoveJustStartingTransitions_m953D994D076E6F93C99630AEBEEBB329E6D6A99B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < armModelBlendData.Count; ++i)
		V_0 = 0;
		goto IL_002c;
	}

IL_0004:
	{
		// ArmModelBlendData ambd = armModelBlendData[i];
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_0 = __this->get_armModelBlendData_44();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_2 = List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_RuntimeMethod_var);
		// if (ambd.currentBlendAmount < DROP_TRANSITION_THRESHOLD)
		float L_3 = L_2.get_currentBlendAmount_1();
		if ((!(((float)L_3) < ((float)(0.035f)))))
		{
			goto IL_0028;
		}
	}
	{
		// armModelBlendData.RemoveAt(i);
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_4 = __this->get_armModelBlendData_44();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60(L_4, L_5, /*hidden argument*/List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60_RuntimeMethod_var);
	}

IL_0028:
	{
		// for( int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002c:
	{
		// for( int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_7 = V_0;
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_8 = __this->get_armModelBlendData_44();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_inline(L_8, /*hidden argument*/List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::RemoveOldestTransition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel_RemoveOldestTransition_m608FCE3471422FA847E4ED8B312DF7BE9B2E8387 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel_RemoveOldestTransition_m608FCE3471422FA847E4ED8B312DF7BE9B2E8387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// armModelBlendData.RemoveAt(0);
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_0 = __this->get_armModelBlendData_44();
		NullCheck(L_0);
		List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60(L_0, 0, /*hidden argument*/List_1_RemoveAt_mAB08B7DE4D3112761A5846E62C7EFA641C46DC60_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::GetPoseFromProvider(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionArmModel_GetPoseFromProvider_m00E26A7E6F311767928AE21A5F15312DE22662F5 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel_GetPoseFromProvider_m00E26A7E6F311767928AE21A5F15312DE22662F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UpdateBlends())
		bool L_0 = TransitionArmModel_UpdateBlends_m2045B9BBA0377ECAF7941D7DF432B38C2B6A9DF1(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// output = finalPose;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_1 = ___output0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = ArmModel_get_finalPose_mD3B9995AB4D903424BA317A215E8085250FAD033_inline(__this, /*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_1 = L_2;
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;
		return (int32_t)(3);
	}

IL_0016:
	{
		// output = Pose.identity;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_4 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_3 = L_4;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// System.Boolean UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::UpdateBlends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionArmModel_UpdateBlends_m2045B9BBA0377ECAF7941D7DF432B38C2B6A9DF1 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel_UpdateBlends_m2045B9BBA0377ECAF7941D7DF432B38C2B6A9DF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (currentArmModelComponent == null)
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = TransitionArmModel_get_currentArmModelComponent_m404661E224BDF00DB599E387A86C4CA1D890DD96_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if (m_CurrentArmModelComponent.OnControllerInputUpdated())
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_2 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, L_2);
		if (!L_3)
		{
			goto IL_02ac;
		}
	}
	{
		// m_NeckPosition = m_CurrentArmModelComponent.neckPosition;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_4 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ArmModel_get_neckPosition_mCB262A3B2066C1B87F560B10B498EEEB50D31B15_inline(L_4, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_NeckPosition_13(L_5);
		// m_ElbowPosition = m_CurrentArmModelComponent.elbowPosition;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_6 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ArmModel_get_elbowPosition_mD164603D41D61693BF1D5B7356DB11A634913D1D_inline(L_6, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ElbowPosition_14(L_7);
		// m_WristPosition = m_CurrentArmModelComponent.wristPosition;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_8 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ArmModel_get_wristPosition_m56DD8A7111ACFF4280FA219A660B0E0EDD9E9AD9_inline(L_8, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_WristPosition_16(L_9);
		// m_ControllerPosition = m_CurrentArmModelComponent.controllerPosition;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_10 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3_inline(L_10, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ControllerPosition_18(L_11);
		// m_ElbowRotation = m_CurrentArmModelComponent.elbowRotation;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_12 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E_inline(L_12, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ElbowRotation_15(L_13);
		// m_WristRotation = m_CurrentArmModelComponent.wristRotation;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_14 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_14);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = ArmModel_get_wristRotation_mAD076708A63D44E9FF091290F018EFA684A86825_inline(L_14, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_WristRotation_17(L_15);
		// m_ControllerRotation = m_CurrentArmModelComponent.controllerRotation;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_16 = __this->get_m_CurrentArmModelComponent_37();
		NullCheck(L_16);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F_inline(L_16, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ControllerRotation_19(L_17);
		// if (TryGetAngularVelocity(poseSource, out angVel) && armModelBlendData.Count > 0)
		int32_t L_18 = ArmModel_get_poseSource_m24F54C3405E8C9D6E4E233AE4181DE578B7EC33B_inline(__this, /*hidden argument*/NULL);
		bool L_19 = ArmModel_TryGetAngularVelocity_mD8018D93E0FFE5C0B4AABFD517E01AB93474C474(__this, L_18, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_026e;
		}
	}
	{
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_20 = __this->get_armModelBlendData_44();
		NullCheck(L_20);
		int32_t L_21 = List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_inline(L_20, /*hidden argument*/List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_026e;
		}
	}
	{
		// float angularVelocity = angVel.magnitude;
		float L_22 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		// float lerpValue = Mathf.Clamp(((angularVelocity) - MIN_ANGULAR_VELOCITY) / ANGULAR_VELOCITY_DIVISOR, 0.0f, 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(((float)((float)((float)il2cpp_codegen_subtract((float)L_22, (float)(0.2f)))/(float)(45.0f))), (0.0f), (0.1f), /*hidden argument*/NULL);
		V_1 = L_23;
		// for (int i = 0; i < armModelBlendData.Count; ++i)
		V_2 = 0;
		goto IL_025b;
	}

IL_00e5:
	{
		// ArmModelBlendData ambd = armModelBlendData[i];
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_24 = __this->get_armModelBlendData_44();
		int32_t L_25 = V_2;
		NullCheck(L_24);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_26 = List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_inline(L_24, L_25, /*hidden argument*/List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_RuntimeMethod_var);
		V_3 = L_26;
		// ambd.currentBlendAmount = Mathf.Lerp(ambd.currentBlendAmount, 1.0f, lerpValue);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_27 = V_3;
		float L_28 = L_27.get_currentBlendAmount_1();
		float L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_30 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_28, (1.0f), L_29, /*hidden argument*/NULL);
		(&V_3)->set_currentBlendAmount_1(L_30);
		// if (ambd.currentBlendAmount > LERP_CLAMP_THRESHOLD)
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_31 = V_3;
		float L_32 = L_31.get_currentBlendAmount_1();
		if ((!(((float)L_32) > ((float)(0.95f)))))
		{
			goto IL_0128;
		}
	}
	{
		// ambd.currentBlendAmount = 1.0f;
		(&V_3)->set_currentBlendAmount_1((1.0f));
		// }
		goto IL_0222;
	}

IL_0128:
	{
		// ambd.armModel.OnControllerInputUpdated();
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_33 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_34 = L_33.get_armModel_0();
		NullCheck(L_34);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.XR.LegacyInputHelpers.ArmModel::OnControllerInputUpdated() */, L_34);
		// m_NeckPosition = Vector3.Slerp(neckPosition, ambd.armModel.neckPosition, ambd.currentBlendAmount);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = ArmModel_get_neckPosition_mCB262A3B2066C1B87F560B10B498EEEB50D31B15_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_36 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_37 = L_36.get_armModel_0();
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = ArmModel_get_neckPosition_mCB262A3B2066C1B87F560B10B498EEEB50D31B15_inline(L_37, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_39 = V_3;
		float L_40 = L_39.get_currentBlendAmount_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107(L_35, L_38, L_40, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_NeckPosition_13(L_41);
		// m_ElbowPosition = Vector3.Slerp(elbowPosition, ambd.armModel.elbowPosition, ambd.currentBlendAmount);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = ArmModel_get_elbowPosition_mD164603D41D61693BF1D5B7356DB11A634913D1D_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_43 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_44 = L_43.get_armModel_0();
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = ArmModel_get_elbowPosition_mD164603D41D61693BF1D5B7356DB11A634913D1D_inline(L_44, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_46 = V_3;
		float L_47 = L_46.get_currentBlendAmount_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107(L_42, L_45, L_47, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ElbowPosition_14(L_48);
		// m_WristPosition = Vector3.Slerp(wristPosition, ambd.armModel.wristPosition, ambd.currentBlendAmount);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = ArmModel_get_wristPosition_m56DD8A7111ACFF4280FA219A660B0E0EDD9E9AD9_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_50 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_51 = L_50.get_armModel_0();
		NullCheck(L_51);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = ArmModel_get_wristPosition_m56DD8A7111ACFF4280FA219A660B0E0EDD9E9AD9_inline(L_51, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_53 = V_3;
		float L_54 = L_53.get_currentBlendAmount_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107(L_49, L_52, L_54, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_WristPosition_16(L_55);
		// m_ControllerPosition = Vector3.Slerp(controllerPosition, ambd.armModel.controllerPosition, ambd.currentBlendAmount);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_57 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_58 = L_57.get_armModel_0();
		NullCheck(L_58);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3_inline(L_58, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_60 = V_3;
		float L_61 = L_60.get_currentBlendAmount_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_Slerp_mA40C2A3E6504A1F9D9BB238F3E238ADE997D1107(L_56, L_59, L_61, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ControllerPosition_18(L_62);
		// m_ElbowRotation = Quaternion.Slerp(elbowRotation, ambd.armModel.elbowRotation, ambd.currentBlendAmount);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_63 = ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_64 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_65 = L_64.get_armModel_0();
		NullCheck(L_65);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_66 = ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E_inline(L_65, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_67 = V_3;
		float L_68 = L_67.get_currentBlendAmount_1();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_69 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_63, L_66, L_68, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ElbowRotation_15(L_69);
		// m_WristRotation = Quaternion.Slerp(wristRotation, ambd.armModel.wristRotation, ambd.currentBlendAmount);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_70 = ArmModel_get_wristRotation_mAD076708A63D44E9FF091290F018EFA684A86825_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_71 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_72 = L_71.get_armModel_0();
		NullCheck(L_72);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_73 = ArmModel_get_wristRotation_mAD076708A63D44E9FF091290F018EFA684A86825_inline(L_72, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_74 = V_3;
		float L_75 = L_74.get_currentBlendAmount_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_76 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_70, L_73, L_75, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_WristRotation_17(L_76);
		// m_ControllerRotation = Quaternion.Slerp(controllerRotation, ambd.armModel.controllerRotation, ambd.currentBlendAmount);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_77 = ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F_inline(__this, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_78 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_79 = L_78.get_armModel_0();
		NullCheck(L_79);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_80 = ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F_inline(L_79, /*hidden argument*/NULL);
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_81 = V_3;
		float L_82 = L_81.get_currentBlendAmount_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_83 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_77, L_80, L_82, /*hidden argument*/NULL);
		((ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E *)__this)->set_m_ControllerRotation_19(L_83);
	}

IL_0222:
	{
		// armModelBlendData[i] = ambd;
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_84 = __this->get_armModelBlendData_44();
		int32_t L_85 = V_2;
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_86 = V_3;
		NullCheck(L_84);
		List_1_set_Item_m3A912FAA9193C37CE01B09FE9B223975B29B1B2A(L_84, L_85, L_86, /*hidden argument*/List_1_set_Item_m3A912FAA9193C37CE01B09FE9B223975B29B1B2A_RuntimeMethod_var);
		// if (ambd.currentBlendAmount >= 1.0f)
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_87 = V_3;
		float L_88 = L_87.get_currentBlendAmount_1();
		if ((!(((float)L_88) >= ((float)(1.0f)))))
		{
			goto IL_0257;
		}
	}
	{
		// m_CurrentArmModelComponent = ambd.armModel;
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_89 = V_3;
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_90 = L_89.get_armModel_0();
		__this->set_m_CurrentArmModelComponent_37(L_90);
		// armModelBlendData.RemoveRange(0, i + 1);
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_91 = __this->get_armModelBlendData_44();
		int32_t L_92 = V_2;
		NullCheck(L_91);
		List_1_RemoveRange_m8FD3D2B2ABED426E66D343AF824E7EC3F730EC6C(L_91, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1)), /*hidden argument*/List_1_RemoveRange_m8FD3D2B2ABED426E66D343AF824E7EC3F730EC6C_RuntimeMethod_var);
	}

IL_0257:
	{
		// for (int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_93 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
	}

IL_025b:
	{
		// for (int i = 0; i < armModelBlendData.Count; ++i)
		int32_t L_94 = V_2;
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_95 = __this->get_armModelBlendData_44();
		NullCheck(L_95);
		int32_t L_96 = List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_inline(L_95, /*hidden argument*/List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_RuntimeMethod_var);
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_00e5;
		}
	}
	{
		// }
		goto IL_0293;
	}

IL_026e:
	{
		// else if (armModelBlendData.Count > 0)
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_97 = __this->get_armModelBlendData_44();
		NullCheck(L_97);
		int32_t L_98 = List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_inline(L_97, /*hidden argument*/List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_RuntimeMethod_var);
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0293;
		}
	}
	{
		// Debug.LogErrorFormat(this.gameObject, "Unable to get angular acceleration for node");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_99 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_100 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m994E4759C25BF0E9DD4179C10E3979558137CCF0(L_99, _stringLiteral41565F7C6C5345CE413C300EC4DFEDF464D7A0FE, L_100, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0293:
	{
		// finalPose = new Pose(controllerPosition, controllerRotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_101 = ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3_inline(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_102 = ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F_inline(__this, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_103;
		memset((&L_103), 0, sizeof(L_103));
		Pose__ctor_m4F1AE399EDC70FBE803FCA8A37166AE2D5ED5235((&L_103), L_101, L_102, /*hidden argument*/NULL);
		ArmModel_set_finalPose_m6C490D419B78FC61209C2007DBE44EF0522596BB_inline(__this, L_103, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_02ac:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.LegacyInputHelpers.TransitionArmModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionArmModel__ctor_m84EB9610E749854578C03329B11E4FDA09B75CD7 (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionArmModel__ctor_m84EB9610E749854578C03329B11E4FDA09B75CD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ArmModelTransition> m_ArmModelTransitions = new List<ArmModelTransition>();
		List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F * L_0 = (List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F *)il2cpp_codegen_object_new(List_1_t3915ED1B109A8E36B0F9FF0BD4C48D13B5F3859F_il2cpp_TypeInfo_var);
		List_1__ctor_mC3782A3F75F13B413715108B25F8C2DA84578026(L_0, /*hidden argument*/List_1__ctor_mC3782A3F75F13B413715108B25F8C2DA84578026_RuntimeMethod_var);
		__this->set_m_ArmModelTransitions_38(L_0);
		// internal List<ArmModelBlendData> armModelBlendData = new List<ArmModelBlendData>(MAX_ACTIVE_TRANSITIONS);
		List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * L_1 = (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 *)il2cpp_codegen_object_new(List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3_il2cpp_TypeInfo_var);
		List_1__ctor_mF7C25A59E6E4615BBC64374DD0DAC158BF1564C2(L_1, ((int32_t)10), /*hidden argument*/List_1__ctor_mF7C25A59E6E4615BBC64374DD0DAC158BF1564C2_RuntimeMethod_var);
		__this->set_armModelBlendData_44(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E_il2cpp_TypeInfo_var);
		ArmModel__ctor_m923FA495F842BF9DA2B0C50180E9498CEBCAB838(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshal_pinvoke(const ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4& unmarshaled, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshal_pinvoke_back(const ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_pinvoke& marshaled, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4& unmarshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshal_pinvoke_cleanup(ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshal_com(const ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4& unmarshaled, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_com& marshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshal_com_back(const ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_com& marshaled, ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4& unmarshaled)
{
	Exception_t* ___armModel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'armModel' of type 'ArmModelBlendData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___armModel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.LegacyInputHelpers.TransitionArmModel/ArmModelBlendData
IL2CPP_EXTERN_C void ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshal_com_cleanup(ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float CameraOffset_get_cameraYOffset_m179605BA4EF979AB40395A8BB00E4AA7A9355C7E_inline (CameraOffset_t2CF289A869B6BCCBD7C588C76B8BCBD372E24D9F * __this, const RuntimeMethod* method)
{
	{
		// public float cameraYOffset { get { return m_CameraYOffset; } set { m_CameraYOffset = value; TryInitializeCamera(); } }
		float L_0 = __this->get_m_CameraYOffset_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ArmModel_get_finalPose_mD3B9995AB4D903424BA317A215E8085250FAD033_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_FinalPose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_FinalPose_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ArmModel_get_poseSource_m24F54C3405E8C9D6E4E233AE4181DE578B7EC33B_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseSource; }
		int32_t L_0 = __this->get_m_PoseSource_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_elbowRotation_m658B79613BBD51D0385FA7E0BBF40FBEDCD9BA7E_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_ElbowRotation_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ArmModelTransition_get_transitionKeyName_m4921E2CB3E2461E113D2C61E82F17F9AC7CD1D83_inline (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_KeyName; }
		String_t* L_0 = __this->get_m_KeyName_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * ArmModelTransition_get_armModel_mC69193F90AE562A734A973A9087F2B050413DD0F_inline (ArmModelTransition_t70A15D83EE8C16EB9AF146C656A5EA6335421818 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ArmModel; }
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = __this->get_m_ArmModel_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * TransitionArmModel_get_currentArmModelComponent_m404661E224BDF00DB599E387A86C4CA1D890DD96_inline (TransitionArmModel_t83DFC5EF0299BB5BE4AD00C45456549C9A43C5DB * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentArmModelComponent; }
		ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * L_0 = __this->get_m_CurrentArmModelComponent_37();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_neckPosition_mCB262A3B2066C1B87F560B10B498EEEB50D31B15_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_NeckPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_NeckPosition_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_elbowPosition_mD164603D41D61693BF1D5B7356DB11A634913D1D_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ElbowPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ElbowPosition_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_wristPosition_m56DD8A7111ACFF4280FA219A660B0E0EDD9E9AD9_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_WristPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_WristPosition_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ArmModel_get_controllerPosition_mE1194A28D7E181528665C521B5DB2349F7E6DEF3_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_ControllerPosition_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_wristRotation_mAD076708A63D44E9FF091290F018EFA684A86825_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_WristRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_WristRotation_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ArmModel_get_controllerRotation_mFF96BD142F33F049391D72AAF8F53CA9BA09A64F_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, const RuntimeMethod* method)
{
	{
		// return m_ControllerRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_m_ControllerRotation_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ArmModel_set_finalPose_m6C490D419B78FC61209C2007DBE44EF0522596BB_inline (ArmModel_t07FE6DD99700DBFC5C71E594FC46C1886686B53E * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_FinalPose = value; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___value0;
		__this->set_m_FinalPose_4(L_0);
		// set { m_FinalPose = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m186CD1AB8DDD0805A5F775C57178EAECA930DDD8_gshared_inline (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  List_1_get_Item_mD33BB69068F3F5F717C1D99135DB7DAA248AC654_gshared_inline (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* L_2 = (XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06*)__this->get__items_1();
		int32_t L_3 = ___index0;
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06*)L_2, (int32_t)L_3);
		return (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB4C1485E3D97DB233901C882C2A042188B8DFC26_gshared_inline (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  List_1_get_Item_mAAB4AB2F88729F80623694685007B16FCC88452A_gshared_inline (List_1_tE19E92C39FDED72AD33C26F4533AA53DB1160DA3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5* L_2 = (ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ArmModelBlendDataU5BU5D_t08141948BD7FFAC5685B0B3A5837DAF39A055BD5*)L_2, (int32_t)L_3);
		return (ArmModelBlendData_t82EBD2B22D98DFE900D66D5BCF7A6172F006E5A4 )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
