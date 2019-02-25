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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3418373063;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Random
struct Random_t108471755;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t529313277;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t4184125570;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t1772682203;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t2032715483;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_t582536534;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_t1868393739;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// mainScript
struct mainScript_t2576383752;
// shadowScript
struct shadowScript_t3441766022;




#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef TRACKABLETRIGGER_T621205209_H
#define TRACKABLETRIGGER_T621205209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TrackableTrigger
struct  TrackableTrigger_t621205209  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t1113636619 * ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_Target_0)); }
	inline GameObject_t1113636619 * get_m_Target_0() const { return ___m_Target_0; }
	inline GameObject_t1113636619 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(GameObject_t1113636619 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodPath_1() { return static_cast<int32_t>(offsetof(TrackableTrigger_t621205209, ___m_MethodPath_1)); }
	inline String_t* get_m_MethodPath_1() const { return ___m_MethodPath_1; }
	inline String_t** get_address_of_m_MethodPath_1() { return &___m_MethodPath_1; }
	inline void set_m_MethodPath_1(String_t* value)
	{
		___m_MethodPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodPath_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLETRIGGER_T621205209_H
#ifndef TRIGGERLISTCONTAINER_T2032715483_H
#define TRIGGERLISTCONTAINER_T2032715483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerListContainer
struct  TriggerListContainer_t2032715483  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3418373063 * ___m_Rules_0;

public:
	inline static int32_t get_offset_of_m_Rules_0() { return static_cast<int32_t>(offsetof(TriggerListContainer_t2032715483, ___m_Rules_0)); }
	inline List_1_t3418373063 * get_m_Rules_0() const { return ___m_Rules_0; }
	inline List_1_t3418373063 ** get_address_of_m_Rules_0() { return &___m_Rules_0; }
	inline void set_m_Rules_0(List_1_t3418373063 * value)
	{
		___m_Rules_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLISTCONTAINER_T2032715483_H
#ifndef TRIGGERMETHOD_T582536534_H
#define TRIGGERMETHOD_T582536534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerMethod
struct  TriggerMethod_t582536534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERMETHOD_T582536534_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef TRIGGERBOOL_T501031542_H
#define TRIGGERBOOL_T501031542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerBool
struct  TriggerBool_t501031542 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerBool::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerBool_t501031542, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERBOOL_T501031542_H
#ifndef TRIGGERLIFECYCLEEVENT_T3193146760_H
#define TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerLifecycleEvent
struct  TriggerLifecycleEvent_t3193146760 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerLifecycleEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerLifecycleEvent_t3193146760, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERLIFECYCLEEVENT_T3193146760_H
#ifndef TRIGGEROPERATOR_T3611898925_H
#define TRIGGEROPERATOR_T3611898925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerOperator
struct  TriggerOperator_t3611898925 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerOperator::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerOperator_t3611898925, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGEROPERATOR_T3611898925_H
#ifndef TRIGGERTYPE_T105272677_H
#define TRIGGERTYPE_T105272677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerType
struct  TriggerType_t105272677 
{
public:
	// System.Int32 UnityEngine.Analytics.TriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TriggerType_t105272677, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERTYPE_T105272677_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef EVENTTRIGGER_T2527451695_H
#define EVENTTRIGGER_T2527451695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger
struct  EventTrigger_t2527451695  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t2032715483 * ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t4184125570 * ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_t582536534 * ___m_Method_11;

public:
	inline static int32_t get_offset_of_m_IsTriggerExpanded_0() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_IsTriggerExpanded_0)); }
	inline bool get_m_IsTriggerExpanded_0() const { return ___m_IsTriggerExpanded_0; }
	inline bool* get_address_of_m_IsTriggerExpanded_0() { return &___m_IsTriggerExpanded_0; }
	inline void set_m_IsTriggerExpanded_0(bool value)
	{
		___m_IsTriggerExpanded_0 = value;
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_LifecycleEvent_2() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_LifecycleEvent_2)); }
	inline int32_t get_m_LifecycleEvent_2() const { return ___m_LifecycleEvent_2; }
	inline int32_t* get_address_of_m_LifecycleEvent_2() { return &___m_LifecycleEvent_2; }
	inline void set_m_LifecycleEvent_2(int32_t value)
	{
		___m_LifecycleEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_ApplyRules_3() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_ApplyRules_3)); }
	inline bool get_m_ApplyRules_3() const { return ___m_ApplyRules_3; }
	inline bool* get_address_of_m_ApplyRules_3() { return &___m_ApplyRules_3; }
	inline void set_m_ApplyRules_3(bool value)
	{
		___m_ApplyRules_3 = value;
	}

	inline static int32_t get_offset_of_m_Rules_4() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Rules_4)); }
	inline TriggerListContainer_t2032715483 * get_m_Rules_4() const { return ___m_Rules_4; }
	inline TriggerListContainer_t2032715483 ** get_address_of_m_Rules_4() { return &___m_Rules_4; }
	inline void set_m_Rules_4(TriggerListContainer_t2032715483 * value)
	{
		___m_Rules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rules_4), value);
	}

	inline static int32_t get_offset_of_m_TriggerBool_5() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerBool_5)); }
	inline int32_t get_m_TriggerBool_5() const { return ___m_TriggerBool_5; }
	inline int32_t* get_address_of_m_TriggerBool_5() { return &___m_TriggerBool_5; }
	inline void set_m_TriggerBool_5(int32_t value)
	{
		___m_TriggerBool_5 = value;
	}

	inline static int32_t get_offset_of_m_InitTime_6() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_InitTime_6)); }
	inline float get_m_InitTime_6() const { return ___m_InitTime_6; }
	inline float* get_address_of_m_InitTime_6() { return &___m_InitTime_6; }
	inline void set_m_InitTime_6(float value)
	{
		___m_InitTime_6 = value;
	}

	inline static int32_t get_offset_of_m_RepeatTime_7() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_RepeatTime_7)); }
	inline float get_m_RepeatTime_7() const { return ___m_RepeatTime_7; }
	inline float* get_address_of_m_RepeatTime_7() { return &___m_RepeatTime_7; }
	inline void set_m_RepeatTime_7(float value)
	{
		___m_RepeatTime_7 = value;
	}

	inline static int32_t get_offset_of_m_Repetitions_8() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Repetitions_8)); }
	inline int32_t get_m_Repetitions_8() const { return ___m_Repetitions_8; }
	inline int32_t* get_address_of_m_Repetitions_8() { return &___m_Repetitions_8; }
	inline void set_m_Repetitions_8(int32_t value)
	{
		___m_Repetitions_8 = value;
	}

	inline static int32_t get_offset_of_repetitionCount_9() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___repetitionCount_9)); }
	inline int32_t get_repetitionCount_9() const { return ___repetitionCount_9; }
	inline int32_t* get_address_of_repetitionCount_9() { return &___repetitionCount_9; }
	inline void set_repetitionCount_9(int32_t value)
	{
		___repetitionCount_9 = value;
	}

	inline static int32_t get_offset_of_m_TriggerFunction_10() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_TriggerFunction_10)); }
	inline OnTrigger_t4184125570 * get_m_TriggerFunction_10() const { return ___m_TriggerFunction_10; }
	inline OnTrigger_t4184125570 ** get_address_of_m_TriggerFunction_10() { return &___m_TriggerFunction_10; }
	inline void set_m_TriggerFunction_10(OnTrigger_t4184125570 * value)
	{
		___m_TriggerFunction_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_TriggerFunction_10), value);
	}

	inline static int32_t get_offset_of_m_Method_11() { return static_cast<int32_t>(offsetof(EventTrigger_t2527451695, ___m_Method_11)); }
	inline TriggerMethod_t582536534 * get_m_Method_11() const { return ___m_Method_11; }
	inline TriggerMethod_t582536534 ** get_address_of_m_Method_11() { return &___m_Method_11; }
	inline void set_m_Method_11(TriggerMethod_t582536534 * value)
	{
		___m_Method_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Method_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T2527451695_H
#ifndef TRIGGERRULE_T1946298321_H
#define TRIGGERRULE_T1946298321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.TriggerRule
struct  TriggerRule_t1946298321  : public RuntimeObject
{
public:
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t1772682203 * ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_t1868393739 * ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_t1868393739 * ___m_Value2_3;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Target_0)); }
	inline TrackableField_t1772682203 * get_m_Target_0() const { return ___m_Target_0; }
	inline TrackableField_t1772682203 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(TrackableField_t1772682203 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_Operator_1() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Operator_1)); }
	inline int32_t get_m_Operator_1() const { return ___m_Operator_1; }
	inline int32_t* get_address_of_m_Operator_1() { return &___m_Operator_1; }
	inline void set_m_Operator_1(int32_t value)
	{
		___m_Operator_1 = value;
	}

	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value_2)); }
	inline ValueProperty_t1868393739 * get_m_Value_2() const { return ___m_Value_2; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(ValueProperty_t1868393739 * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value_2), value);
	}

	inline static int32_t get_offset_of_m_Value2_3() { return static_cast<int32_t>(offsetof(TriggerRule_t1946298321, ___m_Value2_3)); }
	inline ValueProperty_t1868393739 * get_m_Value2_3() const { return ___m_Value2_3; }
	inline ValueProperty_t1868393739 ** get_address_of_m_Value2_3() { return &___m_Value2_3; }
	inline void set_m_Value2_3(ValueProperty_t1868393739 * value)
	{
		___m_Value2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Value2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGERRULE_T1946298321_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ONTRIGGER_T4184125570_H
#define ONTRIGGER_T4184125570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct  OnTrigger_t4184125570  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONTRIGGER_T4184125570_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSCRIPT_T813048017_H
#define AUDIOSCRIPT_T813048017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// audioScript
struct  audioScript_t813048017  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource audioScript::audio
	AudioSource_t3935305588 * ___audio_4;
	// UnityEngine.AudioClip audioScript::musicClipLoop
	AudioClip_t3680889665 * ___musicClipLoop_5;
	// UnityEngine.AudioClip audioScript::musicClipIntro
	AudioClip_t3680889665 * ___musicClipIntro_6;
	// System.Int32 audioScript::playState
	int32_t ___playState_7;

public:
	inline static int32_t get_offset_of_audio_4() { return static_cast<int32_t>(offsetof(audioScript_t813048017, ___audio_4)); }
	inline AudioSource_t3935305588 * get_audio_4() const { return ___audio_4; }
	inline AudioSource_t3935305588 ** get_address_of_audio_4() { return &___audio_4; }
	inline void set_audio_4(AudioSource_t3935305588 * value)
	{
		___audio_4 = value;
		Il2CppCodeGenWriteBarrier((&___audio_4), value);
	}

	inline static int32_t get_offset_of_musicClipLoop_5() { return static_cast<int32_t>(offsetof(audioScript_t813048017, ___musicClipLoop_5)); }
	inline AudioClip_t3680889665 * get_musicClipLoop_5() const { return ___musicClipLoop_5; }
	inline AudioClip_t3680889665 ** get_address_of_musicClipLoop_5() { return &___musicClipLoop_5; }
	inline void set_musicClipLoop_5(AudioClip_t3680889665 * value)
	{
		___musicClipLoop_5 = value;
		Il2CppCodeGenWriteBarrier((&___musicClipLoop_5), value);
	}

	inline static int32_t get_offset_of_musicClipIntro_6() { return static_cast<int32_t>(offsetof(audioScript_t813048017, ___musicClipIntro_6)); }
	inline AudioClip_t3680889665 * get_musicClipIntro_6() const { return ___musicClipIntro_6; }
	inline AudioClip_t3680889665 ** get_address_of_musicClipIntro_6() { return &___musicClipIntro_6; }
	inline void set_musicClipIntro_6(AudioClip_t3680889665 * value)
	{
		___musicClipIntro_6 = value;
		Il2CppCodeGenWriteBarrier((&___musicClipIntro_6), value);
	}

	inline static int32_t get_offset_of_playState_7() { return static_cast<int32_t>(offsetof(audioScript_t813048017, ___playState_7)); }
	inline int32_t get_playState_7() const { return ___playState_7; }
	inline int32_t* get_address_of_playState_7() { return &___playState_7; }
	inline void set_playState_7(int32_t value)
	{
		___playState_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSCRIPT_T813048017_H
#ifndef AUTORESIZESCRIPT_T3319903757_H
#define AUTORESIZESCRIPT_T3319903757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// autoresizeScript
struct  autoresizeScript_t3319903757  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESIZESCRIPT_T3319903757_H
#ifndef BLACKWALLWORKAROUNDSCRIPT_T2860277821_H
#define BLACKWALLWORKAROUNDSCRIPT_T2860277821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// blackWallWorkaroundScript
struct  blackWallWorkaroundScript_t2860277821  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean blackWallWorkaroundScript::show
	bool ___show_4;
	// System.Boolean blackWallWorkaroundScript::mouseOver
	bool ___mouseOver_5;

public:
	inline static int32_t get_offset_of_show_4() { return static_cast<int32_t>(offsetof(blackWallWorkaroundScript_t2860277821, ___show_4)); }
	inline bool get_show_4() const { return ___show_4; }
	inline bool* get_address_of_show_4() { return &___show_4; }
	inline void set_show_4(bool value)
	{
		___show_4 = value;
	}

	inline static int32_t get_offset_of_mouseOver_5() { return static_cast<int32_t>(offsetof(blackWallWorkaroundScript_t2860277821, ___mouseOver_5)); }
	inline bool get_mouseOver_5() const { return ___mouseOver_5; }
	inline bool* get_address_of_mouseOver_5() { return &___mouseOver_5; }
	inline void set_mouseOver_5(bool value)
	{
		___mouseOver_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLACKWALLWORKAROUNDSCRIPT_T2860277821_H
#ifndef BUTTONSCRIPT_T4057655186_H
#define BUTTONSCRIPT_T4057655186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// buttonScript
struct  buttonScript_t4057655186  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONSCRIPT_T4057655186_H
#ifndef FILEREADERFORVICTEXTBOX_T2114072475_H
#define FILEREADERFORVICTEXTBOX_T2114072475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fileReaderForVicTextBox
struct  fileReaderForVicTextBox_t2114072475  : public MonoBehaviour_t3962482529
{
public:
	// System.String fileReaderForVicTextBox::path
	String_t* ___path_4;
	// System.String[] fileReaderForVicTextBox::lines
	StringU5BU5D_t1281789340* ___lines_5;

public:
	inline static int32_t get_offset_of_path_4() { return static_cast<int32_t>(offsetof(fileReaderForVicTextBox_t2114072475, ___path_4)); }
	inline String_t* get_path_4() const { return ___path_4; }
	inline String_t** get_address_of_path_4() { return &___path_4; }
	inline void set_path_4(String_t* value)
	{
		___path_4 = value;
		Il2CppCodeGenWriteBarrier((&___path_4), value);
	}

	inline static int32_t get_offset_of_lines_5() { return static_cast<int32_t>(offsetof(fileReaderForVicTextBox_t2114072475, ___lines_5)); }
	inline StringU5BU5D_t1281789340* get_lines_5() const { return ___lines_5; }
	inline StringU5BU5D_t1281789340** get_address_of_lines_5() { return &___lines_5; }
	inline void set_lines_5(StringU5BU5D_t1281789340* value)
	{
		___lines_5 = value;
		Il2CppCodeGenWriteBarrier((&___lines_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEREADERFORVICTEXTBOX_T2114072475_H
#ifndef HANDLETEXTFILESCRIPT_T2963054687_H
#define HANDLETEXTFILESCRIPT_T2963054687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// handleTextfileScript
struct  handleTextfileScript_t2963054687  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLETEXTFILESCRIPT_T2963054687_H
#ifndef HEALTHSCRIPT_T3050120050_H
#define HEALTHSCRIPT_T3050120050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// healthScript
struct  healthScript_t3050120050  : public MonoBehaviour_t3962482529
{
public:
	// System.Single healthScript::posX
	float ___posX_4;
	// System.Single healthScript::posY
	float ___posY_5;
	// System.Int32 healthScript::hp
	int32_t ___hp_6;
	// System.Single healthScript::xScale
	float ___xScale_7;
	// System.Single healthScript::yScale
	float ___yScale_8;
	// mainScript healthScript::mainScript
	mainScript_t2576383752 * ___mainScript_9;

public:
	inline static int32_t get_offset_of_posX_4() { return static_cast<int32_t>(offsetof(healthScript_t3050120050, ___posX_4)); }
	inline float get_posX_4() const { return ___posX_4; }
	inline float* get_address_of_posX_4() { return &___posX_4; }
	inline void set_posX_4(float value)
	{
		___posX_4 = value;
	}

	inline static int32_t get_offset_of_posY_5() { return static_cast<int32_t>(offsetof(healthScript_t3050120050, ___posY_5)); }
	inline float get_posY_5() const { return ___posY_5; }
	inline float* get_address_of_posY_5() { return &___posY_5; }
	inline void set_posY_5(float value)
	{
		___posY_5 = value;
	}

	inline static int32_t get_offset_of_hp_6() { return static_cast<int32_t>(offsetof(healthScript_t3050120050, ___hp_6)); }
	inline int32_t get_hp_6() const { return ___hp_6; }
	inline int32_t* get_address_of_hp_6() { return &___hp_6; }
	inline void set_hp_6(int32_t value)
	{
		___hp_6 = value;
	}

	inline static int32_t get_offset_of_xScale_7() { return static_cast<int32_t>(offsetof(healthScript_t3050120050, ___xScale_7)); }
	inline float get_xScale_7() const { return ___xScale_7; }
	inline float* get_address_of_xScale_7() { return &___xScale_7; }
	inline void set_xScale_7(float value)
	{
		___xScale_7 = value;
	}

	inline static int32_t get_offset_of_yScale_8() { return static_cast<int32_t>(offsetof(healthScript_t3050120050, ___yScale_8)); }
	inline float get_yScale_8() const { return ___yScale_8; }
	inline float* get_address_of_yScale_8() { return &___yScale_8; }
	inline void set_yScale_8(float value)
	{
		___yScale_8 = value;
	}

	inline static int32_t get_offset_of_mainScript_9() { return static_cast<int32_t>(offsetof(healthScript_t3050120050, ___mainScript_9)); }
	inline mainScript_t2576383752 * get_mainScript_9() const { return ___mainScript_9; }
	inline mainScript_t2576383752 ** get_address_of_mainScript_9() { return &___mainScript_9; }
	inline void set_mainScript_9(mainScript_t2576383752 * value)
	{
		___mainScript_9 = value;
		Il2CppCodeGenWriteBarrier((&___mainScript_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEALTHSCRIPT_T3050120050_H
#ifndef MAINSCRIPT_T2576383752_H
#define MAINSCRIPT_T2576383752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mainScript
struct  mainScript_t2576383752  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject mainScript::Shadow
	GameObject_t1113636619 * ___Shadow_4;
	// UnityEngine.GameObject mainScript::Platform
	GameObject_t1113636619 * ___Platform_5;
	// UnityEngine.GameObject mainScript::ShadowClone0
	GameObject_t1113636619 * ___ShadowClone0_6;
	// UnityEngine.GameObject mainScript::ShadowClone1
	GameObject_t1113636619 * ___ShadowClone1_7;
	// UnityEngine.GameObject mainScript::ShadowClone2
	GameObject_t1113636619 * ___ShadowClone2_8;
	// UnityEngine.GameObject mainScript::ShadowClone3
	GameObject_t1113636619 * ___ShadowClone3_9;
	// shadowScript mainScript::SCS0
	shadowScript_t3441766022 * ___SCS0_10;
	// shadowScript mainScript::SCS1
	shadowScript_t3441766022 * ___SCS1_11;
	// shadowScript mainScript::SCS2
	shadowScript_t3441766022 * ___SCS2_12;
	// shadowScript mainScript::SCS3
	shadowScript_t3441766022 * ___SCS3_13;
	// shadowScript mainScript::SendDataTempVar
	shadowScript_t3441766022 * ___SendDataTempVar_14;
	// System.Random mainScript::rand
	Random_t108471755 * ___rand_15;
	// System.Collections.Generic.List`1<System.String> mainScript::shadowClones
	List_1_t3319525431 * ___shadowClones_16;
	// System.Int32 mainScript::operatorKey
	int32_t ___operatorKey_17;
	// System.Int32 mainScript::numberOne
	int32_t ___numberOne_18;
	// System.Int32 mainScript::numberTwo
	int32_t ___numberTwo_19;
	// System.Int32 mainScript::solution
	int32_t ___solution_20;
	// System.Int32 mainScript::solutionShadow
	int32_t ___solutionShadow_21;
	// System.String mainScript::questionString
	String_t* ___questionString_22;
	// System.Int32 mainScript::internalScore
	int32_t ___internalScore_23;
	// System.Int32 mainScript::totalScore
	int32_t ___totalScore_24;
	// System.Int32 mainScript::health
	int32_t ___health_25;
	// System.Int32 mainScript::damage
	int32_t ___damage_26;
	// System.Int32 mainScript::noRepeats
	int32_t ___noRepeats_27;
	// System.Boolean mainScript::toClick
	bool ___toClick_28;
	// System.Int32 mainScript::givenType
	int32_t ___givenType_29;
	// System.Boolean mainScript::onRun
	bool ___onRun_30;
	// System.Int32 mainScript::hideCount
	int32_t ___hideCount_31;
	// System.Int32 mainScript::hiddenCount
	int32_t ___hiddenCount_32;
	// System.Int32 mainScript::abilityOneCharge
	int32_t ___abilityOneCharge_33;
	// System.Int32 mainScript::abilityOneSlider
	int32_t ___abilityOneSlider_34;
	// UnityEngine.GameObject mainScript::bpworkaround
	GameObject_t1113636619 * ___bpworkaround_35;
	// TMPro.TextMeshProUGUI mainScript::victoryScreenText
	TextMeshProUGUI_t529313277 * ___victoryScreenText_36;

public:
	inline static int32_t get_offset_of_Shadow_4() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___Shadow_4)); }
	inline GameObject_t1113636619 * get_Shadow_4() const { return ___Shadow_4; }
	inline GameObject_t1113636619 ** get_address_of_Shadow_4() { return &___Shadow_4; }
	inline void set_Shadow_4(GameObject_t1113636619 * value)
	{
		___Shadow_4 = value;
		Il2CppCodeGenWriteBarrier((&___Shadow_4), value);
	}

	inline static int32_t get_offset_of_Platform_5() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___Platform_5)); }
	inline GameObject_t1113636619 * get_Platform_5() const { return ___Platform_5; }
	inline GameObject_t1113636619 ** get_address_of_Platform_5() { return &___Platform_5; }
	inline void set_Platform_5(GameObject_t1113636619 * value)
	{
		___Platform_5 = value;
		Il2CppCodeGenWriteBarrier((&___Platform_5), value);
	}

	inline static int32_t get_offset_of_ShadowClone0_6() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___ShadowClone0_6)); }
	inline GameObject_t1113636619 * get_ShadowClone0_6() const { return ___ShadowClone0_6; }
	inline GameObject_t1113636619 ** get_address_of_ShadowClone0_6() { return &___ShadowClone0_6; }
	inline void set_ShadowClone0_6(GameObject_t1113636619 * value)
	{
		___ShadowClone0_6 = value;
		Il2CppCodeGenWriteBarrier((&___ShadowClone0_6), value);
	}

	inline static int32_t get_offset_of_ShadowClone1_7() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___ShadowClone1_7)); }
	inline GameObject_t1113636619 * get_ShadowClone1_7() const { return ___ShadowClone1_7; }
	inline GameObject_t1113636619 ** get_address_of_ShadowClone1_7() { return &___ShadowClone1_7; }
	inline void set_ShadowClone1_7(GameObject_t1113636619 * value)
	{
		___ShadowClone1_7 = value;
		Il2CppCodeGenWriteBarrier((&___ShadowClone1_7), value);
	}

	inline static int32_t get_offset_of_ShadowClone2_8() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___ShadowClone2_8)); }
	inline GameObject_t1113636619 * get_ShadowClone2_8() const { return ___ShadowClone2_8; }
	inline GameObject_t1113636619 ** get_address_of_ShadowClone2_8() { return &___ShadowClone2_8; }
	inline void set_ShadowClone2_8(GameObject_t1113636619 * value)
	{
		___ShadowClone2_8 = value;
		Il2CppCodeGenWriteBarrier((&___ShadowClone2_8), value);
	}

	inline static int32_t get_offset_of_ShadowClone3_9() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___ShadowClone3_9)); }
	inline GameObject_t1113636619 * get_ShadowClone3_9() const { return ___ShadowClone3_9; }
	inline GameObject_t1113636619 ** get_address_of_ShadowClone3_9() { return &___ShadowClone3_9; }
	inline void set_ShadowClone3_9(GameObject_t1113636619 * value)
	{
		___ShadowClone3_9 = value;
		Il2CppCodeGenWriteBarrier((&___ShadowClone3_9), value);
	}

	inline static int32_t get_offset_of_SCS0_10() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___SCS0_10)); }
	inline shadowScript_t3441766022 * get_SCS0_10() const { return ___SCS0_10; }
	inline shadowScript_t3441766022 ** get_address_of_SCS0_10() { return &___SCS0_10; }
	inline void set_SCS0_10(shadowScript_t3441766022 * value)
	{
		___SCS0_10 = value;
		Il2CppCodeGenWriteBarrier((&___SCS0_10), value);
	}

	inline static int32_t get_offset_of_SCS1_11() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___SCS1_11)); }
	inline shadowScript_t3441766022 * get_SCS1_11() const { return ___SCS1_11; }
	inline shadowScript_t3441766022 ** get_address_of_SCS1_11() { return &___SCS1_11; }
	inline void set_SCS1_11(shadowScript_t3441766022 * value)
	{
		___SCS1_11 = value;
		Il2CppCodeGenWriteBarrier((&___SCS1_11), value);
	}

	inline static int32_t get_offset_of_SCS2_12() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___SCS2_12)); }
	inline shadowScript_t3441766022 * get_SCS2_12() const { return ___SCS2_12; }
	inline shadowScript_t3441766022 ** get_address_of_SCS2_12() { return &___SCS2_12; }
	inline void set_SCS2_12(shadowScript_t3441766022 * value)
	{
		___SCS2_12 = value;
		Il2CppCodeGenWriteBarrier((&___SCS2_12), value);
	}

	inline static int32_t get_offset_of_SCS3_13() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___SCS3_13)); }
	inline shadowScript_t3441766022 * get_SCS3_13() const { return ___SCS3_13; }
	inline shadowScript_t3441766022 ** get_address_of_SCS3_13() { return &___SCS3_13; }
	inline void set_SCS3_13(shadowScript_t3441766022 * value)
	{
		___SCS3_13 = value;
		Il2CppCodeGenWriteBarrier((&___SCS3_13), value);
	}

	inline static int32_t get_offset_of_SendDataTempVar_14() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___SendDataTempVar_14)); }
	inline shadowScript_t3441766022 * get_SendDataTempVar_14() const { return ___SendDataTempVar_14; }
	inline shadowScript_t3441766022 ** get_address_of_SendDataTempVar_14() { return &___SendDataTempVar_14; }
	inline void set_SendDataTempVar_14(shadowScript_t3441766022 * value)
	{
		___SendDataTempVar_14 = value;
		Il2CppCodeGenWriteBarrier((&___SendDataTempVar_14), value);
	}

	inline static int32_t get_offset_of_rand_15() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___rand_15)); }
	inline Random_t108471755 * get_rand_15() const { return ___rand_15; }
	inline Random_t108471755 ** get_address_of_rand_15() { return &___rand_15; }
	inline void set_rand_15(Random_t108471755 * value)
	{
		___rand_15 = value;
		Il2CppCodeGenWriteBarrier((&___rand_15), value);
	}

	inline static int32_t get_offset_of_shadowClones_16() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___shadowClones_16)); }
	inline List_1_t3319525431 * get_shadowClones_16() const { return ___shadowClones_16; }
	inline List_1_t3319525431 ** get_address_of_shadowClones_16() { return &___shadowClones_16; }
	inline void set_shadowClones_16(List_1_t3319525431 * value)
	{
		___shadowClones_16 = value;
		Il2CppCodeGenWriteBarrier((&___shadowClones_16), value);
	}

	inline static int32_t get_offset_of_operatorKey_17() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___operatorKey_17)); }
	inline int32_t get_operatorKey_17() const { return ___operatorKey_17; }
	inline int32_t* get_address_of_operatorKey_17() { return &___operatorKey_17; }
	inline void set_operatorKey_17(int32_t value)
	{
		___operatorKey_17 = value;
	}

	inline static int32_t get_offset_of_numberOne_18() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___numberOne_18)); }
	inline int32_t get_numberOne_18() const { return ___numberOne_18; }
	inline int32_t* get_address_of_numberOne_18() { return &___numberOne_18; }
	inline void set_numberOne_18(int32_t value)
	{
		___numberOne_18 = value;
	}

	inline static int32_t get_offset_of_numberTwo_19() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___numberTwo_19)); }
	inline int32_t get_numberTwo_19() const { return ___numberTwo_19; }
	inline int32_t* get_address_of_numberTwo_19() { return &___numberTwo_19; }
	inline void set_numberTwo_19(int32_t value)
	{
		___numberTwo_19 = value;
	}

	inline static int32_t get_offset_of_solution_20() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___solution_20)); }
	inline int32_t get_solution_20() const { return ___solution_20; }
	inline int32_t* get_address_of_solution_20() { return &___solution_20; }
	inline void set_solution_20(int32_t value)
	{
		___solution_20 = value;
	}

	inline static int32_t get_offset_of_solutionShadow_21() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___solutionShadow_21)); }
	inline int32_t get_solutionShadow_21() const { return ___solutionShadow_21; }
	inline int32_t* get_address_of_solutionShadow_21() { return &___solutionShadow_21; }
	inline void set_solutionShadow_21(int32_t value)
	{
		___solutionShadow_21 = value;
	}

	inline static int32_t get_offset_of_questionString_22() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___questionString_22)); }
	inline String_t* get_questionString_22() const { return ___questionString_22; }
	inline String_t** get_address_of_questionString_22() { return &___questionString_22; }
	inline void set_questionString_22(String_t* value)
	{
		___questionString_22 = value;
		Il2CppCodeGenWriteBarrier((&___questionString_22), value);
	}

	inline static int32_t get_offset_of_internalScore_23() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___internalScore_23)); }
	inline int32_t get_internalScore_23() const { return ___internalScore_23; }
	inline int32_t* get_address_of_internalScore_23() { return &___internalScore_23; }
	inline void set_internalScore_23(int32_t value)
	{
		___internalScore_23 = value;
	}

	inline static int32_t get_offset_of_totalScore_24() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___totalScore_24)); }
	inline int32_t get_totalScore_24() const { return ___totalScore_24; }
	inline int32_t* get_address_of_totalScore_24() { return &___totalScore_24; }
	inline void set_totalScore_24(int32_t value)
	{
		___totalScore_24 = value;
	}

	inline static int32_t get_offset_of_health_25() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___health_25)); }
	inline int32_t get_health_25() const { return ___health_25; }
	inline int32_t* get_address_of_health_25() { return &___health_25; }
	inline void set_health_25(int32_t value)
	{
		___health_25 = value;
	}

	inline static int32_t get_offset_of_damage_26() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___damage_26)); }
	inline int32_t get_damage_26() const { return ___damage_26; }
	inline int32_t* get_address_of_damage_26() { return &___damage_26; }
	inline void set_damage_26(int32_t value)
	{
		___damage_26 = value;
	}

	inline static int32_t get_offset_of_noRepeats_27() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___noRepeats_27)); }
	inline int32_t get_noRepeats_27() const { return ___noRepeats_27; }
	inline int32_t* get_address_of_noRepeats_27() { return &___noRepeats_27; }
	inline void set_noRepeats_27(int32_t value)
	{
		___noRepeats_27 = value;
	}

	inline static int32_t get_offset_of_toClick_28() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___toClick_28)); }
	inline bool get_toClick_28() const { return ___toClick_28; }
	inline bool* get_address_of_toClick_28() { return &___toClick_28; }
	inline void set_toClick_28(bool value)
	{
		___toClick_28 = value;
	}

	inline static int32_t get_offset_of_givenType_29() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___givenType_29)); }
	inline int32_t get_givenType_29() const { return ___givenType_29; }
	inline int32_t* get_address_of_givenType_29() { return &___givenType_29; }
	inline void set_givenType_29(int32_t value)
	{
		___givenType_29 = value;
	}

	inline static int32_t get_offset_of_onRun_30() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___onRun_30)); }
	inline bool get_onRun_30() const { return ___onRun_30; }
	inline bool* get_address_of_onRun_30() { return &___onRun_30; }
	inline void set_onRun_30(bool value)
	{
		___onRun_30 = value;
	}

	inline static int32_t get_offset_of_hideCount_31() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___hideCount_31)); }
	inline int32_t get_hideCount_31() const { return ___hideCount_31; }
	inline int32_t* get_address_of_hideCount_31() { return &___hideCount_31; }
	inline void set_hideCount_31(int32_t value)
	{
		___hideCount_31 = value;
	}

	inline static int32_t get_offset_of_hiddenCount_32() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___hiddenCount_32)); }
	inline int32_t get_hiddenCount_32() const { return ___hiddenCount_32; }
	inline int32_t* get_address_of_hiddenCount_32() { return &___hiddenCount_32; }
	inline void set_hiddenCount_32(int32_t value)
	{
		___hiddenCount_32 = value;
	}

	inline static int32_t get_offset_of_abilityOneCharge_33() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___abilityOneCharge_33)); }
	inline int32_t get_abilityOneCharge_33() const { return ___abilityOneCharge_33; }
	inline int32_t* get_address_of_abilityOneCharge_33() { return &___abilityOneCharge_33; }
	inline void set_abilityOneCharge_33(int32_t value)
	{
		___abilityOneCharge_33 = value;
	}

	inline static int32_t get_offset_of_abilityOneSlider_34() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___abilityOneSlider_34)); }
	inline int32_t get_abilityOneSlider_34() const { return ___abilityOneSlider_34; }
	inline int32_t* get_address_of_abilityOneSlider_34() { return &___abilityOneSlider_34; }
	inline void set_abilityOneSlider_34(int32_t value)
	{
		___abilityOneSlider_34 = value;
	}

	inline static int32_t get_offset_of_bpworkaround_35() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___bpworkaround_35)); }
	inline GameObject_t1113636619 * get_bpworkaround_35() const { return ___bpworkaround_35; }
	inline GameObject_t1113636619 ** get_address_of_bpworkaround_35() { return &___bpworkaround_35; }
	inline void set_bpworkaround_35(GameObject_t1113636619 * value)
	{
		___bpworkaround_35 = value;
		Il2CppCodeGenWriteBarrier((&___bpworkaround_35), value);
	}

	inline static int32_t get_offset_of_victoryScreenText_36() { return static_cast<int32_t>(offsetof(mainScript_t2576383752, ___victoryScreenText_36)); }
	inline TextMeshProUGUI_t529313277 * get_victoryScreenText_36() const { return ___victoryScreenText_36; }
	inline TextMeshProUGUI_t529313277 ** get_address_of_victoryScreenText_36() { return &___victoryScreenText_36; }
	inline void set_victoryScreenText_36(TextMeshProUGUI_t529313277 * value)
	{
		___victoryScreenText_36 = value;
		Il2CppCodeGenWriteBarrier((&___victoryScreenText_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINSCRIPT_T2576383752_H
#ifndef PLATFORMSCRIPT_T2304018581_H
#define PLATFORMSCRIPT_T2304018581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// platformScript
struct  platformScript_t2304018581  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer platformScript::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_4;
	// UnityEngine.Color platformScript::colour
	Color_t2555686324  ___colour_5;

public:
	inline static int32_t get_offset_of_spriteRenderer_4() { return static_cast<int32_t>(offsetof(platformScript_t2304018581, ___spriteRenderer_4)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_4() const { return ___spriteRenderer_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_4() { return &___spriteRenderer_4; }
	inline void set_spriteRenderer_4(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_4), value);
	}

	inline static int32_t get_offset_of_colour_5() { return static_cast<int32_t>(offsetof(platformScript_t2304018581, ___colour_5)); }
	inline Color_t2555686324  get_colour_5() const { return ___colour_5; }
	inline Color_t2555686324 * get_address_of_colour_5() { return &___colour_5; }
	inline void set_colour_5(Color_t2555686324  value)
	{
		___colour_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMSCRIPT_T2304018581_H
#ifndef PLAYERSCRIPT_T1783615218_H
#define PLAYERSCRIPT_T1783615218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// playerScript
struct  playerScript_t1783615218  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator playerScript::anim
	Animator_t434523843 * ___anim_4;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(playerScript_t1783615218, ___anim_4)); }
	inline Animator_t434523843 * get_anim_4() const { return ___anim_4; }
	inline Animator_t434523843 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t434523843 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((&___anim_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERSCRIPT_T1783615218_H
#ifndef SHADOWSCRIPT_T3441766022_H
#define SHADOWSCRIPT_T3441766022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// shadowScript
struct  shadowScript_t3441766022  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 shadowScript::type
	int32_t ___type_4;
	// UnityEngine.GameObject shadowScript::myName
	GameObject_t1113636619 * ___myName_5;
	// System.Int32 shadowScript::answer
	int32_t ___answer_6;
	// System.Boolean shadowScript::mouseOver
	bool ___mouseOver_7;
	// UnityEngine.TextMesh shadowScript::textMesh
	TextMesh_t1536577757 * ___textMesh_8;
	// UnityEngine.Canvas shadowScript::myCanvas
	Canvas_t3310196443 * ___myCanvas_9;
	// UnityEngine.Sprite shadowScript::sprite0
	Sprite_t280657092 * ___sprite0_10;
	// UnityEngine.Sprite shadowScript::sprite1
	Sprite_t280657092 * ___sprite1_11;
	// UnityEngine.Sprite shadowScript::sprite2
	Sprite_t280657092 * ___sprite2_12;
	// UnityEngine.Sprite shadowScript::sprite3
	Sprite_t280657092 * ___sprite3_13;
	// UnityEngine.Sprite shadowScript::sprite4
	Sprite_t280657092 * ___sprite4_14;
	// UnityEngine.Sprite shadowScript::sprite5
	Sprite_t280657092 * ___sprite5_15;
	// UnityEngine.Sprite shadowScript::sprite6
	Sprite_t280657092 * ___sprite6_16;
	// UnityEngine.Sprite shadowScript::sprite7
	Sprite_t280657092 * ___sprite7_17;
	// UnityEngine.Sprite shadowScript::sprite8
	Sprite_t280657092 * ___sprite8_18;
	// UnityEngine.Sprite shadowScript::sprite9
	Sprite_t280657092 * ___sprite9_19;
	// System.Int32 shadowScript::animFrame
	int32_t ___animFrame_20;

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_myName_5() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___myName_5)); }
	inline GameObject_t1113636619 * get_myName_5() const { return ___myName_5; }
	inline GameObject_t1113636619 ** get_address_of_myName_5() { return &___myName_5; }
	inline void set_myName_5(GameObject_t1113636619 * value)
	{
		___myName_5 = value;
		Il2CppCodeGenWriteBarrier((&___myName_5), value);
	}

	inline static int32_t get_offset_of_answer_6() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___answer_6)); }
	inline int32_t get_answer_6() const { return ___answer_6; }
	inline int32_t* get_address_of_answer_6() { return &___answer_6; }
	inline void set_answer_6(int32_t value)
	{
		___answer_6 = value;
	}

	inline static int32_t get_offset_of_mouseOver_7() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___mouseOver_7)); }
	inline bool get_mouseOver_7() const { return ___mouseOver_7; }
	inline bool* get_address_of_mouseOver_7() { return &___mouseOver_7; }
	inline void set_mouseOver_7(bool value)
	{
		___mouseOver_7 = value;
	}

	inline static int32_t get_offset_of_textMesh_8() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___textMesh_8)); }
	inline TextMesh_t1536577757 * get_textMesh_8() const { return ___textMesh_8; }
	inline TextMesh_t1536577757 ** get_address_of_textMesh_8() { return &___textMesh_8; }
	inline void set_textMesh_8(TextMesh_t1536577757 * value)
	{
		___textMesh_8 = value;
		Il2CppCodeGenWriteBarrier((&___textMesh_8), value);
	}

	inline static int32_t get_offset_of_myCanvas_9() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___myCanvas_9)); }
	inline Canvas_t3310196443 * get_myCanvas_9() const { return ___myCanvas_9; }
	inline Canvas_t3310196443 ** get_address_of_myCanvas_9() { return &___myCanvas_9; }
	inline void set_myCanvas_9(Canvas_t3310196443 * value)
	{
		___myCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___myCanvas_9), value);
	}

	inline static int32_t get_offset_of_sprite0_10() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite0_10)); }
	inline Sprite_t280657092 * get_sprite0_10() const { return ___sprite0_10; }
	inline Sprite_t280657092 ** get_address_of_sprite0_10() { return &___sprite0_10; }
	inline void set_sprite0_10(Sprite_t280657092 * value)
	{
		___sprite0_10 = value;
		Il2CppCodeGenWriteBarrier((&___sprite0_10), value);
	}

	inline static int32_t get_offset_of_sprite1_11() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite1_11)); }
	inline Sprite_t280657092 * get_sprite1_11() const { return ___sprite1_11; }
	inline Sprite_t280657092 ** get_address_of_sprite1_11() { return &___sprite1_11; }
	inline void set_sprite1_11(Sprite_t280657092 * value)
	{
		___sprite1_11 = value;
		Il2CppCodeGenWriteBarrier((&___sprite1_11), value);
	}

	inline static int32_t get_offset_of_sprite2_12() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite2_12)); }
	inline Sprite_t280657092 * get_sprite2_12() const { return ___sprite2_12; }
	inline Sprite_t280657092 ** get_address_of_sprite2_12() { return &___sprite2_12; }
	inline void set_sprite2_12(Sprite_t280657092 * value)
	{
		___sprite2_12 = value;
		Il2CppCodeGenWriteBarrier((&___sprite2_12), value);
	}

	inline static int32_t get_offset_of_sprite3_13() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite3_13)); }
	inline Sprite_t280657092 * get_sprite3_13() const { return ___sprite3_13; }
	inline Sprite_t280657092 ** get_address_of_sprite3_13() { return &___sprite3_13; }
	inline void set_sprite3_13(Sprite_t280657092 * value)
	{
		___sprite3_13 = value;
		Il2CppCodeGenWriteBarrier((&___sprite3_13), value);
	}

	inline static int32_t get_offset_of_sprite4_14() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite4_14)); }
	inline Sprite_t280657092 * get_sprite4_14() const { return ___sprite4_14; }
	inline Sprite_t280657092 ** get_address_of_sprite4_14() { return &___sprite4_14; }
	inline void set_sprite4_14(Sprite_t280657092 * value)
	{
		___sprite4_14 = value;
		Il2CppCodeGenWriteBarrier((&___sprite4_14), value);
	}

	inline static int32_t get_offset_of_sprite5_15() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite5_15)); }
	inline Sprite_t280657092 * get_sprite5_15() const { return ___sprite5_15; }
	inline Sprite_t280657092 ** get_address_of_sprite5_15() { return &___sprite5_15; }
	inline void set_sprite5_15(Sprite_t280657092 * value)
	{
		___sprite5_15 = value;
		Il2CppCodeGenWriteBarrier((&___sprite5_15), value);
	}

	inline static int32_t get_offset_of_sprite6_16() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite6_16)); }
	inline Sprite_t280657092 * get_sprite6_16() const { return ___sprite6_16; }
	inline Sprite_t280657092 ** get_address_of_sprite6_16() { return &___sprite6_16; }
	inline void set_sprite6_16(Sprite_t280657092 * value)
	{
		___sprite6_16 = value;
		Il2CppCodeGenWriteBarrier((&___sprite6_16), value);
	}

	inline static int32_t get_offset_of_sprite7_17() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite7_17)); }
	inline Sprite_t280657092 * get_sprite7_17() const { return ___sprite7_17; }
	inline Sprite_t280657092 ** get_address_of_sprite7_17() { return &___sprite7_17; }
	inline void set_sprite7_17(Sprite_t280657092 * value)
	{
		___sprite7_17 = value;
		Il2CppCodeGenWriteBarrier((&___sprite7_17), value);
	}

	inline static int32_t get_offset_of_sprite8_18() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite8_18)); }
	inline Sprite_t280657092 * get_sprite8_18() const { return ___sprite8_18; }
	inline Sprite_t280657092 ** get_address_of_sprite8_18() { return &___sprite8_18; }
	inline void set_sprite8_18(Sprite_t280657092 * value)
	{
		___sprite8_18 = value;
		Il2CppCodeGenWriteBarrier((&___sprite8_18), value);
	}

	inline static int32_t get_offset_of_sprite9_19() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___sprite9_19)); }
	inline Sprite_t280657092 * get_sprite9_19() const { return ___sprite9_19; }
	inline Sprite_t280657092 ** get_address_of_sprite9_19() { return &___sprite9_19; }
	inline void set_sprite9_19(Sprite_t280657092 * value)
	{
		___sprite9_19 = value;
		Il2CppCodeGenWriteBarrier((&___sprite9_19), value);
	}

	inline static int32_t get_offset_of_animFrame_20() { return static_cast<int32_t>(offsetof(shadowScript_t3441766022, ___animFrame_20)); }
	inline int32_t get_animFrame_20() const { return ___animFrame_20; }
	inline int32_t* get_address_of_animFrame_20() { return &___animFrame_20; }
	inline void set_animFrame_20(int32_t value)
	{
		___animFrame_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOWSCRIPT_T3441766022_H
#ifndef SSBACKGROUNDSCRIPT_T1410928264_H
#define SSBACKGROUNDSCRIPT_T1410928264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ssBackgroundScript
struct  ssBackgroundScript_t1410928264  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSBACKGROUNDSCRIPT_T1410928264_H
#ifndef TEXTBOXSCRIPT_T653516986_H
#define TEXTBOXSCRIPT_T653516986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// textBoxScript
struct  textBoxScript_t653516986  : public MonoBehaviour_t3962482529
{
public:
	// System.String textBoxScript::text
	String_t* ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(textBoxScript_t653516986, ___text_4)); }
	inline String_t* get_text_4() const { return ___text_4; }
	inline String_t** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(String_t* value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((&___text_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTBOXSCRIPT_T653516986_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (TriggerListContainer_t2032715483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2200[1] = 
{
	TriggerListContainer_t2032715483::get_offset_of_m_Rules_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (EventTrigger_t2527451695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2201[12] = 
{
	EventTrigger_t2527451695::get_offset_of_m_IsTriggerExpanded_0(),
	EventTrigger_t2527451695::get_offset_of_m_Type_1(),
	EventTrigger_t2527451695::get_offset_of_m_LifecycleEvent_2(),
	EventTrigger_t2527451695::get_offset_of_m_ApplyRules_3(),
	EventTrigger_t2527451695::get_offset_of_m_Rules_4(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerBool_5(),
	EventTrigger_t2527451695::get_offset_of_m_InitTime_6(),
	EventTrigger_t2527451695::get_offset_of_m_RepeatTime_7(),
	EventTrigger_t2527451695::get_offset_of_m_Repetitions_8(),
	EventTrigger_t2527451695::get_offset_of_repetitionCount_9(),
	EventTrigger_t2527451695::get_offset_of_m_TriggerFunction_10(),
	EventTrigger_t2527451695::get_offset_of_m_Method_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (OnTrigger_t4184125570), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (TrackableTrigger_t621205209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2203[2] = 
{
	TrackableTrigger_t621205209::get_offset_of_m_Target_0(),
	TrackableTrigger_t621205209::get_offset_of_m_MethodPath_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (TriggerMethod_t582536534), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (TriggerRule_t1946298321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2205[4] = 
{
	TriggerRule_t1946298321::get_offset_of_m_Target_0(),
	TriggerRule_t1946298321::get_offset_of_m_Operator_1(),
	TriggerRule_t1946298321::get_offset_of_m_Value_2(),
	TriggerRule_t1946298321::get_offset_of_m_Value2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (U3CModuleU3E_t692745545), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (autoresizeScript_t3319903757), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (blackWallWorkaroundScript_t2860277821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2208[2] = 
{
	blackWallWorkaroundScript_t2860277821::get_offset_of_show_4(),
	blackWallWorkaroundScript_t2860277821::get_offset_of_mouseOver_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (fileReaderForVicTextBox_t2114072475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2209[2] = 
{
	fileReaderForVicTextBox_t2114072475::get_offset_of_path_4(),
	fileReaderForVicTextBox_t2114072475::get_offset_of_lines_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (audioScript_t813048017), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2210[4] = 
{
	audioScript_t813048017::get_offset_of_audio_4(),
	audioScript_t813048017::get_offset_of_musicClipLoop_5(),
	audioScript_t813048017::get_offset_of_musicClipIntro_6(),
	audioScript_t813048017::get_offset_of_playState_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (buttonScript_t4057655186), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (handleTextfileScript_t2963054687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (healthScript_t3050120050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[6] = 
{
	healthScript_t3050120050::get_offset_of_posX_4(),
	healthScript_t3050120050::get_offset_of_posY_5(),
	healthScript_t3050120050::get_offset_of_hp_6(),
	healthScript_t3050120050::get_offset_of_xScale_7(),
	healthScript_t3050120050::get_offset_of_yScale_8(),
	healthScript_t3050120050::get_offset_of_mainScript_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (mainScript_t2576383752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2214[33] = 
{
	mainScript_t2576383752::get_offset_of_Shadow_4(),
	mainScript_t2576383752::get_offset_of_Platform_5(),
	mainScript_t2576383752::get_offset_of_ShadowClone0_6(),
	mainScript_t2576383752::get_offset_of_ShadowClone1_7(),
	mainScript_t2576383752::get_offset_of_ShadowClone2_8(),
	mainScript_t2576383752::get_offset_of_ShadowClone3_9(),
	mainScript_t2576383752::get_offset_of_SCS0_10(),
	mainScript_t2576383752::get_offset_of_SCS1_11(),
	mainScript_t2576383752::get_offset_of_SCS2_12(),
	mainScript_t2576383752::get_offset_of_SCS3_13(),
	mainScript_t2576383752::get_offset_of_SendDataTempVar_14(),
	mainScript_t2576383752::get_offset_of_rand_15(),
	mainScript_t2576383752::get_offset_of_shadowClones_16(),
	mainScript_t2576383752::get_offset_of_operatorKey_17(),
	mainScript_t2576383752::get_offset_of_numberOne_18(),
	mainScript_t2576383752::get_offset_of_numberTwo_19(),
	mainScript_t2576383752::get_offset_of_solution_20(),
	mainScript_t2576383752::get_offset_of_solutionShadow_21(),
	mainScript_t2576383752::get_offset_of_questionString_22(),
	mainScript_t2576383752::get_offset_of_internalScore_23(),
	mainScript_t2576383752::get_offset_of_totalScore_24(),
	mainScript_t2576383752::get_offset_of_health_25(),
	mainScript_t2576383752::get_offset_of_damage_26(),
	mainScript_t2576383752::get_offset_of_noRepeats_27(),
	mainScript_t2576383752::get_offset_of_toClick_28(),
	mainScript_t2576383752::get_offset_of_givenType_29(),
	mainScript_t2576383752::get_offset_of_onRun_30(),
	mainScript_t2576383752::get_offset_of_hideCount_31(),
	mainScript_t2576383752::get_offset_of_hiddenCount_32(),
	mainScript_t2576383752::get_offset_of_abilityOneCharge_33(),
	mainScript_t2576383752::get_offset_of_abilityOneSlider_34(),
	mainScript_t2576383752::get_offset_of_bpworkaround_35(),
	mainScript_t2576383752::get_offset_of_victoryScreenText_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (platformScript_t2304018581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2215[2] = 
{
	platformScript_t2304018581::get_offset_of_spriteRenderer_4(),
	platformScript_t2304018581::get_offset_of_colour_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (playerScript_t1783615218), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2216[1] = 
{
	playerScript_t1783615218::get_offset_of_anim_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (shadowScript_t3441766022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2217[17] = 
{
	shadowScript_t3441766022::get_offset_of_type_4(),
	shadowScript_t3441766022::get_offset_of_myName_5(),
	shadowScript_t3441766022::get_offset_of_answer_6(),
	shadowScript_t3441766022::get_offset_of_mouseOver_7(),
	shadowScript_t3441766022::get_offset_of_textMesh_8(),
	shadowScript_t3441766022::get_offset_of_myCanvas_9(),
	shadowScript_t3441766022::get_offset_of_sprite0_10(),
	shadowScript_t3441766022::get_offset_of_sprite1_11(),
	shadowScript_t3441766022::get_offset_of_sprite2_12(),
	shadowScript_t3441766022::get_offset_of_sprite3_13(),
	shadowScript_t3441766022::get_offset_of_sprite4_14(),
	shadowScript_t3441766022::get_offset_of_sprite5_15(),
	shadowScript_t3441766022::get_offset_of_sprite6_16(),
	shadowScript_t3441766022::get_offset_of_sprite7_17(),
	shadowScript_t3441766022::get_offset_of_sprite8_18(),
	shadowScript_t3441766022::get_offset_of_sprite9_19(),
	shadowScript_t3441766022::get_offset_of_animFrame_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (textBoxScript_t653516986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2218[1] = 
{
	textBoxScript_t653516986::get_offset_of_text_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (ssBackgroundScript_t1410928264), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
