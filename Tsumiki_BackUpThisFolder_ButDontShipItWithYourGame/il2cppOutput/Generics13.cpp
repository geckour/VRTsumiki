﻿#include "il2cpp-config.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerator`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct IEnumerator_1_t32213AFBFB09806847ACC7C73875E875BF228E48;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController/FocusedElement>
struct List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB;
// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.ISubsystem
struct ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Subsystem
struct Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90;
// UnityEngine.UIElements.CommandEventBase`1<System.Object>
struct CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2;
// UnityEngine.UIElements.DragAndDropEventBase`1<System.Object>
struct DragAndDropEventBase_1_t51BA6B73A83CFDD23CEE8C4C4F5F832642AF0844;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035;
// UnityEngine.UIElements.EventBase
struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD;
// UnityEngine.UIElements.EventBase`1<System.Object>
struct EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D;
// UnityEngine.UIElements.FocusChangeDirection
struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2;
// UnityEngine.UIElements.FocusController
struct FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231;
// UnityEngine.UIElements.FocusEventBase`1<System.Object>
struct FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24;
// UnityEngine.UIElements.Focusable
struct Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_t404CEA309DA7B5B5EB5536186E3F34645F0372B2;
// UnityEngine.UIElements.IFocusRing
struct IFocusRing_t88B357CA83A82B8A4E788D16D5AC8D13F7575A10;
// UnityEngine.UIElements.IMouseEvent
struct IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D;
// UnityEngine.UIElements.IPanel
struct IPanel_t3AAE62317DEE1C12E547C78C27556B659DE4F20A;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA;
// UnityEngine.UIElements.KeyboardEventBase`1<System.Object>
struct KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D;
// UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>
struct MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B;
// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B;
// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PropagationPaths>
struct ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A;
// UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>
struct PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE;
// UnityEngine.UIElements.PointerEventBase`1<System.Object>
struct PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D;
// UnityEngine.UIElements.RepaintData
struct RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F;
// UnityEngine.UIElements.StyleSheets.InheritedStylesData
struct InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E;
// UnityEngine.UIElements.StyleSheets.VisualElementStylesData
struct VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Int32Enum>
struct ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Object>
struct ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4E73D0FB4BEE99484EF3F5331A156AE1760807C2;
IL2CPP_EXTERN_C String_t* _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376;
IL2CPP_EXTERN_C String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralF950D9CCC7081471921E58DAA686F27E792540D3;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mE495C4DC64D58DD30BE5B9CDF6D1299D4789536C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB91F5DE32D3C6A7A04BCEA59856B8053D39CFC25_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t EventBase_1_Init_mE11F413B0B7AC707C9945CB95C7046B1EB3DBE53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventBase_1__cctor_mB936C2021EEEDB142183DEA0757DA68CAC2868D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EventBase_1__ctor_mEA6B57DEA212E685AF6A9751E25B844523693764_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8Generics13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FocusEventBase_1_LocalInit_mA55F0B1FC448FD0E1FB76315A1106748462AFB48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IntegratedSubsystemDescriptor_1_Create_m353DF937E50FE54F1022D32EC09A78FF01798EB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m43C244589B6072E2C06216F336E06154899E142C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m5377CC1E2A161709DCDBD815E72B0734D4A1E46E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_GetPooled_m7581733236F9D88705484E19A491449448D31E2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_LocalInit_mBF4B84CC615154CDCFE5AE36CC219A1B11B328BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_PostDispatch_m3518F3E76E5AA9E9CA4C39AB8267080C9791A0F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_PreDispatch_m16BFF76FF4B664C16716B880046A7F96F23C748F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseEventBase_1_set_currentTarget_m42FF4A10DB34A8045633A8705EE777F05C642D0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPool_1_set_maxSize_m5732821144B90CB4DCAD3F663176B589E7AAE794_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerCaptureEventBase_1_LocalInit_m67C407968188A88A0860879AD1A1BE70884AA2F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_GetPooled_m654B49807444AB3C852A3B8F68181B9203E352F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_GetPooled_m86CCDFBD02BDF5AE0EB7F297281EF28A286C0162_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_GetPooled_mB4E401D8A4F768CEE0AC20377156F8AD7C9A32EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_LocalInit_m6A72C0C79B21E843E37A6DDC0BE8A117365A28E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_PostDispatch_m2DE466AABDA92057C28FD02AF8C130F459C06FBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_PreDispatch_m359A5629E26AA079E72B1A00D41C93821C6368B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointerEventBase_1_set_currentTarget_m571C3135C0C55466E277FDA84EE500DCB69C1C51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemDescriptor_1_Create_mF01290ECD014B1B0709F1763F81444F034F27611_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_CopyFrom_m4393C6018EE4FF47EB0435CA9C6566BB9562652D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.UIElements.BaseVisualElementPanel
struct  BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90  : public RuntimeObject
{
public:
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_0;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_1;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * ___U3CrepaintDataU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_3;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * ___m_TopElementUnderPointers_4;

public:
	inline static int32_t get_offset_of_m_PixelsPerPoint_0() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___m_PixelsPerPoint_0)); }
	inline float get_m_PixelsPerPoint_0() const { return ___m_PixelsPerPoint_0; }
	inline float* get_address_of_m_PixelsPerPoint_0() { return &___m_PixelsPerPoint_0; }
	inline void set_m_PixelsPerPoint_0(float value)
	{
		___m_PixelsPerPoint_0 = value;
	}

	inline static int32_t get_offset_of_U3CduringLayoutPhaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CduringLayoutPhaseU3Ek__BackingField_1)); }
	inline bool get_U3CduringLayoutPhaseU3Ek__BackingField_1() const { return ___U3CduringLayoutPhaseU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CduringLayoutPhaseU3Ek__BackingField_1() { return &___U3CduringLayoutPhaseU3Ek__BackingField_1; }
	inline void set_U3CduringLayoutPhaseU3Ek__BackingField_1(bool value)
	{
		___U3CduringLayoutPhaseU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrepaintDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CrepaintDataU3Ek__BackingField_2)); }
	inline RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * get_U3CrepaintDataU3Ek__BackingField_2() const { return ___U3CrepaintDataU3Ek__BackingField_2; }
	inline RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F ** get_address_of_U3CrepaintDataU3Ek__BackingField_2() { return &___U3CrepaintDataU3Ek__BackingField_2; }
	inline void set_U3CrepaintDataU3Ek__BackingField_2(RepaintData_tE3656A64C3BE5ABCD95A72370251036B6E75F74F * value)
	{
		___U3CrepaintDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrepaintDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___U3CdisposedU3Ek__BackingField_3)); }
	inline bool get_U3CdisposedU3Ek__BackingField_3() const { return ___U3CdisposedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CdisposedU3Ek__BackingField_3() { return &___U3CdisposedU3Ek__BackingField_3; }
	inline void set_U3CdisposedU3Ek__BackingField_3(bool value)
	{
		___U3CdisposedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_TopElementUnderPointers_4() { return static_cast<int32_t>(offsetof(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90, ___m_TopElementUnderPointers_4)); }
	inline ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * get_m_TopElementUnderPointers_4() const { return ___m_TopElementUnderPointers_4; }
	inline ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 ** get_address_of_m_TopElementUnderPointers_4() { return &___m_TopElementUnderPointers_4; }
	inline void set_m_TopElementUnderPointers_4(ElementUnderPointer_t95B57508EE9F6700FE873A796AAF66C0EE2A0035 * value)
	{
		___m_TopElementUnderPointers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TopElementUnderPointers_4), (void*)value);
	}
};


// UnityEngine.UIElements.CallbackEventHandler
struct  CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * ___m_CallbackRegistry_0;

public:
	inline static int32_t get_offset_of_m_CallbackRegistry_0() { return static_cast<int32_t>(offsetof(CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB, ___m_CallbackRegistry_0)); }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * get_m_CallbackRegistry_0() const { return ___m_CallbackRegistry_0; }
	inline EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D ** get_address_of_m_CallbackRegistry_0() { return &___m_CallbackRegistry_0; }
	inline void set_m_CallbackRegistry_0(EventCallbackRegistry_t0E675C9EC7F38446B7A42C43115CEDB7BE67776D * value)
	{
		___m_CallbackRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CallbackRegistry_0), (void*)value);
	}
};


// UnityEngine.UIElements.FocusChangeDirection
struct  FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UIElements.FocusChangeDirection::m_Value
	int32_t ___m_Value_3;

public:
	inline static int32_t get_offset_of_m_Value_3() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2, ___m_Value_3)); }
	inline int32_t get_m_Value_3() const { return ___m_Value_3; }
	inline int32_t* get_address_of_m_Value_3() { return &___m_Value_3; }
	inline void set_m_Value_3(int32_t value)
	{
		___m_Value_3 = value;
	}
};

struct FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields
{
public:
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<unspecified>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CunspecifiedU3Ek__BackingField_0;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<none>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CnoneU3Ek__BackingField_1;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::<lastValue>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3ClastValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CunspecifiedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CunspecifiedU3Ek__BackingField_0)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CunspecifiedU3Ek__BackingField_0() const { return ___U3CunspecifiedU3Ek__BackingField_0; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CunspecifiedU3Ek__BackingField_0() { return &___U3CunspecifiedU3Ek__BackingField_0; }
	inline void set_U3CunspecifiedU3Ek__BackingField_0(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CunspecifiedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CunspecifiedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnoneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3CnoneU3Ek__BackingField_1)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CnoneU3Ek__BackingField_1() const { return ___U3CnoneU3Ek__BackingField_1; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CnoneU3Ek__BackingField_1() { return &___U3CnoneU3Ek__BackingField_1; }
	inline void set_U3CnoneU3Ek__BackingField_1(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CnoneU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnoneU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields, ___U3ClastValueU3Ek__BackingField_2)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3ClastValueU3Ek__BackingField_2() const { return ___U3ClastValueU3Ek__BackingField_2; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3ClastValueU3Ek__BackingField_2() { return &___U3ClastValueU3Ek__BackingField_2; }
	inline void set_U3ClastValueU3Ek__BackingField_2(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3ClastValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastValueU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.UIElements.FocusController
struct  FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231  : public RuntimeObject
{
public:
	// UnityEngine.UIElements.IFocusRing UnityEngine.UIElements.FocusController::<focusRing>k__BackingField
	RuntimeObject* ___U3CfocusRingU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.FocusController_FocusedElement> UnityEngine.UIElements.FocusController::m_FocusedElements
	List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * ___m_FocusedElements_1;
	// System.Int32 UnityEngine.UIElements.FocusController::<imguiKeyboardControl>k__BackingField
	int32_t ___U3CimguiKeyboardControlU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CfocusRingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___U3CfocusRingU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CfocusRingU3Ek__BackingField_0() const { return ___U3CfocusRingU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CfocusRingU3Ek__BackingField_0() { return &___U3CfocusRingU3Ek__BackingField_0; }
	inline void set_U3CfocusRingU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CfocusRingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusRingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusedElements_1() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___m_FocusedElements_1)); }
	inline List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * get_m_FocusedElements_1() const { return ___m_FocusedElements_1; }
	inline List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD ** get_address_of_m_FocusedElements_1() { return &___m_FocusedElements_1; }
	inline void set_m_FocusedElements_1(List_1_tCE807AC7A0FCBE436F146AE2428BAEE81761D3BD * value)
	{
		___m_FocusedElements_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FocusedElements_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimguiKeyboardControlU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231, ___U3CimguiKeyboardControlU3Ek__BackingField_2)); }
	inline int32_t get_U3CimguiKeyboardControlU3Ek__BackingField_2() const { return ___U3CimguiKeyboardControlU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CimguiKeyboardControlU3Ek__BackingField_2() { return &___U3CimguiKeyboardControlU3Ek__BackingField_2; }
	inline void set_U3CimguiKeyboardControlU3Ek__BackingField_2(int32_t value)
	{
		___U3CimguiKeyboardControlU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.UIElements.ObjectPool`1<System.Object>
struct  ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.UIElements.ObjectPool`1::m_Stack
	Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * ___m_Stack_0;
	// System.Int32 UnityEngine.UIElements.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_1;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E, ___m_Stack_0)); }
	inline Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxSize_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E, ___m_MaxSize_1)); }
	inline int32_t get_m_MaxSize_1() const { return ___m_MaxSize_1; }
	inline int32_t* get_address_of_m_MaxSize_1() { return &___m_MaxSize_1; }
	inline void set_m_MaxSize_1(int32_t value)
	{
		___m_MaxSize_1 = value;
	}
};


// UnityEngine.UIElements.PointerId
struct  PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C  : public RuntimeObject
{
public:

public:
};

struct PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields
{
public:
	// System.Int32 UnityEngine.UIElements.PointerId::maxPointers
	int32_t ___maxPointers_0;
	// System.Int32 UnityEngine.UIElements.PointerId::invalidPointerId
	int32_t ___invalidPointerId_1;
	// System.Int32 UnityEngine.UIElements.PointerId::mousePointerId
	int32_t ___mousePointerId_2;
	// System.Int32 UnityEngine.UIElements.PointerId::touchPointerIdBase
	int32_t ___touchPointerIdBase_3;
	// System.Int32 UnityEngine.UIElements.PointerId::touchPointerCount
	int32_t ___touchPointerCount_4;
	// System.Int32 UnityEngine.UIElements.PointerId::penPointerIdBase
	int32_t ___penPointerIdBase_5;
	// System.Int32 UnityEngine.UIElements.PointerId::penPointerCount
	int32_t ___penPointerCount_6;

public:
	inline static int32_t get_offset_of_maxPointers_0() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___maxPointers_0)); }
	inline int32_t get_maxPointers_0() const { return ___maxPointers_0; }
	inline int32_t* get_address_of_maxPointers_0() { return &___maxPointers_0; }
	inline void set_maxPointers_0(int32_t value)
	{
		___maxPointers_0 = value;
	}

	inline static int32_t get_offset_of_invalidPointerId_1() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___invalidPointerId_1)); }
	inline int32_t get_invalidPointerId_1() const { return ___invalidPointerId_1; }
	inline int32_t* get_address_of_invalidPointerId_1() { return &___invalidPointerId_1; }
	inline void set_invalidPointerId_1(int32_t value)
	{
		___invalidPointerId_1 = value;
	}

	inline static int32_t get_offset_of_mousePointerId_2() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___mousePointerId_2)); }
	inline int32_t get_mousePointerId_2() const { return ___mousePointerId_2; }
	inline int32_t* get_address_of_mousePointerId_2() { return &___mousePointerId_2; }
	inline void set_mousePointerId_2(int32_t value)
	{
		___mousePointerId_2 = value;
	}

	inline static int32_t get_offset_of_touchPointerIdBase_3() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___touchPointerIdBase_3)); }
	inline int32_t get_touchPointerIdBase_3() const { return ___touchPointerIdBase_3; }
	inline int32_t* get_address_of_touchPointerIdBase_3() { return &___touchPointerIdBase_3; }
	inline void set_touchPointerIdBase_3(int32_t value)
	{
		___touchPointerIdBase_3 = value;
	}

	inline static int32_t get_offset_of_touchPointerCount_4() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___touchPointerCount_4)); }
	inline int32_t get_touchPointerCount_4() const { return ___touchPointerCount_4; }
	inline int32_t* get_address_of_touchPointerCount_4() { return &___touchPointerCount_4; }
	inline void set_touchPointerCount_4(int32_t value)
	{
		___touchPointerCount_4 = value;
	}

	inline static int32_t get_offset_of_penPointerIdBase_5() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___penPointerIdBase_5)); }
	inline int32_t get_penPointerIdBase_5() const { return ___penPointerIdBase_5; }
	inline int32_t* get_address_of_penPointerIdBase_5() { return &___penPointerIdBase_5; }
	inline void set_penPointerIdBase_5(int32_t value)
	{
		___penPointerIdBase_5 = value;
	}

	inline static int32_t get_offset_of_penPointerCount_6() { return static_cast<int32_t>(offsetof(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields, ___penPointerCount_6)); }
	inline int32_t get_penPointerCount_6() const { return ___penPointerCount_6; }
	inline int32_t* get_address_of_penPointerCount_6() { return &___penPointerCount_6; }
	inline void set_penPointerCount_6(int32_t value)
	{
		___penPointerCount_6 = value;
	}
};


// UnityEngine.UIElements.PointerType
struct  PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB  : public RuntimeObject
{
public:

public:
};

struct PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields
{
public:
	// System.String UnityEngine.UIElements.PointerType::mouse
	String_t* ___mouse_0;
	// System.String UnityEngine.UIElements.PointerType::touch
	String_t* ___touch_1;
	// System.String UnityEngine.UIElements.PointerType::pen
	String_t* ___pen_2;
	// System.String UnityEngine.UIElements.PointerType::unknown
	String_t* ___unknown_3;

public:
	inline static int32_t get_offset_of_mouse_0() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___mouse_0)); }
	inline String_t* get_mouse_0() const { return ___mouse_0; }
	inline String_t** get_address_of_mouse_0() { return &___mouse_0; }
	inline void set_mouse_0(String_t* value)
	{
		___mouse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouse_0), (void*)value);
	}

	inline static int32_t get_offset_of_touch_1() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___touch_1)); }
	inline String_t* get_touch_1() const { return ___touch_1; }
	inline String_t** get_address_of_touch_1() { return &___touch_1; }
	inline void set_touch_1(String_t* value)
	{
		___touch_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touch_1), (void*)value);
	}

	inline static int32_t get_offset_of_pen_2() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___pen_2)); }
	inline String_t* get_pen_2() const { return ___pen_2; }
	inline String_t** get_address_of_pen_2() { return &___pen_2; }
	inline void set_pen_2(String_t* value)
	{
		___pen_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pen_2), (void*)value);
	}

	inline static int32_t get_offset_of_unknown_3() { return static_cast<int32_t>(offsetof(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields, ___unknown_3)); }
	inline String_t* get_unknown_3() const { return ___unknown_3; }
	inline String_t** get_address_of_unknown_3() { return &___unknown_3; }
	inline void set_unknown_3(String_t* value)
	{
		___unknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unknown_3), (void*)value);
	}
};


// UnityEngine.UIElements.PropagationPaths
struct  PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.PropagationPaths::trickleDownPath
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___trickleDownPath_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.PropagationPaths::targetElements
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___targetElements_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.PropagationPaths::bubbleUpPath
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___bubbleUpPath_3;

public:
	inline static int32_t get_offset_of_trickleDownPath_1() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D, ___trickleDownPath_1)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_trickleDownPath_1() const { return ___trickleDownPath_1; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_trickleDownPath_1() { return &___trickleDownPath_1; }
	inline void set_trickleDownPath_1(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___trickleDownPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trickleDownPath_1), (void*)value);
	}

	inline static int32_t get_offset_of_targetElements_2() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D, ___targetElements_2)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_targetElements_2() const { return ___targetElements_2; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_targetElements_2() { return &___targetElements_2; }
	inline void set_targetElements_2(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___targetElements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetElements_2), (void*)value);
	}

	inline static int32_t get_offset_of_bubbleUpPath_3() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D, ___bubbleUpPath_3)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_bubbleUpPath_3() const { return ___bubbleUpPath_3; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_bubbleUpPath_3() { return &___bubbleUpPath_3; }
	inline void set_bubbleUpPath_3(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___bubbleUpPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bubbleUpPath_3), (void*)value);
	}
};

struct PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D_StaticFields
{
public:
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.PropagationPaths> UnityEngine.UIElements.PropagationPaths::s_Pool
	ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A * ___s_Pool_0;

public:
	inline static int32_t get_offset_of_s_Pool_0() { return static_cast<int32_t>(offsetof(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D_StaticFields, ___s_Pool_0)); }
	inline ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A * get_s_Pool_0() const { return ___s_Pool_0; }
	inline ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A ** get_address_of_s_Pool_0() { return &___s_Pool_0; }
	inline void set_s_Pool_0(ObjectPool_1_t693D29CF21941A04E78A1458107B6C3941601A8A * value)
	{
		___s_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_0), (void*)value);
	}
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
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


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB, ___Delegate_0)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5, ___Delegate_0)); }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC, ___Delegate_0)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26, ___Delegate_0)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.PropertyName
struct  PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2  : public SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA
{
public:

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.UIElements.ComputedStyle
struct  ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.ComputedStyle::m_Element
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;

public:
	inline static int32_t get_offset_of_m_Element_0() { return static_cast<int32_t>(offsetof(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91, ___m_Element_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Element_0() const { return ___m_Element_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Element_0() { return &___m_Element_0; }
	inline void set_m_Element_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Element_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Element_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Element_0;
};

// UnityEngine.UIElements.Focusable
struct  Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B  : public CallbackEventHandler_t3B7336D446FAD9009A9C1DA1B793885F28D214EB
{
public:
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_2;

public:
	inline static int32_t get_offset_of_U3CfocusableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___U3CfocusableU3Ek__BackingField_1)); }
	inline bool get_U3CfocusableU3Ek__BackingField_1() const { return ___U3CfocusableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CfocusableU3Ek__BackingField_1() { return &___U3CfocusableU3Ek__BackingField_1; }
	inline void set_U3CfocusableU3Ek__BackingField_1(bool value)
	{
		___U3CfocusableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_isIMGUIContainer_2() { return static_cast<int32_t>(offsetof(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B, ___isIMGUIContainer_2)); }
	inline bool get_isIMGUIContainer_2() const { return ___isIMGUIContainer_2; }
	inline bool* get_address_of_isIMGUIContainer_2() { return &___isIMGUIContainer_2; }
	inline void set_isIMGUIContainer_2(bool value)
	{
		___isIMGUIContainer_2 = value;
	}
};


// UnityEngine.UIElements.VisualElement_Hierarchy
struct  Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F 
{
public:
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement_Hierarchy::m_Owner
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;

public:
	inline static int32_t get_offset_of_m_Owner_0() { return static_cast<int32_t>(offsetof(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F, ___m_Owner_0)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_Owner_0() const { return ___m_Owner_0; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_Owner_0() { return &___m_Owner_0; }
	inline void set_m_Owner_0(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_Owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Owner_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_pinvoke
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F_marshaled_com
{
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_Owner_0;
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


// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct  Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	RuntimeObject * ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___U3CresultU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct  InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Object>
struct  InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct  InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct  InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct  InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InteractionSubsystems.GestureId
struct  GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A 
{
public:
	// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.InteractionSubsystems.GestureId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A_StaticFields
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.InteractionSubsystems.GestureId::s_InvalidId
	GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A_StaticFields, ___s_InvalidId_0)); }
	inline GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};


// UnityEngine.Event
struct  Event_t187FF6A6B357447B83EC2064823EE0AEC5263210  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___s_MasterEvent_2;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_Current_1)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Current_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MasterEvent_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventModifiers
struct  EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventModifiers_tC34E3018F3697001F894187AF6E9E63D7E203061, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventType
struct  EventType_t3D3937E705A4506226002DAB22071B7B181DA57B 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7  : public InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6  : public InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct  CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD  : public InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	RuntimeObject * ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD, ___m_Arg1_1)); }
	inline RuntimeObject * get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline RuntimeObject ** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(RuntimeObject * value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Arg1_1), (void*)value);
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A  : public InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
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

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.PointerType
struct  PointerType_tFE78E7B29562C9813141CA1708800D39B0F3931D 
{
public:
	// System.Int32 UnityEngine.PointerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointerType_tFE78E7B29562C9813141CA1708800D39B0F3931D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_EventPropagation
struct  EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_EventPropagation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventPropagation_tA9A7EB847940ABD70842FA9EBA217C32F977DA20, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.EventBase_LifeCycleStatus
struct  LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883 
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase_LifeCycleStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LifeCycleStatus_t261998375F205A68CDAE646A82B1A16389926883, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PickingMode
struct  PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529 
{
public:
	// System.Int32 UnityEngine.UIElements.PickingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PickingMode_t50B176123A8C1CFF46840654D7AFA06EC6EDD529, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PropagationPhase
struct  PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC 
{
public:
	// System.Int32 UnityEngine.UIElements.PropagationPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropagationPhase_tF216B8A0984294D04F73CC36443D006EB659D9FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.PseudoStates
struct  PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545 
{
public:
	// System.Int32 UnityEngine.UIElements.PseudoStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PseudoStates_t047BCA0D8B56DC2E0A08F001C9C96BB82BDD9545, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.StyleKeyword
struct  StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>
struct  ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1  : public Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct  TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851  : public Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.InteractionSubsystems.GestureState
struct  GestureState_t807292F827DBB406210227D7A723A28F343463E4 
{
public:
	// System.Int32 UnityEngine.XR.InteractionSubsystems.GestureState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureState_t807292F827DBB406210227D7A723A28F343463E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct  NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct  IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB  : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<System.Object>
struct  IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.UIElements.EventBase
struct  EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD  : public RuntimeObject
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase_EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * ___m_Path_6;
	// UnityEngine.UIElements.EventBase_LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CoriginalMousePositionU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtimestampU3Ek__BackingField_2)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_2() const { return ___U3CtimestampU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_2() { return &___U3CtimestampU3Ek__BackingField_2; }
	inline void set_U3CtimestampU3Ek__BackingField_2(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CeventIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CeventIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CeventIdU3Ek__BackingField_3() const { return ___U3CeventIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CeventIdU3Ek__BackingField_3() { return &___U3CeventIdU3Ek__BackingField_3; }
	inline void set_U3CeventIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CeventIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtriggerEventIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CtriggerEventIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CtriggerEventIdU3Ek__BackingField_4() const { return ___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CtriggerEventIdU3Ek__BackingField_4() { return &___U3CtriggerEventIdU3Ek__BackingField_4; }
	inline void set_U3CtriggerEventIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CtriggerEventIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpropagationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationU3Ek__BackingField_5)); }
	inline int32_t get_U3CpropagationU3Ek__BackingField_5() const { return ___U3CpropagationU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpropagationU3Ek__BackingField_5() { return &___U3CpropagationU3Ek__BackingField_5; }
	inline void set_U3CpropagationU3Ek__BackingField_5(int32_t value)
	{
		___U3CpropagationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_m_Path_6() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Path_6)); }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * get_m_Path_6() const { return ___m_Path_6; }
	inline PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D ** get_address_of_m_Path_6() { return &___m_Path_6; }
	inline void set_m_Path_6(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * value)
	{
		___m_Path_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3ClifeCycleStatusU3Ek__BackingField_7)); }
	inline int32_t get_U3ClifeCycleStatusU3Ek__BackingField_7() const { return ___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3ClifeCycleStatusU3Ek__BackingField_7() { return &___U3ClifeCycleStatusU3Ek__BackingField_7; }
	inline void set_U3ClifeCycleStatusU3Ek__BackingField_7(int32_t value)
	{
		___U3ClifeCycleStatusU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CleafTargetU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CleafTargetU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CleafTargetU3Ek__BackingField_8() const { return ___U3CleafTargetU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CleafTargetU3Ek__BackingField_8() { return &___U3CleafTargetU3Ek__BackingField_8; }
	inline void set_U3CleafTargetU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CleafTargetU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleafTargetU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_9() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_Target_9)); }
	inline RuntimeObject* get_m_Target_9() const { return ___m_Target_9; }
	inline RuntimeObject** get_address_of_m_Target_9() { return &___m_Target_9; }
	inline void set_m_Target_9(RuntimeObject* value)
	{
		___m_Target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CskipElementsU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CskipElementsU3Ek__BackingField_10)); }
	inline List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * get_U3CskipElementsU3Ek__BackingField_10() const { return ___U3CskipElementsU3Ek__BackingField_10; }
	inline List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 ** get_address_of_U3CskipElementsU3Ek__BackingField_10() { return &___U3CskipElementsU3Ek__BackingField_10; }
	inline void set_U3CskipElementsU3Ek__BackingField_10(List_1_tC6DEF7083E8206203302B1B25E23947E49BBD537 * value)
	{
		___U3CskipElementsU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CskipElementsU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropagationPhaseU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CpropagationPhaseU3Ek__BackingField_11)); }
	inline int32_t get_U3CpropagationPhaseU3Ek__BackingField_11() const { return ___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpropagationPhaseU3Ek__BackingField_11() { return &___U3CpropagationPhaseU3Ek__BackingField_11; }
	inline void set_U3CpropagationPhaseU3Ek__BackingField_11(int32_t value)
	{
		___U3CpropagationPhaseU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentTarget_12() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_CurrentTarget_12)); }
	inline RuntimeObject* get_m_CurrentTarget_12() const { return ___m_CurrentTarget_12; }
	inline RuntimeObject** get_address_of_m_CurrentTarget_12() { return &___m_CurrentTarget_12; }
	inline void set_m_CurrentTarget_12(RuntimeObject* value)
	{
		___m_CurrentTarget_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentTarget_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImguiEvent_13() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___m_ImguiEvent_13)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ImguiEvent_13() const { return ___m_ImguiEvent_13; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ImguiEvent_13() { return &___m_ImguiEvent_13; }
	inline void set_m_ImguiEvent_13(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ImguiEvent_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImguiEvent_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD, ___U3CoriginalMousePositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CoriginalMousePositionU3Ek__BackingField_14() const { return ___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CoriginalMousePositionU3Ek__BackingField_14() { return &___U3CoriginalMousePositionU3Ek__BackingField_14; }
	inline void set_U3CoriginalMousePositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CoriginalMousePositionU3Ek__BackingField_14 = value;
	}
};

struct EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;

public:
	inline static int32_t get_offset_of_s_LastTypeId_0() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_LastTypeId_0)); }
	inline int64_t get_s_LastTypeId_0() const { return ___s_LastTypeId_0; }
	inline int64_t* get_address_of_s_LastTypeId_0() { return &___s_LastTypeId_0; }
	inline void set_s_LastTypeId_0(int64_t value)
	{
		___s_LastTypeId_0 = value;
	}

	inline static int32_t get_offset_of_s_NextEventId_1() { return static_cast<int32_t>(offsetof(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_StaticFields, ___s_NextEventId_1)); }
	inline uint64_t get_s_NextEventId_1() const { return ___s_NextEventId_1; }
	inline uint64_t* get_address_of_s_NextEventId_1() { return &___s_NextEventId_1; }
	inline void set_s_NextEventId_1(uint64_t value)
	{
		___s_NextEventId_1 = value;
	}
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct  StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.VisualElement
struct  VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57  : public Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B
{
public:
	// System.Boolean UnityEngine.UIElements.VisualElement::<isCompositeRoot>k__BackingField
	bool ___U3CisCompositeRootU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_7;
	// UnityEngine.Quaternion UnityEngine.UIElements.VisualElement::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_8;
	// UnityEngine.Vector3 UnityEngine.UIElements.VisualElement::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_9;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isLayoutManual>k__BackingField
	bool ___U3CisLayoutManualU3Ek__BackingField_10;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_Layout_11;
	// System.Boolean UnityEngine.UIElements.VisualElement::isBoundingBoxDirty
	bool ___isBoundingBoxDirty_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_BoundingBox_13;
	// System.Boolean UnityEngine.UIElements.VisualElement::isWorldBoundingBoxDirty
	bool ___isWorldBoundingBoxDirty_14;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_WorldBoundingBox_15;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformDirty>k__BackingField
	bool ___U3CisWorldTransformDirtyU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isWorldTransformInverseDirty>k__BackingField
	bool ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformCache_18;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_WorldTransformInverseCache_19;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_21;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_22;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * ___U3CyogaNodeU3Ek__BackingField_23;
	// UnityEngine.UIElements.StyleSheets.VisualElementStylesData UnityEngine.UIElements.VisualElement::m_Style
	VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * ___m_Style_24;
	// UnityEngine.UIElements.StyleSheets.InheritedStylesData UnityEngine.UIElements.VisualElement::m_InheritedStylesData
	InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * ___m_InheritedStylesData_25;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::<computedStyle>k__BackingField
	ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  ___U3CcomputedStyleU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_27;
	// UnityEngine.UIElements.VisualElement_Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  ___U3ChierarchyU3Ek__BackingField_28;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___m_PhysicalParent_29;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___m_Children_31;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * ___U3CelementPanelU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of_U3CisCompositeRootU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisCompositeRootU3Ek__BackingField_3)); }
	inline bool get_U3CisCompositeRootU3Ek__BackingField_3() const { return ___U3CisCompositeRootU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CisCompositeRootU3Ek__BackingField_3() { return &___U3CisCompositeRootU3Ek__BackingField_3; }
	inline void set_U3CisCompositeRootU3Ek__BackingField_3(bool value)
	{
		___U3CisCompositeRootU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_Position_7() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Position_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_7() const { return ___m_Position_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_7() { return &___m_Position_7; }
	inline void set_m_Position_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_7 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_8() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Rotation_8)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_8() const { return ___m_Rotation_8; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_8() { return &___m_Rotation_8; }
	inline void set_m_Rotation_8(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_8 = value;
	}

	inline static int32_t get_offset_of_m_Scale_9() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Scale_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_9() const { return ___m_Scale_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_9() { return &___m_Scale_9; }
	inline void set_m_Scale_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_9 = value;
	}

	inline static int32_t get_offset_of_U3CisLayoutManualU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisLayoutManualU3Ek__BackingField_10)); }
	inline bool get_U3CisLayoutManualU3Ek__BackingField_10() const { return ___U3CisLayoutManualU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CisLayoutManualU3Ek__BackingField_10() { return &___U3CisLayoutManualU3Ek__BackingField_10; }
	inline void set_U3CisLayoutManualU3Ek__BackingField_10(bool value)
	{
		___U3CisLayoutManualU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_m_Layout_11() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Layout_11)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_Layout_11() const { return ___m_Layout_11; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_Layout_11() { return &___m_Layout_11; }
	inline void set_m_Layout_11(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_Layout_11 = value;
	}

	inline static int32_t get_offset_of_isBoundingBoxDirty_12() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isBoundingBoxDirty_12)); }
	inline bool get_isBoundingBoxDirty_12() const { return ___isBoundingBoxDirty_12; }
	inline bool* get_address_of_isBoundingBoxDirty_12() { return &___isBoundingBoxDirty_12; }
	inline void set_isBoundingBoxDirty_12(bool value)
	{
		___isBoundingBoxDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_BoundingBox_13() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_BoundingBox_13)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_BoundingBox_13() const { return ___m_BoundingBox_13; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_BoundingBox_13() { return &___m_BoundingBox_13; }
	inline void set_m_BoundingBox_13(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_BoundingBox_13 = value;
	}

	inline static int32_t get_offset_of_isWorldBoundingBoxDirty_14() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___isWorldBoundingBoxDirty_14)); }
	inline bool get_isWorldBoundingBoxDirty_14() const { return ___isWorldBoundingBoxDirty_14; }
	inline bool* get_address_of_isWorldBoundingBoxDirty_14() { return &___isWorldBoundingBoxDirty_14; }
	inline void set_isWorldBoundingBoxDirty_14(bool value)
	{
		___isWorldBoundingBoxDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_WorldBoundingBox_15() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldBoundingBox_15)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_WorldBoundingBox_15() const { return ___m_WorldBoundingBox_15; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_WorldBoundingBox_15() { return &___m_WorldBoundingBox_15; }
	inline void set_m_WorldBoundingBox_15(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_WorldBoundingBox_15 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformDirtyU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformDirtyU3Ek__BackingField_16)); }
	inline bool get_U3CisWorldTransformDirtyU3Ek__BackingField_16() const { return ___U3CisWorldTransformDirtyU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisWorldTransformDirtyU3Ek__BackingField_16() { return &___U3CisWorldTransformDirtyU3Ek__BackingField_16; }
	inline void set_U3CisWorldTransformDirtyU3Ek__BackingField_16(bool value)
	{
		___U3CisWorldTransformDirtyU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17)); }
	inline bool get_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() const { return ___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17() { return &___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17; }
	inline void set_U3CisWorldTransformInverseDirtyU3Ek__BackingField_17(bool value)
	{
		___U3CisWorldTransformInverseDirtyU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformCache_18() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformCache_18)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformCache_18() const { return ___m_WorldTransformCache_18; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformCache_18() { return &___m_WorldTransformCache_18; }
	inline void set_m_WorldTransformCache_18(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformCache_18 = value;
	}

	inline static int32_t get_offset_of_m_WorldTransformInverseCache_19() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_WorldTransformInverseCache_19)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_WorldTransformInverseCache_19() const { return ___m_WorldTransformInverseCache_19; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_WorldTransformInverseCache_19() { return &___m_WorldTransformInverseCache_19; }
	inline void set_m_WorldTransformInverseCache_19(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_WorldTransformInverseCache_19 = value;
	}

	inline static int32_t get_offset_of_m_PseudoStates_21() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PseudoStates_21)); }
	inline int32_t get_m_PseudoStates_21() const { return ___m_PseudoStates_21; }
	inline int32_t* get_address_of_m_PseudoStates_21() { return &___m_PseudoStates_21; }
	inline void set_m_PseudoStates_21(int32_t value)
	{
		___m_PseudoStates_21 = value;
	}

	inline static int32_t get_offset_of_U3CpickingModeU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CpickingModeU3Ek__BackingField_22)); }
	inline int32_t get_U3CpickingModeU3Ek__BackingField_22() const { return ___U3CpickingModeU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpickingModeU3Ek__BackingField_22() { return &___U3CpickingModeU3Ek__BackingField_22; }
	inline void set_U3CpickingModeU3Ek__BackingField_22(int32_t value)
	{
		___U3CpickingModeU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CyogaNodeU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CyogaNodeU3Ek__BackingField_23)); }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * get_U3CyogaNodeU3Ek__BackingField_23() const { return ___U3CyogaNodeU3Ek__BackingField_23; }
	inline YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C ** get_address_of_U3CyogaNodeU3Ek__BackingField_23() { return &___U3CyogaNodeU3Ek__BackingField_23; }
	inline void set_U3CyogaNodeU3Ek__BackingField_23(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C * value)
	{
		___U3CyogaNodeU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyogaNodeU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Style_24() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Style_24)); }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * get_m_Style_24() const { return ___m_Style_24; }
	inline VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 ** get_address_of_m_Style_24() { return &___m_Style_24; }
	inline void set_m_Style_24(VisualElementStylesData_tA65DA46967965C0F2B590B64C424DBCE087CF867 * value)
	{
		___m_Style_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Style_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_InheritedStylesData_25() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_InheritedStylesData_25)); }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * get_m_InheritedStylesData_25() const { return ___m_InheritedStylesData_25; }
	inline InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E ** get_address_of_m_InheritedStylesData_25() { return &___m_InheritedStylesData_25; }
	inline void set_m_InheritedStylesData_25(InheritedStylesData_t03E6A5F7D9F2C86527C534C7A1A76EBAA039AE2E * value)
	{
		___m_InheritedStylesData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InheritedStylesData_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcomputedStyleU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CcomputedStyleU3Ek__BackingField_26)); }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  get_U3CcomputedStyleU3Ek__BackingField_26() const { return ___U3CcomputedStyleU3Ek__BackingField_26; }
	inline ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91 * get_address_of_U3CcomputedStyleU3Ek__BackingField_26() { return &___U3CcomputedStyleU3Ek__BackingField_26; }
	inline void set_U3CcomputedStyleU3Ek__BackingField_26(ComputedStyle_tB5824B48158F8503B606231911B3BC842BB81A91  value)
	{
		___U3CcomputedStyleU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcomputedStyleU3Ek__BackingField_26))->___m_Element_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_imguiContainerDescendantCount_27() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___imguiContainerDescendantCount_27)); }
	inline int32_t get_imguiContainerDescendantCount_27() const { return ___imguiContainerDescendantCount_27; }
	inline int32_t* get_address_of_imguiContainerDescendantCount_27() { return &___imguiContainerDescendantCount_27; }
	inline void set_imguiContainerDescendantCount_27(int32_t value)
	{
		___imguiContainerDescendantCount_27 = value;
	}

	inline static int32_t get_offset_of_U3ChierarchyU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3ChierarchyU3Ek__BackingField_28)); }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  get_U3ChierarchyU3Ek__BackingField_28() const { return ___U3ChierarchyU3Ek__BackingField_28; }
	inline Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F * get_address_of_U3ChierarchyU3Ek__BackingField_28() { return &___U3ChierarchyU3Ek__BackingField_28; }
	inline void set_U3ChierarchyU3Ek__BackingField_28(Hierarchy_tF2E587A276B2AC4CFA66BEAA0C74BD2F6711528F  value)
	{
		___U3ChierarchyU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ChierarchyU3Ek__BackingField_28))->___m_Owner_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PhysicalParent_29() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_PhysicalParent_29)); }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * get_m_PhysicalParent_29() const { return ___m_PhysicalParent_29; }
	inline VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 ** get_address_of_m_PhysicalParent_29() { return &___m_PhysicalParent_29; }
	inline void set_m_PhysicalParent_29(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * value)
	{
		___m_PhysicalParent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PhysicalParent_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_31() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___m_Children_31)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_m_Children_31() const { return ___m_Children_31; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_m_Children_31() { return &___m_Children_31; }
	inline void set_m_Children_31(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___m_Children_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelementPanelU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57, ___U3CelementPanelU3Ek__BackingField_32)); }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * get_U3CelementPanelU3Ek__BackingField_32() const { return ___U3CelementPanelU3Ek__BackingField_32; }
	inline BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 ** get_address_of_U3CelementPanelU3Ek__BackingField_32() { return &___U3CelementPanelU3Ek__BackingField_32; }
	inline void set_U3CelementPanelU3Ek__BackingField_32(BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * value)
	{
		___U3CelementPanelU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CelementPanelU3Ek__BackingField_32), (void*)value);
	}
};

struct VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___s_EmptyClassList_4;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  ___userDataPropertyKey_5;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_6;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___s_InfiniteRect_20;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * ___s_EmptyList_30;

public:
	inline static int32_t get_offset_of_s_EmptyClassList_4() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyClassList_4)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_s_EmptyClassList_4() const { return ___s_EmptyClassList_4; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_s_EmptyClassList_4() { return &___s_EmptyClassList_4; }
	inline void set_s_EmptyClassList_4(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___s_EmptyClassList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyClassList_4), (void*)value);
	}

	inline static int32_t get_offset_of_userDataPropertyKey_5() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___userDataPropertyKey_5)); }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  get_userDataPropertyKey_5() const { return ___userDataPropertyKey_5; }
	inline PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529 * get_address_of_userDataPropertyKey_5() { return &___userDataPropertyKey_5; }
	inline void set_userDataPropertyKey_5(PropertyName_t75EB843FEA2EC372093479A35C24364D2DF98529  value)
	{
		___userDataPropertyKey_5 = value;
	}

	inline static int32_t get_offset_of_disabledUssClassName_6() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___disabledUssClassName_6)); }
	inline String_t* get_disabledUssClassName_6() const { return ___disabledUssClassName_6; }
	inline String_t** get_address_of_disabledUssClassName_6() { return &___disabledUssClassName_6; }
	inline void set_disabledUssClassName_6(String_t* value)
	{
		___disabledUssClassName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabledUssClassName_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_InfiniteRect_20() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_InfiniteRect_20)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_s_InfiniteRect_20() const { return ___s_InfiniteRect_20; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_s_InfiniteRect_20() { return &___s_InfiniteRect_20; }
	inline void set_s_InfiniteRect_20(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___s_InfiniteRect_20 = value;
	}

	inline static int32_t get_offset_of_s_EmptyList_30() { return static_cast<int32_t>(offsetof(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_StaticFields, ___s_EmptyList_30)); }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * get_s_EmptyList_30() const { return ___s_EmptyList_30; }
	inline List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 ** get_address_of_s_EmptyList_30() { return &___s_EmptyList_30; }
	inline void set_s_EmptyList_30(List_1_tDEB6BDC3A4648AD90BEEB387B685DE7E030D2756 * value)
	{
		___s_EmptyList_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyList_30), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct  Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent
struct  WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 
{
public:
	// UnityEngine.XR.InteractionSubsystems.GestureId UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_Id
	GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A  ___m_Id_0;
	// UnityEngine.XR.InteractionSubsystems.GestureState UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_State
	int32_t ___m_State_1;
	// System.Int32 UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent::m_TappedCount
	int32_t ___m_TappedCount_2;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5, ___m_Id_0)); }
	inline GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A  get_m_Id_0() const { return ___m_Id_0; }
	inline GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(GestureId_t5F6D895F2437C080DF1062ED41FB551D39EFB77A  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_State_1() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5, ___m_State_1)); }
	inline int32_t get_m_State_1() const { return ___m_State_1; }
	inline int32_t* get_address_of_m_State_1() { return &___m_State_1; }
	inline void set_m_State_1(int32_t value)
	{
		___m_State_1 = value;
	}

	inline static int32_t get_offset_of_m_TappedCount_2() { return static_cast<int32_t>(offsetof(WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5, ___m_TappedCount_2)); }
	inline int32_t get_m_TappedCount_2() const { return ___m_TappedCount_2; }
	inline int32_t* get_address_of_m_TappedCount_2() { return &___m_TappedCount_2; }
	inline void set_m_TappedCount_2(int32_t value)
	{
		___m_TappedCount_2 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>
struct  Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1, ___m_Array_0)); }
	inline NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct  UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.UIElements.EventBase`1<System.Object>
struct  EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916  : public EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD
{
public:
	// System.Int32 UnityEngine.UIElements.EventBase`1::m_RefCount
	int32_t ___m_RefCount_17;

public:
	inline static int32_t get_offset_of_m_RefCount_17() { return static_cast<int32_t>(offsetof(EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916, ___m_RefCount_17)); }
	inline int32_t get_m_RefCount_17() const { return ___m_RefCount_17; }
	inline int32_t* get_address_of_m_RefCount_17() { return &___m_RefCount_17; }
	inline void set_m_RefCount_17(int32_t value)
	{
		___m_RefCount_17 = value;
	}
};

struct EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields
{
public:
	// System.Int64 UnityEngine.UIElements.EventBase`1::s_TypeId
	int64_t ___s_TypeId_15;
	// UnityEngine.UIElements.ObjectPool`1<T> UnityEngine.UIElements.EventBase`1::s_Pool
	ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * ___s_Pool_16;

public:
	inline static int32_t get_offset_of_s_TypeId_15() { return static_cast<int32_t>(offsetof(EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields, ___s_TypeId_15)); }
	inline int64_t get_s_TypeId_15() const { return ___s_TypeId_15; }
	inline int64_t* get_address_of_s_TypeId_15() { return &___s_TypeId_15; }
	inline void set_s_TypeId_15(int64_t value)
	{
		___s_TypeId_15 = value;
	}

	inline static int32_t get_offset_of_s_Pool_16() { return static_cast<int32_t>(offsetof(EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields, ___s_Pool_16)); }
	inline ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * get_s_Pool_16() const { return ___s_Pool_16; }
	inline ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E ** get_address_of_s_Pool_16() { return &___s_Pool_16; }
	inline void set_s_Pool_16(ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * value)
	{
		___s_Pool_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_16), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>
struct  ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF  : public Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.UIElements.CommandEventBase`1<System.Object>
struct  CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// System.String UnityEngine.UIElements.CommandEventBase`1::m_CommandName
	String_t* ___m_CommandName_18;

public:
	inline static int32_t get_offset_of_m_CommandName_18() { return static_cast<int32_t>(offsetof(CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2, ___m_CommandName_18)); }
	inline String_t* get_m_CommandName_18() const { return ___m_CommandName_18; }
	inline String_t** get_address_of_m_CommandName_18() { return &___m_CommandName_18; }
	inline void set_m_CommandName_18(String_t* value)
	{
		___m_CommandName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommandName_18), (void*)value);
	}
};


// UnityEngine.UIElements.FocusEventBase`1<System.Object>
struct  FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1::<relatedTarget>k__BackingField
	Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * ___U3CrelatedTargetU3Ek__BackingField_18;
	// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusEventBase`1::<direction>k__BackingField
	FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___U3CdirectionU3Ek__BackingField_19;
	// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1::<focusController>k__BackingField
	FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * ___U3CfocusControllerU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CrelatedTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24, ___U3CrelatedTargetU3Ek__BackingField_18)); }
	inline Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * get_U3CrelatedTargetU3Ek__BackingField_18() const { return ___U3CrelatedTargetU3Ek__BackingField_18; }
	inline Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B ** get_address_of_U3CrelatedTargetU3Ek__BackingField_18() { return &___U3CrelatedTargetU3Ek__BackingField_18; }
	inline void set_U3CrelatedTargetU3Ek__BackingField_18(Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * value)
	{
		___U3CrelatedTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrelatedTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdirectionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24, ___U3CdirectionU3Ek__BackingField_19)); }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * get_U3CdirectionU3Ek__BackingField_19() const { return ___U3CdirectionU3Ek__BackingField_19; }
	inline FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 ** get_address_of_U3CdirectionU3Ek__BackingField_19() { return &___U3CdirectionU3Ek__BackingField_19; }
	inline void set_U3CdirectionU3Ek__BackingField_19(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * value)
	{
		___U3CdirectionU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdirectionU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfocusControllerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24, ___U3CfocusControllerU3Ek__BackingField_20)); }
	inline FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * get_U3CfocusControllerU3Ek__BackingField_20() const { return ___U3CfocusControllerU3Ek__BackingField_20; }
	inline FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 ** get_address_of_U3CfocusControllerU3Ek__BackingField_20() { return &___U3CfocusControllerU3Ek__BackingField_20; }
	inline void set_U3CfocusControllerU3Ek__BackingField_20(FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * value)
	{
		___U3CfocusControllerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfocusControllerU3Ek__BackingField_20), (void*)value);
	}
};


// UnityEngine.UIElements.KeyboardEventBase`1<System.Object>
struct  KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.KeyboardEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// System.Char UnityEngine.UIElements.KeyboardEventBase`1::<character>k__BackingField
	Il2CppChar ___U3CcharacterU3Ek__BackingField_19;
	// UnityEngine.KeyCode UnityEngine.UIElements.KeyboardEventBase`1::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CcharacterU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D, ___U3CcharacterU3Ek__BackingField_19)); }
	inline Il2CppChar get_U3CcharacterU3Ek__BackingField_19() const { return ___U3CcharacterU3Ek__BackingField_19; }
	inline Il2CppChar* get_address_of_U3CcharacterU3Ek__BackingField_19() { return &___U3CcharacterU3Ek__BackingField_19; }
	inline void set_U3CcharacterU3Ek__BackingField_19(Il2CppChar value)
	{
		___U3CcharacterU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D, ___U3CkeyCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_20() const { return ___U3CkeyCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_20() { return &___U3CkeyCodeU3Ek__BackingField_20; }
	inline void set_U3CkeyCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_20 = value;
	}
};


// UnityEngine.UIElements.MouseEventBase`1<System.Object>
struct  MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmousePositionU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<localMousePosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3ClocalMousePositionU3Ek__BackingField_20;
	// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1::<mouseDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CmouseDeltaU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_22;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Int32 UnityEngine.UIElements.MouseEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_24;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25;
	// System.Boolean UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.recomputeTopElementUnderMouse>k__BackingField
	bool ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26;
	// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1::<UnityEngine.UIElements.IMouseEventInternal.sourcePointerEvent>k__BackingField
	RuntimeObject* ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27;

public:
	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CmodifiersU3Ek__BackingField_18)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_18() const { return ___U3CmodifiersU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_18() { return &___U3CmodifiersU3Ek__BackingField_18; }
	inline void set_U3CmodifiersU3Ek__BackingField_18(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CmousePositionU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CmousePositionU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmousePositionU3Ek__BackingField_19() const { return ___U3CmousePositionU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmousePositionU3Ek__BackingField_19() { return &___U3CmousePositionU3Ek__BackingField_19; }
	inline void set_U3CmousePositionU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmousePositionU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3ClocalMousePositionU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3ClocalMousePositionU3Ek__BackingField_20)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3ClocalMousePositionU3Ek__BackingField_20() const { return ___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3ClocalMousePositionU3Ek__BackingField_20() { return &___U3ClocalMousePositionU3Ek__BackingField_20; }
	inline void set_U3ClocalMousePositionU3Ek__BackingField_20(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3ClocalMousePositionU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CmouseDeltaU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CmouseDeltaU3Ek__BackingField_21)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CmouseDeltaU3Ek__BackingField_21() const { return ___U3CmouseDeltaU3Ek__BackingField_21; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CmouseDeltaU3Ek__BackingField_21() { return &___U3CmouseDeltaU3Ek__BackingField_21; }
	inline void set_U3CmouseDeltaU3Ek__BackingField_21(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CmouseDeltaU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CclickCountU3Ek__BackingField_22)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_22() const { return ___U3CclickCountU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_22() { return &___U3CclickCountU3Ek__BackingField_22; }
	inline void set_U3CclickCountU3Ek__BackingField_22(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CpressedButtonsU3Ek__BackingField_24)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_24() const { return ___U3CpressedButtonsU3Ek__BackingField_24; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_24() { return &___U3CpressedButtonsU3Ek__BackingField_24; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_24(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26)); }
	inline bool get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(bool value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B, ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27)); }
	inline RuntimeObject* get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() const { return ___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline RuntimeObject** get_address_of_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27() { return &___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27; }
	inline void set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(RuntimeObject* value)
	{
		___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27), (void*)value);
	}
};


// UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>
struct  PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.PointerCaptureEventBase`1::<relatedTarget>k__BackingField
	RuntimeObject* ___U3CrelatedTargetU3Ek__BackingField_18;
	// System.Int32 UnityEngine.UIElements.PointerCaptureEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CrelatedTargetU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE, ___U3CrelatedTargetU3Ek__BackingField_18)); }
	inline RuntimeObject* get_U3CrelatedTargetU3Ek__BackingField_18() const { return ___U3CrelatedTargetU3Ek__BackingField_18; }
	inline RuntimeObject** get_address_of_U3CrelatedTargetU3Ek__BackingField_18() { return &___U3CrelatedTargetU3Ek__BackingField_18; }
	inline void set_U3CrelatedTargetU3Ek__BackingField_18(RuntimeObject* value)
	{
		___U3CrelatedTargetU3Ek__BackingField_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrelatedTargetU3Ek__BackingField_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE, ___U3CpointerIdU3Ek__BackingField_19)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_19() const { return ___U3CpointerIdU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_19() { return &___U3CpointerIdU3Ek__BackingField_19; }
	inline void set_U3CpointerIdU3Ek__BackingField_19(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_19 = value;
	}
};


// UnityEngine.UIElements.PointerEventBase`1<System.Object>
struct  PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634  : public EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916
{
public:
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_18;
	// System.String UnityEngine.UIElements.PointerEventBase`1::<pointerType>k__BackingField
	String_t* ___U3CpointerTypeU3Ek__BackingField_19;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<isPrimary>k__BackingField
	bool ___U3CisPrimaryU3Ek__BackingField_20;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_21;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<pressedButtons>k__BackingField
	int32_t ___U3CpressedButtonsU3Ek__BackingField_22;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<position>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CpositionU3Ek__BackingField_23;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<localPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3ClocalPositionU3Ek__BackingField_24;
	// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1::<deltaPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CdeltaPositionU3Ek__BackingField_25;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<deltaTime>k__BackingField
	float ___U3CdeltaTimeU3Ek__BackingField_26;
	// System.Int32 UnityEngine.UIElements.PointerEventBase`1::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_27;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_28;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_29;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_30;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_31;
	// System.Single UnityEngine.UIElements.PointerEventBase`1::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_32;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radius>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CradiusU3Ek__BackingField_33;
	// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1::<radiusVariance>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CradiusVarianceU3Ek__BackingField_34;
	// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1::<modifiers>k__BackingField
	int32_t ___U3CmodifiersU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.triggeredByOS>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.PointerEventBase`1::<UnityEngine.UIElements.IPointerEventInternal.recomputeTopElementUnderPointer>k__BackingField
	bool ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37;

public:
	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpointerIdU3Ek__BackingField_18)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_18() const { return ___U3CpointerIdU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_18() { return &___U3CpointerIdU3Ek__BackingField_18; }
	inline void set_U3CpointerIdU3Ek__BackingField_18(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CpointerTypeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpointerTypeU3Ek__BackingField_19)); }
	inline String_t* get_U3CpointerTypeU3Ek__BackingField_19() const { return ___U3CpointerTypeU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CpointerTypeU3Ek__BackingField_19() { return &___U3CpointerTypeU3Ek__BackingField_19; }
	inline void set_U3CpointerTypeU3Ek__BackingField_19(String_t* value)
	{
		___U3CpointerTypeU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerTypeU3Ek__BackingField_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisPrimaryU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CisPrimaryU3Ek__BackingField_20)); }
	inline bool get_U3CisPrimaryU3Ek__BackingField_20() const { return ___U3CisPrimaryU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CisPrimaryU3Ek__BackingField_20() { return &___U3CisPrimaryU3Ek__BackingField_20; }
	inline void set_U3CisPrimaryU3Ek__BackingField_20(bool value)
	{
		___U3CisPrimaryU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CbuttonU3Ek__BackingField_21)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_21() const { return ___U3CbuttonU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_21() { return &___U3CbuttonU3Ek__BackingField_21; }
	inline void set_U3CbuttonU3Ek__BackingField_21(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CpressedButtonsU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpressedButtonsU3Ek__BackingField_22)); }
	inline int32_t get_U3CpressedButtonsU3Ek__BackingField_22() const { return ___U3CpressedButtonsU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CpressedButtonsU3Ek__BackingField_22() { return &___U3CpressedButtonsU3Ek__BackingField_22; }
	inline void set_U3CpressedButtonsU3Ek__BackingField_22(int32_t value)
	{
		___U3CpressedButtonsU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpositionU3Ek__BackingField_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CpositionU3Ek__BackingField_23() const { return ___U3CpositionU3Ek__BackingField_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CpositionU3Ek__BackingField_23() { return &___U3CpositionU3Ek__BackingField_23; }
	inline void set_U3CpositionU3Ek__BackingField_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CpositionU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3ClocalPositionU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3ClocalPositionU3Ek__BackingField_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3ClocalPositionU3Ek__BackingField_24() const { return ___U3ClocalPositionU3Ek__BackingField_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3ClocalPositionU3Ek__BackingField_24() { return &___U3ClocalPositionU3Ek__BackingField_24; }
	inline void set_U3ClocalPositionU3Ek__BackingField_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3ClocalPositionU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaPositionU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CdeltaPositionU3Ek__BackingField_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CdeltaPositionU3Ek__BackingField_25() const { return ___U3CdeltaPositionU3Ek__BackingField_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CdeltaPositionU3Ek__BackingField_25() { return &___U3CdeltaPositionU3Ek__BackingField_25; }
	inline void set_U3CdeltaPositionU3Ek__BackingField_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CdeltaPositionU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaTimeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CdeltaTimeU3Ek__BackingField_26)); }
	inline float get_U3CdeltaTimeU3Ek__BackingField_26() const { return ___U3CdeltaTimeU3Ek__BackingField_26; }
	inline float* get_address_of_U3CdeltaTimeU3Ek__BackingField_26() { return &___U3CdeltaTimeU3Ek__BackingField_26; }
	inline void set_U3CdeltaTimeU3Ek__BackingField_26(float value)
	{
		___U3CdeltaTimeU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CclickCountU3Ek__BackingField_27)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_27() const { return ___U3CclickCountU3Ek__BackingField_27; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_27() { return &___U3CclickCountU3Ek__BackingField_27; }
	inline void set_U3CclickCountU3Ek__BackingField_27(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_27 = value;
	}

	inline static int32_t get_offset_of_U3CpressureU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CpressureU3Ek__BackingField_28)); }
	inline float get_U3CpressureU3Ek__BackingField_28() const { return ___U3CpressureU3Ek__BackingField_28; }
	inline float* get_address_of_U3CpressureU3Ek__BackingField_28() { return &___U3CpressureU3Ek__BackingField_28; }
	inline void set_U3CpressureU3Ek__BackingField_28(float value)
	{
		___U3CpressureU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CtangentialPressureU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CtangentialPressureU3Ek__BackingField_29)); }
	inline float get_U3CtangentialPressureU3Ek__BackingField_29() const { return ___U3CtangentialPressureU3Ek__BackingField_29; }
	inline float* get_address_of_U3CtangentialPressureU3Ek__BackingField_29() { return &___U3CtangentialPressureU3Ek__BackingField_29; }
	inline void set_U3CtangentialPressureU3Ek__BackingField_29(float value)
	{
		___U3CtangentialPressureU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CaltitudeAngleU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CaltitudeAngleU3Ek__BackingField_30)); }
	inline float get_U3CaltitudeAngleU3Ek__BackingField_30() const { return ___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline float* get_address_of_U3CaltitudeAngleU3Ek__BackingField_30() { return &___U3CaltitudeAngleU3Ek__BackingField_30; }
	inline void set_U3CaltitudeAngleU3Ek__BackingField_30(float value)
	{
		___U3CaltitudeAngleU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CazimuthAngleU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CazimuthAngleU3Ek__BackingField_31)); }
	inline float get_U3CazimuthAngleU3Ek__BackingField_31() const { return ___U3CazimuthAngleU3Ek__BackingField_31; }
	inline float* get_address_of_U3CazimuthAngleU3Ek__BackingField_31() { return &___U3CazimuthAngleU3Ek__BackingField_31; }
	inline void set_U3CazimuthAngleU3Ek__BackingField_31(float value)
	{
		___U3CazimuthAngleU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CtwistU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CtwistU3Ek__BackingField_32)); }
	inline float get_U3CtwistU3Ek__BackingField_32() const { return ___U3CtwistU3Ek__BackingField_32; }
	inline float* get_address_of_U3CtwistU3Ek__BackingField_32() { return &___U3CtwistU3Ek__BackingField_32; }
	inline void set_U3CtwistU3Ek__BackingField_32(float value)
	{
		___U3CtwistU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CradiusU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CradiusU3Ek__BackingField_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CradiusU3Ek__BackingField_33() const { return ___U3CradiusU3Ek__BackingField_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CradiusU3Ek__BackingField_33() { return &___U3CradiusU3Ek__BackingField_33; }
	inline void set_U3CradiusU3Ek__BackingField_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CradiusU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CradiusVarianceU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CradiusVarianceU3Ek__BackingField_34)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CradiusVarianceU3Ek__BackingField_34() const { return ___U3CradiusVarianceU3Ek__BackingField_34; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CradiusVarianceU3Ek__BackingField_34() { return &___U3CradiusVarianceU3Ek__BackingField_34; }
	inline void set_U3CradiusVarianceU3Ek__BackingField_34(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CradiusVarianceU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CmodifiersU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CmodifiersU3Ek__BackingField_35)); }
	inline int32_t get_U3CmodifiersU3Ek__BackingField_35() const { return ___U3CmodifiersU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CmodifiersU3Ek__BackingField_35() { return &___U3CmodifiersU3Ek__BackingField_35; }
	inline void set_U3CmodifiersU3Ek__BackingField_35(int32_t value)
	{
		___U3CmodifiersU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634, ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37)); }
	inline bool get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() const { return ___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline bool* get_address_of_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37() { return &___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37; }
	inline void set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(bool value)
	{
		___U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37 = value;
	}
};


// UnityEngine.UIElements.DragAndDropEventBase`1<System.Object>
struct  DragAndDropEventBase_1_t51BA6B73A83CFDD23CEE8C4C4F5F832642AF0844  : public MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B
{
public:

public:
};


// UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>
struct  MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B  : public PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE
{
public:

public:
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFAEF988C219FC58DB0004195FCB5732E54133F47_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m52396EACFD3638F85BA134FE8F0FDBAC878D2183_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE105B7384CA6FC1AAE61C31D9703AB121FF44256_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::CopyFrom(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m66D05716CF561EF94FCCCBBE2C15986B993ACAF0_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___array0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD2FEB4FE4F916D24FED72B6B2DAAE52404D22B28_gshared (Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1 * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m274DA4FFB6AE9D62A4A4092DF715B035729062A9_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_mC81D4E807A3375C0E01E06EA40D0FED0A859F4A8_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mA9D8BFFFBB0BF6C70B3301B708C7A80CF63DBE78_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m137BE1D2503A59C49413649D693236BFE199261A_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBA3667DFD2FA91C71C118ECA43EB22503D4FC2C8_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_mC053D3A9DF2FBD4DCB31D2864F4996E9B2DA255A_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___array0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB91F5DE32D3C6A7A04BCEA59856B8053D39CFC25_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___added0, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___updated1, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___removed2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m3C3CCFC32F691D9F21E078E4BEAD728AE3029E59_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE495C4DC64D58DD30BE5B9CDF6D1299D4789536C_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_gshared_inline (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared_inline (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m11D50A1B0112E014A1969C333D086B626BF7285D_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Object>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_gshared_inline (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared_inline (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m5011B8646BC95EE909D6997CE4800D40AA1791BB_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC2BC8B405224919267153BACB8CF26F526375C5E_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::set_name(System.String)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mE206247EA9AE1ED6D323D3CF0D6E475ECAF3F1D6_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method);

// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m288BC0ABEB3E1A7B941FB28033D391E661887545 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFAEF988C219FC58DB0004195FCB5732E54133F47 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFAEF988C219FC58DB0004195FCB5732E54133F47_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m43BC7C9BE1437A70DD9A236418B0906CD3617331 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m52396EACFD3638F85BA134FE8F0FDBAC878D2183 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m52396EACFD3638F85BA134FE8F0FDBAC878D2183_gshared)(__this, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Deallocate()
inline void NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
inline void NativeArray_1_Dispose_mE105B7384CA6FC1AAE61C31D9703AB121FF44256 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_Dispose_mE105B7384CA6FC1AAE61C31D9703AB121FF44256_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::CopyFrom(Unity.Collections.NativeArray`1<T>)
inline void NativeArray_1_CopyFrom_m66D05716CF561EF94FCCCBBE2C15986B993ACAF0 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C , const RuntimeMethod*))NativeArray_1_CopyFrom_m66D05716CF561EF94FCCCBBE2C15986B993ACAF0_gshared)(__this, ___array0, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(Unity.Collections.NativeArray`1<T>&)
inline void Enumerator__ctor_mD2FEB4FE4F916D24FED72B6B2DAAE52404D22B28 (Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1 * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * ___array0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1 *, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))Enumerator__ctor_mD2FEB4FE4F916D24FED72B6B2DAAE52404D22B28_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetEnumerator()
inline Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m274DA4FFB6AE9D62A4A4092DF715B035729062A9 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m274DA4FFB6AE9D62A4A4092DF715B035729062A9_gshared)(__this, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::System.Collections.IEnumerable.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_mC81D4E807A3375C0E01E06EA40D0FED0A859F4A8 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_System_Collections_IEnumerable_GetEnumerator_mC81D4E807A3375C0E01E06EA40D0FED0A859F4A8_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Equals(Unity.Collections.NativeArray`1<T>)
inline bool NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C , const RuntimeMethod*))NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Equals(System.Object)
inline bool NativeArray_1_Equals_mA9D8BFFFBB0BF6C70B3301B708C7A80CF63DBE78 (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, RuntimeObject *, const RuntimeMethod*))NativeArray_1_Equals_mA9D8BFFFBB0BF6C70B3301B708C7A80CF63DBE78_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_m137BE1D2503A59C49413649D693236BFE199261A (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))NativeArray_1_GetHashCode_m137BE1D2503A59C49413649D693236BFE199261A_gshared)(__this, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346 (Type_t * ___type0, RuntimeObject * ___firstArgument1, MethodInfo_t * ___method2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091 (Delegate_t * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.Internal_SubsystemDescriptors::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Internal_SubsystemDescriptors_Create_mEB503EBC87BAE5D491C9FCD0C9D177881020EC99 (intptr_t ___descriptorPtr0, const RuntimeMethod* method);
// UnityEngine.IntegratedSubsystem UnityEngine.Internal_SubsystemInstances::Internal_GetInstanceByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A3E2B194F743DA1505586132038FA64DF8FB407 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_m1D87F86FF3A30C3ECCD95D1797802B34B9194039 (IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_mDBF83DF7F1F0B6DB1C64DD2C585E8A0CC7EE0EF1 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// UnityEngine.Subsystem UnityEngine.Internal_SubsystemInstances::Internal_FindStandaloneSubsystemInstanceGivenDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * Internal_SubsystemInstances_Internal_FindStandaloneSubsystemInstanceGivenDescriptor_mD7E452AE994DB1342208053B8DEF0BC057A09F86 (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * ___descriptor0, const RuntimeMethod* method);
// System.Type UnityEngine.SubsystemDescriptor::get_subsystemImplementationType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_mCF20A5F2E10F34F73853FEC4D3893B49EB49C166_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_AddStandaloneSubsystem(UnityEngine.Subsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_m93A60FA6B3E9A106B424BB6051B2A553363BF051 (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * ___inst0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor__ctor_m36DDE5770481719052DCBDC48DC4494D886DE747 (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem__ctor_m00FD26014DE966433A871B78ED54389E8DC59E94 (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_propagation(UnityEngine.UIElements.EventBase/EventPropagation)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_imguiEvent(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase__ctor_m7F4C2BE69598419344BB6C2FAC18252234F50CAD (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_Init_m025BEC823C26718B5ED6CADD395D591677CB39A5 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_pooled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_pooled_m3AC9AF90D2F4BF55A9EC0499B9197A0916CAC664 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.UIElements.EventBase::get_eventId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t EventBase_get_eventId_mAECD1254234BF118F42559AC0B717A64E7F27517_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::SetTriggerEventId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_SetTriggerEventId_m2A0B5984F003A2AFB57502FF8DD3A42AF75C08DA (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, uint64_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_pooled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_pooled_m9D5F816B4A1B445B7F31DF5F7814F60400217BFE (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.UIElements.EventBase::RegisterEventType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_RegisterEventType_mD202AAEEC9F80263CAF503390454A1C6681B6133 (const RuntimeMethod* method);
// UnityEngine.UIElements.FocusChangeDirection UnityEngine.UIElements.FocusChangeDirection::get_unspecified()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8_inline (const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_target(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Char UnityEngine.Event::get_character()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Event_get_character_m78B46D412357B71233F3D41842928A19B290915C (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_currentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_mB3B3ED90CE63BFFE6E789E0BC5FA5B904BDEF581 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_currentTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_currentTarget_mBA8C39A26A9E8B67E1003496F77C00BA48FA1B90 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.UIElements.VisualElementExtensions::WorldToLocal(UnityEngine.UIElements.VisualElement,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8 (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * ___ele0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___p1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::PreDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreDispatch_m242A7911A4139A5BF3BDAF7952AE67DF0DBC779A (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___panel0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerDeviceState::SavePointerPosition(System.Int32,UnityEngine.Vector2,UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_SavePointerPosition_mFFAA7F8C884E231C7D950676565CDE8A9BAF2390 (int32_t ___pointerId0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position1, RuntimeObject* ___panel2, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_processed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processed_mE00DE5372190A0AD6BEB2C693658C5EA5F1B465C (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E (bool ___condition0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.BaseVisualElementPanel::CommitElementUnderPointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_CommitElementUnderPointers_mFBDB91138145CF30ADB72FE74511C7E8BD3374F3 (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_isPropagationStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isPropagationStopped_m56D6DBFE28CF05F8CBEF3BB29D7C7D4A1787A71C (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::StopPropagation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mC1D00F7DCE3D90B7CC5D768F68883C9338B6D270 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_isImmediatePropagationStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isImmediatePropagationStopped_mF363E1F51EEA0C802349EDB884105C4172D3F80B (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::StopImmediatePropagation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopImmediatePropagation_m147F448DA22C5009B11D9C4048749E8AAAEA5BFB (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.EventBase::get_isDefaultPrevented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isDefaultPrevented_m52E82FE3B3DDB4B122E61D26EEFB4B24759C428D (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::PreventDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreventDefault_m16F3C26388BE9ADBEC55AF54DDF998C168DBE90A (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::PostDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PostDispatch_m4182DABA2D5674FC82F67DC57219840840065644 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, RuntimeObject* ___panel0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Event::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.PointerDeviceState::GetPressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerDeviceState_GetPressedButtons_m92D8D7B9F9B7A2251807764D45D133CE96E7E8C2 (int32_t ___pointerId0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Event::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_clickCount_m8C296AD53AA9F14D43DB3682227DD343B9499F21 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_target_m9CDDE53A2B09975CF0DDAA6F194425149BCDC3E5 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// UnityEngine.Event UnityEngine.UIElements.EventBase::get_imguiEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * EventBase_get_imguiEvent_m93CE1DC74AF5C7C85CFE01C066E89893528FC6A4 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * EventBase_get_path_mD750217799E419C5F8B38236E9592E54811A70BF (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_path(UnityEngine.UIElements.PropagationPaths)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_path_mE08193E7E12ACEFF2C0B6D03B3A2F3E0CC108C3F (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.EventBase::set_propagateToIMGUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_propagateToIMGUI_m4B5E6109B619AF7761D310984BEB6C2210E05DD2 (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_rawType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.PointerType UnityEngine.Event::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_pointerType_m1D8031C5A8BFBAC21BAAB396199CDFCD3AAC42CA (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerDeviceState::PressButton(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_PressButton_mD0A791144315B3CFEB74A02FECBEDFFD24A4A9CE (int32_t ___pointerId0, int32_t ___buttonId1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerDeviceState::ReleaseButton(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_ReleaseButton_m841973E840794947778B7057D4DD315556F7A6A5 (int32_t ___pointerId0, int32_t ___buttonId1, const RuntimeMethod* method);
// System.Single UnityEngine.Event::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Event_get_pressure_m2F2732871C11B870A4DE6CF3056C495252B07024 (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * __this, const RuntimeMethod* method);
// System.String UnityEngine.UIElements.PointerType::GetPointerType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PointerType_GetPointerType_mFC253D2B16A977A73555E236FBD45A36F271D9A1 (int32_t ___pointerId0, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.PointerCaptureHelper::ProcessPointerCapture(UnityEngine.UIElements.IPanel,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureHelper_ProcessPointerCapture_m09CC6875E7044A577341CFA82E5E665DA7434EC6 (RuntimeObject* ___panel0, int32_t ___pointerId1, const RuntimeMethod* method);
// System.Boolean UnityEngine.UIElements.PointerCaptureHelper::ShouldSendCompatibilityMouseEvents(UnityEngine.UIElements.IPanel,UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerCaptureHelper_ShouldSendCompatibilityMouseEvents_m7719A65D3C28756BA1F509CAD2362E2B7A05DD83 (RuntimeObject* ___panel0, RuntimeObject* ___evt1, const RuntimeMethod* method);
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
inline int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
inline int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
inline bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
inline bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, RuntimeObject *, const RuntimeMethod*))StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared)(__this, ___obj0, method);
}
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
inline int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared)(__this, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
inline String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, const RuntimeMethod*))StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared)(__this, method);
}
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mBA3667DFD2FA91C71C118ECA43EB22503D4FC2C8 (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mBA3667DFD2FA91C71C118ECA43EB22503D4FC2C8_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
inline void NativeArray_1_CopyFrom_mC053D3A9DF2FBD4DCB31D2864F4996E9B2DA255A (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , const RuntimeMethod*))NativeArray_1_CopyFrom_mC053D3A9DF2FBD4DCB31D2864F4996E9B2DA255A_gshared)(__this, ___array0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB91F5DE32D3C6A7A04BCEA59856B8053D39CFC25 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB91F5DE32D3C6A7A04BCEA59856B8053D39CFC25_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
inline void NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_gshared)(__this, ___array0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>)
inline void TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951 (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___added0, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___updated1, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___removed2, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 , NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951_gshared)(__this, ___added0, ___updated1, ___removed2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void NativeArray_1_Dispose_m3C3CCFC32F691D9F21E078E4BEAD728AE3029E59 (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *, const RuntimeMethod*))NativeArray_1_Dispose_m3C3CCFC32F691D9F21E078E4BEAD728AE3029E59_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mE495C4DC64D58DD30BE5B9CDF6D1299D4789536C (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_Dispose_mE495C4DC64D58DD30BE5B9CDF6D1299D4789536C_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
inline void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631 (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, const RuntimeMethod*))TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_inline (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_inline (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m11D50A1B0112E014A1969C333D086B626BF7285D (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m11D50A1B0112E014A1969C333D086B626BF7285D_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1 (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *, InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0 (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_gshared)(__this, ___obj0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Object>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513 (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9 (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Object>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531 (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_inline (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_inline (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m5011B8646BC95EE909D6997CE4800D40AA1791BB (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m5011B8646BC95EE909D6997CE4800D40AA1791BB_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36 (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *, InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 , const RuntimeMethod*))InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541 (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Single>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8 (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mC2BC8B405224919267153BACB8CF26F526375C5E (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mC2BC8B405224919267153BACB8CF26F526375C5E_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 , const RuntimeMethod*))InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1 (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_gshared)(__this, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
inline String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::set_name(System.String)
inline void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mE206247EA9AE1ED6D323D3CF0D6E475ECAF3F1D6 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mE206247EA9AE1ED6D323D3CF0D6E475ECAF3F1D6_gshared)(__this, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
inline bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 , const RuntimeMethod*))InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_gshared)(__this, ___other0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(System.Object)
inline bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746 (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, RuntimeObject *, const RuntimeMethod*))InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_gshared)(__this, ___obj0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::GetHashCode()
inline int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *, const RuntimeMethod*))InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFAEF988C219FC58DB0004195FCB5732E54133F47_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___length0;
		int32_t L_1 = ___allocator1;
		((  void (*) (int32_t, int32_t, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_0, (int32_t)L_1, (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int32_t L_2 = ___options2;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		void* L_4 = (void*)__this->get_m_Buffer_0();
		int32_t L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this)->___m_Length_1);
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		UnsafeUtility_MemClear_m288BC0ABEB3E1A7B941FB28033D391E661887545((void*)(void*)L_4, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_5))), (int64_t)(((int64_t)((int64_t)L_6))))), /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1__ctor_mFAEF988C219FC58DB0004195FCB5732E54133F47_AdjustorThunk (RuntimeObject * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	NativeArray_1__ctor_mFAEF988C219FC58DB0004195FCB5732E54133F47(_thisAdjusted, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Allocate(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Allocate_m99407ADB8E6A541CAA928EF38C8CC078DF77F79C_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * ___array2, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int32_t L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_1 = ___length0;
		V_0 = (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_0))), (int64_t)(((int64_t)((int64_t)L_1)))));
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * L_2 = ___array2;
		il2cpp_codegen_initobj(L_2, sizeof(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C ));
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * L_3 = ___array2;
		int64_t L_4 = V_0;
		int32_t L_5 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		int32_t L_6 = ___allocator1;
		void* L_7 = UnsafeUtility_Malloc_m43BC7C9BE1437A70DD9A236418B0906CD3617331((int64_t)L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		L_3->set_m_Buffer_0((void*)L_7);
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * L_8 = ___array2;
		int32_t L_9 = ___length0;
		L_8->set_m_Length_1(L_9);
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * L_10 = ___array2;
		int32_t L_11 = ___allocator1;
		L_10->set_m_AllocatorLabel_2(L_11);
		return;
	}
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mA8FDD68E6F2E1D032DB45BF289A7398EB2D704C2_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Length_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Length_mA8FDD68E6F2E1D032DB45BF289A7398EB2D704C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_LENGTH((_thisAdjusted)->___m_Length_1);
}
// T Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  NativeArray_1_get_Item_mE01EF6113929271B698240B92B7E330D4CC590CA_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  L_2 = ((  WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  (*) (void*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 )L_2;
		goto IL_0010;
	}

IL_0010:
	{
		WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  L_3 = V_0;
		return (WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 )L_3;
	}
}
IL2CPP_EXTERN_C  WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  NativeArray_1_get_Item_mE01EF6113929271B698240B92B7E330D4CC590CA_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_ITEM(WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 , (_thisAdjusted)->___m_Buffer_0, ___index0);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_mF1AD8D2579F085CF2DBC9D7E631053F01ED5757F_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, int32_t ___index0, WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  ___value1, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  L_2 = ___value1;
		((  void (*) (void*, int32_t, WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_set_Item_mF1AD8D2579F085CF2DBC9D7E631053F01ED5757F_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5  ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	IL2CPP_NATIVEARRAY_SET_ITEM(WindowsMRTappedGestureEvent_t94A77D3F22FD6D63EF989DAF03A41C66B0833BF5 , (_thisAdjusted)->___m_Buffer_0, ___index0, ___value1);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m52396EACFD3638F85BA134FE8F0FDBAC878D2183_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)(((uintptr_t)0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_get_IsCreated_m52396EACFD3638F85BA134FE8F0FDBAC878D2183_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_get_IsCreated_m52396EACFD3638F85BA134FE8F0FDBAC878D2183(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_AllocatorLabel_2();
		UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set_m_Buffer_0((void*)(((uintptr_t)0)));
		__this->set_m_Length_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE105B7384CA6FC1AAE61C31D9703AB121FF44256_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_Deallocate_mE255DEF1113DE7F17C44B1F69A249FDCA0CBDBE2((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Dispose_mE105B7384CA6FC1AAE61C31D9703AB121FF44256_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	NativeArray_1_Dispose_mE105B7384CA6FC1AAE61C31D9703AB121FF44256(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::CopyFrom(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m66D05716CF561EF94FCCCBBE2C15986B993ACAF0_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___array0, const RuntimeMethod* method)
{
	{
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_0 = ___array0;
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_1 = (*(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this);
		((  void (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C , NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C )L_0, (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_CopyFrom_m66D05716CF561EF94FCCCBBE2C15986B993ACAF0_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___array0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	NativeArray_1_CopyFrom_m66D05716CF561EF94FCCCBBE2C15986B993ACAF0(_thisAdjusted, ___array0, method);
}
// Unity.Collections.NativeArray`1_Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD2FEB4FE4F916D24FED72B6B2DAAE52404D22B28((&L_0), (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1 )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  L_1 = V_0;
		return (Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1 )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m274DA4FFB6AE9D62A4A4092DF715B035729062A9_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD2FEB4FE4F916D24FED72B6B2DAAE52404D22B28((&L_0), (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m274DA4FFB6AE9D62A4A4092DF715B035729062A9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m274DA4FFB6AE9D62A4A4092DF715B035729062A9(_thisAdjusted, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_mC81D4E807A3375C0E01E06EA40D0FED0A859F4A8_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  L_0 = NativeArray_1_GetEnumerator_m1B2B90C18003E3B8827A7A12AB88BFD029C6492A((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Enumerator_t563433E254E384361D5278487AF2ACDF0F1BBCE1  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 9), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_mC81D4E807A3375C0E01E06EA40D0FED0A859F4A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_System_Collections_IEnumerable_GetEnumerator_mC81D4E807A3375C0E01E06EA40D0FED0A859F4A8(_thisAdjusted, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_1 = ___other0;
		void* L_2 = (void*)L_1.get_m_Buffer_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (int32_t)__this->get_m_Length_1();
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_4 = ___other0;
		int32_t L_5 = (int32_t)L_4.get_m_Length_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA(_thisAdjusted, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mA9D8BFFFBB0BF6C70B3301B708C7A80CF63DBE78_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = NativeArray_1_Equals_mF962530635AD8929729E6E9F53BD305937AC1FFA((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)__this, (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C )((*(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 12))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mA9D8BFFFBB0BF6C70B3301B708C7A80CF63DBE78_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_Equals_mA9D8BFFFBB0BF6C70B3301B708C7A80CF63DBE78(_thisAdjusted, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m137BE1D2503A59C49413649D693236BFE199261A_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_Length_1();
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(intptr_t)L_0))), (int32_t)((int32_t)397)))^(int32_t)L_1));
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_GetHashCode_m137BE1D2503A59C49413649D693236BFE199261A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C * _thisAdjusted = reinterpret_cast<NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *>(__this + _offset);
	return NativeArray_1_GetHashCode_m137BE1D2503A59C49413649D693236BFE199261A(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m7D0513284511A424F7852CA03C186075BBE496AC_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___src0, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___dst1, const RuntimeMethod* method)
{
	{
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_0 = ___src0;
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_1 = ___dst1;
		int32_t L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C *)(&___src0))->___m_Length_1);
		((  void (*) (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C , int32_t, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C )L_0, (int32_t)0, (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C )L_1, (int32_t)0, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		return;
	}
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.WindowsMR.WindowsMRTappedGestureEvent>::Copy(Unity.Collections.NativeArray`1<T>,System.Int32,Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m09D4DAFDAF3CD3E9253BAEE4AE9D5655C5FD16BE_gshared (NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___src0, int32_t ___srcIndex1, NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  ___dst2, int32_t ___dstIndex3, int32_t ___length4, const RuntimeMethod* method)
{
	{
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_0 = ___dst2;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		int32_t L_2 = ___dstIndex3;
		int32_t L_3 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NativeArray_1_t164E8F5FEC6B0E128EE15AF42465AD9E64C0351C  L_4 = ___src0;
		void* L_5 = (void*)L_4.get_m_Buffer_0();
		int32_t L_6 = ___srcIndex1;
		int32_t L_7 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		int32_t L_8 = ___length4;
		int32_t L_9 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)((void*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)L_3)))), (void*)(void*)((void*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_7)))), (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_9))))), /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mA3C18A22B57202EE83921ED0909FCB6CD4154409_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, bool ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m5B12C225C3222632C784AB1B9E4D72AA44FF16D0_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mD178E9486AB5CE271209EDFFB7B585BCFC3540F3_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m356112807416B358ED661EBB9CF67BCCE0B19394_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, int32_t ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mE6AF058DE940B099197112058811BCCDE75A9ACC_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m11A4EA149C8447CBE9342AE0794B7ECC733C6319_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mB15077A11BD14A961B3E106B55FA77B468269505_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, RuntimeObject * ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2B24B497363472EE321923536ED3F9EC155764D7_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m00E6F009BC9A2005BBF11A5E905CB25FEA4BE367_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m208307DC945B843624A47886B3AB95A974528DB6_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m02CB2404196A61986E0CBD8DADC2A635CC4FADE1_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mCE251DA79E23FF9DA0D0FD7FD9939488748907A5_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m4E82F43967A7055293BFFED4E5F61243811A64FD_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_0 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_1 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_2 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0;
	}

IL_0007:
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = V_0;
		V_1 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** L_5 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)__this->get_address_of_Delegate_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = V_2;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *>((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)L_5, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_6, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7);
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_8;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9) == ((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m7CDAE49CF684DAF1D43E52D254A87D0D212DD3D8_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_0 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_1 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_2 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0;
	}

IL_0007:
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = V_0;
		V_1 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** L_5 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)__this->get_address_of_Delegate_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = V_2;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *>((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)L_5, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_6, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7);
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_8;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9) == ((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m6B758D360877DD24606999DB8F603F4CA2EC6F80_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		NullCheck((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9);
		((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9, (bool)((*(bool*)((bool*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m604D33CCBE0C77896F73A6055B71E0621C933B2F_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, bool ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_4 = ___args00;
		NullCheck((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_3);
		((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m1E75C7EC325D570FDA089492841E90F9268C23B9_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE3BB48BDA767C8D30DCBBDF05E6FEA3BAEDE250_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_0 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_1 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_2 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_1 = V_0;
		V_1 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** L_5 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = V_2;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *>((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)L_5, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_6, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7);
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_8;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9) == ((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mF1D0E0E38759A51DECAAF3161E33308F93DED24F_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_0 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_1 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_2 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_1 = V_0;
		V_1 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** L_5 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = V_2;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *>((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)L_5, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_6, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7);
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_8;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9) == ((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m5FFF6B89AD1D4AE06939C3B82377B4AF048C1817_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9);
		((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m738E6C677B8DD40E3E708C81B8354EA85AEFFB04_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, int32_t ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		int32_t L_4 = ___args00;
		NullCheck((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_3);
		((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m61994A78233EE8233DBAA7B6912E18829A09B150_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m092F0A272D937E03EB590E19DC2F2B788961018F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_2 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_2;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_5, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m2ABA630C73B024EB3A47100C48B91D1BE75C117C_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_2 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_2;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_5, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m476D3C83264B8980782F15E2A538B679279F61A1_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD81223A0EAE1E7988803B8F92DB9090ECFA259FE_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		RuntimeObject * L_4 = ___args00;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_3);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_mB3AD5A37531368D7FC5F37AD22993EE25951B71F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE30AB74153DFEDBDAAC58B591F3E428C728AE0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_2 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_2;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_5, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mC3043D0ED54DD94A81FDC076B97C12CC0D9A16F5_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_2 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_2;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_5, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m67D765DB693A73CCBB66BD79C6A05E92B006B19E_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9);
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9, (float)((*(float*)((float*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m02605F267CE1A72199776BF4E08D4C81A08DF499_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, float ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		float L_4 = ___args00;
		NullCheck((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_3);
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m5F8CC01C8996F78D450562A0A4B128DA2D4E3A0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_9 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		bool L_10 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_9, /*hidden argument*/NULL);
		V_1 = (bool)L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_12 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ___args0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		RuntimeObject * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___args0;
		NullCheck(L_16);
		int32_t L_17 = 1;
		RuntimeObject * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_12);
		((  void (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_12, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0056:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m26B7D50B1D4203B1E9539D5BE727050009CDBEA5_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_3 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___args0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_12 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		bool L_13 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_12, /*hidden argument*/NULL);
		V_1 = (bool)L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_15 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___args0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		RuntimeObject * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ___args0;
		NullCheck(L_19);
		int32_t L_20 = 1;
		RuntimeObject * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___args0;
		NullCheck(L_22);
		int32_t L_23 = 2;
		RuntimeObject * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_15);
		((  void (*) (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_15, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_21, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0067:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_mC8983BEEB7D91A851B167DA159F31647EF0FD7CE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_3 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___args0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = ___args0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		RuntimeObject * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_15 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		bool L_16 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_15, /*hidden argument*/NULL);
		V_1 = (bool)L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_18 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ___args0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		RuntimeObject * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___args0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		RuntimeObject * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = ___args0;
		NullCheck(L_25);
		int32_t L_26 = 2;
		RuntimeObject * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = ___args0;
		NullCheck(L_28);
		int32_t L_29 = 3;
		RuntimeObject * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_18);
		((  void (*) (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_18, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_21, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_27, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_30, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0078:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m31A9DD32912CC3F597F67C5B123F65D8D83BCB55_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_0 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_3 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2E86E0D0DEBECD002A246E5E15032AD5C31D573B_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m6BDDE2C02C9B1B969AF9C8E3283A99EDF725308E_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03E7697F347F98D3FD8952EC0CE1A714D1FA20BB_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFA3B154991DCD05A05EEF0F8A4ADD01D48BF5F74_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m57B06346DBA8E9878C2A3589AB5F4AACDF0BD1BD_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mC40753D8C3D37080677F4956B214A840380FF011_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2C1F34094D739A035851500EBC9355B92734EAC8_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m0E6F26B70A39427E3FF824D0C1A2B4A05DC93781_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m8A8457E16443B452AC53C84F32402BAC6B93E6FF_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFC7714F2FF67E4A6A886734EF21DB0CEC8D92083_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m23BC5C707027B6C49AE29FB21A4F9F9F0CA72648_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03AE0A9995BF8D246D2317542428D220C55160B9_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m35B0A0067C115007E10FBD8E008AE5A04F766BC7_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m28278C6E83173B3BC3CBC240F14DD94D721E78C2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1B23318369E0A45239A06ACB2AEF27BB6AF8B3A2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mF4DB369856F884CA526A897CB6E86FE396844206_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m06DA8061B2E6984DD80B43D6080FC181B3231267_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mCF4D420D2E1AE5C6A9CBDA25C21702141DF45B40_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4C1A8B33A480934E69D745B3A99F88E761BF16E2_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m09EBA3BBF14887A401E08C9C0360EF0BD037C918_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mADF341B796508D58BEDF95CC8C087F2827F5105D_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4D471FEA8177D598ED108C5B2A9A35687D439D09_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mDC07A3AA1306CA33C495D2954233DBB9B3BB6A04_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m4E5A5335E63C942B335D047296080EB8DA73FB99_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_mAF3A961DD4A745EB47F2C7056216F11449C74F82_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mD65DD6F2A7160759B11B9E9402E42889B0308B7C_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m4CC353FB62BF2996DDB0BDE4B517D4CBAB1388B2_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_mF0A7FADCA696D28F879DBE8BB21E0107020310CB_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m40F664442966F777B243BE41660DF4D97FCF9A24_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_mD03F869374C55A6F3391C0F2E80DF4DEE5EA1C8A_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m91D7864FF201914C04AEC6B34DD6E7C62C367FF8_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, ___arg33, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, ___arg33, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_mCED3B2E5714E6AB57D5B05030DBE0851E6970061_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mAA51C4DFA09F01F0AF79FD6A3419925FEE1015EB_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8802189BD39CB9C93447909FF521F9AF7EC2307B_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m0E8B5D5884056FA9248EB6AF8D3243F903735B92_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m8187D8D7A87F912D707BCB8913E01970F7D8F453_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_1 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_24 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_24, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_28 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_28);
		int32_t L_29 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_28, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m959B9FFD3D5FEE00DC93EDA9BE5924BDA8217541_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m1EE511D98201F0DE08C472BFB04DAC8E846243BE_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_1 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_6);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_22 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_26 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26);
		int32_t L_27 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m146206128006F3071AEC91A73E3DDFDC34A53F2D_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return (MethodInfo_t *)L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return (MethodInfo_t *)L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
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
// UnityEngine.ISubsystem UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::CreateImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegratedSubsystemDescriptor_1_CreateImpl_m3EA74C92EB71BB77910FD716E818F4D9E73E7CFE_gshared (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return (RuntimeObject*)L_1;
	}
}
// TSubsystem UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystemDescriptor_1_Create_m353DF937E50FE54F1022D32EC09A78FF01798EB9_gshared (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntegratedSubsystemDescriptor_1_Create_m353DF937E50FE54F1022D32EC09A78FF01798EB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	{
		intptr_t L_0 = (intptr_t)((IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA *)__this)->get_m_Ptr_0();
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		intptr_t L_1 = Internal_SubsystemDescriptors_Create_mEB503EBC87BAE5D491C9FCD0C9D177881020EC99((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_3 = Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A3E2B194F743DA1505586132038FA64DF8FB407((intptr_t)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		RuntimeObject * L_4 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck(L_6);
		((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)L_6)->set_m_subsystemDescriptor_1(__this);
	}

IL_0034:
	{
		RuntimeObject * L_7 = V_1;
		V_3 = (RuntimeObject *)L_7;
		goto IL_0038;
	}

IL_0038:
	{
		RuntimeObject * L_8 = V_3;
		return (RuntimeObject *)L_8;
	}
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m3E14A32CB73A1C21C69CC9860EE2AE95F841876D_gshared (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA *)__this);
		IntegratedSubsystemDescriptor__ctor_m1D87F86FF3A30C3ECCD95D1797802B34B9194039((IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA *)__this, /*hidden argument*/NULL);
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
// TSubsystemDescriptor UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_m76E7A7BF5D1BEF9A9DF9844A88C082D3F388DEEE_gshared (IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)__this)->get_m_subsystemDescriptor_1();
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject * L_1 = V_0;
		return (RuntimeObject *)L_1;
	}
}
// System.Void UnityEngine.IntegratedSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_m4F49ABCD91074575D743F3AA68170017E2A29B37_gshared (IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)__this);
		IntegratedSubsystem__ctor_mDBF83DF7F1F0B6DB1C64DD2C585E8A0CC7EE0EF1((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)__this, /*hidden argument*/NULL);
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
// UnityEngine.ISubsystem UnityEngine.SubsystemDescriptor`1<System.Object>::CreateImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemDescriptor_1_CreateImpl_m5D4EA463067F196DA9D23D5A8AF8D35F02277458_gshared (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return (RuntimeObject*)L_1;
	}
}
// TSubsystem UnityEngine.SubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemDescriptor_1_Create_mF01290ECD014B1B0709F1763F81444F034F27611_gshared (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemDescriptor_1_Create_mF01290ECD014B1B0709F1763F81444F034F27611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * L_0 = Internal_SubsystemInstances_Internal_FindStandaloneSubsystemInstanceGivenDescriptor_mD7E452AE994DB1342208053B8DEF0BC057A09F86((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		RuntimeObject * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		V_2 = (RuntimeObject *)L_3;
		goto IL_0057;
	}

IL_0024:
	{
		NullCheck((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this);
		Type_t * L_4 = SubsystemDescriptor_get_subsystemImplementationType_mCF20A5F2E10F34F73853FEC4D3893B49EB49C166_inline((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_5 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_4, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		RuntimeObject * L_6 = V_3;
		NullCheck(L_6);
		((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_6)->set_m_subsystemDescriptor_0(__this);
		RuntimeObject * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_m93A60FA6B3E9A106B424BB6051B2A553363BF051((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8 = V_3;
		V_2 = (RuntimeObject *)L_8;
		goto IL_0057;
	}

IL_0057:
	{
		RuntimeObject * L_9 = V_2;
		return (RuntimeObject *)L_9;
	}
}
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m0DC45BE61DA2407CF2CF78FA57CEF4CFE24A7749_gshared (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this);
		SubsystemDescriptor__ctor_m36DDE5770481719052DCBDC48DC4494D886DE747((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_m7F707019C5D6E2EDA2EC7BFC45B31681B449CE5C_gshared (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		Subsystem__ctor_m00FD26014DE966433A871B78ED54389E8DC59E94((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::set_commandName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_set_commandName_mA644E54F2B1E2F5265F9A56961B895E617CAAB4C_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_CommandName_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_Init_mC53A7B53D22A698CB05784D5244C0E7964250323_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this);
		((  void (*) (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1_LocalInit_mFEF536CA6FE8B12E5FF45231B8F85B933BBE6767_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this);
		((  void (*) (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this, (String_t*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// T UnityEngine.UIElements.CommandEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CommandEventBase_1_GetPooled_m0BF68730B0CAC2781C8D3755EC42C1428227EF0B_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = V_0;
		V_1 = (RuntimeObject *)L_3;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_4 = V_1;
		return (RuntimeObject *)L_4;
	}
}
// System.Void UnityEngine.UIElements.CommandEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandEventBase_1__ctor_m89F9F94189AF956517AF1C329123B5E420A33B67_gshared (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this);
		((  void (*) (CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((CommandEventBase_1_tD9131273EDAAE2C742A51CF55D896C9C9608DBE2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Void UnityEngine.UIElements.DragAndDropEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DragAndDropEventBase_1__ctor_m5B911051D0091E035D14BDB13F7DE91FCDF20027_gshared (DragAndDropEventBase_1_t51BA6B73A83CFDD23CEE8C4C4F5F832642AF0844 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_mEA6B57DEA212E685AF6A9751E25B844523693764_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBase_1__ctor_mEA6B57DEA212E685AF6A9751E25B844523693764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var);
		EventBase__ctor_m7F4C2BE69598419344BB6C2FAC18252234F50CAD((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		__this->set_m_RefCount_17(0);
		return;
	}
}
// System.Int64 UnityEngine.UIElements.EventBase`1<System.Object>::TypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_1_TypeId_m2C5F51E0B64681DED8FAC6C2E8E6B422F5B62AF7_gshared (const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		int64_t L_0 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_TypeId_15();
		V_0 = (int64_t)L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int64_t L_1 = V_0;
		return (int64_t)L_1;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_mE11F413B0B7AC707C9945CB95C7046B1EB3DBE53_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBase_1_Init_mE11F413B0B7AC707C9945CB95C7046B1EB3DBE53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_Init_m025BEC823C26718B5ED6CADD395D591677CB39A5((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		int32_t L_0 = (int32_t)__this->get_m_RefCount_17();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708((RuntimeObject *)_stringLiteral4E73D0FB4BEE99484EF3F5331A156AE1760807C2, /*hidden argument*/NULL);
		__this->set_m_RefCount_17(0);
	}

IL_0029:
	{
		return;
	}
}
// T UnityEngine.UIElements.EventBase`1<System.Object>::GetPooled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventBase_1_GetPooled_m8F0318E5CB97E139D94EEB68C5A066809EE1BC4E_gshared (const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * L_0 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Pool_16();
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_2);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.UIElements.EventBase::Init() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_2);
		RuntimeObject * L_3 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		EventBase_set_pooled_m3AC9AF90D2F4BF55A9EC0499B9197A0916CAC664((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3, (bool)1, /*hidden argument*/NULL);
		RuntimeObject * L_4 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void UnityEngine.UIElements.EventBase::Acquire() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4);
		RuntimeObject * L_5 = V_0;
		V_1 = (RuntimeObject *)L_5;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject * L_6 = V_1;
		return (RuntimeObject *)L_6;
	}
}
// T UnityEngine.UIElements.EventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.EventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EventBase_1_GetPooled_m55CFD01114A646D879EC5DB221E3BDDFEDE821C9_gshared (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * ___e0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = (RuntimeObject *)L_0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_1 = ___e0;
		V_1 = (bool)((!(((RuntimeObject*)(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_4 = ___e0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4);
		uint64_t L_5 = EventBase_get_eventId_mAECD1254234BF118F42559AC0B717A64E7F27517_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_4, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		EventBase_SetTriggerEventId_m2A0B5984F003A2AFB57502FF8DD3A42AF75C08DA((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3, (uint64_t)L_5, /*hidden argument*/NULL);
	}

IL_0023:
	{
		RuntimeObject * L_6 = V_0;
		V_2 = (RuntimeObject *)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject * L_7 = V_2;
		return (RuntimeObject *)L_7;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::ReleasePooled(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_ReleasePooled_mC6E54820754CC7354311DEEB607F61B9BC022FB4_gshared (RuntimeObject * ___evt0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___evt0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_0);
		bool L_1 = EventBase_get_pooled_m9D5F816B4A1B445B7F31DF5F7814F60400217BFE((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject * L_3 = ___evt0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.UIElements.EventBase::Init() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * L_4 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_s_Pool_16();
		RuntimeObject * L_5 = ___evt0;
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_4);
		((  void (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)L_4, (RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_6 = ___evt0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_6);
		EventBase_set_pooled_m3AC9AF90D2F4BF55A9EC0499B9197A0916CAC664((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Acquire_m0A678CA778559003C03F0BEB3E6B7207924620CE_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_RefCount_17();
		__this->set_m_RefCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		return;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Dispose_mE2258391914EE0218D46650DD28F23486F032C30_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_RefCount_17();
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_1;
		__this->set_m_RefCount_17(L_1);
		int32_t L_2 = V_1;
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
	}

IL_0027:
	{
		return;
	}
}
// System.Int64 UnityEngine.UIElements.EventBase`1<System.Object>::get_eventTypeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t EventBase_1_get_eventTypeId_m4B239F1331806D7F3D6767E979DBDCBFA52ED16E_gshared (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 * __this, const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		int64_t L_0 = ((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)))->get_s_TypeId_15();
		return (int64_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.EventBase`1<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__cctor_mB936C2021EEEDB142183DEA0757DA68CAC2868D4_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EventBase_1__cctor_mB936C2021EEEDB142183DEA0757DA68CAC2868D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var);
		int64_t L_0 = EventBase_RegisterEventType_mD202AAEEC9F80263CAF503390454A1C6681B6133(/*hidden argument*/NULL);
		((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_TypeId_15(L_0);
		ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * L_1 = (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		((  void (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)(L_1, (int32_t)((int32_t)100), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->set_s_Pool_16(L_1);
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
// UnityEngine.UIElements.Focusable UnityEngine.UIElements.FocusEventBase`1<System.Object>::get_relatedTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * FocusEventBase_1_get_relatedTarget_mE376B79C73A53AA4B94C2CF634C878B4AA6F9DD3_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * L_0 = (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)__this->get_U3CrelatedTargetU3Ek__BackingField_18();
		return (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)L_0;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::set_relatedTarget(UnityEngine.UIElements.Focusable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_set_relatedTarget_m378332F61E6C4752714CC8ED31DA7CC6BF487F52_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * ___value0, const RuntimeMethod* method)
{
	{
		Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * L_0 = ___value0;
		__this->set_U3CrelatedTargetU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::set_direction(UnityEngine.UIElements.FocusChangeDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_set_direction_m5A2AA61816F5E2CF9CDAF8F61DC527AC954F2232_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___value0, const RuntimeMethod* method)
{
	{
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = ___value0;
		__this->set_U3CdirectionU3Ek__BackingField_19(L_0);
		return;
	}
}
// UnityEngine.UIElements.FocusController UnityEngine.UIElements.FocusEventBase`1<System.Object>::get_focusController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * FocusEventBase_1_get_focusController_mAC3F3DA95156622C81E9868B94BC16A59F2E1543_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_0 = (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)__this->get_U3CfocusControllerU3Ek__BackingField_20();
		return (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)L_0;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::set_focusController(UnityEngine.UIElements.FocusController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_set_focusController_m33FF9B6EC9CA46A350CBC901D97F9EB9FFA7CABA_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * ___value0, const RuntimeMethod* method)
{
	{
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_0 = ___value0;
		__this->set_U3CfocusControllerU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_Init_m4D79427ECB7C2D823BA60B96BA7BCE5E5AA4D3AE_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1_LocalInit_mA55F0B1FC448FD0E1FB76315A1106748462AFB48_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FocusEventBase_1_LocalInit_mA55F0B1FC448FD0E1FB76315A1106748462AFB48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)2, /*hidden argument*/NULL);
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8_inline(/*hidden argument*/NULL);
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// T UnityEngine.UIElements.FocusEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IEventHandler,UnityEngine.UIElements.Focusable,UnityEngine.UIElements.FocusChangeDirection,UnityEngine.UIElements.FocusController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FocusEventBase_1_GetPooled_mABE8F690BBD303622673F0A32AB34D8FE0D2D2A1_gshared (RuntimeObject* ___target0, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * ___relatedTarget1, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * ___direction2, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * ___focusController3, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		RuntimeObject* L_2 = ___target0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = V_0;
		Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B * L_4 = ___relatedTarget1;
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_3);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_3, (Focusable_tE75872B8E11B244036F83AB8FFBB20F782F19C6B *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_5 = V_0;
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_6 = ___direction2;
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_5);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_5, (FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_7 = V_0;
		FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 * L_8 = ___focusController3;
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_7);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)L_7, (FocusController_tC0776BBE194E3451B9BCF65824A5582D36837231 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_9 = V_0;
		V_1 = (RuntimeObject *)L_9;
		goto IL_003f;
	}

IL_003f:
	{
		RuntimeObject * L_10 = V_1;
		return (RuntimeObject *)L_10;
	}
}
// System.Void UnityEngine.UIElements.FocusEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FocusEventBase_1__ctor_m5CD561645C8EDF7607173F761133B650C76A78A7_gshared (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this);
		((  void (*) (FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((FocusEventBase_1_t504BABFD37C85BA094808CC3876487BE6F017D24 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_set_modifiers_mCE5D9024CF9E80E028F85EE77E5DF6951A4968A1_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::set_character(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_set_character_mBB9A4B26D9FEACDE01F556334609D9D7A63175D9_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___value0;
		__this->set_U3CcharacterU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::set_keyCode(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_set_keyCode_m1B111F5E731DFE90DD80F096248C82BF2D260DAC_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CkeyCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_Init_m8E1B3DEBA27865AC8DD8C7A0408D9762D9626F76_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1_LocalInit_mAD63F1A55673098C083E4FBE253DFEC4AB81AC34_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, (Il2CppChar)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// T UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::GetPooled(System.Char,UnityEngine.KeyCode,UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyboardEventBase_1_GetPooled_m57DD6B4DF247914FB9645934DD9C8F562E553E13_gshared (Il2CppChar ___c0, int32_t ___keyCode1, int32_t ___modifiers2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		int32_t L_2 = ___modifiers2;
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_1);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_3 = V_0;
		Il2CppChar L_4 = ___c0;
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_3);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_3, (Il2CppChar)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_5 = V_0;
		int32_t L_6 = ___keyCode1;
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_8 = V_1;
		return (RuntimeObject *)L_8;
	}
}
// T UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KeyboardEventBase_1_GetPooled_m8177C19643AB86483793F1A7177E3F4F2AF16894_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_2, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_6 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6);
		int32_t L_7 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_5, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_8 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9);
		Il2CppChar L_10 = Event_get_character_m78B46D412357B71233F3D41842928A19B290915C((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_8);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, Il2CppChar, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_8, (Il2CppChar)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_11 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_12 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12);
		int32_t L_13 = Event_get_keyCode_m8B0AAD347861E322E91D2B7320A99E04D39575CF((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12, /*hidden argument*/NULL);
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_11);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)L_11, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	}

IL_0054:
	{
		RuntimeObject * L_14 = V_0;
		V_2 = (RuntimeObject *)L_14;
		goto IL_0058;
	}

IL_0058:
	{
		RuntimeObject * L_15 = V_2;
		return (RuntimeObject *)L_15;
	}
}
// System.Void UnityEngine.UIElements.KeyboardEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardEventBase_1__ctor_mEA6055D213DFB3411F31FFA1BF8A5E50FB789427_gshared (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this);
		((  void (*) (KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((KeyboardEventBase_1_tEEC7E9BAA103CBCCC46FC5F65050C94E2C3EEE0D *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Void UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1_Init_mD2CB59EB0A270A081DF2722E426EE44BF3E2921B_gshared (MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseCaptureEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1__ctor_m5E602B8878650580C1DD47AABD37E1666AA2E5B1_gshared (MouseCaptureEventBase_1_t97B90265ADE987386D82B12AC9199D69B473E90B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// UnityEngine.EventModifiers UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_m7E6CF432A1F924C09D526356AF1AC7B33B0F7588_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CmodifiersU3Ek__BackingField_18();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_mCD85F1F0BEE2E7BBE6A250DA0F0A9F6778450C42_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_18(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MouseEventBase_1_get_mousePosition_m9570170BA1B0BE54B9DF4720BA5C13D7B6971C62_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CmousePositionU3Ek__BackingField_19();
		return (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_mousePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_mC6F2F40270A207466D8E2505248B1973E4FA7625_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CmousePositionU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_localMousePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_m783EBBD1F1E1A0E822C5E605DBF48C8E3D18EA32_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3ClocalMousePositionU3Ek__BackingField_20(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_mouseDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MouseEventBase_1_get_mouseDelta_mAF74A2769B7D3504DE71EAC205D10DCADC38D290_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CmouseDeltaU3Ek__BackingField_21();
		return (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_mouseDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mE3EDE178688525D65109DE69C5001867CB067A7E_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CmouseDeltaU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_clickCount_m6577932AADBADB63D0ECA0F92FF0B062AA6CD77B_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CclickCountU3Ek__BackingField_22();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_clickCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_m8BE309BA5E7F6659975BBA3201E56B0426DC83C1_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_22(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_button_m5D788F3F00F702B1C8FE4ADB6FCE67D9EDE8D421_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CbuttonU3Ek__BackingField_23();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_button(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mC682E89939DF04647C05E82A2118667AB35C1323_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CbuttonU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_pressedButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_pressedButtons_m2338F317200AD74683E3572E2814021E74028CCC_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CpressedButtonsU3Ek__BackingField_24();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_pressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_mB6BB32B7A46EE351E6C4A147BFBAF340AC07EF50_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressedButtonsU3Ek__BackingField_24(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS_mC6D8D115E8688F3DAFCF3F5C26E1ADE2750C37C6_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS_mB77CCDFA79ABF9E74092C9E7EA40570AA9A06D64_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IMouseEventInternal_triggeredByOSU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.get_recomputeTopElementUnderMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse_m6293B11C240EAFA7C62CC596CB2F08F6DCE6901F_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.set_recomputeTopElementUnderMouse(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse_m3DBC5AF64FD2A041855BFE8776E650F0054B7206_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouseU3Ek__BackingField_26(L_0);
		return;
	}
}
// UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent_m88FA6B678F14D843BFC7DE57BC49A84F89E9C96C_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27();
		return (RuntimeObject*)L_0;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent(UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent_m7AF4865BA1A449716CF1D5E1D56DC18556653416_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IMouseEventInternal_sourcePointerEventU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_m2F72C210148733AE9A7E8B96E8583F0121743FD9_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_mBF4B84CC615154CDCFE5AE36CC219A1B11B328BD_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_LocalInit_mBF4B84CC615154CDCFE5AE36CC219A1B11B328BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)0);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)1);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_sourcePointerEvent(UnityEngine.UIElements.IPointerEvent) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (RuntimeObject*)NULL);
		return;
	}
}
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.MouseEventBase`1<System.Object>::get_currentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_currentTarget_m7ED5BE0A76315A2FAADD0755BCB36F9D92332417_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_0 = EventBase_get_currentTarget_mB3B3ED90CE63BFFE6E789E0BC5FA5B904BDEF581((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return (RuntimeObject*)L_1;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::set_currentTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_currentTarget_m42FF4A10DB34A8045633A8705EE777F05C642D0D_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_set_currentTarget_m42FF4A10DB34A8045633A8705EE777F05C642D0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_currentTarget_mBA8C39A26A9E8B67E1003496F77C00BA48FA1B90((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_currentTarget() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		V_0 = (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)IsInst((RuntimeObject*)L_1, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var));
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = V_0;
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_4, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		goto IL_0043;
	}

IL_0034:
	{
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_0043:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::PreDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PreDispatch_m16BFF76FF4B664C16716B880046A7F96F23C748F_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_PreDispatch_m16BFF76FF4B664C16716B880046A7F96F23C748F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PreDispatch_m242A7911A4139A5BF3BDAF7952AE67DF0DBC779A((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)__this);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IMouseEventInternal::get_triggeredByOS() */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ((  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		RuntimeObject* L_5 = ___panel0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_SavePointerPosition_mFFAA7F8C884E231C7D950676565CDE8A9BAF2390((int32_t)L_3, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_4, (RuntimeObject*)L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::PostDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PostDispatch_m3518F3E76E5AA9E9CA4C39AB8267080C9791A0F8_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_PostDispatch_m3518F3E76E5AA9E9CA4C39AB8267080C9791A0F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B3_0 = NULL;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B2_0 = NULL;
	{
		NullCheck((RuntimeObject*)__this);
		RuntimeObject* L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* UnityEngine.UIElements.IPointerEvent UnityEngine.UIElements.IMouseEventInternal::get_sourcePointerEvent() */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		V_0 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_0, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_3 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3);
		bool L_4 = EventBase_get_processed_mE00DE5372190A0AD6BEB2C693658C5EA5F1B465C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)L_4, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___panel0;
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_6 = (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)IsInst((RuntimeObject*)L_5, BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90_il2cpp_TypeInfo_var));
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_002e;
		}
	}
	{
		goto IL_0034;
	}

IL_002e:
	{
		NullCheck((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B3_0);
		BaseVisualElementPanel_CommitElementUnderPointers_mFBDB91138145CF30ADB72FE74511C7E8BD3374F3((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B3_0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		bool L_7 = EventBase_get_isPropagationStopped_m56D6DBFE28CF05F8CBEF3BB29D7C7D4A1787A71C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_2 = (bool)L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_9 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_9);
		EventBase_StopPropagation_mC1D00F7DCE3D90B7CC5D768F68883C9338B6D270((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_9, /*hidden argument*/NULL);
	}

IL_0047:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		bool L_10 = EventBase_get_isImmediatePropagationStopped_mF363E1F51EEA0C802349EDB884105C4172D3F80B((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_3 = (bool)L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005a;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_12 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_12);
		EventBase_StopImmediatePropagation_m147F448DA22C5009B11D9C4048749E8AAAEA5BFB((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_12, /*hidden argument*/NULL);
	}

IL_005a:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		bool L_13 = EventBase_get_isDefaultPrevented_m52E82FE3B3DDB4B122E61D26EEFB4B24759C428D((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_4 = (bool)L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_15 = V_0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_15);
		EventBase_PreventDefault_m16F3C26388BE9ADBEC55AF54DDF998C168DBE90A((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_15, /*hidden argument*/NULL);
	}

IL_006f:
	{
	}

IL_0070:
	{
		RuntimeObject* L_16 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PostDispatch_m4182DABA2D5674FC82F67DC57219840840065644((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_16, /*hidden argument*/NULL);
		return;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m29CA64EDCA0FFC341A3C573F41A2B17A6D3D2939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_2 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_2, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject * L_5 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_6 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6);
		int32_t L_7 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_6, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_8 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_8);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_8, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_11 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_12 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_12, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_11);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_11, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_14 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_15 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_14);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_14, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_17 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_18 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_18);
		int32_t L_19 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_18, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_17);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_17, (int32_t)L_19, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_21 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		int32_t L_22 = PointerDeviceState_GetPressedButtons_m92D8D7B9F9B7A2251807764D45D133CE96E7E8C2((int32_t)L_21, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_20);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_20, (int32_t)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_23 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_24 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_24);
		int32_t L_25 = Event_get_clickCount_m8C296AD53AA9F14D43DB3682227DD343B9499F21((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_24, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23, (int32_t)L_25, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_26 = V_0;
		NullCheck((RuntimeObject*)L_26);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_26, (bool)1);
		RuntimeObject * L_27 = V_0;
		NullCheck((RuntimeObject*)L_27);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_27, (bool)1);
	}

IL_00bd:
	{
		RuntimeObject * L_28 = V_0;
		V_2 = (RuntimeObject *)L_28;
		goto IL_00c1;
	}

IL_00c1:
	{
		RuntimeObject * L_29 = V_2;
		return (RuntimeObject *)L_29;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IMouseEvent,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m5377CC1E2A161709DCDBD815E72B0734D4A1E46E_gshared (RuntimeObject* ___triggerEvent0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mousePosition1, bool ___recomputeTopElementUnderMouse2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m5377CC1E2A161709DCDBD815E72B0734D4A1E46E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject* L_0 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___triggerEvent0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		V_2 = (RuntimeObject *)L_3;
		goto IL_0044;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___mousePosition1;
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_5, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_7 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = ___mousePosition1;
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_9 = V_0;
		bool L_10 = ___recomputeTopElementUnderMouse2;
		NullCheck((RuntimeObject*)L_9);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (bool)L_10);
		RuntimeObject * L_11 = V_0;
		V_2 = (RuntimeObject *)L_11;
		goto IL_0044;
	}

IL_0044:
	{
		RuntimeObject * L_12 = V_2;
		return (RuntimeObject *)L_12;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IMouseEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m43C244589B6072E2C06216F336E06154899E142C_gshared (RuntimeObject* ___triggerEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m43C244589B6072E2C06216F336E06154899E142C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	{
		RuntimeObject* L_0 = ___triggerEvent0;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_0, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject* L_2 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeObject * L_4 = V_0;
		RuntimeObject* L_5 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* UnityEngine.EventModifiers UnityEngine.UIElements.IMouseEvent::get_modifiers() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_4);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_4, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_7 = V_0;
		RuntimeObject* L_8 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(1 /* UnityEngine.Vector2 UnityEngine.UIElements.IMouseEvent::get_mousePosition() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_7, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_10 = V_0;
		RuntimeObject* L_11 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(1 /* UnityEngine.Vector2 UnityEngine.UIElements.IMouseEvent::get_mousePosition() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_10);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_10, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_13 = V_0;
		RuntimeObject* L_14 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_14);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(2 /* UnityEngine.Vector2 UnityEngine.UIElements.IMouseEvent::get_mouseDelta() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_13);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_13, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_16 = V_0;
		RuntimeObject* L_17 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.IMouseEvent::get_button() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_19 = V_0;
		RuntimeObject* L_20 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_20);
		int32_t L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.UIElements.IMouseEvent::get_pressedButtons() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19, (int32_t)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_22 = V_0;
		RuntimeObject* L_23 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_23);
		int32_t L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IMouseEvent::get_clickCount() */, IMouseEvent_t46F36E91C0689C43AEEE5C7C1354C8112D64113D_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_22);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_22, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_25 = ___triggerEvent0;
		V_2 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_25, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var));
		RuntimeObject* L_26 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_26) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		RuntimeObject * L_28 = V_0;
		RuntimeObject* L_29 = V_2;
		NullCheck((RuntimeObject*)L_29);
		bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IMouseEventInternal::get_triggeredByOS() */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_29);
		NullCheck((RuntimeObject*)L_28);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (bool)L_30);
		RuntimeObject * L_31 = V_0;
		NullCheck((RuntimeObject*)L_31);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (bool)0);
	}

IL_00c7:
	{
	}

IL_00c8:
	{
		RuntimeObject * L_32 = V_0;
		V_4 = (RuntimeObject *)L_32;
		goto IL_00cd;
	}

IL_00cd:
	{
		RuntimeObject * L_33 = V_4;
		return (RuntimeObject *)L_33;
	}
}
// T UnityEngine.UIElements.MouseEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MouseEventBase_1_GetPooled_m7581733236F9D88705484E19A491449448D31E2B_gshared (RuntimeObject* ___pointerEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseEventBase_1_GetPooled_m7581733236F9D88705484E19A491449448D31E2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B2_0 = NULL;
	RuntimeObject * G_B2_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B1_0 = NULL;
	RuntimeObject * G_B1_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	RuntimeObject * G_B3_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B5_0 = NULL;
	RuntimeObject * G_B5_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B4_0 = NULL;
	RuntimeObject * G_B4_1 = NULL;
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * G_B6_0 = NULL;
	RuntimeObject * G_B6_1 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B8_0 = NULL;
	EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * G_B7_0 = NULL;
	PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * G_B9_0 = NULL;
	RuntimeObject * G_B13_0 = NULL;
	RuntimeObject * G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	RuntimeObject * G_B14_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		RuntimeObject* L_2 = ___pointerEvent0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_3 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_2, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((RuntimeObject*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001f;
	}

IL_001a:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B2_0);
		RuntimeObject* L_4 = EventBase_get_target_m9CDDE53A2B09975CF0DDAA6F194425149BCDC3E5((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_001f:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B3_1);
		EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B3_1, (RuntimeObject*)G_B3_0, /*hidden argument*/NULL);
		RuntimeObject * L_5 = V_0;
		RuntimeObject* L_6 = ___pointerEvent0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_7 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_6, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			goto IL_0038;
		}
	}
	{
		G_B6_0 = ((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_003d;
	}

IL_0038:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B5_0);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_8 = EventBase_get_imguiEvent_m93CE1DC74AF5C7C85CFE01C066E89893528FC6A4((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_003d:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B6_1);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B6_1, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)G_B6_0, /*hidden argument*/NULL);
		RuntimeObject* L_9 = ___pointerEvent0;
		EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * L_10 = (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_9, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var));
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0050;
		}
	}
	{
		G_B9_0 = ((PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D *)(NULL));
		goto IL_0055;
	}

IL_0050:
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B8_0);
		PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * L_11 = EventBase_get_path_mD750217799E419C5F8B38236E9592E54811A70BF((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)G_B8_0, /*hidden argument*/NULL);
		G_B9_0 = L_11;
	}

IL_0055:
	{
		V_2 = (bool)((!(((RuntimeObject*)(PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D *)G_B9_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject * L_13 = V_0;
		RuntimeObject* L_14 = ___pointerEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_14, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var)));
		PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D * L_15 = EventBase_get_path_mD750217799E419C5F8B38236E9592E54811A70BF((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)IsInst((RuntimeObject*)L_14, EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_13);
		EventBase_set_path_mE08193E7E12ACEFF2C0B6D03B3A2F3E0CC108C3F((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_13, (PropagationPaths_t59C288865B38FA5B8E17CA28D79FC4E1C58CE10D *)L_15, /*hidden argument*/NULL);
	}

IL_0073:
	{
		RuntimeObject * L_16 = V_0;
		RuntimeObject* L_17 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* UnityEngine.EventModifiers UnityEngine.UIElements.IPointerEvent::get_modifiers() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_16, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_19 = V_0;
		RuntimeObject* L_20 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(5 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_position() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_21, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_19, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_23 = V_0;
		RuntimeObject* L_24 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(5 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_position() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_24);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_25, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_23, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_27 = V_0;
		RuntimeObject* L_28 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(7 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_deltaPosition() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_30 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_29, /*hidden argument*/NULL);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_27);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_27, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_31 = V_0;
		RuntimeObject* L_32 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_32);
		int32_t L_33 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_button() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
		G_B12_0 = L_31;
		if ((((int32_t)L_33) == ((int32_t)(-1))))
		{
			G_B13_0 = L_31;
			goto IL_00e1;
		}
	}
	{
		RuntimeObject* L_34 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_34);
		int32_t L_35 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_button() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
		G_B14_0 = L_35;
		G_B14_1 = G_B12_0;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
	}

IL_00e2:
	{
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)G_B14_1);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)G_B14_1, (int32_t)G_B14_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_36 = V_0;
		RuntimeObject* L_37 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_37);
		int32_t L_38 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_pressedButtons() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_36);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_36, (int32_t)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_39 = V_0;
		RuntimeObject* L_40 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_40);
		int32_t L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_clickCount() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_39);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)L_39, (int32_t)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject* L_42 = ___pointerEvent0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_42, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var));
		RuntimeObject* L_43 = V_1;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_43) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_44 = V_3;
		if (!L_44)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject * L_45 = V_0;
		RuntimeObject* L_46 = V_1;
		NullCheck((RuntimeObject*)L_46);
		bool L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
		NullCheck((RuntimeObject*)L_45);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_triggeredByOS(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_45, (bool)L_47);
		RuntimeObject * L_48 = V_0;
		NullCheck((RuntimeObject*)L_48);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_recomputeTopElementUnderMouse(System.Boolean) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_48, (bool)1);
		RuntimeObject * L_49 = V_0;
		RuntimeObject* L_50 = ___pointerEvent0;
		NullCheck((RuntimeObject*)L_49);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.UIElements.IMouseEventInternal::set_sourcePointerEvent(UnityEngine.UIElements.IPointerEvent) */, IMouseEventInternal_t89FE2E3D34C4520F5EAABB31CAE5EA2E90881E7F_il2cpp_TypeInfo_var, (RuntimeObject*)L_49, (RuntimeObject*)L_50);
	}

IL_0149:
	{
		RuntimeObject * L_51 = V_0;
		V_4 = (RuntimeObject *)L_51;
		goto IL_014e;
	}

IL_014e:
	{
		RuntimeObject * L_52 = V_4;
		return (RuntimeObject *)L_52;
	}
}
// System.Void UnityEngine.UIElements.MouseEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_mF7A8C1FA42FC9623153D11E6D5C5DAD8BEB5D973_gshared (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		NullCheck((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this);
		((  void (*) (MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((MouseEventBase_1_tCD91A1F3710DCAAE6151B9B7359E739941D06B8B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Int32 UnityEngine.UIElements.ObjectPool`1<System.Object>::get_maxSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_maxSize_m7B65C7F2E8778BB8C93F97B437BB0028A8E9D080_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_MaxSize_1();
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return (int32_t)L_1;
	}
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::set_maxSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_set_maxSize_m5732821144B90CB4DCAD3F663176B589E7AAE794_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_set_maxSize_m5732821144B90CB4DCAD3F663176B589E7AAE794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_1 = Math_Max_mA99E48BB021F2E4B62D4EA9F52EA6928EED618A2((int32_t)0, (int32_t)L_0, /*hidden argument*/NULL);
		__this->set_m_MaxSize_1(L_1);
		goto IL_0019;
	}

IL_0010:
	{
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		((  RuntimeObject * (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
	}

IL_0019:
	{
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		int32_t L_2 = ((  int32_t (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		int32_t L_3 = (int32_t)__this->get_m_MaxSize_1();
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4440121448D0B3D2EBC5FE2B0B69167D83A7C74D_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, int32_t ___maxSize0, const RuntimeMethod* method)
{
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_0 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_m_Stack_0(L_0);
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ___maxSize0;
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		((  void (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Int32 UnityEngine.UIElements.ObjectPool`1<System.Object>::Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_Size_m3074E09D3EB79A9C1315D23B78F7DC9B1D7ACC78_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_0 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// T UnityEngine.UIElements.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m3FDC1AFD2FA6F9F4C0D541DB29C3CE84B3C244D2_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_0 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_2 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B3_0 = L_3;
		goto IL_0020;
	}

IL_001b:
	{
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = (RuntimeObject *)G_B3_0;
		RuntimeObject * L_5 = V_0;
		V_1 = (RuntimeObject *)L_5;
		goto IL_0025;
	}

IL_0025:
	{
		RuntimeObject * L_6 = V_1;
		return (RuntimeObject *)L_6;
	}
}
// System.Void UnityEngine.UIElements.ObjectPool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_gshared (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E * __this, RuntimeObject * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPool_1_Release_m2F54E298C569A530D9BE145E89A85461969B0E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_0 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_0);
		int32_t L_1 = ((  int32_t (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_2 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_2);
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		RuntimeObject * L_4 = ___element0;
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)L_4))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral04231B44477132B3DBEFE7768A921AE5A13A00FC, /*hidden argument*/NULL);
	}

IL_0039:
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_6 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_6);
		int32_t L_7 = ((  int32_t (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this);
		int32_t L_8 = ((  int32_t (*) (ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ObjectPool_1_tF86F778576B5A5C04A8D2A318DC0AF803837125E *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 * L_10 = (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)__this->get_m_Stack_0();
		RuntimeObject * L_11 = ___element0;
		NullCheck((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_10);
		((  void (*) (Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Stack_1_t576E16A8DBBF0430E26B9525C7A047671F793CA8 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
	}

IL_005f:
	{
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
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::set_relatedTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_set_relatedTarget_m3EA1321494E9B18A8D0A6D66F3524C5AFC4C35CC_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CrelatedTargetU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::set_pointerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_set_pointerId_m131956A66460FB60C9C7FE46BF8EC24B43001024_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_Init_mADB7C17F819950EDB793FDDC8D710F0E987A6ABC_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1_LocalInit_m67C407968188A88A0860879AD1A1BE70884AA2F9_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerCaptureEventBase_1_LocalInit_m67C407968188A88A0860879AD1A1BE70884AA2F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)3, /*hidden argument*/NULL);
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_invalidPointerId_1();
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// T UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IEventHandler,UnityEngine.UIElements.IEventHandler,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerCaptureEventBase_1_GetPooled_m37A56A955B99D923D58810CC73366C7F9E081D1E_gshared (RuntimeObject* ___target0, RuntimeObject* ___relatedTarget1, int32_t ___pointerId2, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject * L_1 = V_0;
		RuntimeObject* L_2 = ___target0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1);
		EventBase_set_target_mC6CE8B7FED46EC08C07F2279750CBF2780E90C6C((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_1, (RuntimeObject*)L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = V_0;
		RuntimeObject* L_4 = ___relatedTarget1;
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_3);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_3, (RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_5 = V_0;
		int32_t L_6 = ___pointerId2;
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_5);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_7 = V_0;
		V_1 = (RuntimeObject *)L_7;
		goto IL_0032;
	}

IL_0032:
	{
		RuntimeObject * L_8 = V_1;
		return (RuntimeObject *)L_8;
	}
}
// System.Void UnityEngine.UIElements.PointerCaptureEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1__ctor_m1E21BD75F6DA45A5F5645B7DB72A39A03E25A23F_gshared (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this);
		((  void (*) (PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerCaptureEventBase_1_t05AEB8D5A945DF031507835AEFB34F782724C7BE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pointerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pointerId_m7CA84EB539A37964E5D19464ED332F1F107D4367_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CpointerIdU3Ek__BackingField_18();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pointerId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pointerId_m73E0E3E080812EEADF344A559C81F1685AF67272_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpointerIdU3Ek__BackingField_18(L_0);
		return;
	}
}
// System.String UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pointerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PointerEventBase_1_get_pointerType_m5D203DC46E47C6C2E99359651C632C994840CEBA_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CpointerTypeU3Ek__BackingField_19();
		return (String_t*)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pointerType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pointerType_m9EFA612B59E695BBB3FDE50D5E8A8F7A1C7BD86B_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpointerTypeU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_isPrimary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_get_isPrimary_mE3193189BF33881D8EFF9EAF7E94480962B59F79_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CisPrimaryU3Ek__BackingField_20();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_isPrimary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_isPrimary_mD607B525FF277744F4034911634F9252D7542CEA_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisPrimaryU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_button_m0D0E8B13FC7560B3358674DAE780B19B2BAAB48D_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CbuttonU3Ek__BackingField_21();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_button(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_button_mC84D7125A74D3F1F78D16570EFA7F8B7A9278AC3_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CbuttonU3Ek__BackingField_21(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pressedButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_pressedButtons_m2C19F09018D09DD294634CFC5363625564AA9024_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CpressedButtonsU3Ek__BackingField_22();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pressedButtons(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pressedButtons_m0C99E74A43A66239412365312DBFAF0423F6070F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressedButtonsU3Ek__BackingField_22(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PointerEventBase_1_get_position_m992F34BD47136A2DD09331FED6D77F5F78A435AF_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_U3CpositionU3Ek__BackingField_23();
		return (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_position_m5827E83B94FF2072E328504EFDA3A3EEFCDEF833_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_23(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PointerEventBase_1_get_localPosition_m485F241C84CFEB51D3BBAACFCFD642E2BDFB0FA2_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_U3ClocalPositionU3Ek__BackingField_24();
		return (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_localPosition_m0971802414579099BF332652111EAFA8E1F4398A_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3ClocalPositionU3Ek__BackingField_24(L_0);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PointerEventBase_1_get_deltaPosition_mBC9EF90DB115E91F144385EA5C3586FFC10267E1_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )__this->get_U3CdeltaPositionU3Ek__BackingField_25();
		return (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_deltaPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_deltaPosition_mF2974C44764B51BC1C3846459C12CC0A80F5AFC5_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CdeltaPositionU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_deltaTime_mD41C50F43E3620C934A1D2A79F6C5F25290C4ED8_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CdeltaTimeU3Ek__BackingField_26();
		return (float)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_deltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_deltaTime_m8486E3AD17311F65DF38A1265BC4350CFFD04484_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CdeltaTimeU3Ek__BackingField_26(L_0);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_clickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_clickCount_m9E159BB7F901B4A48338529DE77E53C9AC5C5272_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CclickCountU3Ek__BackingField_27();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_clickCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_clickCount_mEC196417BBA71F4FD69728348A3F87B19B2A57E0_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CclickCountU3Ek__BackingField_27(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_pressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_pressure_mC519753D46A4BDCD2692C2F58ED2CEADC0ADB937_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CpressureU3Ek__BackingField_28();
		return (float)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_pressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_pressure_m9C86A7A5093E11764B287E353F2BCC187527DCCC_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CpressureU3Ek__BackingField_28(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_tangentialPressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_tangentialPressure_mC0CFC086A4DFB3E17BCD21E4160ACD603665B14F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CtangentialPressureU3Ek__BackingField_29();
		return (float)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_tangentialPressure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_tangentialPressure_mF4F73800C1371922C764A68571EE5FEBAE6483B3_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CtangentialPressureU3Ek__BackingField_29(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_altitudeAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_altitudeAngle_m2435AB1E4C0356CD8B7480CCC9DA0A29C9E20552_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CaltitudeAngleU3Ek__BackingField_30();
		return (float)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_altitudeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_altitudeAngle_mD17E4BCCD7FC8DA192CE62B3698F679D1B02C90F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CaltitudeAngleU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_azimuthAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_azimuthAngle_m422781577714067F6E02EE35455068A32DC5BBE6_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CazimuthAngleU3Ek__BackingField_31();
		return (float)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_azimuthAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_azimuthAngle_m87F09C90AECC255663699363D24566411029ADED_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CazimuthAngleU3Ek__BackingField_31(L_0);
		return;
	}
}
// System.Single UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_twist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointerEventBase_1_get_twist_m17C6FF7DDF22A7304109ECCA102DDA11261BB565_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_U3CtwistU3Ek__BackingField_32();
		return (float)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_twist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_twist_m24FC39D16A9DF59BC6FC90D0BB5FAE89C323419F_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CtwistU3Ek__BackingField_32(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventBase_1_get_radius_m1151001376A0E1E4820A047BBA764E06200CA020_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CradiusU3Ek__BackingField_33();
		return (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_radius(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_radius_m9D032DF72E8A5A33D1730B14740E27A3B2E129D4_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CradiusU3Ek__BackingField_33(L_0);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_radiusVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  PointerEventBase_1_get_radiusVariance_m75EF5AA70912A20B5A88B7384C9BE39348C2CDA2_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )__this->get_U3CradiusVarianceU3Ek__BackingField_34();
		return (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_radiusVariance(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_radiusVariance_m168F0A2BE17E4F2AFA153081D70CC1958AD0D019_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CradiusVarianceU3Ek__BackingField_34(L_0);
		return;
	}
}
// UnityEngine.EventModifiers UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_modifiers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointerEventBase_1_get_modifiers_m67237FCFA88DDCD62B80091F6315A74BAE0A0077_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_U3CmodifiersU3Ek__BackingField_35();
		return (int32_t)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_modifiers(UnityEngine.EventModifiers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_modifiers_m3CC28C71D396F95B636A41012A984545B8E413B7_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmodifiersU3Ek__BackingField_35(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.get_triggeredByOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS_m28CFFE1E3C06B3D805F23F9CFE8E33EEDBB35C34_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.set_triggeredByOS(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS_m1D6BB02F12528516E81F64FAA600D55A9E532BAD_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IPointerEventInternal_triggeredByOSU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.get_recomputeTopElementUnderPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer_mA9F483E5E02D290ACDFE1B9271B5C45EC6D81F66_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::UnityEngine.UIElements.IPointerEventInternal.set_recomputeTopElementUnderPointer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer_mCA845A070CB9408D18F78C866D26507BC98A91CF_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointerU3Ek__BackingField_37(L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_Init_m3D1D7E029EF2063D3F1D7B293BC638403992F95D_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::LocalInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_LocalInit_m6A72C0C79B21E843E37A6DDC0BE8A117365A28E6_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_LocalInit_m6A72C0C79B21E843E37A6DDC0BE8A117365A28E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (int32_t)7, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_propagateToIMGUI_m4B5E6109B619AF7761D310984BEB6C2210E05DD2((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (bool)0, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_unknown_3();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_triggeredByOS(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)0);
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_recomputeTopElementUnderPointer(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this, (bool)0);
		return;
	}
}
// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.PointerEventBase`1<System.Object>::get_currentTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointerEventBase_1_get_currentTarget_mB32ECD29E26275732B4E311717D53E8B921014DC_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_0 = EventBase_get_currentTarget_mB3B3ED90CE63BFFE6E789E0BC5FA5B904BDEF581((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject*)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return (RuntimeObject*)L_1;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::set_currentTarget(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_set_currentTarget_m571C3135C0C55466E277FDA84EE500DCB69C1C51_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_set_currentTarget_m571C3135C0C55466E277FDA84EE500DCB69C1C51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_set_currentTarget_mBA8C39A26A9E8B67E1003496F77C00BA48FA1B90((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(10 /* UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::get_currentTarget() */, (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		V_0 = (VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)IsInst((RuntimeObject*)L_1, VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57_il2cpp_TypeInfo_var));
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 * L_4 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_5, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = VisualElementExtensions_WorldToLocal_mFDEA66A0B4B27B27D235DE5E11E68E3145CA18C8((VisualElement_t0EB50F3AD9103B6EEB58682651950BE7C7A4AD57 *)L_4, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_7, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		goto IL_004d;
	}

IL_003e:
	{
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_004d:
	{
		return;
	}
}
// System.Boolean UnityEngine.UIElements.PointerEventBase`1<System.Object>::IsMouse(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerEventBase_1_IsMouse_m3CAAD93D850AB416844EC5AE97338036DEE7F21B_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_0 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_0);
		int32_t L_1 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)20))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = V_0;
		G_B8_0 = ((((int32_t)L_8) == ((int32_t)((int32_t)21)))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B8_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B8_0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_9 = V_1;
		return (bool)L_9;
	}
}
// T UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_m654B49807444AB3C852A3B8F68181B9203E352F7_gshared (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___systemEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_GetPooled_m654B49807444AB3C852A3B8F68181B9203E352F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	RuntimeObject * V_7 = NULL;
	int32_t G_B3_0 = 0;
	RuntimeObject * G_B22_0 = NULL;
	RuntimeObject * G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	RuntimeObject * G_B23_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_1 = ___systemEvent0;
		bool L_2 = ((  bool (*) (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_3 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3);
		int32_t L_4 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralF950D9CCC7081471921E58DAA686F27E792540D3);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralF950D9CCC7081471921E58DAA686F27E792540D3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_7;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_9 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9);
		int32_t L_10 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_9, /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_8;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_13;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_15 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15);
		int32_t L_16 = Event_get_type_mAABE4A35E5658E0079A1518D318AF2592F51D6FA((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(EventType_t3D3937E705A4506226002DAB22071B7B181DA57B_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_14;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A);
		String_t* L_20 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC((bool)0, (String_t*)L_20, /*hidden argument*/NULL);
	}

IL_006b:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_21 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_21);
		int32_t L_22 = Event_get_pointerType_m1D8031C5A8BFBAC21BAAB396199CDFCD3AAC42CA((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_21, /*hidden argument*/NULL);
		V_2 = (int32_t)L_22;
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0078;
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_007e;
	}

IL_007e:
	{
		RuntimeObject * L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_26 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_mouse_0();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_25);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_25, (String_t*)L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_28 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27, (int32_t)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		goto IL_00ea;
	}

IL_00a2:
	{
		RuntimeObject * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_30 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_touch_1();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_29);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_29, (String_t*)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_32 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_touchPointerIdBase_3();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_31);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_31, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		goto IL_00ea;
	}

IL_00c6:
	{
		RuntimeObject * L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_34 = ((PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_StaticFields*)il2cpp_codegen_static_fields_for(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var))->get_pen_2();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33, (String_t*)L_34, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_36 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_penPointerIdBase_5();
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_35);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		goto IL_00ea;
	}

IL_00ea:
	{
		RuntimeObject * L_37 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_37);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_37, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_38 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_38);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_38, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_39 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		RuntimeObject * L_40 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_40);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_40, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		RuntimeObject * L_41 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_42 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_41);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_41, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		RuntimeObject * L_43 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_44 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_43);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_43, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		RuntimeObject * L_45 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_46 = ___systemEvent0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_45);
		EventBase_set_imguiEvent_mD693DAF0735050C06640E8C9DD5683E210D18E15((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)L_45, (Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_46, /*hidden argument*/NULL);
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_47 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_47);
		int32_t L_48 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_47, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_48) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_3;
		if (!L_49)
		{
			goto IL_018d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_50 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_51 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_51);
		int32_t L_52 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_51, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_PressButton_mD0A791144315B3CFEB74A02FECBEDFFD24A4A9CE((int32_t)L_50, (int32_t)L_52, /*hidden argument*/NULL);
		RuntimeObject * L_53 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_54 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_54);
		int32_t L_55 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_54, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_53);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_53, (int32_t)L_55, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		goto IL_01e1;
	}

IL_018d:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_56 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_56);
		int32_t L_57 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_56, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_57) == ((int32_t)1))? 1 : 0);
		bool L_58 = V_4;
		if (!L_58)
		{
			goto IL_01c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_59 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_mousePointerId_2();
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_60 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_60);
		int32_t L_61 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_60, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_ReleaseButton_m841973E840794947778B7057D4DD315556F7A6A5((int32_t)L_59, (int32_t)L_61, /*hidden argument*/NULL);
		RuntimeObject * L_62 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_63 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_63);
		int32_t L_64 = Event_get_button_mA6E2D86802D75E24DB3C52EB52142EA98A3B93CE((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_63, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_62);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_62, (int32_t)L_64, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		goto IL_01e1;
	}

IL_01c3:
	{
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_65 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_65);
		int32_t L_66 = Event_get_rawType_m4139BB74440F552F5FD31F56215938E227EF0CD9((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_65, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_66) == ((int32_t)2))? 1 : 0);
		bool L_67 = V_5;
		if (!L_67)
		{
			goto IL_01e1;
		}
	}
	{
		RuntimeObject * L_68 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_68);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_68, (int32_t)(-1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	}

IL_01e1:
	{
		RuntimeObject * L_69 = V_0;
		RuntimeObject * L_70 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_70);
		int32_t L_71 = ((  int32_t (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_70, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		int32_t L_72 = PointerDeviceState_GetPressedButtons_m92D8D7B9F9B7A2251807764D45D133CE96E7E8C2((int32_t)L_71, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_69);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_69, (int32_t)L_72, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_73 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_74 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_74);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_75 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_75, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_73);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_73, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_76, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_77 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_78 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_78);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_79 = Event_get_mousePosition_m92AD98489A626864E9B179273270802EB1D2C085((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_78, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_79, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_77);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_77, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_80, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_81 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_82 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_82);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_83 = Event_get_delta_m552632C8BD6AFB1FF814636177843C6E28E87B85((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_82, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_83, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_81);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_81, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_84, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		RuntimeObject * L_85 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_86 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_86);
		int32_t L_87 = Event_get_clickCount_m8C296AD53AA9F14D43DB3682227DD343B9499F21((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_86, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_85);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_85, (int32_t)L_87, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_88 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_89 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_89);
		int32_t L_90 = Event_get_modifiers_m4D1BDE843A9379F50C3F32CB78CCDAD84B779108((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_89, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_88);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_88, (int32_t)L_90, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_91 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_91);
		int32_t L_92 = Event_get_pointerType_m1D8031C5A8BFBAC21BAAB396199CDFCD3AAC42CA((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_91, /*hidden argument*/NULL);
		V_6 = (int32_t)L_92;
		int32_t L_93 = V_6;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_93, (int32_t)1))) > ((uint32_t)1))))
		{
			goto IL_029e;
		}
	}
	{
		goto IL_0277;
	}

IL_0277:
	{
		RuntimeObject * L_94 = V_0;
		RuntimeObject * L_95 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_95);
		int32_t L_96 = ((  int32_t (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_95, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 27));
		G_B21_0 = L_94;
		if (!L_96)
		{
			G_B22_0 = L_94;
			goto IL_0291;
		}
	}
	{
		G_B23_0 = (0.5f);
		G_B23_1 = G_B21_0;
		goto IL_0296;
	}

IL_0291:
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B22_0;
	}

IL_0296:
	{
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)G_B23_1);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)G_B23_1, (float)G_B23_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		goto IL_02b2;
	}

IL_029e:
	{
		RuntimeObject * L_97 = V_0;
		Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * L_98 = ___systemEvent0;
		NullCheck((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_98);
		float L_99 = Event_get_pressure_m2F2732871C11B870A4DE6CF3056C495252B07024((Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 *)L_98, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_97);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_97, (float)L_99, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		goto IL_02b2;
	}

IL_02b2:
	{
		RuntimeObject * L_100 = V_0;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_100);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_100, (float)(0.0f), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		RuntimeObject * L_101 = V_0;
		NullCheck((RuntimeObject*)L_101);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_triggeredByOS(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_101, (bool)1);
		RuntimeObject * L_102 = V_0;
		V_7 = (RuntimeObject *)L_102;
		goto IL_02d5;
	}

IL_02d5:
	{
		RuntimeObject * L_103 = V_7;
		return (RuntimeObject *)L_103;
	}
}
// T UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IPointerEvent,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_mB4E401D8A4F768CEE0AC20377156F8AD7C9A32EE_gshared (RuntimeObject* ___triggerEvent0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position1, int32_t ___pointerId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_GetPooled_mB4E401D8A4F768CEE0AC20377156F8AD7C9A32EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject* L_0 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___triggerEvent0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		V_2 = (RuntimeObject *)L_3;
		goto IL_0060;
	}

IL_0013:
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_4 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_4;
		RuntimeObject * L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_6, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_5);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_5, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_8 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = ___position1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_9, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_8);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_8, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = V_0;
		int32_t L_12 = ___pointerId2;
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_11);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_13 = V_0;
		int32_t L_14 = ___pointerId2;
		IL2CPP_RUNTIME_CLASS_INIT(PointerType_t145158020193F50A503F65BE41CBAC1CE9E3C6CB_il2cpp_TypeInfo_var);
		String_t* L_15 = PointerType_GetPointerType_mFC253D2B16A977A73555E236FBD45A36F271D9A1((int32_t)L_14, /*hidden argument*/NULL);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_13);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_13, (String_t*)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_16 = V_0;
		V_2 = (RuntimeObject *)L_16;
		goto IL_0060;
	}

IL_0060:
	{
		RuntimeObject * L_17 = V_2;
		return (RuntimeObject *)L_17;
	}
}
// T UnityEngine.UIElements.PointerEventBase`1<System.Object>::GetPooled(UnityEngine.UIElements.IPointerEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerEventBase_1_GetPooled_m86CCDFBD02BDF5AE0EB7F297281EF28A286C0162_gshared (RuntimeObject* ___triggerEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_GetPooled_m86CCDFBD02BDF5AE0EB7F297281EF28A286C0162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		V_0 = (RuntimeObject *)L_0;
		RuntimeObject* L_1 = ___triggerEvent0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_017b;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		RuntimeObject* L_4 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_pointerId() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_3);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_3, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_6 = V_0;
		RuntimeObject* L_7 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_7);
		String_t* L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.UIElements.IPointerEvent::get_pointerType() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_6);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_6, (String_t*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		RuntimeObject * L_9 = V_0;
		RuntimeObject* L_10 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_10);
		bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.UIElements.IPointerEvent::get_isPrimary() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_9);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_9, (bool)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RuntimeObject * L_12 = V_0;
		RuntimeObject* L_13 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_13);
		int32_t L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_button() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_12);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_12, (int32_t)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_15 = V_0;
		RuntimeObject* L_16 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_16);
		int32_t L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_pressedButtons() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_15);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_15, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		RuntimeObject * L_18 = V_0;
		RuntimeObject* L_19 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(5 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_position() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_18);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_18, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		RuntimeObject * L_21 = V_0;
		RuntimeObject* L_22 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(6 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_localPosition() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_21);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_21, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_23, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_24 = V_0;
		RuntimeObject* L_25 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_25);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = InterfaceFuncInvoker0< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(7 /* UnityEngine.Vector3 UnityEngine.UIElements.IPointerEvent::get_deltaPosition() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_24);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_24, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_26, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		RuntimeObject * L_27 = V_0;
		RuntimeObject* L_28 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_28);
		float L_29 = InterfaceFuncInvoker0< float >::Invoke(8 /* System.Single UnityEngine.UIElements.IPointerEvent::get_deltaTime() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_27, (float)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		RuntimeObject * L_30 = V_0;
		RuntimeObject* L_31 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_31);
		int32_t L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 UnityEngine.UIElements.IPointerEvent::get_clickCount() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_31);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_30);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_30, (int32_t)L_32, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_33 = V_0;
		RuntimeObject* L_34 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_34);
		float L_35 = InterfaceFuncInvoker0< float >::Invoke(10 /* System.Single UnityEngine.UIElements.IPointerEvent::get_pressure() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_33, (float)L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		RuntimeObject * L_36 = V_0;
		RuntimeObject* L_37 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_37);
		float L_38 = InterfaceFuncInvoker0< float >::Invoke(11 /* System.Single UnityEngine.UIElements.IPointerEvent::get_tangentialPressure() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_37);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_36);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_36, (float)L_38, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		RuntimeObject * L_39 = V_0;
		RuntimeObject* L_40 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_40);
		float L_41 = InterfaceFuncInvoker0< float >::Invoke(12 /* System.Single UnityEngine.UIElements.IPointerEvent::get_altitudeAngle() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_39, (float)L_41, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_42 = V_0;
		RuntimeObject* L_43 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_43);
		float L_44 = InterfaceFuncInvoker0< float >::Invoke(13 /* System.Single UnityEngine.UIElements.IPointerEvent::get_azimuthAngle() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_43);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_42);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_42, (float)L_44, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		RuntimeObject * L_45 = V_0;
		RuntimeObject* L_46 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_46);
		float L_47 = InterfaceFuncInvoker0< float >::Invoke(14 /* System.Single UnityEngine.UIElements.IPointerEvent::get_twist() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_45);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_45, (float)L_47, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		RuntimeObject * L_48 = V_0;
		RuntimeObject* L_49 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_49);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_50 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(15 /* UnityEngine.Vector2 UnityEngine.UIElements.IPointerEvent::get_radius() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_49);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_48);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_48, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_50, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		RuntimeObject * L_51 = V_0;
		RuntimeObject* L_52 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_52);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_53 = InterfaceFuncInvoker0< Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(16 /* UnityEngine.Vector2 UnityEngine.UIElements.IPointerEvent::get_radiusVariance() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_51);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_51, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_53, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		RuntimeObject * L_54 = V_0;
		RuntimeObject* L_55 = ___triggerEvent0;
		NullCheck((RuntimeObject*)L_55);
		int32_t L_56 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* UnityEngine.EventModifiers UnityEngine.UIElements.IPointerEvent::get_modifiers() */, IPointerEvent_t9961D65B2C344F89413595E31CBCD1DCE0F47BEA_il2cpp_TypeInfo_var, (RuntimeObject*)L_55);
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_54);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)L_54, (int32_t)L_56, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		RuntimeObject* L_57 = ___triggerEvent0;
		V_2 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_57, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var));
		RuntimeObject* L_58 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_58) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_59 = V_3;
		if (!L_59)
		{
			goto IL_017a;
		}
	}
	{
		RuntimeObject * L_60 = V_0;
		RuntimeObject* L_61 = V_2;
		NullCheck((RuntimeObject*)L_61);
		bool L_62 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_61);
		NullCheck((RuntimeObject*)L_60);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void UnityEngine.UIElements.IPointerEventInternal::set_triggeredByOS(System.Boolean) */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)L_60, (bool)L_62);
	}

IL_017a:
	{
	}

IL_017b:
	{
		RuntimeObject * L_63 = V_0;
		V_4 = (RuntimeObject *)L_63;
		goto IL_0180;
	}

IL_0180:
	{
		RuntimeObject * L_64 = V_4;
		return (RuntimeObject *)L_64;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::PreDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_PreDispatch_m359A5629E26AA079E72B1A00D41C93821C6368B0_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_PreDispatch_m359A5629E26AA079E72B1A00D41C93821C6368B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PreDispatch_m242A7911A4139A5BF3BDAF7952AE67DF0DBC779A((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		NullCheck((RuntimeObject*)__this);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		int32_t L_3 = ((  int32_t (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_4, /*hidden argument*/NULL);
		RuntimeObject* L_6 = ___panel0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerDeviceState_tBADA581B3E49FE39A2230120F84FCBD94BB8ADA4_il2cpp_TypeInfo_var);
		PointerDeviceState_SavePointerPosition_mFFAA7F8C884E231C7D950676565CDE8A9BAF2390((int32_t)L_3, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_5, (RuntimeObject*)L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::PostDispatch(UnityEngine.UIElements.IPanel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1_PostDispatch_m2DE466AABDA92057C28FD02AF8C130F459C06FBA_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, RuntimeObject* ___panel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointerEventBase_1_PostDispatch_m2DE466AABDA92057C28FD02AF8C130F459C06FBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B9_0 = NULL;
	BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * G_B8_0 = NULL;
	{
		V_0 = (int32_t)0;
		goto IL_0013;
	}

IL_0005:
	{
		RuntimeObject* L_0 = ___panel0;
		int32_t L_1 = V_0;
		PointerCaptureHelper_ProcessPointerCapture_m09CC6875E7044A577341CFA82E5E665DA7434EC6((RuntimeObject*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0013:
	{
		int32_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_t79333F6490B7D6CEBCC740AC1A58DE52B63B511C_il2cpp_TypeInfo_var))->get_maxPointers_0();
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0005;
		}
	}
	{
		RuntimeObject* L_6 = ___panel0;
		bool L_7 = PointerCaptureHelper_ShouldSendCompatibilityMouseEvents_m7719A65D3C28756BA1F509CAD2362E2B7A05DD83((RuntimeObject*)L_6, (RuntimeObject*)__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0030;
		}
	}
	{
		NullCheck((RuntimeObject*)__this);
		bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.UIElements.IPointerEventInternal::get_triggeredByOS() */, IPointerEventInternal_tA7CFA0A98B5E87A72EC8D777BB1ACEC1F98F8405_il2cpp_TypeInfo_var, (RuntimeObject*)__this);
		G_B6_0 = ((int32_t)(L_8));
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 0;
	}

IL_0031:
	{
		V_2 = (bool)G_B6_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_10 = ___panel0;
		BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 * L_11 = (BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)IsInst((RuntimeObject*)L_10, BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90_il2cpp_TypeInfo_var));
		G_B8_0 = L_11;
		if (L_11)
		{
			G_B9_0 = L_11;
			goto IL_0042;
		}
	}
	{
		goto IL_0048;
	}

IL_0042:
	{
		NullCheck((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B9_0);
		BaseVisualElementPanel_CommitElementUnderPointers_mFBDB91138145CF30ADB72FE74511C7E8BD3374F3((BaseVisualElementPanel_t508E21628181848188EE9CDA4C4AF692FB574C90 *)G_B9_0, /*hidden argument*/NULL);
	}

IL_0048:
	{
	}

IL_0049:
	{
		RuntimeObject* L_12 = ___panel0;
		NullCheck((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this);
		EventBase_PostDispatch_m4182DABA2D5674FC82F67DC57219840840065644((EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD *)__this, (RuntimeObject*)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.PointerEventBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventBase_1__ctor_m6EC743C864C40687A3E8E3C3EE82BCF6B76B2595_gshared (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22));
		((  void (*) (EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)((EventBase_1_t94F9D620FD1F389AC742837202B18355992FA916 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		NullCheck((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this);
		((  void (*) (PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((PointerEventBase_1_tF77F595F9F1B19B34E1897A9470F0DCD26B95634 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
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
// T UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_001a;
	}

IL_0014:
	{
		int32_t L_2 = (int32_t)__this->get_m_Value_1();
		G_B3_0 = L_2;
	}

IL_001a:
	{
		V_1 = (int32_t)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_1;
		return (int32_t)L_3;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_value_m863E731D80D0A943F5A206AE32787D5C073A3109(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Specificity_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B(_thisAdjusted, ___value0, method);
}
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_m_Keyword_0();
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_get_keyword_m73D1031A571AC4D33C8FAE3C20FAC0E5C2A456A2(_thisAdjusted, method);
}
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	{
		__this->set_m_Specificity_2(0);
		int32_t L_0 = ___keyword1;
		__this->set_m_Keyword_0(L_0);
		int32_t L_1 = ___v0;
		__this->set_m_Value_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_AdjustorThunk (RuntimeObject * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82(_thisAdjusted, ___v0, ___keyword1, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::op_Equality(UnityEngine.UIElements.StyleEnum`1<T>,UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_mCBBFEC68B4112344CE885DAA95737BD217263E3E_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___lhs0, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___lhs0;
		int32_t L_1 = (int32_t)L_0.get_m_Keyword_0();
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_2 = ___rhs1;
		int32_t L_3 = (int32_t)L_2.get_m_Keyword_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = ___lhs0;
		int32_t L_5 = (int32_t)L_4.get_m_Value_1();
		int32_t L_6 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_7 = ___rhs1;
		int32_t L_8 = (int32_t)L_7.get_m_Value_1();
		int32_t L_9 = ((  int32_t (*) (int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)L_9))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_10 = V_0;
		return (bool)L_10;
	}
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(UnityEngine.UIElements.StyleEnum`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = ___other0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_2 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_0, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_0 = (bool)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2_AdjustorThunk (RuntimeObject * __this, StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_mFA300F4368EBB8B5AED6497B6462C7BC7A851FC2(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_002c;
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )((*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3)))));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		bool L_5 = ((  bool (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3, (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		V_2 = (bool)L_5;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_6 = V_2;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_Equals_m24B121AC6754A2F66CF25C7F26F5D73B79AD7FD6(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (int32_t)((int32_t)917506989);
		int32_t L_0 = V_0;
		int32_t* L_1 = (int32_t*)__this->get_address_of_m_Keyword_0();
		Il2CppFakeBox<int32_t> L_2(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_2));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)-1521134295))), (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t* L_5 = (int32_t*)__this->get_address_of_m_Value_1();
		Il2CppFakeBox<int32_t> L_6(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_5);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(&L_6));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)-1521134295))), (int32_t)L_7));
		int32_t L_8 = V_0;
		int32_t* L_9 = (int32_t*)__this->get_address_of_m_Specificity_2();
		int32_t L_10 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(int32_t*)L_9, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)-1521134295))), (int32_t)L_10));
		int32_t L_11 = V_0;
		V_1 = (int32_t)L_11;
		goto IL_0053;
	}

IL_0053:
	{
		int32_t L_12 = V_1;
		return (int32_t)L_12;
	}
}
IL2CPP_EXTERN_C  int32_t StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_GetHashCode_mA3BDF8E038179D79DFE761A60E55AB94F2F73A94(_thisAdjusted, method);
}
// System.String UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_0 = (*(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)__this);
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		String_t* L_3 = ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (String_t*)L_3;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_4 = V_0;
		return (String_t*)L_4;
	}
}
IL2CPP_EXTERN_C  String_t* StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * _thisAdjusted = reinterpret_cast<StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *>(__this + _offset);
	return StyleEnum_1_ToString_m8F8781B4E85F3CF71A0EB27291996FC8607775BF(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mA27FCE26D39C737B0D39189A21C594C7FBBC67AD_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, const RuntimeMethod* method)
{
	{
		// protected override void OnKeepWaiting() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_m3C23D5D554693193E9D774F01AAFDD5D42C248DC_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, int32_t ___immediateResult0, const RuntimeMethod* method)
{
	{
		// public ImmediatePromise(T immediateResult)
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Resolve(immediateResult);
		int32_t L_0 = ___immediateResult0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
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
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mD1171A9214048BBB743143B236981281DA7F58B4_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, const RuntimeMethod* method)
{
	{
		// protected override void OnKeepWaiting() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_mE88D02E2D6748FD79DC319981EEA9737025B98D5_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, RuntimeObject * ___immediateResult0, const RuntimeMethod* method)
{
	{
		// public ImmediatePromise(T immediateResult)
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Resolve(immediateResult);
		RuntimeObject * L_0 = ___immediateResult0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// }
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_mB7B580185D69F835FCA4E8DA20527FF6FC537ED4_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		// OnKeepWaiting();
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::OnKeepWaiting() */, (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		// return !m_Complete;
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mBBDFBF348B06877416B4E792897ADFE5E8CA0D5C_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method)
{
	{
		// return new ImmediatePromise(result);
		int32_t L_0 = ___result0;
		ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * L_1 = (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_m504DCDC94B2BA352C3AC50DCB2549CAA67C015FB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	{
		// this.result = result;
		int32_t L_0 = ___result0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// m_Complete = true;
		__this->set_m_Complete_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m32E79F764B084F1C1978EDE2B76AD9F1A4CDD0BF_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_m3BC77691EF491FC7554898C044757953A1059AD7_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		// OnKeepWaiting();
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::OnKeepWaiting() */, (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		// return !m_Complete;
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mB1D488EFEE0DA6A1C22CEE6363403E04AC9BD6B3_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * Promise_1_CreateResolvedPromise_mFEF2285EE72DED544C72E164300EBF4F51634667_gshared (RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		// return new ImmediatePromise(result);
		RuntimeObject * L_0 = ___result0;
		ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * L_1 = (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_mB8F668BC7267A97F759AB1B008C01BB404EA67BF_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		// this.result = result;
		RuntimeObject * L_0 = ___result0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// m_Complete = true;
		__this->set_m_Complete_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m4A14410F2E5858E437D0DD77CDEB8C4C09113C63_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::CopyFrom(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  TrackableChanges_1_CopyFrom_m4393C6018EE4FF47EB0435CA9C6566BB9562652D_gshared (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___added0, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___updated1, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___removed2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_CopyFrom_m4393C6018EE4FF47EB0435CA9C6566BB9562652D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var addedCopy = new NativeArray<T>(added.Length, allocator);
		int32_t L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&___added0))->___m_Length_1);
		int32_t L_1 = ___allocator3;
		NativeArray_1__ctor_mBA3667DFD2FA91C71C118ECA43EB22503D4FC2C8((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_0), (int32_t)L_0, (int32_t)L_1, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// addedCopy.CopyFrom(added);
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_2 = ___added0;
		NativeArray_1_CopyFrom_mC053D3A9DF2FBD4DCB31D2864F4996E9B2DA255A((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_0), (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// var updatedCopy = new NativeArray<T>(updated.Length, allocator);
		int32_t L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&___updated1))->___m_Length_1);
		int32_t L_4 = ___allocator3;
		NativeArray_1__ctor_mBA3667DFD2FA91C71C118ECA43EB22503D4FC2C8((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1), (int32_t)L_3, (int32_t)L_4, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// updatedCopy.CopyFrom(updated);
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_5 = ___updated1;
		NativeArray_1_CopyFrom_mC053D3A9DF2FBD4DCB31D2864F4996E9B2DA255A((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(&V_1), (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		// var removedCopy = new NativeArray<TrackableId>(removed.Length, allocator);
		int32_t L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&___removed2))->___m_Length_1);
		int32_t L_7 = ___allocator3;
		NativeArray_1__ctor_mB91F5DE32D3C6A7A04BCEA59856B8053D39CFC25((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_2), (int32_t)L_6, (int32_t)L_7, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_mB91F5DE32D3C6A7A04BCEA59856B8053D39CFC25_RuntimeMethod_var);
		// removedCopy.CopyFrom(removed);
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_8 = ___removed2;
		NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(&V_2), (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_8, /*hidden argument*/NativeArray_1_CopyFrom_mE2C04369E83ED4726DE1121E7E05342B6A993A97_RuntimeMethod_var);
		// return new TrackableChanges<T>(addedCopy, updatedCopy, removedCopy);
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_9 = V_0;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_10 = V_1;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_11 = V_2;
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_12;
		memset((&L_12), 0, sizeof(L_12));
		TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951((&L_12), (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_9, (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 )L_10, (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF )L_12;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_1 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m3C3CCFC32F691D9F21E078E4BEAD728AE3029E59((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		// m_Updated.Dispose();
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * L_2 = (NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m3C3CCFC32F691D9F21E078E4BEAD728AE3029E59((NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mE495C4DC64D58DD30BE5B9CDF6D1299D4789536C((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mE495C4DC64D58DD30BE5B9CDF6D1299D4789536C_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1_Dispose_m1C8DF8C1879FD6A22AD7474E15FB2590BB4F9631(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___added0, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___updated1, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___removed2, const RuntimeMethod* method)
{
	{
		// m_Added = added;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_0 = ___added0;
		__this->set_m_Added_1(L_0);
		// m_Updated = updated;
		NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  L_1 = ___updated1;
		__this->set_m_Updated_2(L_1);
		// m_Removed = removed;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_2 = ___removed2;
		__this->set_m_Removed_3(L_2);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_inline((TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___added0, NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___updated1, NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___removed2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *>(__this + _offset);
	TrackableChanges_1__ctor_m5E677E3D08A7D26921EA074FB0A849F566DE5951(_thisAdjusted, ___added0, ___updated1, ___removed2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackingSubsystem_2_get_running_m2102054ECF2F148EF7E5285FF8113FDDB6F29FBE_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Running; }
		bool L_0 = (bool)__this->get_m_Running_1();
		return (bool)L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7BED931B501BCE6534C3BC2DC0CA30C73E917F90_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this);
		((  void (*) (Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Subsystem_1_t6048F47F8C2EBFDAC541AA593928233978B85EA9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *>(__this + _offset);
	InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m11D50A1B0112E014A1969C333D086B626BF7285D_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_inline((InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m11D50A1B0112E014A1969C333D086B626BF7285D_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *>(__this + _offset);
	InputFeatureUsage_1__ctor_m11D50A1B0112E014A1969C333D086B626BF7285D(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1((InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)__this, (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 )((*(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)((InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mABB6FF60DEFBE3CB5C67D807ECC39EF80DB478D0(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_inline((InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_inline((InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m2A82D70606F644B38DEBC0D357AD42EB8B5354F1(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_gshared (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_inline((InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)(InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m93A72CC1175CC929BE33BB73AF85996606365FCB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Object>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Object>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	InputFeatureUsage_1__ctor_mA8366FF400074A765C8808AB3EF9EC8A087C239B(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 )((*(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m58E552AF934455C32BFCA81494BDF2B795F74DF9(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Object>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1FB35646C10F8A881D1AEB78F8668F2C42DA8513(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_gshared (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_inline((InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)(InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m588500B8DB43E81CACD7FC80C5EFF404CA5D4531(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Single>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *>(__this + _offset);
	InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m5011B8646BC95EE909D6997CE4800D40AA1791BB_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_inline((InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_m5011B8646BC95EE909D6997CE4800D40AA1791BB_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *>(__this + _offset);
	InputFeatureUsage_1__ctor_m5011B8646BC95EE909D6997CE4800D40AA1791BB(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36((InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)__this, (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 )((*(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)((InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m008498E9F2FC1E2A387E668D4E7EE17F7252D541(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<System.Single>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_inline((InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_inline((InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mF25B1D914C0386DEDD34C65EB634CDC5E44BFF36(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<System.Single>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_gshared (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_inline((InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)(InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m9992536F666651AA6EF6B05CF76B9F2A726E43D8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC2BC8B405224919267153BACB8CF26F526375C5E_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mC2BC8B405224919267153BACB8CF26F526375C5E_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	InputFeatureUsage_1__ctor_mC2BC8B405224919267153BACB8CF26F526375C5E(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 )((*(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mBC9EF1D43D70CEC4575D8F7905AD93F0F5320678(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m1D49D3B859269709529967B8B3C05157D0CF2F02(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_gshared (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_inline((InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m636CCD8DE451B1E8A862AE81B3E53CA4390A4CA1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mE206247EA9AE1ED6D323D3CF0D6E475ECAF3F1D6_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___usageName0;
		InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void InputFeatureUsage_1__ctor_mE206247EA9AE1ED6D323D3CF0D6E475ECAF3F1D6_AdjustorThunk (RuntimeObject * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	InputFeatureUsage_1__ctor_mE206247EA9AE1ED6D323D3CF0D6E475ECAF3F1D6(_thisAdjusted, ___usageName0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1)))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 )((*(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		V_1 = (bool)L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return (bool)L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_m4CFF311B75A14CBE1EF1C3ED663E5EBB13E84746(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::Equals(UnityEngine.XR.InputFeatureUsage`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		String_t* L_1 = InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(&___other0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		bool L_2 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE((String_t*)L_0, (String_t*)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_Equals_mACCAF974C7E4BC10A0326C1F1CF8BCB9AB061484(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_gshared (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_inline((InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		NullCheck((RuntimeObject *)L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)L_0);
		V_0 = (int32_t)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * _thisAdjusted = reinterpret_cast<InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 *>(__this + _offset);
	return InputFeatureUsage_1_GetHashCode_m31F2DC4020D409D1E4F43B2FE21897A2E33AE0FA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_mCF20A5F2E10F34F73853FEC4D3893B49EB49C166_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void EventBase_set_propagation_mF770530A5B592FAB33C549ED74453ABC7ED0E7A6_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpropagationU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t EventBase_get_eventId_mAECD1254234BF118F42559AC0B717A64E7F27517_inline (EventBase_t0292727F923C187143EFD8B7E78B2A3FB5EFF0CD * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3CeventIdU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FocusChangeDirection_get_unspecified_m72CA7BA378E9E8EF915B6997E7F0601DACE6E2A8Generics13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var);
		FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2 * L_0 = ((FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_StaticFields*)il2cpp_codegen_static_fields_for(FocusChangeDirection_t7EF0C6728E2A3E7A4FCDA59A3AB9F98C120165D2_il2cpp_TypeInfo_var))->get_U3CunspecifiedU3Ek__BackingField_0();
		return L_0;
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
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m81592B6012FD82C68A023EC52FFAB3B4A35C6A3D_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m3B57EAEC482D7B5D700E044B8720F89F25B13DC5_gshared_inline (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mCC175F363C7BCED5C0D9BA1B0F8B59AF22319600_gshared_inline (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mE26954497B6DFC1BC4B35527BC1FE45E8DD3325C_gshared_inline (InputFeatureUsage_1_t31776C810DA37B512505EAFA6E03D775CC458301 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m986856E010E34F183B7A519CF76E9FBC5135F937_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m381E43D77D92715FD446AF475884BBABEFAA6FAD_gshared_inline (InputFeatureUsage_1_t55021A4C29C7B40EEA10D1FB9E48387F289142C7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m1E58C9807A46EDF4A2C682DB371914BC18286F3D_gshared_inline (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mBA3A4DE56CA8F0B5ABA6BBF0F5D3D274D56DBE16_gshared_inline (InputFeatureUsage_1_t8A75B616376EA20CFDEEDBCA90F8B194F070BE10 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m29153C47FF6FB8C8E63028FA4206F0092C6F88D1_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_m64E2C297CAC54F998DA45F1BA04094DCF22251FF_gshared_inline (InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_mC2BA903C90FBEB270B18F098CBE94784B43D03C1_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void InputFeatureUsage_1_set_name_mDBCA9524945C814FED4B07892E213D182123206A_gshared_inline (InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_0(L_0);
		return;
	}
}
