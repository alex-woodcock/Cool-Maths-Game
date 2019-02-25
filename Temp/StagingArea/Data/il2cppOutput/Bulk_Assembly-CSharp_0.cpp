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

// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Random
struct Random_t108471755;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t648826345;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t1930184704;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t3678055768;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2496920137;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t364381626;
// TMPro.TMP_Glyph
struct TMP_Glyph_t581847833;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2836635477;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t484820633;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_t3119380694;
// TMPro.TMP_Text
struct TMP_Text_t2599618874;
// TMPro.TMP_TextElement
struct TMP_TextElement_t129727469;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t3598145122;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t3552942253;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t529313277;
// TMPro.XML_TagAttribute[]
struct XML_TagAttributeU5BU5D_t284240280;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.BoxCollider
struct BoxCollider_t1640800422;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.TextMesh
struct TextMesh_t1536577757;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1785403678;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// audioScript
struct audioScript_t813048017;
// autoresizeScript
struct autoresizeScript_t3319903757;
// blackWallWorkaroundScript
struct blackWallWorkaroundScript_t2860277821;
// buttonScript
struct buttonScript_t4057655186;
// fileReaderForVicTextBox
struct fileReaderForVicTextBox_t2114072475;
// handleTextfileScript
struct handleTextfileScript_t2963054687;
// healthScript
struct healthScript_t3050120050;
// mainScript
struct mainScript_t2576383752;
// platformScript
struct platformScript_t2304018581;
// playerScript
struct playerScript_t1783615218;
// shadowScript
struct shadowScript_t3441766022;
// ssBackgroundScript
struct ssBackgroundScript_t1410928264;
// textBoxScript
struct textBoxScript_t653516986;

extern RuntimeClass* Animator_t434523843_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern RuntimeClass* Sprite_t280657092_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* shadowScript_t3441766022_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1211890488;
extern String_t* _stringLiteral1244386375;
extern String_t* _stringLiteral1251326993;
extern String_t* _stringLiteral1310150670;
extern String_t* _stringLiteral1594227512;
extern String_t* _stringLiteral1695701867;
extern String_t* _stringLiteral1812612118;
extern String_t* _stringLiteral1853239370;
extern String_t* _stringLiteral1945530226;
extern String_t* _stringLiteral1963630794;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral3011993501;
extern String_t* _stringLiteral3108907650;
extern String_t* _stringLiteral3140214453;
extern String_t* _stringLiteral3373450237;
extern String_t* _stringLiteral3376184138;
extern String_t* _stringLiteral3395669589;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614533;
extern String_t* _stringLiteral3452614534;
extern String_t* _stringLiteral3452614547;
extern String_t* _stringLiteral3500269141;
extern String_t* _stringLiteral3550542648;
extern String_t* _stringLiteral3551177027;
extern String_t* _stringLiteral3685629629;
extern String_t* _stringLiteral3855564506;
extern String_t* _stringLiteral38630993;
extern String_t* _stringLiteral3926572133;
extern String_t* _stringLiteral3932879672;
extern String_t* _stringLiteral3960002225;
extern String_t* _stringLiteral4073034013;
extern String_t* _stringLiteral4114082272;
extern String_t* _stringLiteral44826854;
extern String_t* _stringLiteral537532534;
extern const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t3310196443_m1141242226_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider_t1640800422_m3817794521_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2026665411_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m4158182743_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m236733038_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisblackWallWorkaroundScript_t2860277821_m600730148_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TismainScript_t2576383752_m2032384778_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisplayerScript_t1783615218_m2559433916_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TistextBoxScript_t653516986_m169484749_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1955908099_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1290152079_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t autoresizeScript_Start_m1364101962_MetadataUsageId;
extern const uint32_t blackWallWorkaroundScript_OnMouseDown_m3733740957_MetadataUsageId;
extern const uint32_t blackWallWorkaroundScript_OnMouseExit_m1336052854_MetadataUsageId;
extern const uint32_t blackWallWorkaroundScript_OnMouseOver_m2821610632_MetadataUsageId;
extern const uint32_t blackWallWorkaroundScript_Start_m2075333070_MetadataUsageId;
extern const uint32_t blackWallWorkaroundScript_Update_m2689544073_MetadataUsageId;
extern const uint32_t buttonScript_AbilityOneButton_m1364718248_MetadataUsageId;
extern const uint32_t buttonScript_StartButton_m710632971_MetadataUsageId;
extern const uint32_t buttonScript_VictoryButtonContinue_m2420532782_MetadataUsageId;
extern const uint32_t fileReaderForVicTextBox_Start_m3853403160_MetadataUsageId;
extern const uint32_t fileReaderForVicTextBox_Update_m1566010356_MetadataUsageId;
extern const uint32_t fileReaderForVicTextBox__ctor_m1789394790_MetadataUsageId;
extern const uint32_t healthScript_Update_m4052212179_MetadataUsageId;
extern const uint32_t mainScript_AbilityOne_m3984098970_MetadataUsageId;
extern const uint32_t mainScript_Lose_m1690486384_MetadataUsageId;
extern const uint32_t mainScript_Question_m1352282339_MetadataUsageId;
extern const uint32_t mainScript_SendData_m55469471_MetadataUsageId;
extern const uint32_t mainScript_Start_m651893932_MetadataUsageId;
extern const uint32_t mainScript_Update_m2228363122_MetadataUsageId;
extern const uint32_t mainScript__ctor_m205918234_MetadataUsageId;
extern const uint32_t platformScript_Start_m555577735_MetadataUsageId;
extern const uint32_t playerScript_AbilityOne_m981504815_MetadataUsageId;
extern const uint32_t playerScript_Animate_m1495422730_MetadataUsageId;
extern const uint32_t playerScript_Start_m1877633170_MetadataUsageId;
extern const uint32_t playerScript__ctor_m1687851810_MetadataUsageId;
extern const uint32_t shadowScript_Hide_m1649439648_MetadataUsageId;
extern const uint32_t shadowScript_OnMouseDown_m4000828438_MetadataUsageId;
extern const uint32_t shadowScript_Show_m2522332212_MetadataUsageId;
extern const uint32_t shadowScript_Start_m2041334663_MetadataUsageId;
extern const uint32_t shadowScript_Update_m3426530057_MetadataUsageId;
extern const uint32_t textBoxScript_Start_m2467035543_MetadataUsageId;
extern const uint32_t textBoxScript_Update_m1888600828_MetadataUsageId;

struct StringU5BU5D_t1281789340;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_5)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T913802012_H
#define ENUMERATOR_T913802012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_t913802012 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3319525431 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___l_0)); }
	inline List_1_t3319525431 * get_l_0() const { return ___l_0; }
	inline List_1_t3319525431 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3319525431 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t913802012, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T913802012_H
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
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
#ifndef MATERIALREFERENCE_T1952344632_H
#define MATERIALREFERENCE_T1952344632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.MaterialReference
struct  MaterialReference_t1952344632 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t364381626 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t484820633 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t340375123 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t340375123 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___fontAsset_1)); }
	inline TMP_FontAsset_t364381626 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t364381626 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t364381626 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((&___fontAsset_1), value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t484820633 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t484820633 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteAsset_2), value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___material_3)); }
	inline Material_t340375123 * get_material_3() const { return ___material_3; }
	inline Material_t340375123 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t340375123 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((&___material_3), value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___fallbackMaterial_6)); }
	inline Material_t340375123 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t340375123 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t340375123 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackMaterial_6), value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_t1952344632, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_t1952344632_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t364381626 * ___fontAsset_1;
	TMP_SpriteAsset_t484820633 * ___spriteAsset_2;
	Material_t340375123 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t340375123 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_t1952344632_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t364381626 * ___fontAsset_1;
	TMP_SpriteAsset_t484820633 * ___spriteAsset_2;
	Material_t340375123 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t340375123 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
#endif // MATERIALREFERENCE_T1952344632_H
#ifndef TMP_BASICXMLTAGSTACK_T2962628096_H
#define TMP_BASICXMLTAGSTACK_T2962628096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_BasicXmlTagStack
struct  TMP_BasicXmlTagStack_t2962628096 
{
public:
	// System.Byte TMPro.TMP_BasicXmlTagStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_BasicXmlTagStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_BasicXmlTagStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_BasicXmlTagStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_BasicXmlTagStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_BasicXmlTagStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_BasicXmlTagStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_BasicXmlTagStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_BasicXmlTagStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_BasicXmlTagStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_BasicXmlTagStack_t2962628096, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_BASICXMLTAGSTACK_T2962628096_H
#ifndef TMP_XMLTAGSTACK_1_T2514600297_H
#define TMP_XMLTAGSTACK_1_T2514600297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<System.Int32>
struct  TMP_XmlTagStack_1_t2514600297 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	Int32U5BU5D_t385246372* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	int32_t ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___itemStack_0)); }
	inline Int32U5BU5D_t385246372* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t385246372** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t385246372* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2514600297, ___m_defaultItem_3)); }
	inline int32_t get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline int32_t* get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(int32_t value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T2514600297_H
#ifndef TMP_XMLTAGSTACK_1_T960921318_H
#define TMP_XMLTAGSTACK_1_T960921318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<System.Single>
struct  TMP_XmlTagStack_1_t960921318 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	SingleU5BU5D_t1444911251* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	float ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___itemStack_0)); }
	inline SingleU5BU5D_t1444911251* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t1444911251* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t960921318, ___m_defaultItem_3)); }
	inline float get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline float* get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(float value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T960921318_H
#ifndef TMP_XMLTAGSTACK_1_T3241710312_H
#define TMP_XMLTAGSTACK_1_T3241710312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_XmlTagStack_1_t3241710312 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2496920137* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	TMP_ColorGradient_t3678055768 * ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t2496920137* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t2496920137** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t2496920137* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3241710312, ___m_defaultItem_3)); }
	inline TMP_ColorGradient_t3678055768 * get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline TMP_ColorGradient_t3678055768 ** get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(TMP_ColorGradient_t3678055768 * value)
	{
		___m_defaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultItem_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T3241710312_H
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
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t2562230146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef EXTENTS_T3837212874_H
#define EXTENTS_T3837212874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Extents
struct  Extents_t3837212874 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t2156229523  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t2156229523  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_t3837212874, ___min_0)); }
	inline Vector2_t2156229523  get_min_0() const { return ___min_0; }
	inline Vector2_t2156229523 * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_t2156229523  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_t3837212874, ___max_1)); }
	inline Vector2_t2156229523  get_max_1() const { return ___max_1; }
	inline Vector2_t2156229523 * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_t2156229523  value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENTS_T3837212874_H
#ifndef FONTSTYLES_T3828945032_H
#define FONTSTYLES_T3828945032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FontStyles
struct  FontStyles_t3828945032 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FontStyles_t3828945032, ___value___1)); }
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
#endif // FONTSTYLES_T3828945032_H
#ifndef TEXTINPUTSOURCES_T1522115805_H
#define TEXTINPUTSOURCES_T1522115805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text/TextInputSources
struct  TextInputSources_t1522115805 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextInputSources_t1522115805, ___value___1)); }
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
#endif // TEXTINPUTSOURCES_T1522115805_H
#ifndef TMP_TEXTELEMENTTYPE_T1276645592_H
#define TMP_TEXTELEMENTTYPE_T1276645592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t1276645592 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t1276645592, ___value___1)); }
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
#endif // TMP_TEXTELEMENTTYPE_T1276645592_H
#ifndef TMP_XMLTAGSTACK_1_T1515999176_H
#define TMP_XMLTAGSTACK_1_T1515999176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference>
struct  TMP_XmlTagStack_1_t1515999176 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	MaterialReferenceU5BU5D_t648826345* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	MaterialReference_t1952344632  ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t648826345* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t648826345** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t648826345* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t1515999176, ___m_defaultItem_3)); }
	inline MaterialReference_t1952344632  get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline MaterialReference_t1952344632 * get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(MaterialReference_t1952344632  value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T1515999176_H
#ifndef TMP_XMLTAGSTACK_1_T2164155836_H
#define TMP_XMLTAGSTACK_1_T2164155836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32>
struct  TMP_XmlTagStack_1_t2164155836 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	Color32U5BU5D_t3850468773* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	Color32_t2600501292  ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___itemStack_0)); }
	inline Color32U5BU5D_t3850468773* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t3850468773** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t3850468773* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t2164155836, ___m_defaultItem_3)); }
	inline Color32_t2600501292  get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline Color32_t2600501292 * get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(Color32_t2600501292  value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T2164155836_H
#ifndef TEXTALIGNMENTOPTIONS_T4036791236_H
#define TEXTALIGNMENTOPTIONS_T4036791236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4036791236 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4036791236, ___value___1)); }
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
#endif // TEXTALIGNMENTOPTIONS_T4036791236_H
#ifndef TEXTOVERFLOWMODES_T1430035314_H
#define TEXTOVERFLOWMODES_T1430035314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextOverflowModes
struct  TextOverflowModes_t1430035314 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextOverflowModes_t1430035314, ___value___1)); }
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
#endif // TEXTOVERFLOWMODES_T1430035314_H
#ifndef TEXTRENDERFLAGS_T2418684345_H
#define TEXTRENDERFLAGS_T2418684345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextRenderFlags
struct  TextRenderFlags_t2418684345 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextRenderFlags_t2418684345, ___value___1)); }
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
#endif // TEXTRENDERFLAGS_T2418684345_H
#ifndef TEXTUREMAPPINGOPTIONS_T270963663_H
#define TEXTUREMAPPINGOPTIONS_T270963663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t270963663 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t270963663, ___value___1)); }
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
#endif // TEXTUREMAPPINGOPTIONS_T270963663_H
#ifndef VERTEXGRADIENT_T345148380_H
#define VERTEXGRADIENT_T345148380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexGradient
struct  VertexGradient_t345148380 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t2555686324  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t2555686324  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t2555686324  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t2555686324  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___topLeft_0)); }
	inline Color_t2555686324  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t2555686324 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t2555686324  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___topRight_1)); }
	inline Color_t2555686324  get_topRight_1() const { return ___topRight_1; }
	inline Color_t2555686324 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t2555686324  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___bottomLeft_2)); }
	inline Color_t2555686324  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t2555686324 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t2555686324  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t345148380, ___bottomRight_3)); }
	inline Color_t2555686324  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t2555686324 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t2555686324  value)
	{
		___bottomRight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXGRADIENT_T345148380_H
#ifndef VERTEXSORTINGORDER_T2659893934_H
#define VERTEXSORTINGORDER_T2659893934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2659893934 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2659893934, ___value___1)); }
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
#endif // VERTEXSORTINGORDER_T2659893934_H
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
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___1)); }
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
#endif // DIRECTION_T337909235_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TMP_LINEINFO_T1079631636_H
#define TMP_LINEINFO_T1079631636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_LineInfo
struct  TMP_LineInfo_t1079631636 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_t3837212874  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_t1079631636, ___lineExtents_19)); }
	inline Extents_t3837212874  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_t3837212874 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_t3837212874  value)
	{
		___lineExtents_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_LINEINFO_T1079631636_H
#ifndef TMP_XMLTAGSTACK_1_T3600445780_H
#define TMP_XMLTAGSTACK_1_T3600445780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_XmlTagStack_1_t3600445780 
{
public:
	// T[] TMPro.TMP_XmlTagStack`1::itemStack
	TextAlignmentOptionsU5BU5D_t3552942253* ___itemStack_0;
	// System.Int32 TMPro.TMP_XmlTagStack`1::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_XmlTagStack`1::m_capacity
	int32_t ___m_capacity_2;
	// T TMPro.TMP_XmlTagStack`1::m_defaultItem
	int32_t ___m_defaultItem_3;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___itemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t3552942253* get_itemStack_0() const { return ___itemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t3552942253** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TextAlignmentOptionsU5BU5D_t3552942253* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((&___itemStack_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_capacity_2() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___m_capacity_2)); }
	inline int32_t get_m_capacity_2() const { return ___m_capacity_2; }
	inline int32_t* get_address_of_m_capacity_2() { return &___m_capacity_2; }
	inline void set_m_capacity_2(int32_t value)
	{
		___m_capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultItem_3() { return static_cast<int32_t>(offsetof(TMP_XmlTagStack_1_t3600445780, ___m_defaultItem_3)); }
	inline int32_t get_m_defaultItem_3() const { return ___m_defaultItem_3; }
	inline int32_t* get_address_of_m_defaultItem_3() { return &___m_defaultItem_3; }
	inline void set_m_defaultItem_3(int32_t value)
	{
		___m_defaultItem_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_XMLTAGSTACK_1_T3600445780_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef WORDWRAPSTATE_T341939652_H
#define WORDWRAPSTATE_T341939652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.WordWrapState
struct  WordWrapState_t341939652 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t3598145122 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_t1079631636  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t2600501292  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t2600501292  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t2600501292  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t2600501292  ___highlightColor_32;
	// TMPro.TMP_BasicXmlTagStack TMPro.WordWrapState::basicStyleStack
	TMP_BasicXmlTagStack_t2962628096  ___basicStyleStack_33;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_XmlTagStack_1_t2164155836  ___colorStack_34;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_XmlTagStack_1_t2164155836  ___underlineColorStack_35;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_XmlTagStack_1_t2164155836  ___strikethroughColorStack_36;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_XmlTagStack_1_t2164155836  ___highlightColorStack_37;
	// TMPro.TMP_XmlTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_XmlTagStack_1_t3241710312  ___colorGradientStack_38;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_XmlTagStack_1_t960921318  ___sizeStack_39;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_XmlTagStack_1_t960921318  ___indentStack_40;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::fontWeightStack
	TMP_XmlTagStack_1_t2514600297  ___fontWeightStack_41;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_XmlTagStack_1_t2514600297  ___styleStack_42;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_XmlTagStack_1_t960921318  ___baselineStack_43;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_XmlTagStack_1_t2514600297  ___actionStack_44;
	// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_XmlTagStack_1_t1515999176  ___materialReferenceStack_45;
	// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_XmlTagStack_1_t3600445780  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t364381626 * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t484820633 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t340375123 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_t3837212874  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___textInfo_27)); }
	inline TMP_TextInfo_t3598145122 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_t3598145122 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_t3598145122 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_27), value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineInfo_28)); }
	inline TMP_LineInfo_t1079631636  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_t1079631636 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_t1079631636  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___vertexColor_29)); }
	inline Color32_t2600501292  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t2600501292 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t2600501292  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___underlineColor_30)); }
	inline Color32_t2600501292  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t2600501292 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t2600501292  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___strikethroughColor_31)); }
	inline Color32_t2600501292  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t2600501292 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t2600501292  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___highlightColor_32)); }
	inline Color32_t2600501292  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t2600501292 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t2600501292  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___basicStyleStack_33)); }
	inline TMP_BasicXmlTagStack_t2962628096  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_BasicXmlTagStack_t2962628096 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_BasicXmlTagStack_t2962628096  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___colorStack_34)); }
	inline TMP_XmlTagStack_1_t2164155836  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_XmlTagStack_1_t2164155836  value)
	{
		___colorStack_34 = value;
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___underlineColorStack_35)); }
	inline TMP_XmlTagStack_1_t2164155836  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_XmlTagStack_1_t2164155836  value)
	{
		___underlineColorStack_35 = value;
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___strikethroughColorStack_36)); }
	inline TMP_XmlTagStack_1_t2164155836  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_XmlTagStack_1_t2164155836  value)
	{
		___strikethroughColorStack_36 = value;
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___highlightColorStack_37)); }
	inline TMP_XmlTagStack_1_t2164155836  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_XmlTagStack_1_t2164155836  value)
	{
		___highlightColorStack_37 = value;
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___colorGradientStack_38)); }
	inline TMP_XmlTagStack_1_t3241710312  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_XmlTagStack_1_t3241710312 * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_XmlTagStack_1_t3241710312  value)
	{
		___colorGradientStack_38 = value;
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___sizeStack_39)); }
	inline TMP_XmlTagStack_1_t960921318  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_XmlTagStack_1_t960921318  value)
	{
		___sizeStack_39 = value;
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___indentStack_40)); }
	inline TMP_XmlTagStack_1_t960921318  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_XmlTagStack_1_t960921318  value)
	{
		___indentStack_40 = value;
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___fontWeightStack_41)); }
	inline TMP_XmlTagStack_1_t2514600297  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_XmlTagStack_1_t2514600297  value)
	{
		___fontWeightStack_41 = value;
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___styleStack_42)); }
	inline TMP_XmlTagStack_1_t2514600297  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_XmlTagStack_1_t2514600297  value)
	{
		___styleStack_42 = value;
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___baselineStack_43)); }
	inline TMP_XmlTagStack_1_t960921318  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_XmlTagStack_1_t960921318  value)
	{
		___baselineStack_43 = value;
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___actionStack_44)); }
	inline TMP_XmlTagStack_1_t2514600297  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_XmlTagStack_1_t2514600297  value)
	{
		___actionStack_44 = value;
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___materialReferenceStack_45)); }
	inline TMP_XmlTagStack_1_t1515999176  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_XmlTagStack_1_t1515999176 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_XmlTagStack_1_t1515999176  value)
	{
		___materialReferenceStack_45 = value;
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___lineJustificationStack_46)); }
	inline TMP_XmlTagStack_1_t3600445780  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_XmlTagStack_1_t3600445780 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_XmlTagStack_1_t3600445780  value)
	{
		___lineJustificationStack_46 = value;
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t364381626 * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t364381626 ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t364381626 * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((&___currentFontAsset_48), value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_t484820633 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_t484820633 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((&___currentSpriteAsset_49), value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentMaterial_50)); }
	inline Material_t340375123 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_t340375123 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_t340375123 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((&___currentMaterial_50), value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___meshExtents_52)); }
	inline Extents_t3837212874  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_t3837212874 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_t3837212874  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t341939652, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t341939652_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t3598145122 * ___textInfo_27;
	TMP_LineInfo_t1079631636  ___lineInfo_28;
	Color32_t2600501292  ___vertexColor_29;
	Color32_t2600501292  ___underlineColor_30;
	Color32_t2600501292  ___strikethroughColor_31;
	Color32_t2600501292  ___highlightColor_32;
	TMP_BasicXmlTagStack_t2962628096  ___basicStyleStack_33;
	TMP_XmlTagStack_1_t2164155836  ___colorStack_34;
	TMP_XmlTagStack_1_t2164155836  ___underlineColorStack_35;
	TMP_XmlTagStack_1_t2164155836  ___strikethroughColorStack_36;
	TMP_XmlTagStack_1_t2164155836  ___highlightColorStack_37;
	TMP_XmlTagStack_1_t3241710312  ___colorGradientStack_38;
	TMP_XmlTagStack_1_t960921318  ___sizeStack_39;
	TMP_XmlTagStack_1_t960921318  ___indentStack_40;
	TMP_XmlTagStack_1_t2514600297  ___fontWeightStack_41;
	TMP_XmlTagStack_1_t2514600297  ___styleStack_42;
	TMP_XmlTagStack_1_t960921318  ___baselineStack_43;
	TMP_XmlTagStack_1_t2514600297  ___actionStack_44;
	TMP_XmlTagStack_1_t1515999176  ___materialReferenceStack_45;
	TMP_XmlTagStack_1_t3600445780  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t364381626 * ___currentFontAsset_48;
	TMP_SpriteAsset_t484820633 * ___currentSpriteAsset_49;
	Material_t340375123 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_t3837212874  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t341939652_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_t3598145122 * ___textInfo_27;
	TMP_LineInfo_t1079631636  ___lineInfo_28;
	Color32_t2600501292  ___vertexColor_29;
	Color32_t2600501292  ___underlineColor_30;
	Color32_t2600501292  ___strikethroughColor_31;
	Color32_t2600501292  ___highlightColor_32;
	TMP_BasicXmlTagStack_t2962628096  ___basicStyleStack_33;
	TMP_XmlTagStack_1_t2164155836  ___colorStack_34;
	TMP_XmlTagStack_1_t2164155836  ___underlineColorStack_35;
	TMP_XmlTagStack_1_t2164155836  ___strikethroughColorStack_36;
	TMP_XmlTagStack_1_t2164155836  ___highlightColorStack_37;
	TMP_XmlTagStack_1_t3241710312  ___colorGradientStack_38;
	TMP_XmlTagStack_1_t960921318  ___sizeStack_39;
	TMP_XmlTagStack_1_t960921318  ___indentStack_40;
	TMP_XmlTagStack_1_t2514600297  ___fontWeightStack_41;
	TMP_XmlTagStack_1_t2514600297  ___styleStack_42;
	TMP_XmlTagStack_1_t960921318  ___baselineStack_43;
	TMP_XmlTagStack_1_t2514600297  ___actionStack_44;
	TMP_XmlTagStack_1_t1515999176  ___materialReferenceStack_45;
	TMP_XmlTagStack_1_t3600445780  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t364381626 * ___currentFontAsset_48;
	TMP_SpriteAsset_t484820633 * ___currentSpriteAsset_49;
	Material_t340375123 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_t3837212874  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
#endif // WORDWRAPSTATE_T341939652_H
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
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTMESH_T1536577757_H
#define TEXTMESH_T1536577757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextMesh
struct  TextMesh_t1536577757  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESH_T1536577757_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef BOXCOLLIDER_T1640800422_H
#define BOXCOLLIDER_T1640800422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1640800422  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1640800422_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
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
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_18;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_19;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_20;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_21;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_22;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_23;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_24;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_25;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_30;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_31;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_32;

public:
	inline static int32_t get_offset_of_m_FillRect_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_18)); }
	inline RectTransform_t3704657025 * get_m_FillRect_18() const { return ___m_FillRect_18; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_18() { return &___m_FillRect_18; }
	inline void set_m_FillRect_18(RectTransform_t3704657025 * value)
	{
		___m_FillRect_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_18), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_19)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_19() const { return ___m_HandleRect_19; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_19() { return &___m_HandleRect_19; }
	inline void set_m_HandleRect_19(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_19), value);
	}

	inline static int32_t get_offset_of_m_Direction_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_20)); }
	inline int32_t get_m_Direction_20() const { return ___m_Direction_20; }
	inline int32_t* get_address_of_m_Direction_20() { return &___m_Direction_20; }
	inline void set_m_Direction_20(int32_t value)
	{
		___m_Direction_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_21)); }
	inline float get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline float* get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(float value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_22)); }
	inline float get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline float* get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(float value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_23)); }
	inline bool get_m_WholeNumbers_23() const { return ___m_WholeNumbers_23; }
	inline bool* get_address_of_m_WholeNumbers_23() { return &___m_WholeNumbers_23; }
	inline void set_m_WholeNumbers_23(bool value)
	{
		___m_WholeNumbers_23 = value;
	}

	inline static int32_t get_offset_of_m_Value_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_24)); }
	inline float get_m_Value_24() const { return ___m_Value_24; }
	inline float* get_address_of_m_Value_24() { return &___m_Value_24; }
	inline void set_m_Value_24(float value)
	{
		___m_Value_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_25)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_25), value);
	}

	inline static int32_t get_offset_of_m_FillImage_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_26)); }
	inline Image_t2670269651 * get_m_FillImage_26() const { return ___m_FillImage_26; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_26() { return &___m_FillImage_26; }
	inline void set_m_FillImage_26(Image_t2670269651 * value)
	{
		___m_FillImage_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_26), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_27)); }
	inline Transform_t3600365921 * get_m_FillTransform_27() const { return ___m_FillTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_27() { return &___m_FillTransform_27; }
	inline void set_m_FillTransform_27(Transform_t3600365921 * value)
	{
		___m_FillTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_27), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_28() const { return ___m_FillContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_28() { return &___m_FillContainerRect_28; }
	inline void set_m_FillContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_29)); }
	inline Transform_t3600365921 * get_m_HandleTransform_29() const { return ___m_HandleTransform_29; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_29() { return &___m_HandleTransform_29; }
	inline void set_m_HandleTransform_29(Transform_t3600365921 * value)
	{
		___m_HandleTransform_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_29), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_30)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_30() const { return ___m_HandleContainerRect_30; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_30() { return &___m_HandleContainerRect_30; }
	inline void set_m_HandleContainerRect_30(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_30), value);
	}

	inline static int32_t get_offset_of_m_Offset_31() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_31)); }
	inline Vector2_t2156229523  get_m_Offset_31() const { return ___m_Offset_31; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_31() { return &___m_Offset_31; }
	inline void set_m_Offset_31(Vector2_t2156229523  value)
	{
		___m_Offset_31 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_32() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_32)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_32() const { return ___m_Tracker_32; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_32() { return &___m_Tracker_32; }
	inline void set_m_Tracker_32(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
#ifndef TMP_TEXT_T2599618874_H
#define TMP_TEXT_T2599618874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_Text
struct  TMP_Text_t2599618874  : public MaskableGraphic_t3839221559
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_30;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_31;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t364381626 * ___m_fontAsset_32;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t364381626 * ___m_currentFontAsset_33;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_34;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t340375123 * ___m_sharedMaterial_35;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t340375123 * ___m_currentMaterial_36;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t648826345* ___m_materialReferences_37;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t1839659084 * ___m_materialReferenceIndexLookup_38;
	// TMPro.TMP_XmlTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_XmlTagStack_1_t1515999176  ___m_materialReferenceStack_39;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_40;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t561872642* ___m_fontSharedMaterials_41;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t340375123 * ___m_fontMaterial_42;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t561872642* ___m_fontMaterials_43;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_44;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t2600501292  ___m_fontColor32_45;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t2555686324  ___m_fontColor_46;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t2600501292  ___m_underlineColor_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t2600501292  ___m_strikethroughColor_49;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t2600501292  ___m_highlightColor_50;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_51;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t345148380  ___m_fontColorGradient_52;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t3678055768 * ___m_fontColorGradientPreset_53;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t484820633 * ___m_spriteAsset_54;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_55;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t2600501292  ___m_spriteColor_57;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_58;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t2600501292  ___m_faceColor_59;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t2600501292  ___m_outlineColor_60;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_61;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_62;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_63;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_64;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_XmlTagStack_1_t960921318  ___m_sizeStack_65;
	// System.Int32 TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_66;
	// System.Int32 TMPro.TMP_Text::m_fontWeightInternal
	int32_t ___m_fontWeightInternal_67;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_fontWeightStack
	TMP_XmlTagStack_1_t2514600297  ___m_fontWeightStack_68;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_69;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_70;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_71;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_72;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_73;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_74;
	// TMPro.FontStyles TMPro.TMP_Text::m_style
	int32_t ___m_style_75;
	// TMPro.TMP_BasicXmlTagStack TMPro.TMP_Text::m_fontStyleStack
	TMP_BasicXmlTagStack_t2962628096  ___m_fontStyleStack_76;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_77;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_78;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_79;
	// TMPro.TMP_XmlTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_XmlTagStack_1_t3600445780  ___m_lineJustificationStack_80;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t1718750761* ___m_textContainerLocalCorners_81;
	// System.Boolean TMPro.TMP_Text::m_isAlignmentEnumConverted
	bool ___m_isAlignmentEnumConverted_82;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_83;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_84;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_85;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_86;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_87;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_88;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_89;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_90;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_91;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_92;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_93;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_94;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_95;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_96;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_97;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_98;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_99;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_100;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t2599618874 * ___m_linkedTextComponent_101;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_102;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_103;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_104;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_105;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_106;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_107;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_108;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_109;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_110;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_112;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_113;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_114;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_115;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_116;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_117;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_118;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_119;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_120;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_121;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_122;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_123;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_124;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_125;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t3319028937  ___m_margin_126;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_127;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_128;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_129;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_130;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_131;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t3598145122 * ___m_textInfo_132;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_133;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_134;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_t3600365921 * ___m_transform_135;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t3704657025 * ___m_rectTransform_136;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_137;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_138;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t3648964284 * ___m_mesh_139;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_140;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2836635477 * ___m_spriteAnimator_141;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_142;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_143;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_144;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_145;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_146;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_147;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_t1785403678 * ___m_LayoutElement_148;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_149;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_150;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_151;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_152;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_153;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_154;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_155;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_156;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_157;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_158;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_159;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_160;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_161;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_162;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_163;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_164;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_165;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_166;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_167;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_168;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t3528271667* ___m_htmlTag_169;
	// TMPro.XML_TagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	XML_TagAttributeU5BU5D_t284240280* ___m_xmlAttribute_170;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t1444911251* ___m_attributeParameterValues_171;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_172;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_173;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_XmlTagStack_1_t960921318  ___m_indentStack_174;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_175;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_176;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t1817901843  ___m_FXMatrix_177;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_178;
	// System.Int32[] TMPro.TMP_Text::m_char_buffer
	Int32U5BU5D_t385246372* ___m_char_buffer_179;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t1930184704* ___m_internalCharacterInfo_180;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t3528271667* ___m_input_CharArray_181;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_182;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_183;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t341939652  ___m_SavedWordWrapState_184;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t341939652  ___m_SavedLineState_185;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_186;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_187;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_188;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_189;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_190;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_191;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_192;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_193;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_194;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_195;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_196;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_197;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_198;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_199;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_200;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_t3837212874  ___m_meshExtents_201;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t2600501292  ___m_htmlColor_202;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_XmlTagStack_1_t2164155836  ___m_colorStack_203;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_XmlTagStack_1_t2164155836  ___m_underlineColorStack_204;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_XmlTagStack_1_t2164155836  ___m_strikethroughColorStack_205;
	// TMPro.TMP_XmlTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_XmlTagStack_1_t2164155836  ___m_highlightColorStack_206;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t3678055768 * ___m_colorGradientPreset_207;
	// TMPro.TMP_XmlTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_XmlTagStack_1_t3241710312  ___m_colorGradientStack_208;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_209;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_210;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_XmlTagStack_1_t2514600297  ___m_styleStack_211;
	// TMPro.TMP_XmlTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_XmlTagStack_1_t2514600297  ___m_actionStack_212;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_213;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_214;
	// TMPro.TMP_XmlTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_XmlTagStack_1_t960921318  ___m_baselineOffsetStack_215;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_216;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_217;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t129727469 * ___m_cached_TextElement_218;
	// TMPro.TMP_Glyph TMPro.TMP_Text::m_cached_Underline_GlyphInfo
	TMP_Glyph_t581847833 * ___m_cached_Underline_GlyphInfo_219;
	// TMPro.TMP_Glyph TMPro.TMP_Text::m_cached_Ellipsis_GlyphInfo
	TMP_Glyph_t581847833 * ___m_cached_Ellipsis_GlyphInfo_220;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t484820633 * ___m_defaultSpriteAsset_221;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t484820633 * ___m_currentSpriteAsset_222;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_223;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_224;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_225;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_226;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_t1444911251* ___k_Power_227;

public:
	inline static int32_t get_offset_of_m_text_30() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_text_30)); }
	inline String_t* get_m_text_30() const { return ___m_text_30; }
	inline String_t** get_address_of_m_text_30() { return &___m_text_30; }
	inline void set_m_text_30(String_t* value)
	{
		___m_text_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_30), value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_31() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isRightToLeft_31)); }
	inline bool get_m_isRightToLeft_31() const { return ___m_isRightToLeft_31; }
	inline bool* get_address_of_m_isRightToLeft_31() { return &___m_isRightToLeft_31; }
	inline void set_m_isRightToLeft_31(bool value)
	{
		___m_isRightToLeft_31 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_32() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontAsset_32)); }
	inline TMP_FontAsset_t364381626 * get_m_fontAsset_32() const { return ___m_fontAsset_32; }
	inline TMP_FontAsset_t364381626 ** get_address_of_m_fontAsset_32() { return &___m_fontAsset_32; }
	inline void set_m_fontAsset_32(TMP_FontAsset_t364381626 * value)
	{
		___m_fontAsset_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontAsset_32), value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_33() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentFontAsset_33)); }
	inline TMP_FontAsset_t364381626 * get_m_currentFontAsset_33() const { return ___m_currentFontAsset_33; }
	inline TMP_FontAsset_t364381626 ** get_address_of_m_currentFontAsset_33() { return &___m_currentFontAsset_33; }
	inline void set_m_currentFontAsset_33(TMP_FontAsset_t364381626 * value)
	{
		___m_currentFontAsset_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentFontAsset_33), value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_34() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isSDFShader_34)); }
	inline bool get_m_isSDFShader_34() const { return ___m_isSDFShader_34; }
	inline bool* get_address_of_m_isSDFShader_34() { return &___m_isSDFShader_34; }
	inline void set_m_isSDFShader_34(bool value)
	{
		___m_isSDFShader_34 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_35() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_sharedMaterial_35)); }
	inline Material_t340375123 * get_m_sharedMaterial_35() const { return ___m_sharedMaterial_35; }
	inline Material_t340375123 ** get_address_of_m_sharedMaterial_35() { return &___m_sharedMaterial_35; }
	inline void set_m_sharedMaterial_35(Material_t340375123 * value)
	{
		___m_sharedMaterial_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_sharedMaterial_35), value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_36() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentMaterial_36)); }
	inline Material_t340375123 * get_m_currentMaterial_36() const { return ___m_currentMaterial_36; }
	inline Material_t340375123 ** get_address_of_m_currentMaterial_36() { return &___m_currentMaterial_36; }
	inline void set_m_currentMaterial_36(Material_t340375123 * value)
	{
		___m_currentMaterial_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentMaterial_36), value);
	}

	inline static int32_t get_offset_of_m_materialReferences_37() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_materialReferences_37)); }
	inline MaterialReferenceU5BU5D_t648826345* get_m_materialReferences_37() const { return ___m_materialReferences_37; }
	inline MaterialReferenceU5BU5D_t648826345** get_address_of_m_materialReferences_37() { return &___m_materialReferences_37; }
	inline void set_m_materialReferences_37(MaterialReferenceU5BU5D_t648826345* value)
	{
		___m_materialReferences_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferences_37), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_38() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_materialReferenceIndexLookup_38)); }
	inline Dictionary_2_t1839659084 * get_m_materialReferenceIndexLookup_38() const { return ___m_materialReferenceIndexLookup_38; }
	inline Dictionary_2_t1839659084 ** get_address_of_m_materialReferenceIndexLookup_38() { return &___m_materialReferenceIndexLookup_38; }
	inline void set_m_materialReferenceIndexLookup_38(Dictionary_2_t1839659084 * value)
	{
		___m_materialReferenceIndexLookup_38 = value;
		Il2CppCodeGenWriteBarrier((&___m_materialReferenceIndexLookup_38), value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_39() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_materialReferenceStack_39)); }
	inline TMP_XmlTagStack_1_t1515999176  get_m_materialReferenceStack_39() const { return ___m_materialReferenceStack_39; }
	inline TMP_XmlTagStack_1_t1515999176 * get_address_of_m_materialReferenceStack_39() { return &___m_materialReferenceStack_39; }
	inline void set_m_materialReferenceStack_39(TMP_XmlTagStack_1_t1515999176  value)
	{
		___m_materialReferenceStack_39 = value;
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_40() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentMaterialIndex_40)); }
	inline int32_t get_m_currentMaterialIndex_40() const { return ___m_currentMaterialIndex_40; }
	inline int32_t* get_address_of_m_currentMaterialIndex_40() { return &___m_currentMaterialIndex_40; }
	inline void set_m_currentMaterialIndex_40(int32_t value)
	{
		___m_currentMaterialIndex_40 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_41() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSharedMaterials_41)); }
	inline MaterialU5BU5D_t561872642* get_m_fontSharedMaterials_41() const { return ___m_fontSharedMaterials_41; }
	inline MaterialU5BU5D_t561872642** get_address_of_m_fontSharedMaterials_41() { return &___m_fontSharedMaterials_41; }
	inline void set_m_fontSharedMaterials_41(MaterialU5BU5D_t561872642* value)
	{
		___m_fontSharedMaterials_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontSharedMaterials_41), value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontMaterial_42)); }
	inline Material_t340375123 * get_m_fontMaterial_42() const { return ___m_fontMaterial_42; }
	inline Material_t340375123 ** get_address_of_m_fontMaterial_42() { return &___m_fontMaterial_42; }
	inline void set_m_fontMaterial_42(Material_t340375123 * value)
	{
		___m_fontMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterial_42), value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_43() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontMaterials_43)); }
	inline MaterialU5BU5D_t561872642* get_m_fontMaterials_43() const { return ___m_fontMaterials_43; }
	inline MaterialU5BU5D_t561872642** get_address_of_m_fontMaterials_43() { return &___m_fontMaterials_43; }
	inline void set_m_fontMaterials_43(MaterialU5BU5D_t561872642* value)
	{
		___m_fontMaterials_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontMaterials_43), value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_44() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isMaterialDirty_44)); }
	inline bool get_m_isMaterialDirty_44() const { return ___m_isMaterialDirty_44; }
	inline bool* get_address_of_m_isMaterialDirty_44() { return &___m_isMaterialDirty_44; }
	inline void set_m_isMaterialDirty_44(bool value)
	{
		___m_isMaterialDirty_44 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_45() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColor32_45)); }
	inline Color32_t2600501292  get_m_fontColor32_45() const { return ___m_fontColor32_45; }
	inline Color32_t2600501292 * get_address_of_m_fontColor32_45() { return &___m_fontColor32_45; }
	inline void set_m_fontColor32_45(Color32_t2600501292  value)
	{
		___m_fontColor32_45 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_46() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColor_46)); }
	inline Color_t2555686324  get_m_fontColor_46() const { return ___m_fontColor_46; }
	inline Color_t2555686324 * get_address_of_m_fontColor_46() { return &___m_fontColor_46; }
	inline void set_m_fontColor_46(Color_t2555686324  value)
	{
		___m_fontColor_46 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_48() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_underlineColor_48)); }
	inline Color32_t2600501292  get_m_underlineColor_48() const { return ___m_underlineColor_48; }
	inline Color32_t2600501292 * get_address_of_m_underlineColor_48() { return &___m_underlineColor_48; }
	inline void set_m_underlineColor_48(Color32_t2600501292  value)
	{
		___m_underlineColor_48 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_49() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_strikethroughColor_49)); }
	inline Color32_t2600501292  get_m_strikethroughColor_49() const { return ___m_strikethroughColor_49; }
	inline Color32_t2600501292 * get_address_of_m_strikethroughColor_49() { return &___m_strikethroughColor_49; }
	inline void set_m_strikethroughColor_49(Color32_t2600501292  value)
	{
		___m_strikethroughColor_49 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_highlightColor_50)); }
	inline Color32_t2600501292  get_m_highlightColor_50() const { return ___m_highlightColor_50; }
	inline Color32_t2600501292 * get_address_of_m_highlightColor_50() { return &___m_highlightColor_50; }
	inline void set_m_highlightColor_50(Color32_t2600501292  value)
	{
		___m_highlightColor_50 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_51() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableVertexGradient_51)); }
	inline bool get_m_enableVertexGradient_51() const { return ___m_enableVertexGradient_51; }
	inline bool* get_address_of_m_enableVertexGradient_51() { return &___m_enableVertexGradient_51; }
	inline void set_m_enableVertexGradient_51(bool value)
	{
		___m_enableVertexGradient_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_52() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColorGradient_52)); }
	inline VertexGradient_t345148380  get_m_fontColorGradient_52() const { return ___m_fontColorGradient_52; }
	inline VertexGradient_t345148380 * get_address_of_m_fontColorGradient_52() { return &___m_fontColorGradient_52; }
	inline void set_m_fontColorGradient_52(VertexGradient_t345148380  value)
	{
		___m_fontColorGradient_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_53() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontColorGradientPreset_53)); }
	inline TMP_ColorGradient_t3678055768 * get_m_fontColorGradientPreset_53() const { return ___m_fontColorGradientPreset_53; }
	inline TMP_ColorGradient_t3678055768 ** get_address_of_m_fontColorGradientPreset_53() { return &___m_fontColorGradientPreset_53; }
	inline void set_m_fontColorGradientPreset_53(TMP_ColorGradient_t3678055768 * value)
	{
		___m_fontColorGradientPreset_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_fontColorGradientPreset_53), value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_54() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteAsset_54)); }
	inline TMP_SpriteAsset_t484820633 * get_m_spriteAsset_54() const { return ___m_spriteAsset_54; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_m_spriteAsset_54() { return &___m_spriteAsset_54; }
	inline void set_m_spriteAsset_54(TMP_SpriteAsset_t484820633 * value)
	{
		___m_spriteAsset_54 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAsset_54), value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_55() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_tintAllSprites_55)); }
	inline bool get_m_tintAllSprites_55() const { return ___m_tintAllSprites_55; }
	inline bool* get_address_of_m_tintAllSprites_55() { return &___m_tintAllSprites_55; }
	inline void set_m_tintAllSprites_55(bool value)
	{
		___m_tintAllSprites_55 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_56() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_tintSprite_56)); }
	inline bool get_m_tintSprite_56() const { return ___m_tintSprite_56; }
	inline bool* get_address_of_m_tintSprite_56() { return &___m_tintSprite_56; }
	inline void set_m_tintSprite_56(bool value)
	{
		___m_tintSprite_56 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_57() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteColor_57)); }
	inline Color32_t2600501292  get_m_spriteColor_57() const { return ___m_spriteColor_57; }
	inline Color32_t2600501292 * get_address_of_m_spriteColor_57() { return &___m_spriteColor_57; }
	inline void set_m_spriteColor_57(Color32_t2600501292  value)
	{
		___m_spriteColor_57 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_58() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_overrideHtmlColors_58)); }
	inline bool get_m_overrideHtmlColors_58() const { return ___m_overrideHtmlColors_58; }
	inline bool* get_address_of_m_overrideHtmlColors_58() { return &___m_overrideHtmlColors_58; }
	inline void set_m_overrideHtmlColors_58(bool value)
	{
		___m_overrideHtmlColors_58 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_59() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_faceColor_59)); }
	inline Color32_t2600501292  get_m_faceColor_59() const { return ___m_faceColor_59; }
	inline Color32_t2600501292 * get_address_of_m_faceColor_59() { return &___m_faceColor_59; }
	inline void set_m_faceColor_59(Color32_t2600501292  value)
	{
		___m_faceColor_59 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_60() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_outlineColor_60)); }
	inline Color32_t2600501292  get_m_outlineColor_60() const { return ___m_outlineColor_60; }
	inline Color32_t2600501292 * get_address_of_m_outlineColor_60() { return &___m_outlineColor_60; }
	inline void set_m_outlineColor_60(Color32_t2600501292  value)
	{
		___m_outlineColor_60 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_61() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_outlineWidth_61)); }
	inline float get_m_outlineWidth_61() const { return ___m_outlineWidth_61; }
	inline float* get_address_of_m_outlineWidth_61() { return &___m_outlineWidth_61; }
	inline void set_m_outlineWidth_61(float value)
	{
		___m_outlineWidth_61 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_62() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSize_62)); }
	inline float get_m_fontSize_62() const { return ___m_fontSize_62; }
	inline float* get_address_of_m_fontSize_62() { return &___m_fontSize_62; }
	inline void set_m_fontSize_62(float value)
	{
		___m_fontSize_62 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_63() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentFontSize_63)); }
	inline float get_m_currentFontSize_63() const { return ___m_currentFontSize_63; }
	inline float* get_address_of_m_currentFontSize_63() { return &___m_currentFontSize_63; }
	inline void set_m_currentFontSize_63(float value)
	{
		___m_currentFontSize_63 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_64() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSizeBase_64)); }
	inline float get_m_fontSizeBase_64() const { return ___m_fontSizeBase_64; }
	inline float* get_address_of_m_fontSizeBase_64() { return &___m_fontSizeBase_64; }
	inline void set_m_fontSizeBase_64(float value)
	{
		___m_fontSizeBase_64 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_65() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_sizeStack_65)); }
	inline TMP_XmlTagStack_1_t960921318  get_m_sizeStack_65() const { return ___m_sizeStack_65; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_m_sizeStack_65() { return &___m_sizeStack_65; }
	inline void set_m_sizeStack_65(TMP_XmlTagStack_1_t960921318  value)
	{
		___m_sizeStack_65 = value;
	}

	inline static int32_t get_offset_of_m_fontWeight_66() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontWeight_66)); }
	inline int32_t get_m_fontWeight_66() const { return ___m_fontWeight_66; }
	inline int32_t* get_address_of_m_fontWeight_66() { return &___m_fontWeight_66; }
	inline void set_m_fontWeight_66(int32_t value)
	{
		___m_fontWeight_66 = value;
	}

	inline static int32_t get_offset_of_m_fontWeightInternal_67() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontWeightInternal_67)); }
	inline int32_t get_m_fontWeightInternal_67() const { return ___m_fontWeightInternal_67; }
	inline int32_t* get_address_of_m_fontWeightInternal_67() { return &___m_fontWeightInternal_67; }
	inline void set_m_fontWeightInternal_67(int32_t value)
	{
		___m_fontWeightInternal_67 = value;
	}

	inline static int32_t get_offset_of_m_fontWeightStack_68() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontWeightStack_68)); }
	inline TMP_XmlTagStack_1_t2514600297  get_m_fontWeightStack_68() const { return ___m_fontWeightStack_68; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_m_fontWeightStack_68() { return &___m_fontWeightStack_68; }
	inline void set_m_fontWeightStack_68(TMP_XmlTagStack_1_t2514600297  value)
	{
		___m_fontWeightStack_68 = value;
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_69() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableAutoSizing_69)); }
	inline bool get_m_enableAutoSizing_69() const { return ___m_enableAutoSizing_69; }
	inline bool* get_address_of_m_enableAutoSizing_69() { return &___m_enableAutoSizing_69; }
	inline void set_m_enableAutoSizing_69(bool value)
	{
		___m_enableAutoSizing_69 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_70() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxFontSize_70)); }
	inline float get_m_maxFontSize_70() const { return ___m_maxFontSize_70; }
	inline float* get_address_of_m_maxFontSize_70() { return &___m_maxFontSize_70; }
	inline void set_m_maxFontSize_70(float value)
	{
		___m_maxFontSize_70 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_71() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_minFontSize_71)); }
	inline float get_m_minFontSize_71() const { return ___m_minFontSize_71; }
	inline float* get_address_of_m_minFontSize_71() { return &___m_minFontSize_71; }
	inline void set_m_minFontSize_71(float value)
	{
		___m_minFontSize_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_72() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSizeMin_72)); }
	inline float get_m_fontSizeMin_72() const { return ___m_fontSizeMin_72; }
	inline float* get_address_of_m_fontSizeMin_72() { return &___m_fontSizeMin_72; }
	inline void set_m_fontSizeMin_72(float value)
	{
		___m_fontSizeMin_72 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_73() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontSizeMax_73)); }
	inline float get_m_fontSizeMax_73() const { return ___m_fontSizeMax_73; }
	inline float* get_address_of_m_fontSizeMax_73() { return &___m_fontSizeMax_73; }
	inline void set_m_fontSizeMax_73(float value)
	{
		___m_fontSizeMax_73 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_74() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontStyle_74)); }
	inline int32_t get_m_fontStyle_74() const { return ___m_fontStyle_74; }
	inline int32_t* get_address_of_m_fontStyle_74() { return &___m_fontStyle_74; }
	inline void set_m_fontStyle_74(int32_t value)
	{
		___m_fontStyle_74 = value;
	}

	inline static int32_t get_offset_of_m_style_75() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_style_75)); }
	inline int32_t get_m_style_75() const { return ___m_style_75; }
	inline int32_t* get_address_of_m_style_75() { return &___m_style_75; }
	inline void set_m_style_75(int32_t value)
	{
		___m_style_75 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_76() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontStyleStack_76)); }
	inline TMP_BasicXmlTagStack_t2962628096  get_m_fontStyleStack_76() const { return ___m_fontStyleStack_76; }
	inline TMP_BasicXmlTagStack_t2962628096 * get_address_of_m_fontStyleStack_76() { return &___m_fontStyleStack_76; }
	inline void set_m_fontStyleStack_76(TMP_BasicXmlTagStack_t2962628096  value)
	{
		___m_fontStyleStack_76 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_77() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isUsingBold_77)); }
	inline bool get_m_isUsingBold_77() const { return ___m_isUsingBold_77; }
	inline bool* get_address_of_m_isUsingBold_77() { return &___m_isUsingBold_77; }
	inline void set_m_isUsingBold_77(bool value)
	{
		___m_isUsingBold_77 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_78() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textAlignment_78)); }
	inline int32_t get_m_textAlignment_78() const { return ___m_textAlignment_78; }
	inline int32_t* get_address_of_m_textAlignment_78() { return &___m_textAlignment_78; }
	inline void set_m_textAlignment_78(int32_t value)
	{
		___m_textAlignment_78 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_79() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineJustification_79)); }
	inline int32_t get_m_lineJustification_79() const { return ___m_lineJustification_79; }
	inline int32_t* get_address_of_m_lineJustification_79() { return &___m_lineJustification_79; }
	inline void set_m_lineJustification_79(int32_t value)
	{
		___m_lineJustification_79 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_80() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineJustificationStack_80)); }
	inline TMP_XmlTagStack_1_t3600445780  get_m_lineJustificationStack_80() const { return ___m_lineJustificationStack_80; }
	inline TMP_XmlTagStack_1_t3600445780 * get_address_of_m_lineJustificationStack_80() { return &___m_lineJustificationStack_80; }
	inline void set_m_lineJustificationStack_80(TMP_XmlTagStack_1_t3600445780  value)
	{
		___m_lineJustificationStack_80 = value;
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_81() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textContainerLocalCorners_81)); }
	inline Vector3U5BU5D_t1718750761* get_m_textContainerLocalCorners_81() const { return ___m_textContainerLocalCorners_81; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_textContainerLocalCorners_81() { return &___m_textContainerLocalCorners_81; }
	inline void set_m_textContainerLocalCorners_81(Vector3U5BU5D_t1718750761* value)
	{
		___m_textContainerLocalCorners_81 = value;
		Il2CppCodeGenWriteBarrier((&___m_textContainerLocalCorners_81), value);
	}

	inline static int32_t get_offset_of_m_isAlignmentEnumConverted_82() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isAlignmentEnumConverted_82)); }
	inline bool get_m_isAlignmentEnumConverted_82() const { return ___m_isAlignmentEnumConverted_82; }
	inline bool* get_address_of_m_isAlignmentEnumConverted_82() { return &___m_isAlignmentEnumConverted_82; }
	inline void set_m_isAlignmentEnumConverted_82(bool value)
	{
		___m_isAlignmentEnumConverted_82 = value;
	}

	inline static int32_t get_offset_of_m_characterSpacing_83() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_characterSpacing_83)); }
	inline float get_m_characterSpacing_83() const { return ___m_characterSpacing_83; }
	inline float* get_address_of_m_characterSpacing_83() { return &___m_characterSpacing_83; }
	inline void set_m_characterSpacing_83(float value)
	{
		___m_characterSpacing_83 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_84() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cSpacing_84)); }
	inline float get_m_cSpacing_84() const { return ___m_cSpacing_84; }
	inline float* get_address_of_m_cSpacing_84() { return &___m_cSpacing_84; }
	inline void set_m_cSpacing_84(float value)
	{
		___m_cSpacing_84 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_85() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_monoSpacing_85)); }
	inline float get_m_monoSpacing_85() const { return ___m_monoSpacing_85; }
	inline float* get_address_of_m_monoSpacing_85() { return &___m_monoSpacing_85; }
	inline void set_m_monoSpacing_85(float value)
	{
		___m_monoSpacing_85 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_86() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_wordSpacing_86)); }
	inline float get_m_wordSpacing_86() const { return ___m_wordSpacing_86; }
	inline float* get_address_of_m_wordSpacing_86() { return &___m_wordSpacing_86; }
	inline void set_m_wordSpacing_86(float value)
	{
		___m_wordSpacing_86 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_87() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineSpacing_87)); }
	inline float get_m_lineSpacing_87() const { return ___m_lineSpacing_87; }
	inline float* get_address_of_m_lineSpacing_87() { return &___m_lineSpacing_87; }
	inline void set_m_lineSpacing_87(float value)
	{
		___m_lineSpacing_87 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_88() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineSpacingDelta_88)); }
	inline float get_m_lineSpacingDelta_88() const { return ___m_lineSpacingDelta_88; }
	inline float* get_address_of_m_lineSpacingDelta_88() { return &___m_lineSpacingDelta_88; }
	inline void set_m_lineSpacingDelta_88(float value)
	{
		___m_lineSpacingDelta_88 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_89() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineHeight_89)); }
	inline float get_m_lineHeight_89() const { return ___m_lineHeight_89; }
	inline float* get_address_of_m_lineHeight_89() { return &___m_lineHeight_89; }
	inline void set_m_lineHeight_89(float value)
	{
		___m_lineHeight_89 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_90() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineSpacingMax_90)); }
	inline float get_m_lineSpacingMax_90() const { return ___m_lineSpacingMax_90; }
	inline float* get_address_of_m_lineSpacingMax_90() { return &___m_lineSpacingMax_90; }
	inline void set_m_lineSpacingMax_90(float value)
	{
		___m_lineSpacingMax_90 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_91() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_paragraphSpacing_91)); }
	inline float get_m_paragraphSpacing_91() const { return ___m_paragraphSpacing_91; }
	inline float* get_address_of_m_paragraphSpacing_91() { return &___m_paragraphSpacing_91; }
	inline void set_m_paragraphSpacing_91(float value)
	{
		___m_paragraphSpacing_91 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_92() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_charWidthMaxAdj_92)); }
	inline float get_m_charWidthMaxAdj_92() const { return ___m_charWidthMaxAdj_92; }
	inline float* get_address_of_m_charWidthMaxAdj_92() { return &___m_charWidthMaxAdj_92; }
	inline void set_m_charWidthMaxAdj_92(float value)
	{
		___m_charWidthMaxAdj_92 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_93() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_charWidthAdjDelta_93)); }
	inline float get_m_charWidthAdjDelta_93() const { return ___m_charWidthAdjDelta_93; }
	inline float* get_address_of_m_charWidthAdjDelta_93() { return &___m_charWidthAdjDelta_93; }
	inline void set_m_charWidthAdjDelta_93(float value)
	{
		___m_charWidthAdjDelta_93 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_94() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableWordWrapping_94)); }
	inline bool get_m_enableWordWrapping_94() const { return ___m_enableWordWrapping_94; }
	inline bool* get_address_of_m_enableWordWrapping_94() { return &___m_enableWordWrapping_94; }
	inline void set_m_enableWordWrapping_94(bool value)
	{
		___m_enableWordWrapping_94 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_95() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCharacterWrappingEnabled_95)); }
	inline bool get_m_isCharacterWrappingEnabled_95() const { return ___m_isCharacterWrappingEnabled_95; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_95() { return &___m_isCharacterWrappingEnabled_95; }
	inline void set_m_isCharacterWrappingEnabled_95(bool value)
	{
		___m_isCharacterWrappingEnabled_95 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_96() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isNonBreakingSpace_96)); }
	inline bool get_m_isNonBreakingSpace_96() const { return ___m_isNonBreakingSpace_96; }
	inline bool* get_address_of_m_isNonBreakingSpace_96() { return &___m_isNonBreakingSpace_96; }
	inline void set_m_isNonBreakingSpace_96(bool value)
	{
		___m_isNonBreakingSpace_96 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_97() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isIgnoringAlignment_97)); }
	inline bool get_m_isIgnoringAlignment_97() const { return ___m_isIgnoringAlignment_97; }
	inline bool* get_address_of_m_isIgnoringAlignment_97() { return &___m_isIgnoringAlignment_97; }
	inline void set_m_isIgnoringAlignment_97(bool value)
	{
		___m_isIgnoringAlignment_97 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_98() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_wordWrappingRatios_98)); }
	inline float get_m_wordWrappingRatios_98() const { return ___m_wordWrappingRatios_98; }
	inline float* get_address_of_m_wordWrappingRatios_98() { return &___m_wordWrappingRatios_98; }
	inline void set_m_wordWrappingRatios_98(float value)
	{
		___m_wordWrappingRatios_98 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_99() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_overflowMode_99)); }
	inline int32_t get_m_overflowMode_99() const { return ___m_overflowMode_99; }
	inline int32_t* get_address_of_m_overflowMode_99() { return &___m_overflowMode_99; }
	inline void set_m_overflowMode_99(int32_t value)
	{
		___m_overflowMode_99 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_100() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstOverflowCharacterIndex_100)); }
	inline int32_t get_m_firstOverflowCharacterIndex_100() const { return ___m_firstOverflowCharacterIndex_100; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_100() { return &___m_firstOverflowCharacterIndex_100; }
	inline void set_m_firstOverflowCharacterIndex_100(int32_t value)
	{
		___m_firstOverflowCharacterIndex_100 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_101() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_linkedTextComponent_101)); }
	inline TMP_Text_t2599618874 * get_m_linkedTextComponent_101() const { return ___m_linkedTextComponent_101; }
	inline TMP_Text_t2599618874 ** get_address_of_m_linkedTextComponent_101() { return &___m_linkedTextComponent_101; }
	inline void set_m_linkedTextComponent_101(TMP_Text_t2599618874 * value)
	{
		___m_linkedTextComponent_101 = value;
		Il2CppCodeGenWriteBarrier((&___m_linkedTextComponent_101), value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_102() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isLinkedTextComponent_102)); }
	inline bool get_m_isLinkedTextComponent_102() const { return ___m_isLinkedTextComponent_102; }
	inline bool* get_address_of_m_isLinkedTextComponent_102() { return &___m_isLinkedTextComponent_102; }
	inline void set_m_isLinkedTextComponent_102(bool value)
	{
		___m_isLinkedTextComponent_102 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_103() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isTextTruncated_103)); }
	inline bool get_m_isTextTruncated_103() const { return ___m_isTextTruncated_103; }
	inline bool* get_address_of_m_isTextTruncated_103() { return &___m_isTextTruncated_103; }
	inline void set_m_isTextTruncated_103(bool value)
	{
		___m_isTextTruncated_103 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_104() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableKerning_104)); }
	inline bool get_m_enableKerning_104() const { return ___m_enableKerning_104; }
	inline bool* get_address_of_m_enableKerning_104() { return &___m_enableKerning_104; }
	inline void set_m_enableKerning_104(bool value)
	{
		___m_enableKerning_104 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_105() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_enableExtraPadding_105)); }
	inline bool get_m_enableExtraPadding_105() const { return ___m_enableExtraPadding_105; }
	inline bool* get_address_of_m_enableExtraPadding_105() { return &___m_enableExtraPadding_105; }
	inline void set_m_enableExtraPadding_105(bool value)
	{
		___m_enableExtraPadding_105 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_106() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___checkPaddingRequired_106)); }
	inline bool get_checkPaddingRequired_106() const { return ___checkPaddingRequired_106; }
	inline bool* get_address_of_checkPaddingRequired_106() { return &___checkPaddingRequired_106; }
	inline void set_checkPaddingRequired_106(bool value)
	{
		___checkPaddingRequired_106 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_107() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isRichText_107)); }
	inline bool get_m_isRichText_107() const { return ___m_isRichText_107; }
	inline bool* get_address_of_m_isRichText_107() { return &___m_isRichText_107; }
	inline void set_m_isRichText_107(bool value)
	{
		___m_isRichText_107 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_108() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_parseCtrlCharacters_108)); }
	inline bool get_m_parseCtrlCharacters_108() const { return ___m_parseCtrlCharacters_108; }
	inline bool* get_address_of_m_parseCtrlCharacters_108() { return &___m_parseCtrlCharacters_108; }
	inline void set_m_parseCtrlCharacters_108(bool value)
	{
		___m_parseCtrlCharacters_108 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_109() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isOverlay_109)); }
	inline bool get_m_isOverlay_109() const { return ___m_isOverlay_109; }
	inline bool* get_address_of_m_isOverlay_109() { return &___m_isOverlay_109; }
	inline void set_m_isOverlay_109(bool value)
	{
		___m_isOverlay_109 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_110() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isOrthographic_110)); }
	inline bool get_m_isOrthographic_110() const { return ___m_isOrthographic_110; }
	inline bool* get_address_of_m_isOrthographic_110() { return &___m_isOrthographic_110; }
	inline void set_m_isOrthographic_110(bool value)
	{
		___m_isOrthographic_110 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_111() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCullingEnabled_111)); }
	inline bool get_m_isCullingEnabled_111() const { return ___m_isCullingEnabled_111; }
	inline bool* get_address_of_m_isCullingEnabled_111() { return &___m_isCullingEnabled_111; }
	inline void set_m_isCullingEnabled_111(bool value)
	{
		___m_isCullingEnabled_111 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_112() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_ignoreRectMaskCulling_112)); }
	inline bool get_m_ignoreRectMaskCulling_112() const { return ___m_ignoreRectMaskCulling_112; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_112() { return &___m_ignoreRectMaskCulling_112; }
	inline void set_m_ignoreRectMaskCulling_112(bool value)
	{
		___m_ignoreRectMaskCulling_112 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_113() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_ignoreCulling_113)); }
	inline bool get_m_ignoreCulling_113() const { return ___m_ignoreCulling_113; }
	inline bool* get_address_of_m_ignoreCulling_113() { return &___m_ignoreCulling_113; }
	inline void set_m_ignoreCulling_113(bool value)
	{
		___m_ignoreCulling_113 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_114() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_horizontalMapping_114)); }
	inline int32_t get_m_horizontalMapping_114() const { return ___m_horizontalMapping_114; }
	inline int32_t* get_address_of_m_horizontalMapping_114() { return &___m_horizontalMapping_114; }
	inline void set_m_horizontalMapping_114(int32_t value)
	{
		___m_horizontalMapping_114 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_115() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_verticalMapping_115)); }
	inline int32_t get_m_verticalMapping_115() const { return ___m_verticalMapping_115; }
	inline int32_t* get_address_of_m_verticalMapping_115() { return &___m_verticalMapping_115; }
	inline void set_m_verticalMapping_115(int32_t value)
	{
		___m_verticalMapping_115 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_116() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_uvLineOffset_116)); }
	inline float get_m_uvLineOffset_116() const { return ___m_uvLineOffset_116; }
	inline float* get_address_of_m_uvLineOffset_116() { return &___m_uvLineOffset_116; }
	inline void set_m_uvLineOffset_116(float value)
	{
		___m_uvLineOffset_116 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_117() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_renderMode_117)); }
	inline int32_t get_m_renderMode_117() const { return ___m_renderMode_117; }
	inline int32_t* get_address_of_m_renderMode_117() { return &___m_renderMode_117; }
	inline void set_m_renderMode_117(int32_t value)
	{
		___m_renderMode_117 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_118() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_geometrySortingOrder_118)); }
	inline int32_t get_m_geometrySortingOrder_118() const { return ___m_geometrySortingOrder_118; }
	inline int32_t* get_address_of_m_geometrySortingOrder_118() { return &___m_geometrySortingOrder_118; }
	inline void set_m_geometrySortingOrder_118(int32_t value)
	{
		___m_geometrySortingOrder_118 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_119() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstVisibleCharacter_119)); }
	inline int32_t get_m_firstVisibleCharacter_119() const { return ___m_firstVisibleCharacter_119; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_119() { return &___m_firstVisibleCharacter_119; }
	inline void set_m_firstVisibleCharacter_119(int32_t value)
	{
		___m_firstVisibleCharacter_119 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_120() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxVisibleCharacters_120)); }
	inline int32_t get_m_maxVisibleCharacters_120() const { return ___m_maxVisibleCharacters_120; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_120() { return &___m_maxVisibleCharacters_120; }
	inline void set_m_maxVisibleCharacters_120(int32_t value)
	{
		___m_maxVisibleCharacters_120 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_121() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxVisibleWords_121)); }
	inline int32_t get_m_maxVisibleWords_121() const { return ___m_maxVisibleWords_121; }
	inline int32_t* get_address_of_m_maxVisibleWords_121() { return &___m_maxVisibleWords_121; }
	inline void set_m_maxVisibleWords_121(int32_t value)
	{
		___m_maxVisibleWords_121 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_122() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxVisibleLines_122)); }
	inline int32_t get_m_maxVisibleLines_122() const { return ___m_maxVisibleLines_122; }
	inline int32_t* get_address_of_m_maxVisibleLines_122() { return &___m_maxVisibleLines_122; }
	inline void set_m_maxVisibleLines_122(int32_t value)
	{
		___m_maxVisibleLines_122 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_123() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_useMaxVisibleDescender_123)); }
	inline bool get_m_useMaxVisibleDescender_123() const { return ___m_useMaxVisibleDescender_123; }
	inline bool* get_address_of_m_useMaxVisibleDescender_123() { return &___m_useMaxVisibleDescender_123; }
	inline void set_m_useMaxVisibleDescender_123(bool value)
	{
		___m_useMaxVisibleDescender_123 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_124() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_pageToDisplay_124)); }
	inline int32_t get_m_pageToDisplay_124() const { return ___m_pageToDisplay_124; }
	inline int32_t* get_address_of_m_pageToDisplay_124() { return &___m_pageToDisplay_124; }
	inline void set_m_pageToDisplay_124(int32_t value)
	{
		___m_pageToDisplay_124 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_125() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isNewPage_125)); }
	inline bool get_m_isNewPage_125() const { return ___m_isNewPage_125; }
	inline bool* get_address_of_m_isNewPage_125() { return &___m_isNewPage_125; }
	inline void set_m_isNewPage_125(bool value)
	{
		___m_isNewPage_125 = value;
	}

	inline static int32_t get_offset_of_m_margin_126() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_margin_126)); }
	inline Vector4_t3319028937  get_m_margin_126() const { return ___m_margin_126; }
	inline Vector4_t3319028937 * get_address_of_m_margin_126() { return &___m_margin_126; }
	inline void set_m_margin_126(Vector4_t3319028937  value)
	{
		___m_margin_126 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_127() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginLeft_127)); }
	inline float get_m_marginLeft_127() const { return ___m_marginLeft_127; }
	inline float* get_address_of_m_marginLeft_127() { return &___m_marginLeft_127; }
	inline void set_m_marginLeft_127(float value)
	{
		___m_marginLeft_127 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_128() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginRight_128)); }
	inline float get_m_marginRight_128() const { return ___m_marginRight_128; }
	inline float* get_address_of_m_marginRight_128() { return &___m_marginRight_128; }
	inline void set_m_marginRight_128(float value)
	{
		___m_marginRight_128 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_129() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginWidth_129)); }
	inline float get_m_marginWidth_129() const { return ___m_marginWidth_129; }
	inline float* get_address_of_m_marginWidth_129() { return &___m_marginWidth_129; }
	inline void set_m_marginWidth_129(float value)
	{
		___m_marginWidth_129 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_130() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_marginHeight_130)); }
	inline float get_m_marginHeight_130() const { return ___m_marginHeight_130; }
	inline float* get_address_of_m_marginHeight_130() { return &___m_marginHeight_130; }
	inline void set_m_marginHeight_130(float value)
	{
		___m_marginHeight_130 = value;
	}

	inline static int32_t get_offset_of_m_width_131() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_width_131)); }
	inline float get_m_width_131() const { return ___m_width_131; }
	inline float* get_address_of_m_width_131() { return &___m_width_131; }
	inline void set_m_width_131(float value)
	{
		___m_width_131 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_132() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textInfo_132)); }
	inline TMP_TextInfo_t3598145122 * get_m_textInfo_132() const { return ___m_textInfo_132; }
	inline TMP_TextInfo_t3598145122 ** get_address_of_m_textInfo_132() { return &___m_textInfo_132; }
	inline void set_m_textInfo_132(TMP_TextInfo_t3598145122 * value)
	{
		___m_textInfo_132 = value;
		Il2CppCodeGenWriteBarrier((&___m_textInfo_132), value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_133() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_havePropertiesChanged_133)); }
	inline bool get_m_havePropertiesChanged_133() const { return ___m_havePropertiesChanged_133; }
	inline bool* get_address_of_m_havePropertiesChanged_133() { return &___m_havePropertiesChanged_133; }
	inline void set_m_havePropertiesChanged_133(bool value)
	{
		___m_havePropertiesChanged_133 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_134() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isUsingLegacyAnimationComponent_134)); }
	inline bool get_m_isUsingLegacyAnimationComponent_134() const { return ___m_isUsingLegacyAnimationComponent_134; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_134() { return &___m_isUsingLegacyAnimationComponent_134; }
	inline void set_m_isUsingLegacyAnimationComponent_134(bool value)
	{
		___m_isUsingLegacyAnimationComponent_134 = value;
	}

	inline static int32_t get_offset_of_m_transform_135() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_transform_135)); }
	inline Transform_t3600365921 * get_m_transform_135() const { return ___m_transform_135; }
	inline Transform_t3600365921 ** get_address_of_m_transform_135() { return &___m_transform_135; }
	inline void set_m_transform_135(Transform_t3600365921 * value)
	{
		___m_transform_135 = value;
		Il2CppCodeGenWriteBarrier((&___m_transform_135), value);
	}

	inline static int32_t get_offset_of_m_rectTransform_136() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_rectTransform_136)); }
	inline RectTransform_t3704657025 * get_m_rectTransform_136() const { return ___m_rectTransform_136; }
	inline RectTransform_t3704657025 ** get_address_of_m_rectTransform_136() { return &___m_rectTransform_136; }
	inline void set_m_rectTransform_136(RectTransform_t3704657025 * value)
	{
		___m_rectTransform_136 = value;
		Il2CppCodeGenWriteBarrier((&___m_rectTransform_136), value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_137() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___U3CautoSizeTextContainerU3Ek__BackingField_137)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_137() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_137; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_137() { return &___U3CautoSizeTextContainerU3Ek__BackingField_137; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_137(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_137 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_138() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_autoSizeTextContainer_138)); }
	inline bool get_m_autoSizeTextContainer_138() const { return ___m_autoSizeTextContainer_138; }
	inline bool* get_address_of_m_autoSizeTextContainer_138() { return &___m_autoSizeTextContainer_138; }
	inline void set_m_autoSizeTextContainer_138(bool value)
	{
		___m_autoSizeTextContainer_138 = value;
	}

	inline static int32_t get_offset_of_m_mesh_139() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_mesh_139)); }
	inline Mesh_t3648964284 * get_m_mesh_139() const { return ___m_mesh_139; }
	inline Mesh_t3648964284 ** get_address_of_m_mesh_139() { return &___m_mesh_139; }
	inline void set_m_mesh_139(Mesh_t3648964284 * value)
	{
		___m_mesh_139 = value;
		Il2CppCodeGenWriteBarrier((&___m_mesh_139), value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_140() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isVolumetricText_140)); }
	inline bool get_m_isVolumetricText_140() const { return ___m_isVolumetricText_140; }
	inline bool* get_address_of_m_isVolumetricText_140() { return &___m_isVolumetricText_140; }
	inline void set_m_isVolumetricText_140(bool value)
	{
		___m_isVolumetricText_140 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_141() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteAnimator_141)); }
	inline TMP_SpriteAnimator_t2836635477 * get_m_spriteAnimator_141() const { return ___m_spriteAnimator_141; }
	inline TMP_SpriteAnimator_t2836635477 ** get_address_of_m_spriteAnimator_141() { return &___m_spriteAnimator_141; }
	inline void set_m_spriteAnimator_141(TMP_SpriteAnimator_t2836635477 * value)
	{
		___m_spriteAnimator_141 = value;
		Il2CppCodeGenWriteBarrier((&___m_spriteAnimator_141), value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_142() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_flexibleHeight_142)); }
	inline float get_m_flexibleHeight_142() const { return ___m_flexibleHeight_142; }
	inline float* get_address_of_m_flexibleHeight_142() { return &___m_flexibleHeight_142; }
	inline void set_m_flexibleHeight_142(float value)
	{
		___m_flexibleHeight_142 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_143() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_flexibleWidth_143)); }
	inline float get_m_flexibleWidth_143() const { return ___m_flexibleWidth_143; }
	inline float* get_address_of_m_flexibleWidth_143() { return &___m_flexibleWidth_143; }
	inline void set_m_flexibleWidth_143(float value)
	{
		___m_flexibleWidth_143 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_144() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_minWidth_144)); }
	inline float get_m_minWidth_144() const { return ___m_minWidth_144; }
	inline float* get_address_of_m_minWidth_144() { return &___m_minWidth_144; }
	inline void set_m_minWidth_144(float value)
	{
		___m_minWidth_144 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_145() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_minHeight_145)); }
	inline float get_m_minHeight_145() const { return ___m_minHeight_145; }
	inline float* get_address_of_m_minHeight_145() { return &___m_minHeight_145; }
	inline void set_m_minHeight_145(float value)
	{
		___m_minHeight_145 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_146() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxWidth_146)); }
	inline float get_m_maxWidth_146() const { return ___m_maxWidth_146; }
	inline float* get_address_of_m_maxWidth_146() { return &___m_maxWidth_146; }
	inline void set_m_maxWidth_146(float value)
	{
		___m_maxWidth_146 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxHeight_147)); }
	inline float get_m_maxHeight_147() const { return ___m_maxHeight_147; }
	inline float* get_address_of_m_maxHeight_147() { return &___m_maxHeight_147; }
	inline void set_m_maxHeight_147(float value)
	{
		___m_maxHeight_147 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_148() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_LayoutElement_148)); }
	inline LayoutElement_t1785403678 * get_m_LayoutElement_148() const { return ___m_LayoutElement_148; }
	inline LayoutElement_t1785403678 ** get_address_of_m_LayoutElement_148() { return &___m_LayoutElement_148; }
	inline void set_m_LayoutElement_148(LayoutElement_t1785403678 * value)
	{
		___m_LayoutElement_148 = value;
		Il2CppCodeGenWriteBarrier((&___m_LayoutElement_148), value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_preferredWidth_149)); }
	inline float get_m_preferredWidth_149() const { return ___m_preferredWidth_149; }
	inline float* get_address_of_m_preferredWidth_149() { return &___m_preferredWidth_149; }
	inline void set_m_preferredWidth_149(float value)
	{
		___m_preferredWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_renderedWidth_150)); }
	inline float get_m_renderedWidth_150() const { return ___m_renderedWidth_150; }
	inline float* get_address_of_m_renderedWidth_150() { return &___m_renderedWidth_150; }
	inline void set_m_renderedWidth_150(float value)
	{
		___m_renderedWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_151() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isPreferredWidthDirty_151)); }
	inline bool get_m_isPreferredWidthDirty_151() const { return ___m_isPreferredWidthDirty_151; }
	inline bool* get_address_of_m_isPreferredWidthDirty_151() { return &___m_isPreferredWidthDirty_151; }
	inline void set_m_isPreferredWidthDirty_151(bool value)
	{
		___m_isPreferredWidthDirty_151 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_152() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_preferredHeight_152)); }
	inline float get_m_preferredHeight_152() const { return ___m_preferredHeight_152; }
	inline float* get_address_of_m_preferredHeight_152() { return &___m_preferredHeight_152; }
	inline void set_m_preferredHeight_152(float value)
	{
		___m_preferredHeight_152 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_153() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_renderedHeight_153)); }
	inline float get_m_renderedHeight_153() const { return ___m_renderedHeight_153; }
	inline float* get_address_of_m_renderedHeight_153() { return &___m_renderedHeight_153; }
	inline void set_m_renderedHeight_153(float value)
	{
		___m_renderedHeight_153 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_154() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isPreferredHeightDirty_154)); }
	inline bool get_m_isPreferredHeightDirty_154() const { return ___m_isPreferredHeightDirty_154; }
	inline bool* get_address_of_m_isPreferredHeightDirty_154() { return &___m_isPreferredHeightDirty_154; }
	inline void set_m_isPreferredHeightDirty_154(bool value)
	{
		___m_isPreferredHeightDirty_154 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_155() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCalculatingPreferredValues_155)); }
	inline bool get_m_isCalculatingPreferredValues_155() const { return ___m_isCalculatingPreferredValues_155; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_155() { return &___m_isCalculatingPreferredValues_155; }
	inline void set_m_isCalculatingPreferredValues_155(bool value)
	{
		___m_isCalculatingPreferredValues_155 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_156() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_recursiveCount_156)); }
	inline int32_t get_m_recursiveCount_156() const { return ___m_recursiveCount_156; }
	inline int32_t* get_address_of_m_recursiveCount_156() { return &___m_recursiveCount_156; }
	inline void set_m_recursiveCount_156(int32_t value)
	{
		___m_recursiveCount_156 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_157() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_layoutPriority_157)); }
	inline int32_t get_m_layoutPriority_157() const { return ___m_layoutPriority_157; }
	inline int32_t* get_address_of_m_layoutPriority_157() { return &___m_layoutPriority_157; }
	inline void set_m_layoutPriority_157(int32_t value)
	{
		___m_layoutPriority_157 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_158() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isCalculateSizeRequired_158)); }
	inline bool get_m_isCalculateSizeRequired_158() const { return ___m_isCalculateSizeRequired_158; }
	inline bool* get_address_of_m_isCalculateSizeRequired_158() { return &___m_isCalculateSizeRequired_158; }
	inline void set_m_isCalculateSizeRequired_158(bool value)
	{
		___m_isCalculateSizeRequired_158 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_159() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isLayoutDirty_159)); }
	inline bool get_m_isLayoutDirty_159() const { return ___m_isLayoutDirty_159; }
	inline bool* get_address_of_m_isLayoutDirty_159() { return &___m_isLayoutDirty_159; }
	inline void set_m_isLayoutDirty_159(bool value)
	{
		___m_isLayoutDirty_159 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_160() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_verticesAlreadyDirty_160)); }
	inline bool get_m_verticesAlreadyDirty_160() const { return ___m_verticesAlreadyDirty_160; }
	inline bool* get_address_of_m_verticesAlreadyDirty_160() { return &___m_verticesAlreadyDirty_160; }
	inline void set_m_verticesAlreadyDirty_160(bool value)
	{
		___m_verticesAlreadyDirty_160 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_161() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_layoutAlreadyDirty_161)); }
	inline bool get_m_layoutAlreadyDirty_161() const { return ___m_layoutAlreadyDirty_161; }
	inline bool* get_address_of_m_layoutAlreadyDirty_161() { return &___m_layoutAlreadyDirty_161; }
	inline void set_m_layoutAlreadyDirty_161(bool value)
	{
		___m_layoutAlreadyDirty_161 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_162() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isAwake_162)); }
	inline bool get_m_isAwake_162() const { return ___m_isAwake_162; }
	inline bool* get_address_of_m_isAwake_162() { return &___m_isAwake_162; }
	inline void set_m_isAwake_162(bool value)
	{
		___m_isAwake_162 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_163() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isWaitingOnResourceLoad_163)); }
	inline bool get_m_isWaitingOnResourceLoad_163() const { return ___m_isWaitingOnResourceLoad_163; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_163() { return &___m_isWaitingOnResourceLoad_163; }
	inline void set_m_isWaitingOnResourceLoad_163(bool value)
	{
		___m_isWaitingOnResourceLoad_163 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_164() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isInputParsingRequired_164)); }
	inline bool get_m_isInputParsingRequired_164() const { return ___m_isInputParsingRequired_164; }
	inline bool* get_address_of_m_isInputParsingRequired_164() { return &___m_isInputParsingRequired_164; }
	inline void set_m_isInputParsingRequired_164(bool value)
	{
		___m_isInputParsingRequired_164 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_165() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_inputSource_165)); }
	inline int32_t get_m_inputSource_165() const { return ___m_inputSource_165; }
	inline int32_t* get_address_of_m_inputSource_165() { return &___m_inputSource_165; }
	inline void set_m_inputSource_165(int32_t value)
	{
		___m_inputSource_165 = value;
	}

	inline static int32_t get_offset_of_old_text_166() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___old_text_166)); }
	inline String_t* get_old_text_166() const { return ___old_text_166; }
	inline String_t** get_address_of_old_text_166() { return &___old_text_166; }
	inline void set_old_text_166(String_t* value)
	{
		___old_text_166 = value;
		Il2CppCodeGenWriteBarrier((&___old_text_166), value);
	}

	inline static int32_t get_offset_of_m_fontScale_167() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontScale_167)); }
	inline float get_m_fontScale_167() const { return ___m_fontScale_167; }
	inline float* get_address_of_m_fontScale_167() { return &___m_fontScale_167; }
	inline void set_m_fontScale_167(float value)
	{
		___m_fontScale_167 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_168() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_fontScaleMultiplier_168)); }
	inline float get_m_fontScaleMultiplier_168() const { return ___m_fontScaleMultiplier_168; }
	inline float* get_address_of_m_fontScaleMultiplier_168() { return &___m_fontScaleMultiplier_168; }
	inline void set_m_fontScaleMultiplier_168(float value)
	{
		___m_fontScaleMultiplier_168 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_169() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_htmlTag_169)); }
	inline CharU5BU5D_t3528271667* get_m_htmlTag_169() const { return ___m_htmlTag_169; }
	inline CharU5BU5D_t3528271667** get_address_of_m_htmlTag_169() { return &___m_htmlTag_169; }
	inline void set_m_htmlTag_169(CharU5BU5D_t3528271667* value)
	{
		___m_htmlTag_169 = value;
		Il2CppCodeGenWriteBarrier((&___m_htmlTag_169), value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_170() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_xmlAttribute_170)); }
	inline XML_TagAttributeU5BU5D_t284240280* get_m_xmlAttribute_170() const { return ___m_xmlAttribute_170; }
	inline XML_TagAttributeU5BU5D_t284240280** get_address_of_m_xmlAttribute_170() { return &___m_xmlAttribute_170; }
	inline void set_m_xmlAttribute_170(XML_TagAttributeU5BU5D_t284240280* value)
	{
		___m_xmlAttribute_170 = value;
		Il2CppCodeGenWriteBarrier((&___m_xmlAttribute_170), value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_171() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_attributeParameterValues_171)); }
	inline SingleU5BU5D_t1444911251* get_m_attributeParameterValues_171() const { return ___m_attributeParameterValues_171; }
	inline SingleU5BU5D_t1444911251** get_address_of_m_attributeParameterValues_171() { return &___m_attributeParameterValues_171; }
	inline void set_m_attributeParameterValues_171(SingleU5BU5D_t1444911251* value)
	{
		___m_attributeParameterValues_171 = value;
		Il2CppCodeGenWriteBarrier((&___m_attributeParameterValues_171), value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_172() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___tag_LineIndent_172)); }
	inline float get_tag_LineIndent_172() const { return ___tag_LineIndent_172; }
	inline float* get_address_of_tag_LineIndent_172() { return &___tag_LineIndent_172; }
	inline void set_tag_LineIndent_172(float value)
	{
		___tag_LineIndent_172 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_173() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___tag_Indent_173)); }
	inline float get_tag_Indent_173() const { return ___tag_Indent_173; }
	inline float* get_address_of_tag_Indent_173() { return &___tag_Indent_173; }
	inline void set_tag_Indent_173(float value)
	{
		___tag_Indent_173 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_174() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_indentStack_174)); }
	inline TMP_XmlTagStack_1_t960921318  get_m_indentStack_174() const { return ___m_indentStack_174; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_m_indentStack_174() { return &___m_indentStack_174; }
	inline void set_m_indentStack_174(TMP_XmlTagStack_1_t960921318  value)
	{
		___m_indentStack_174 = value;
	}

	inline static int32_t get_offset_of_tag_NoParsing_175() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___tag_NoParsing_175)); }
	inline bool get_tag_NoParsing_175() const { return ___tag_NoParsing_175; }
	inline bool* get_address_of_tag_NoParsing_175() { return &___tag_NoParsing_175; }
	inline void set_tag_NoParsing_175(bool value)
	{
		___tag_NoParsing_175 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_176() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isParsingText_176)); }
	inline bool get_m_isParsingText_176() const { return ___m_isParsingText_176; }
	inline bool* get_address_of_m_isParsingText_176() { return &___m_isParsingText_176; }
	inline void set_m_isParsingText_176(bool value)
	{
		___m_isParsingText_176 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_177() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_FXMatrix_177)); }
	inline Matrix4x4_t1817901843  get_m_FXMatrix_177() const { return ___m_FXMatrix_177; }
	inline Matrix4x4_t1817901843 * get_address_of_m_FXMatrix_177() { return &___m_FXMatrix_177; }
	inline void set_m_FXMatrix_177(Matrix4x4_t1817901843  value)
	{
		___m_FXMatrix_177 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_178() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_isFXMatrixSet_178)); }
	inline bool get_m_isFXMatrixSet_178() const { return ___m_isFXMatrixSet_178; }
	inline bool* get_address_of_m_isFXMatrixSet_178() { return &___m_isFXMatrixSet_178; }
	inline void set_m_isFXMatrixSet_178(bool value)
	{
		___m_isFXMatrixSet_178 = value;
	}

	inline static int32_t get_offset_of_m_char_buffer_179() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_char_buffer_179)); }
	inline Int32U5BU5D_t385246372* get_m_char_buffer_179() const { return ___m_char_buffer_179; }
	inline Int32U5BU5D_t385246372** get_address_of_m_char_buffer_179() { return &___m_char_buffer_179; }
	inline void set_m_char_buffer_179(Int32U5BU5D_t385246372* value)
	{
		___m_char_buffer_179 = value;
		Il2CppCodeGenWriteBarrier((&___m_char_buffer_179), value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_180() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_internalCharacterInfo_180)); }
	inline TMP_CharacterInfoU5BU5D_t1930184704* get_m_internalCharacterInfo_180() const { return ___m_internalCharacterInfo_180; }
	inline TMP_CharacterInfoU5BU5D_t1930184704** get_address_of_m_internalCharacterInfo_180() { return &___m_internalCharacterInfo_180; }
	inline void set_m_internalCharacterInfo_180(TMP_CharacterInfoU5BU5D_t1930184704* value)
	{
		___m_internalCharacterInfo_180 = value;
		Il2CppCodeGenWriteBarrier((&___m_internalCharacterInfo_180), value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_181() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_input_CharArray_181)); }
	inline CharU5BU5D_t3528271667* get_m_input_CharArray_181() const { return ___m_input_CharArray_181; }
	inline CharU5BU5D_t3528271667** get_address_of_m_input_CharArray_181() { return &___m_input_CharArray_181; }
	inline void set_m_input_CharArray_181(CharU5BU5D_t3528271667* value)
	{
		___m_input_CharArray_181 = value;
		Il2CppCodeGenWriteBarrier((&___m_input_CharArray_181), value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_182() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_charArray_Length_182)); }
	inline int32_t get_m_charArray_Length_182() const { return ___m_charArray_Length_182; }
	inline int32_t* get_address_of_m_charArray_Length_182() { return &___m_charArray_Length_182; }
	inline void set_m_charArray_Length_182(int32_t value)
	{
		___m_charArray_Length_182 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_183() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_totalCharacterCount_183)); }
	inline int32_t get_m_totalCharacterCount_183() const { return ___m_totalCharacterCount_183; }
	inline int32_t* get_address_of_m_totalCharacterCount_183() { return &___m_totalCharacterCount_183; }
	inline void set_m_totalCharacterCount_183(int32_t value)
	{
		___m_totalCharacterCount_183 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_184() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_SavedWordWrapState_184)); }
	inline WordWrapState_t341939652  get_m_SavedWordWrapState_184() const { return ___m_SavedWordWrapState_184; }
	inline WordWrapState_t341939652 * get_address_of_m_SavedWordWrapState_184() { return &___m_SavedWordWrapState_184; }
	inline void set_m_SavedWordWrapState_184(WordWrapState_t341939652  value)
	{
		___m_SavedWordWrapState_184 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_185() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_SavedLineState_185)); }
	inline WordWrapState_t341939652  get_m_SavedLineState_185() const { return ___m_SavedLineState_185; }
	inline WordWrapState_t341939652 * get_address_of_m_SavedLineState_185() { return &___m_SavedLineState_185; }
	inline void set_m_SavedLineState_185(WordWrapState_t341939652  value)
	{
		___m_SavedLineState_185 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_186() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_characterCount_186)); }
	inline int32_t get_m_characterCount_186() const { return ___m_characterCount_186; }
	inline int32_t* get_address_of_m_characterCount_186() { return &___m_characterCount_186; }
	inline void set_m_characterCount_186(int32_t value)
	{
		___m_characterCount_186 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_187() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstCharacterOfLine_187)); }
	inline int32_t get_m_firstCharacterOfLine_187() const { return ___m_firstCharacterOfLine_187; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_187() { return &___m_firstCharacterOfLine_187; }
	inline void set_m_firstCharacterOfLine_187(int32_t value)
	{
		___m_firstCharacterOfLine_187 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_188() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_firstVisibleCharacterOfLine_188)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_188() const { return ___m_firstVisibleCharacterOfLine_188; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_188() { return &___m_firstVisibleCharacterOfLine_188; }
	inline void set_m_firstVisibleCharacterOfLine_188(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_188 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_189() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lastCharacterOfLine_189)); }
	inline int32_t get_m_lastCharacterOfLine_189() const { return ___m_lastCharacterOfLine_189; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_189() { return &___m_lastCharacterOfLine_189; }
	inline void set_m_lastCharacterOfLine_189(int32_t value)
	{
		___m_lastCharacterOfLine_189 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_190() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lastVisibleCharacterOfLine_190)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_190() const { return ___m_lastVisibleCharacterOfLine_190; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_190() { return &___m_lastVisibleCharacterOfLine_190; }
	inline void set_m_lastVisibleCharacterOfLine_190(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_190 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_191() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineNumber_191)); }
	inline int32_t get_m_lineNumber_191() const { return ___m_lineNumber_191; }
	inline int32_t* get_address_of_m_lineNumber_191() { return &___m_lineNumber_191; }
	inline void set_m_lineNumber_191(int32_t value)
	{
		___m_lineNumber_191 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_192() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineVisibleCharacterCount_192)); }
	inline int32_t get_m_lineVisibleCharacterCount_192() const { return ___m_lineVisibleCharacterCount_192; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_192() { return &___m_lineVisibleCharacterCount_192; }
	inline void set_m_lineVisibleCharacterCount_192(int32_t value)
	{
		___m_lineVisibleCharacterCount_192 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_193() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_pageNumber_193)); }
	inline int32_t get_m_pageNumber_193() const { return ___m_pageNumber_193; }
	inline int32_t* get_address_of_m_pageNumber_193() { return &___m_pageNumber_193; }
	inline void set_m_pageNumber_193(int32_t value)
	{
		___m_pageNumber_193 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_194() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxAscender_194)); }
	inline float get_m_maxAscender_194() const { return ___m_maxAscender_194; }
	inline float* get_address_of_m_maxAscender_194() { return &___m_maxAscender_194; }
	inline void set_m_maxAscender_194(float value)
	{
		___m_maxAscender_194 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_195() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxCapHeight_195)); }
	inline float get_m_maxCapHeight_195() const { return ___m_maxCapHeight_195; }
	inline float* get_address_of_m_maxCapHeight_195() { return &___m_maxCapHeight_195; }
	inline void set_m_maxCapHeight_195(float value)
	{
		___m_maxCapHeight_195 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_196() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxDescender_196)); }
	inline float get_m_maxDescender_196() const { return ___m_maxDescender_196; }
	inline float* get_address_of_m_maxDescender_196() { return &___m_maxDescender_196; }
	inline void set_m_maxDescender_196(float value)
	{
		___m_maxDescender_196 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_197() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxLineAscender_197)); }
	inline float get_m_maxLineAscender_197() const { return ___m_maxLineAscender_197; }
	inline float* get_address_of_m_maxLineAscender_197() { return &___m_maxLineAscender_197; }
	inline void set_m_maxLineAscender_197(float value)
	{
		___m_maxLineAscender_197 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_198() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_maxLineDescender_198)); }
	inline float get_m_maxLineDescender_198() const { return ___m_maxLineDescender_198; }
	inline float* get_address_of_m_maxLineDescender_198() { return &___m_maxLineDescender_198; }
	inline void set_m_maxLineDescender_198(float value)
	{
		___m_maxLineDescender_198 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_199() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_startOfLineAscender_199)); }
	inline float get_m_startOfLineAscender_199() const { return ___m_startOfLineAscender_199; }
	inline float* get_address_of_m_startOfLineAscender_199() { return &___m_startOfLineAscender_199; }
	inline void set_m_startOfLineAscender_199(float value)
	{
		___m_startOfLineAscender_199 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_200() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_lineOffset_200)); }
	inline float get_m_lineOffset_200() const { return ___m_lineOffset_200; }
	inline float* get_address_of_m_lineOffset_200() { return &___m_lineOffset_200; }
	inline void set_m_lineOffset_200(float value)
	{
		___m_lineOffset_200 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_201() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_meshExtents_201)); }
	inline Extents_t3837212874  get_m_meshExtents_201() const { return ___m_meshExtents_201; }
	inline Extents_t3837212874 * get_address_of_m_meshExtents_201() { return &___m_meshExtents_201; }
	inline void set_m_meshExtents_201(Extents_t3837212874  value)
	{
		___m_meshExtents_201 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_202() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_htmlColor_202)); }
	inline Color32_t2600501292  get_m_htmlColor_202() const { return ___m_htmlColor_202; }
	inline Color32_t2600501292 * get_address_of_m_htmlColor_202() { return &___m_htmlColor_202; }
	inline void set_m_htmlColor_202(Color32_t2600501292  value)
	{
		___m_htmlColor_202 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_203() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_colorStack_203)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_colorStack_203() const { return ___m_colorStack_203; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_colorStack_203() { return &___m_colorStack_203; }
	inline void set_m_colorStack_203(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_colorStack_203 = value;
	}

	inline static int32_t get_offset_of_m_underlineColorStack_204() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_underlineColorStack_204)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_underlineColorStack_204() const { return ___m_underlineColorStack_204; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_underlineColorStack_204() { return &___m_underlineColorStack_204; }
	inline void set_m_underlineColorStack_204(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_underlineColorStack_204 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_strikethroughColorStack_205)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_strikethroughColorStack_205() const { return ___m_strikethroughColorStack_205; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_strikethroughColorStack_205() { return &___m_strikethroughColorStack_205; }
	inline void set_m_strikethroughColorStack_205(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_strikethroughColorStack_205 = value;
	}

	inline static int32_t get_offset_of_m_highlightColorStack_206() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_highlightColorStack_206)); }
	inline TMP_XmlTagStack_1_t2164155836  get_m_highlightColorStack_206() const { return ___m_highlightColorStack_206; }
	inline TMP_XmlTagStack_1_t2164155836 * get_address_of_m_highlightColorStack_206() { return &___m_highlightColorStack_206; }
	inline void set_m_highlightColorStack_206(TMP_XmlTagStack_1_t2164155836  value)
	{
		___m_highlightColorStack_206 = value;
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_207() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_colorGradientPreset_207)); }
	inline TMP_ColorGradient_t3678055768 * get_m_colorGradientPreset_207() const { return ___m_colorGradientPreset_207; }
	inline TMP_ColorGradient_t3678055768 ** get_address_of_m_colorGradientPreset_207() { return &___m_colorGradientPreset_207; }
	inline void set_m_colorGradientPreset_207(TMP_ColorGradient_t3678055768 * value)
	{
		___m_colorGradientPreset_207 = value;
		Il2CppCodeGenWriteBarrier((&___m_colorGradientPreset_207), value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_208() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_colorGradientStack_208)); }
	inline TMP_XmlTagStack_1_t3241710312  get_m_colorGradientStack_208() const { return ___m_colorGradientStack_208; }
	inline TMP_XmlTagStack_1_t3241710312 * get_address_of_m_colorGradientStack_208() { return &___m_colorGradientStack_208; }
	inline void set_m_colorGradientStack_208(TMP_XmlTagStack_1_t3241710312  value)
	{
		___m_colorGradientStack_208 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_209() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_tabSpacing_209)); }
	inline float get_m_tabSpacing_209() const { return ___m_tabSpacing_209; }
	inline float* get_address_of_m_tabSpacing_209() { return &___m_tabSpacing_209; }
	inline void set_m_tabSpacing_209(float value)
	{
		___m_tabSpacing_209 = value;
	}

	inline static int32_t get_offset_of_m_spacing_210() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spacing_210)); }
	inline float get_m_spacing_210() const { return ___m_spacing_210; }
	inline float* get_address_of_m_spacing_210() { return &___m_spacing_210; }
	inline void set_m_spacing_210(float value)
	{
		___m_spacing_210 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_211() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_styleStack_211)); }
	inline TMP_XmlTagStack_1_t2514600297  get_m_styleStack_211() const { return ___m_styleStack_211; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_m_styleStack_211() { return &___m_styleStack_211; }
	inline void set_m_styleStack_211(TMP_XmlTagStack_1_t2514600297  value)
	{
		___m_styleStack_211 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_actionStack_212)); }
	inline TMP_XmlTagStack_1_t2514600297  get_m_actionStack_212() const { return ___m_actionStack_212; }
	inline TMP_XmlTagStack_1_t2514600297 * get_address_of_m_actionStack_212() { return &___m_actionStack_212; }
	inline void set_m_actionStack_212(TMP_XmlTagStack_1_t2514600297  value)
	{
		___m_actionStack_212 = value;
	}

	inline static int32_t get_offset_of_m_padding_213() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_padding_213)); }
	inline float get_m_padding_213() const { return ___m_padding_213; }
	inline float* get_address_of_m_padding_213() { return &___m_padding_213; }
	inline void set_m_padding_213(float value)
	{
		___m_padding_213 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_214() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_baselineOffset_214)); }
	inline float get_m_baselineOffset_214() const { return ___m_baselineOffset_214; }
	inline float* get_address_of_m_baselineOffset_214() { return &___m_baselineOffset_214; }
	inline void set_m_baselineOffset_214(float value)
	{
		___m_baselineOffset_214 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_215() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_baselineOffsetStack_215)); }
	inline TMP_XmlTagStack_1_t960921318  get_m_baselineOffsetStack_215() const { return ___m_baselineOffsetStack_215; }
	inline TMP_XmlTagStack_1_t960921318 * get_address_of_m_baselineOffsetStack_215() { return &___m_baselineOffsetStack_215; }
	inline void set_m_baselineOffsetStack_215(TMP_XmlTagStack_1_t960921318  value)
	{
		___m_baselineOffsetStack_215 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_216() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_xAdvance_216)); }
	inline float get_m_xAdvance_216() const { return ___m_xAdvance_216; }
	inline float* get_address_of_m_xAdvance_216() { return &___m_xAdvance_216; }
	inline void set_m_xAdvance_216(float value)
	{
		___m_xAdvance_216 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_217() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_textElementType_217)); }
	inline int32_t get_m_textElementType_217() const { return ___m_textElementType_217; }
	inline int32_t* get_address_of_m_textElementType_217() { return &___m_textElementType_217; }
	inline void set_m_textElementType_217(int32_t value)
	{
		___m_textElementType_217 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_218() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cached_TextElement_218)); }
	inline TMP_TextElement_t129727469 * get_m_cached_TextElement_218() const { return ___m_cached_TextElement_218; }
	inline TMP_TextElement_t129727469 ** get_address_of_m_cached_TextElement_218() { return &___m_cached_TextElement_218; }
	inline void set_m_cached_TextElement_218(TMP_TextElement_t129727469 * value)
	{
		___m_cached_TextElement_218 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_TextElement_218), value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_GlyphInfo_219() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cached_Underline_GlyphInfo_219)); }
	inline TMP_Glyph_t581847833 * get_m_cached_Underline_GlyphInfo_219() const { return ___m_cached_Underline_GlyphInfo_219; }
	inline TMP_Glyph_t581847833 ** get_address_of_m_cached_Underline_GlyphInfo_219() { return &___m_cached_Underline_GlyphInfo_219; }
	inline void set_m_cached_Underline_GlyphInfo_219(TMP_Glyph_t581847833 * value)
	{
		___m_cached_Underline_GlyphInfo_219 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Underline_GlyphInfo_219), value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_GlyphInfo_220() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_cached_Ellipsis_GlyphInfo_220)); }
	inline TMP_Glyph_t581847833 * get_m_cached_Ellipsis_GlyphInfo_220() const { return ___m_cached_Ellipsis_GlyphInfo_220; }
	inline TMP_Glyph_t581847833 ** get_address_of_m_cached_Ellipsis_GlyphInfo_220() { return &___m_cached_Ellipsis_GlyphInfo_220; }
	inline void set_m_cached_Ellipsis_GlyphInfo_220(TMP_Glyph_t581847833 * value)
	{
		___m_cached_Ellipsis_GlyphInfo_220 = value;
		Il2CppCodeGenWriteBarrier((&___m_cached_Ellipsis_GlyphInfo_220), value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_221() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_defaultSpriteAsset_221)); }
	inline TMP_SpriteAsset_t484820633 * get_m_defaultSpriteAsset_221() const { return ___m_defaultSpriteAsset_221; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_m_defaultSpriteAsset_221() { return &___m_defaultSpriteAsset_221; }
	inline void set_m_defaultSpriteAsset_221(TMP_SpriteAsset_t484820633 * value)
	{
		___m_defaultSpriteAsset_221 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultSpriteAsset_221), value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_222() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_currentSpriteAsset_222)); }
	inline TMP_SpriteAsset_t484820633 * get_m_currentSpriteAsset_222() const { return ___m_currentSpriteAsset_222; }
	inline TMP_SpriteAsset_t484820633 ** get_address_of_m_currentSpriteAsset_222() { return &___m_currentSpriteAsset_222; }
	inline void set_m_currentSpriteAsset_222(TMP_SpriteAsset_t484820633 * value)
	{
		___m_currentSpriteAsset_222 = value;
		Il2CppCodeGenWriteBarrier((&___m_currentSpriteAsset_222), value);
	}

	inline static int32_t get_offset_of_m_spriteCount_223() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteCount_223)); }
	inline int32_t get_m_spriteCount_223() const { return ___m_spriteCount_223; }
	inline int32_t* get_address_of_m_spriteCount_223() { return &___m_spriteCount_223; }
	inline void set_m_spriteCount_223(int32_t value)
	{
		___m_spriteCount_223 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_224() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteIndex_224)); }
	inline int32_t get_m_spriteIndex_224() const { return ___m_spriteIndex_224; }
	inline int32_t* get_address_of_m_spriteIndex_224() { return &___m_spriteIndex_224; }
	inline void set_m_spriteIndex_224(int32_t value)
	{
		___m_spriteIndex_224 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_225() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_spriteAnimationID_225)); }
	inline int32_t get_m_spriteAnimationID_225() const { return ___m_spriteAnimationID_225; }
	inline int32_t* get_address_of_m_spriteAnimationID_225() { return &___m_spriteAnimationID_225; }
	inline void set_m_spriteAnimationID_225(int32_t value)
	{
		___m_spriteAnimationID_225 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_226() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___m_ignoreActiveState_226)); }
	inline bool get_m_ignoreActiveState_226() const { return ___m_ignoreActiveState_226; }
	inline bool* get_address_of_m_ignoreActiveState_226() { return &___m_ignoreActiveState_226; }
	inline void set_m_ignoreActiveState_226(bool value)
	{
		___m_ignoreActiveState_226 = value;
	}

	inline static int32_t get_offset_of_k_Power_227() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874, ___k_Power_227)); }
	inline SingleU5BU5D_t1444911251* get_k_Power_227() const { return ___k_Power_227; }
	inline SingleU5BU5D_t1444911251** get_address_of_k_Power_227() { return &___k_Power_227; }
	inline void set_k_Power_227(SingleU5BU5D_t1444911251* value)
	{
		___k_Power_227 = value;
		Il2CppCodeGenWriteBarrier((&___k_Power_227), value);
	}
};

struct TMP_Text_t2599618874_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t2600501292  ___s_colorWhite_47;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t2156229523  ___k_LargePositiveVector2_228;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t2156229523  ___k_LargeNegativeVector2_229;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_230;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_231;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_232;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_233;

public:
	inline static int32_t get_offset_of_s_colorWhite_47() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___s_colorWhite_47)); }
	inline Color32_t2600501292  get_s_colorWhite_47() const { return ___s_colorWhite_47; }
	inline Color32_t2600501292 * get_address_of_s_colorWhite_47() { return &___s_colorWhite_47; }
	inline void set_s_colorWhite_47(Color32_t2600501292  value)
	{
		___s_colorWhite_47 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_228() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargePositiveVector2_228)); }
	inline Vector2_t2156229523  get_k_LargePositiveVector2_228() const { return ___k_LargePositiveVector2_228; }
	inline Vector2_t2156229523 * get_address_of_k_LargePositiveVector2_228() { return &___k_LargePositiveVector2_228; }
	inline void set_k_LargePositiveVector2_228(Vector2_t2156229523  value)
	{
		___k_LargePositiveVector2_228 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_229() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargeNegativeVector2_229)); }
	inline Vector2_t2156229523  get_k_LargeNegativeVector2_229() const { return ___k_LargeNegativeVector2_229; }
	inline Vector2_t2156229523 * get_address_of_k_LargeNegativeVector2_229() { return &___k_LargeNegativeVector2_229; }
	inline void set_k_LargeNegativeVector2_229(Vector2_t2156229523  value)
	{
		___k_LargeNegativeVector2_229 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_230() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargePositiveFloat_230)); }
	inline float get_k_LargePositiveFloat_230() const { return ___k_LargePositiveFloat_230; }
	inline float* get_address_of_k_LargePositiveFloat_230() { return &___k_LargePositiveFloat_230; }
	inline void set_k_LargePositiveFloat_230(float value)
	{
		___k_LargePositiveFloat_230 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_231() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargeNegativeFloat_231)); }
	inline float get_k_LargeNegativeFloat_231() const { return ___k_LargeNegativeFloat_231; }
	inline float* get_address_of_k_LargeNegativeFloat_231() { return &___k_LargeNegativeFloat_231; }
	inline void set_k_LargeNegativeFloat_231(float value)
	{
		___k_LargeNegativeFloat_231 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_232() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargePositiveInt_232)); }
	inline int32_t get_k_LargePositiveInt_232() const { return ___k_LargePositiveInt_232; }
	inline int32_t* get_address_of_k_LargePositiveInt_232() { return &___k_LargePositiveInt_232; }
	inline void set_k_LargePositiveInt_232(int32_t value)
	{
		___k_LargePositiveInt_232 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_233() { return static_cast<int32_t>(offsetof(TMP_Text_t2599618874_StaticFields, ___k_LargeNegativeInt_233)); }
	inline int32_t get_k_LargeNegativeInt_233() const { return ___k_LargeNegativeInt_233; }
	inline int32_t* get_address_of_k_LargeNegativeInt_233() { return &___k_LargeNegativeInt_233; }
	inline void set_k_LargeNegativeInt_233(int32_t value)
	{
		___k_LargeNegativeInt_233 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TMP_TEXT_T2599618874_H
#ifndef TEXTMESHPROUGUI_T529313277_H
#define TEXTMESHPROUGUI_T529313277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_t529313277  : public TMP_Text_t2599618874
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_234;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_235;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_t3119380694* ___m_subTextObjects_236;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_237;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_t1718750761* ___m_RectTransformCorners_238;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_t2598313366 * ___m_canvasRenderer_239;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t3310196443 * ___m_canvas_240;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_241;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_242;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_243;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t340375123 * ___m_baseMaterial_244;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_245;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_246;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t3319028937  ___m_maskOffset_247;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t1817901843  ___m_EnvMapMatrix_248;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_249;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_250;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_251;

public:
	inline static int32_t get_offset_of_m_isRebuildingLayout_234() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isRebuildingLayout_234)); }
	inline bool get_m_isRebuildingLayout_234() const { return ___m_isRebuildingLayout_234; }
	inline bool* get_address_of_m_isRebuildingLayout_234() { return &___m_isRebuildingLayout_234; }
	inline void set_m_isRebuildingLayout_234(bool value)
	{
		___m_isRebuildingLayout_234 = value;
	}

	inline static int32_t get_offset_of_m_hasFontAssetChanged_235() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_hasFontAssetChanged_235)); }
	inline bool get_m_hasFontAssetChanged_235() const { return ___m_hasFontAssetChanged_235; }
	inline bool* get_address_of_m_hasFontAssetChanged_235() { return &___m_hasFontAssetChanged_235; }
	inline void set_m_hasFontAssetChanged_235(bool value)
	{
		___m_hasFontAssetChanged_235 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_236() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_subTextObjects_236)); }
	inline TMP_SubMeshUIU5BU5D_t3119380694* get_m_subTextObjects_236() const { return ___m_subTextObjects_236; }
	inline TMP_SubMeshUIU5BU5D_t3119380694** get_address_of_m_subTextObjects_236() { return &___m_subTextObjects_236; }
	inline void set_m_subTextObjects_236(TMP_SubMeshUIU5BU5D_t3119380694* value)
	{
		___m_subTextObjects_236 = value;
		Il2CppCodeGenWriteBarrier((&___m_subTextObjects_236), value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_237() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_previousLossyScaleY_237)); }
	inline float get_m_previousLossyScaleY_237() const { return ___m_previousLossyScaleY_237; }
	inline float* get_address_of_m_previousLossyScaleY_237() { return &___m_previousLossyScaleY_237; }
	inline void set_m_previousLossyScaleY_237(float value)
	{
		___m_previousLossyScaleY_237 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_238() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_RectTransformCorners_238)); }
	inline Vector3U5BU5D_t1718750761* get_m_RectTransformCorners_238() const { return ___m_RectTransformCorners_238; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_RectTransformCorners_238() { return &___m_RectTransformCorners_238; }
	inline void set_m_RectTransformCorners_238(Vector3U5BU5D_t1718750761* value)
	{
		___m_RectTransformCorners_238 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransformCorners_238), value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_239() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_canvasRenderer_239)); }
	inline CanvasRenderer_t2598313366 * get_m_canvasRenderer_239() const { return ___m_canvasRenderer_239; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_canvasRenderer_239() { return &___m_canvasRenderer_239; }
	inline void set_m_canvasRenderer_239(CanvasRenderer_t2598313366 * value)
	{
		___m_canvasRenderer_239 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvasRenderer_239), value);
	}

	inline static int32_t get_offset_of_m_canvas_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_canvas_240)); }
	inline Canvas_t3310196443 * get_m_canvas_240() const { return ___m_canvas_240; }
	inline Canvas_t3310196443 ** get_address_of_m_canvas_240() { return &___m_canvas_240; }
	inline void set_m_canvas_240(Canvas_t3310196443 * value)
	{
		___m_canvas_240 = value;
		Il2CppCodeGenWriteBarrier((&___m_canvas_240), value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isFirstAllocation_241)); }
	inline bool get_m_isFirstAllocation_241() const { return ___m_isFirstAllocation_241; }
	inline bool* get_address_of_m_isFirstAllocation_241() { return &___m_isFirstAllocation_241; }
	inline void set_m_isFirstAllocation_241(bool value)
	{
		___m_isFirstAllocation_241 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_max_characters_242)); }
	inline int32_t get_m_max_characters_242() const { return ___m_max_characters_242; }
	inline int32_t* get_address_of_m_max_characters_242() { return &___m_max_characters_242; }
	inline void set_m_max_characters_242(int32_t value)
	{
		___m_max_characters_242 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isMaskingEnabled_243)); }
	inline bool get_m_isMaskingEnabled_243() const { return ___m_isMaskingEnabled_243; }
	inline bool* get_address_of_m_isMaskingEnabled_243() { return &___m_isMaskingEnabled_243; }
	inline void set_m_isMaskingEnabled_243(bool value)
	{
		___m_isMaskingEnabled_243 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_baseMaterial_244)); }
	inline Material_t340375123 * get_m_baseMaterial_244() const { return ___m_baseMaterial_244; }
	inline Material_t340375123 ** get_address_of_m_baseMaterial_244() { return &___m_baseMaterial_244; }
	inline void set_m_baseMaterial_244(Material_t340375123 * value)
	{
		___m_baseMaterial_244 = value;
		Il2CppCodeGenWriteBarrier((&___m_baseMaterial_244), value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isScrollRegionSet_245)); }
	inline bool get_m_isScrollRegionSet_245() const { return ___m_isScrollRegionSet_245; }
	inline bool* get_address_of_m_isScrollRegionSet_245() { return &___m_isScrollRegionSet_245; }
	inline void set_m_isScrollRegionSet_245(bool value)
	{
		___m_isScrollRegionSet_245 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_stencilID_246)); }
	inline int32_t get_m_stencilID_246() const { return ___m_stencilID_246; }
	inline int32_t* get_address_of_m_stencilID_246() { return &___m_stencilID_246; }
	inline void set_m_stencilID_246(int32_t value)
	{
		___m_stencilID_246 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_maskOffset_247)); }
	inline Vector4_t3319028937  get_m_maskOffset_247() const { return ___m_maskOffset_247; }
	inline Vector4_t3319028937 * get_address_of_m_maskOffset_247() { return &___m_maskOffset_247; }
	inline void set_m_maskOffset_247(Vector4_t3319028937  value)
	{
		___m_maskOffset_247 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_EnvMapMatrix_248)); }
	inline Matrix4x4_t1817901843  get_m_EnvMapMatrix_248() const { return ___m_EnvMapMatrix_248; }
	inline Matrix4x4_t1817901843 * get_address_of_m_EnvMapMatrix_248() { return &___m_EnvMapMatrix_248; }
	inline void set_m_EnvMapMatrix_248(Matrix4x4_t1817901843  value)
	{
		___m_EnvMapMatrix_248 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_isRegisteredForEvents_249)); }
	inline bool get_m_isRegisteredForEvents_249() const { return ___m_isRegisteredForEvents_249; }
	inline bool* get_address_of_m_isRegisteredForEvents_249() { return &___m_isRegisteredForEvents_249; }
	inline void set_m_isRegisteredForEvents_249(bool value)
	{
		___m_isRegisteredForEvents_249 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___m_recursiveCountA_250)); }
	inline int32_t get_m_recursiveCountA_250() const { return ___m_recursiveCountA_250; }
	inline int32_t* get_address_of_m_recursiveCountA_250() { return &___m_recursiveCountA_250; }
	inline void set_m_recursiveCountA_250(int32_t value)
	{
		___m_recursiveCountA_250 = value;
	}

	inline static int32_t get_offset_of_loopCountA_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t529313277, ___loopCountA_251)); }
	inline int32_t get_loopCountA_251() const { return ___loopCountA_251; }
	inline int32_t* get_address_of_loopCountA_251() { return &___loopCountA_251; }
	inline void set_loopCountA_251(int32_t value)
	{
		___loopCountA_251 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTMESHPROUGUI_T529313277_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t3704657025 * Component_GetComponent_TisRectTransform_t3704657025_m3396022872 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<mainScript>()
inline mainScript_t2576383752 * GameObject_GetComponent_TismainScript_t2576383752_m2032384778 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  mainScript_t2576383752 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Boolean mainScript::GetCharges(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool mainScript_GetCharges_m803361978 (mainScript_t2576383752 * __this, int32_t ___abilityNum0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<playerScript>()
inline playerScript_t1783615218 * GameObject_GetComponent_TisplayerScript_t1783615218_m2559433916 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  playerScript_t1783615218 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void playerScript::AbilityOne()
extern "C" IL2CPP_METHOD_ATTR void playerScript_AbilityOne_m981504815 (playerScript_t1783615218 * __this, const RuntimeMethod* method);
// System.Void mainScript::AbilityOne()
extern "C" IL2CPP_METHOD_ATTR void mainScript_AbilityOne_m3984098970 (mainScript_t2576383752 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t529313277 * Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t529313277 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void TMPro.TMP_Text::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TMP_Text_set_text_m1216996582 (TMP_Text_t2599618874 * __this, String_t* p0, const RuntimeMethod* method);
// System.String[] System.IO.File::ReadAllLines(System.String)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* File_ReadAllLines_m2281910820 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
extern "C" IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m259875298 (TMP_Text_t2599618874 * __this, float p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1290152079 (List_1_t3319525431 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m3006960551 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SendMessage_m1356864477 (GameObject_t1113636619 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<shadowScript>()
inline shadowScript_t3441766022 * GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  shadowScript_t3441766022 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void mainScript::Lose()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Lose_m1690486384 (mainScript_t2576383752 * __this, const RuntimeMethod* method);
// System.Void mainScript::Question()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Question_m1352282339 (mainScript_t2576383752 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Slider>()
inline Slider_t3903728902 * GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Slider_t3903728902 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m1513755678_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_t913802012  List_1_GetEnumerator_m1955908099 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t913802012  (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m236733038 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void mainScript::SendData(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void mainScript_SendData_m55469471 (mainScript_t2576383752 * __this, String_t* ___address0, int32_t ___data1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C" IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void shadowScript::Hide()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_Hide_m1649439648 (shadowScript_t3441766022 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m4158182743 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m2026665411 (Enumerator_t913802012 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t913802012 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void shadowScript::SetText(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void shadowScript_SetText_m1138413144 (shadowScript_t3441766022 * __this, int32_t ___intToInput0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<textBoxScript>()
inline textBoxScript_t653516986 * GameObject_GetComponent_TistextBoxScript_t653516986_m169484749 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  textBoxScript_t653516986 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void System.IO.File::WriteAllLines(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR void File_WriteAllLines_m3166020039 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<blackWallWorkaroundScript>()
inline blackWallWorkaroundScript_t2860277821 * GameObject_GetComponent_TisblackWallWorkaroundScript_t2860277821_m600730148 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  blackWallWorkaroundScript_t2860277821 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Int32 System.Convert::ToInt32(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1758051682 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void mainScript::lineChanger(System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void mainScript_lineChanger_m1727562556 (RuntimeObject * __this /* static, unused */, String_t* ___newText0, String_t* ___fileName1, int32_t ___line_to_edit2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3235626157 * Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animator__ctor_m4069340359 (Animator_t434523843 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * Component_GetComponent_TisAnimator_t434523843_m2351447238 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1697843332 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t3310196443 * Component_GetComponentInChildren_TisCanvas_t3310196443_m1141242226 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t3310196443 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * Component_GetComponent_TisTextMesh_t1536577757_m1070281259 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1086006904 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void shadowScript::Show()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_Show_m2522332212 (shadowScript_t3441766022 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TextMesh_set_text_m446189179 (TextMesh_t1536577757 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void mainScript::Clicked(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void mainScript_Clicked_m1209104345 (mainScript_t2576383752 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void playerScript::Animate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void playerScript_Animate_m1495422730 (playerScript_t1783615218 * __this, int32_t ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t1640800422 * Component_GetComponent_TisBoxCollider_t1640800422_m3817794521 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t1640800422 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t1536577757 * Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t1536577757 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
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
// System.Void audioScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void audioScript__ctor_m3852363535 (audioScript_t813048017 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void audioScript::Start()
extern "C" IL2CPP_METHOD_ATTR void audioScript_Start_m3059360307 (audioScript_t813048017 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_audio_4();
		AudioClip_t3680889665 * L_1 = __this->get_musicClipIntro_6();
		AudioSource_set_clip_m31653938(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_audio_4();
		AudioSource_Play_m48294159(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void audioScript::Update()
extern "C" IL2CPP_METHOD_ATTR void audioScript_Update_m2374056700 (audioScript_t813048017 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_audio_4();
		bool L_1 = AudioSource_get_isPlaying_m1896551654(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = __this->get_audio_4();
		AudioClip_t3680889665 * L_3 = __this->get_musicClipLoop_5();
		AudioSource_set_clip_m31653938(L_2, L_3, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_4 = __this->get_audio_4();
		AudioSource_Play_m48294159(L_4, /*hidden argument*/NULL);
	}

IL_002c:
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
// System.Void autoresizeScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void autoresizeScript__ctor_m2296133866 (autoresizeScript_t3319903757 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void autoresizeScript::Start()
extern "C" IL2CPP_METHOD_ATTR void autoresizeScript_Start_m1364101962 (autoresizeScript_t3319903757 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (autoresizeScript_Start_m1364101962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_1)))/(float)(2960.0f))), (float)(1200.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_2))))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_3)))/(float)(1440.0f))), (float)(480.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_4))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void autoresizeScript::Update()
extern "C" IL2CPP_METHOD_ATTR void autoresizeScript_Update_m2526538034 (autoresizeScript_t3319903757 * __this, const RuntimeMethod* method)
{
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
// System.Void blackWallWorkaroundScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void blackWallWorkaroundScript__ctor_m1325971362 (blackWallWorkaroundScript_t2860277821 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void blackWallWorkaroundScript::Start()
extern "C" IL2CPP_METHOD_ATTR void blackWallWorkaroundScript_Start_m2075333070 (blackWallWorkaroundScript_t2860277821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blackWallWorkaroundScript_Start_m2075333070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (1000000.0f), (1000000.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_2, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m3462269772(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void blackWallWorkaroundScript::Update()
extern "C" IL2CPP_METHOD_ATTR void blackWallWorkaroundScript_Update_m2689544073 (blackWallWorkaroundScript_t2860277821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blackWallWorkaroundScript_Update_m2689544073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_show_4();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1251326993, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_1 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), (0.0f), (-3.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_1, L_2, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_3 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (10000.0f), (10000.0f), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m3462269772(L_3, L_4, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void blackWallWorkaroundScript::OnMouseOver()
extern "C" IL2CPP_METHOD_ATTR void blackWallWorkaroundScript_OnMouseOver_m2821610632 (blackWallWorkaroundScript_t2860277821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blackWallWorkaroundScript_OnMouseOver_m2821610632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mouseOver_5((bool)1);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1251326993, /*hidden argument*/NULL);
		return;
	}
}
// System.Void blackWallWorkaroundScript::OnMouseExit()
extern "C" IL2CPP_METHOD_ATTR void blackWallWorkaroundScript_OnMouseExit_m1336052854 (blackWallWorkaroundScript_t2860277821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blackWallWorkaroundScript_OnMouseExit_m1336052854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mouseOver_5((bool)0);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1251326993, /*hidden argument*/NULL);
		return;
	}
}
// System.Void blackWallWorkaroundScript::OnMouseDown()
extern "C" IL2CPP_METHOD_ATTR void blackWallWorkaroundScript_OnMouseDown_m3733740957 (blackWallWorkaroundScript_t2860277821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (blackWallWorkaroundScript_OnMouseDown_m3733740957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1251326993, /*hidden argument*/NULL);
		bool L_0 = __this->get_mouseOver_5();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1251326993, /*hidden argument*/NULL);
	}

IL_001f:
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
// System.Void buttonScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void buttonScript__ctor_m198025302 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonScript::Start()
extern "C" IL2CPP_METHOD_ATTR void buttonScript_Start_m1415141216 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void buttonScript::Update()
extern "C" IL2CPP_METHOD_ATTR void buttonScript_Update_m2330383374 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void buttonScript::StartButton()
extern "C" IL2CPP_METHOD_ATTR void buttonScript_StartButton_m710632971 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (buttonScript_StartButton_m710632971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1853239370, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonScript::QuitButton()
extern "C" IL2CPP_METHOD_ATTR void buttonScript_QuitButton_m1772878525 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void buttonScript::AbilityOneButton()
extern "C" IL2CPP_METHOD_ATTR void buttonScript_AbilityOneButton_m1364718248 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (buttonScript_AbilityOneButton_m1364718248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3500269141, /*hidden argument*/NULL);
		mainScript_t2576383752 * L_1 = GameObject_GetComponent_TismainScript_t2576383752_m2032384778(L_0, /*hidden argument*/GameObject_GetComponent_TismainScript_t2576383752_m2032384778_RuntimeMethod_var);
		bool L_2 = mainScript_GetCharges_m803361978(L_1, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		GameObject_t1113636619 * L_3 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		playerScript_t1783615218 * L_4 = GameObject_GetComponent_TisplayerScript_t1783615218_m2559433916(L_3, /*hidden argument*/GameObject_GetComponent_TisplayerScript_t1783615218_m2559433916_RuntimeMethod_var);
		playerScript_AbilityOne_m981504815(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3500269141, /*hidden argument*/NULL);
		mainScript_t2576383752 * L_6 = GameObject_GetComponent_TismainScript_t2576383752_m2032384778(L_5, /*hidden argument*/GameObject_GetComponent_TismainScript_t2576383752_m2032384778_RuntimeMethod_var);
		mainScript_AbilityOne_m3984098970(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral44826854, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void buttonScript::VictoryButtonContinue()
extern "C" IL2CPP_METHOD_ATTR void buttonScript_VictoryButtonContinue_m2420532782 (buttonScript_t4057655186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (buttonScript_VictoryButtonContinue_m2420532782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3685629629, /*hidden argument*/NULL);
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
// System.Void fileReaderForVicTextBox::.ctor()
extern "C" IL2CPP_METHOD_ATTR void fileReaderForVicTextBox__ctor_m1789394790 (fileReaderForVicTextBox_t2114072475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fileReaderForVicTextBox__ctor_m1789394790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_path_4(_stringLiteral1310150670);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void fileReaderForVicTextBox::Start()
extern "C" IL2CPP_METHOD_ATTR void fileReaderForVicTextBox_Start_m3853403160 (fileReaderForVicTextBox_t2114072475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fileReaderForVicTextBox_Start_m3853403160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextMeshProUGUI_t529313277 * L_0 = Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281(__this, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		TMP_Text_set_text_m1216996582(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_path_4();
		StringU5BU5D_t1281789340* L_3 = File_ReadAllLines_m2281910820(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_lines_5(L_3);
		TextMeshProUGUI_t529313277 * L_4 = Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281(__this, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		TMP_Text_set_fontSize_m259875298(L_4, ((float)((float)(((float)((float)L_5)))/(float)(10.33f))), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_6 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		int32_t L_7 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3970636864((&L_9), ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_7)))/(float)(1440.0f))), (float)(1200.0f))), ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_8)))/(float)(2960.0f))), (float)(600.0f))), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m3462269772(L_6, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void fileReaderForVicTextBox::Update()
extern "C" IL2CPP_METHOD_ATTR void fileReaderForVicTextBox_Update_m1566010356 (fileReaderForVicTextBox_t2114072475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (fileReaderForVicTextBox_Update_m1566010356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_1)))/(float)(2960.0f))), (float)(0.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_2))))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_3)))/(float)(1440.0f))), (float)(100.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_4))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_0, L_6, /*hidden argument*/NULL);
		TextMeshProUGUI_t529313277 * L_7 = Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281(__this, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_8 = __this->get_lines_5();
		int32_t L_9 = 0;
		String_t* L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		StringU5BU5D_t1281789340* L_11 = __this->get_lines_5();
		int32_t L_12 = 1;
		String_t* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3373450237, L_10, _stringLiteral3376184138, L_13, /*hidden argument*/NULL);
		TMP_Text_set_text_m1216996582(L_7, L_14, /*hidden argument*/NULL);
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
// System.Void handleTextfileScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void handleTextfileScript__ctor_m2995729351 (handleTextfileScript_t2963054687 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void healthScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void healthScript__ctor_m2582048481 (healthScript_t3050120050 * __this, const RuntimeMethod* method)
{
	{
		__this->set_posX_4((2.0f));
		__this->set_posY_5((4.0f));
		__this->set_hp_6(((int32_t)100));
		__this->set_xScale_7((4.0f));
		__this->set_yScale_8((0.15f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void healthScript::Start()
extern "C" IL2CPP_METHOD_ATTR void healthScript_Start_m4173141671 (healthScript_t3050120050 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void healthScript::Update()
extern "C" IL2CPP_METHOD_ATTR void healthScript_Update_m4052212179 (healthScript_t3050120050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (healthScript_Update_m4052212179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		mainScript_t2576383752 * L_0 = __this->get_mainScript_9();
		int32_t L_1 = L_0->get_health_25();
		__this->set_hp_6(L_1);
		int32_t L_2 = __this->get_hp_6();
		__this->set_xScale_7(((float)((float)((float)il2cpp_codegen_multiply((float)(4.0f), (float)(((float)((float)L_2)))))/(float)(100.0f))));
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_xScale_7();
		float L_5 = __this->get_yScale_8();
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_3, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_hp_6();
		int32_t L_9 = __this->get_hp_6();
		__this->set_posX_4(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)(((float)((float)L_8)))/(float)(25.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.01f), (float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)100), (int32_t)L_9))))))))), (float)(2.0f))));
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_11 = __this->get_posX_4();
		float L_12 = __this->get_posY_5();
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), L_11, L_12, (-1.0f), /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_10, L_13, /*hidden argument*/NULL);
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
// System.Void mainScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void mainScript__ctor_m205918234 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript__ctor_m205918234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	{
		Random_t108471755 * L_0 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_0, /*hidden argument*/NULL);
		__this->set_rand_15(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m1290152079(L_1, 4, /*hidden argument*/List_1__ctor_m1290152079_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t3319525431 * L_2 = V_0;
		List_1_Add_m1685793073(L_2, _stringLiteral3932879672, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_3 = V_0;
		List_1_Add_m1685793073(L_3, _stringLiteral1594227512, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_4 = V_0;
		List_1_Add_m1685793073(L_4, _stringLiteral3550542648, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_5 = V_0;
		List_1_Add_m1685793073(L_5, _stringLiteral1211890488, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_6 = V_0;
		__this->set_shadowClones_16(L_6);
		__this->set_numberOne_18(1);
		__this->set_numberTwo_19(1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_questionString_22(L_7);
		__this->set_health_25(((int32_t)100));
		__this->set_onRun_30((bool)1);
		__this->set_abilityOneCharge_33(((int32_t)10));
		__this->set_abilityOneSlider_34(((int32_t)100));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mainScript::Start()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Start_m651893932 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript_Start_m651893932_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t1113636619 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	{
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral1695701867, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_01b1;
	}

IL_001c:
	{
		GameObject_t1113636619 * L_0 = __this->get_Shadow_4();
		int32_t L_1 = V_0;
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(1.2f))), (float)(1.0f))), (float)(3.0f))), (float)(0.5f))), (-2.5f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_4 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_5 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_1 = L_5;
		GameObject_t1113636619 * L_6 = V_1;
		GameObject_t1113636619 * L_7 = GameObject_get_gameObject_m3693461266(L_6, /*hidden argument*/NULL);
		String_t* L_8 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3551177027, L_8, /*hidden argument*/NULL);
		Object_set_name_m291480324(L_7, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = V_1;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		GameObject_SendMessage_m1356864477(L_10, _stringLiteral4114082272, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = V_1;
		shadowScript_t3441766022 * L_15 = GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609(L_14, /*hidden argument*/GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var);
		GameObject_t1113636619 * L_16 = V_1;
		L_15->set_myName_5(L_16);
		int32_t L_17 = V_0;
		if (L_17)
		{
			goto IL_00cc;
		}
	}
	{
		GameObject_t1113636619 * L_18 = V_1;
		__this->set_ShadowClone0_6(L_18);
		GameObject_t1113636619 * L_19 = __this->get_ShadowClone0_6();
		shadowScript_t3441766022 * L_20 = GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609(L_19, /*hidden argument*/GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var);
		__this->set_SCS0_10(L_20);
		goto IL_012c;
	}

IL_00cc:
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00f0;
		}
	}
	{
		GameObject_t1113636619 * L_22 = V_1;
		__this->set_ShadowClone1_7(L_22);
		GameObject_t1113636619 * L_23 = __this->get_ShadowClone1_7();
		shadowScript_t3441766022 * L_24 = GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609(L_23, /*hidden argument*/GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var);
		__this->set_SCS1_11(L_24);
		goto IL_012c;
	}

IL_00f0:
	{
		int32_t L_25 = V_0;
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_0114;
		}
	}
	{
		GameObject_t1113636619 * L_26 = V_1;
		__this->set_ShadowClone2_8(L_26);
		GameObject_t1113636619 * L_27 = __this->get_ShadowClone2_8();
		shadowScript_t3441766022 * L_28 = GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609(L_27, /*hidden argument*/GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var);
		__this->set_SCS2_12(L_28);
		goto IL_012c;
	}

IL_0114:
	{
		GameObject_t1113636619 * L_29 = V_1;
		__this->set_ShadowClone3_9(L_29);
		GameObject_t1113636619 * L_30 = __this->get_ShadowClone3_9();
		shadowScript_t3441766022 * L_31 = GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609(L_30, /*hidden argument*/GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var);
		__this->set_SCS3_13(L_31);
	}

IL_012c:
	{
		GameObject_t1113636619 * L_32 = __this->get_Platform_5();
		int32_t L_33 = V_0;
		Vector2_t2156229523  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector2__ctor_m3970636864((&L_34), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_33))), (float)(1.2f))), (float)(1.0f))), (float)(3.0f))), (float)(0.5f))), (-2.75f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_35 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		Vector3_t3722313464  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector3__ctor_m3353183577((&L_36), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_37 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_38 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_32, L_35, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_2 = L_38;
		GameObject_t1113636619 * L_39 = V_2;
		GameObject_t1113636619 * L_40 = GameObject_get_gameObject_m3693461266(L_39, /*hidden argument*/NULL);
		String_t* L_41 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_42 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral38630993, L_41, /*hidden argument*/NULL);
		Object_set_name_m291480324(L_40, L_42, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_43 = V_2;
		int32_t L_44 = V_0;
		int32_t L_45 = L_44;
		RuntimeObject * L_46 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_45);
		GameObject_SendMessage_m1356864477(L_43, _stringLiteral4114082272, L_46, /*hidden argument*/NULL);
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_01b1:
	{
		int32_t L_48 = V_0;
		if ((((int32_t)L_48) < ((int32_t)4)))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// System.Void mainScript::Awake()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Awake_m1579489809 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void mainScript::Update()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Update_m2228363122 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript_Update_m2228363122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_health_25();
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		__this->set_health_25(((int32_t)100));
		mainScript_Lose_m1690486384(__this, /*hidden argument*/NULL);
		goto IL_0068;
	}

IL_001f:
	{
		int32_t L_1 = __this->get_internalScore_23();
		if ((((int32_t)L_1) == ((int32_t)((int32_t)10))))
		{
			goto IL_0049;
		}
	}
	{
		bool L_2 = __this->get_onRun_30();
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		mainScript_Question_m1352282339(__this, /*hidden argument*/NULL);
		__this->set_onRun_30((bool)0);
	}

IL_0044:
	{
		goto IL_0068;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4073034013, /*hidden argument*/NULL);
		__this->set_internalScore_23(0);
		int32_t L_3 = __this->get_damage_26();
		__this->set_damage_26(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)5)));
	}

IL_0068:
	{
		int32_t L_4 = __this->get_abilityOneCharge_33();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)10))))
		{
			goto IL_008f;
		}
	}
	{
		GameObject_t1113636619 * L_5 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3011993501, /*hidden argument*/NULL);
		Slider_t3903728902 * L_6 = GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497(L_5, /*hidden argument*/GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_6, (bool)0, /*hidden argument*/NULL);
		goto IL_00a4;
	}

IL_008f:
	{
		GameObject_t1113636619 * L_7 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3011993501, /*hidden argument*/NULL);
		Slider_t3903728902 * L_8 = GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497(L_7, /*hidden argument*/GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_8, (bool)1, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		return;
	}
}
// System.Void mainScript::Clicked(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void mainScript_Clicked_m1209104345 (mainScript_t2576383752 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___type0;
		int32_t L_1 = __this->get_solutionShadow_21();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_2 = __this->get_internalScore_23();
		__this->set_internalScore_23(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_totalScore_24();
		__this->set_totalScore_24(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_health_25(((int32_t)100));
		int32_t L_4 = __this->get_abilityOneCharge_33();
		if ((((int32_t)L_4) > ((int32_t)((int32_t)10))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_5 = __this->get_abilityOneCharge_33();
		__this->set_abilityOneCharge_33(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_004b:
	{
		goto IL_0087;
	}

IL_0050:
	{
		int32_t L_6 = __this->get_internalScore_23();
		__this->set_internalScore_23(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = __this->get_health_25();
		__this->set_health_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)40))));
		int32_t L_8 = __this->get_abilityOneCharge_33();
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_9 = __this->get_abilityOneCharge_33();
		__this->set_abilityOneCharge_33(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)2)));
	}

IL_0087:
	{
		mainScript_Question_m1352282339(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean mainScript::IsPrime(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool mainScript_IsPrime_m3027668701 (mainScript_t2576383752 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___number0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		int32_t L_1 = ___number0;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		int32_t L_2 = ___number0;
		if (((int32_t)((int32_t)L_2%(int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		V_0 = 2;
		goto IL_0031;
	}

IL_0023:
	{
		int32_t L_3 = ___number0;
		int32_t L_4 = V_0;
		if (((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___number0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0023;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void mainScript::Question()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Question_m1352282339 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript_Question_m1352282339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Enumerator_t913802012  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3011993501, /*hidden argument*/NULL);
		Slider_t3903728902 * L_1 = GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497_RuntimeMethod_var);
		int32_t L_2 = __this->get_abilityOneCharge_33();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(0.1f), (float)(((float)((float)L_2))))))));
		Random_t108471755 * L_3 = __this->get_rand_15();
		int32_t L_4 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_3, 0, 4);
		__this->set_operatorKey_17(L_4);
		Random_t108471755 * L_5 = __this->get_rand_15();
		int32_t L_6 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_5, 1, ((int32_t)13));
		__this->set_numberOne_18(L_6);
		Random_t108471755 * L_7 = __this->get_rand_15();
		int32_t L_8 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_7, 1, ((int32_t)13));
		__this->set_numberTwo_19(L_8);
		Random_t108471755 * L_9 = __this->get_rand_15();
		int32_t L_10 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, 0, 4);
		__this->set_solutionShadow_21(L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_questionString_22(L_11);
		int32_t L_12 = __this->get_operatorKey_17();
		if (L_12)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_13 = __this->get_questionString_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, L_13, _stringLiteral3452614533, /*hidden argument*/NULL);
		__this->set_questionString_22(L_14);
		int32_t L_15 = __this->get_numberOne_18();
		int32_t L_16 = __this->get_numberTwo_19();
		__this->set_solution_20(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)));
		goto IL_018c;
	}

IL_00b9:
	{
		int32_t L_17 = __this->get_operatorKey_17();
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_011d;
		}
	}
	{
		goto IL_00de;
	}

IL_00ca:
	{
		Random_t108471755 * L_18 = __this->get_rand_15();
		int32_t L_19 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_18, 1, ((int32_t)13));
		__this->set_numberTwo_19(L_19);
	}

IL_00de:
	{
		int32_t L_20 = __this->get_numberTwo_19();
		int32_t L_21 = __this->get_numberOne_18();
		if ((((int32_t)L_20) > ((int32_t)L_21)))
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_22 = __this->get_questionString_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m3937257545(NULL /*static, unused*/, L_22, _stringLiteral3452614531, /*hidden argument*/NULL);
		__this->set_questionString_22(L_23);
		int32_t L_24 = __this->get_numberOne_18();
		int32_t L_25 = __this->get_numberTwo_19();
		__this->set_solution_20(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)));
		goto IL_018c;
	}

IL_011d:
	{
		int32_t L_26 = __this->get_operatorKey_17();
		if ((!(((uint32_t)L_26) == ((uint32_t)2))))
		{
			goto IL_0157;
		}
	}
	{
		String_t* L_27 = __this->get_questionString_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, L_27, _stringLiteral3452614534, /*hidden argument*/NULL);
		__this->set_questionString_22(L_28);
		int32_t L_29 = __this->get_numberOne_18();
		int32_t L_30 = __this->get_numberTwo_19();
		__this->set_solution_20(((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)));
		goto IL_018c;
	}

IL_0157:
	{
		int32_t L_31 = __this->get_numberOne_18();
		__this->set_solution_20(L_31);
		int32_t L_32 = __this->get_numberOne_18();
		int32_t L_33 = __this->get_numberTwo_19();
		__this->set_numberOne_18(((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)L_33)));
		String_t* L_34 = __this->get_questionString_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m3937257545(NULL /*static, unused*/, L_34, _stringLiteral3452614529, /*hidden argument*/NULL);
		__this->set_questionString_22(L_35);
	}

IL_018c:
	{
		int32_t* L_36 = __this->get_address_of_numberOne_18();
		String_t* L_37 = Int32_ToString_m141394615((int32_t*)L_36, /*hidden argument*/NULL);
		String_t* L_38 = __this->get_questionString_22();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m3937257545(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		__this->set_questionString_22(L_39);
		String_t* L_40 = __this->get_questionString_22();
		int32_t* L_41 = __this->get_address_of_numberTwo_19();
		String_t* L_42 = Int32_ToString_m141394615((int32_t*)L_41, /*hidden argument*/NULL);
		String_t* L_43 = String_Concat_m3755062657(NULL /*static, unused*/, L_40, L_42, _stringLiteral3452614547, /*hidden argument*/NULL);
		__this->set_questionString_22(L_43);
		int32_t* L_44 = __this->get_address_of_totalScore_24();
		String_t* L_45 = Int32_ToString_m141394615((int32_t*)L_44, /*hidden argument*/NULL);
		String_t* L_46 = __this->get_questionString_22();
		String_t* L_47 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3926572133, L_45, _stringLiteral1963630794, L_46, /*hidden argument*/NULL);
		__this->set_questionString_22(L_47);
		V_0 = (-1);
		List_1_t3319525431 * L_48 = __this->get_shadowClones_16();
		Enumerator_t913802012  L_49 = List_1_GetEnumerator_m1955908099(L_48, /*hidden argument*/List_1_GetEnumerator_m1955908099_RuntimeMethod_var);
		V_2 = L_49;
	}

IL_020f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02d0;
		}

IL_0214:
		{
			String_t* L_50 = Enumerator_get_Current_m236733038((Enumerator_t913802012 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m236733038_RuntimeMethod_var);
			V_1 = L_50;
			int32_t L_51 = __this->get_solution_20();
			__this->set_noRepeats_27(L_51);
			int32_t L_52 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
			int32_t L_53 = V_0;
			int32_t L_54 = __this->get_solutionShadow_21();
			if ((!(((uint32_t)L_53) == ((uint32_t)L_54))))
			{
				goto IL_024a;
			}
		}

IL_0238:
		{
			String_t* L_55 = V_1;
			int32_t L_56 = __this->get_solution_20();
			mainScript_SendData_m55469471(__this, L_55, L_56, /*hidden argument*/NULL);
			goto IL_02d0;
		}

IL_024a:
		{
			goto IL_02b2;
		}

IL_024f:
		{
			int32_t L_57 = __this->get_hiddenCount_32();
			if ((((int32_t)L_57) <= ((int32_t)0)))
			{
				goto IL_029b;
			}
		}

IL_025b:
		{
			Type_t * L_58 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
			String_t* L_59 = V_1;
			FieldInfo_t * L_60 = Type_GetField_m2961003358(L_58, L_59, /*hidden argument*/NULL);
			RuntimeObject * L_61 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_60, __this);
			__this->set_SendDataTempVar_14(((shadowScript_t3441766022 *)CastclassClass((RuntimeObject*)L_61, shadowScript_t3441766022_il2cpp_TypeInfo_var)));
			shadowScript_t3441766022 * L_62 = __this->get_SendDataTempVar_14();
			shadowScript_Hide_m1649439648(L_62, /*hidden argument*/NULL);
			int32_t L_63 = __this->get_hiddenCount_32();
			__this->set_hiddenCount_32(((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)1)));
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3140214453, /*hidden argument*/NULL);
		}

IL_029b:
		{
			Random_t108471755 * L_64 = __this->get_rand_15();
			int32_t L_65 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_64, 0, ((int32_t)144));
			__this->set_noRepeats_27(L_65);
		}

IL_02b2:
		{
			int32_t L_66 = __this->get_noRepeats_27();
			int32_t L_67 = __this->get_solution_20();
			if ((((int32_t)L_66) == ((int32_t)L_67)))
			{
				goto IL_024f;
			}
		}

IL_02c3:
		{
			String_t* L_68 = V_1;
			int32_t L_69 = __this->get_noRepeats_27();
			mainScript_SendData_m55469471(__this, L_68, L_69, /*hidden argument*/NULL);
		}

IL_02d0:
		{
			bool L_70 = Enumerator_MoveNext_m4158182743((Enumerator_t913802012 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m4158182743_RuntimeMethod_var);
			if (L_70)
			{
				goto IL_0214;
			}
		}

IL_02dc:
		{
			IL2CPP_LEAVE(0x2EF, FINALLY_02e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_02e1;
	}

FINALLY_02e1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2026665411((Enumerator_t913802012 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2026665411_RuntimeMethod_var);
		IL2CPP_END_FINALLY(737)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(737)
	{
		IL2CPP_JUMP_TBL(0x2EF, IL_02ef)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02ef:
	{
		return;
	}
}
// System.Void mainScript::EverySecond()
extern "C" IL2CPP_METHOD_ATTR void mainScript_EverySecond_m4020647727 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_health_25();
		int32_t L_1 = __this->get_damage_26();
		__this->set_health_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		int32_t L_2 = __this->get_health_25();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		__this->set_health_25(0);
	}

IL_0026:
	{
		return;
	}
}
// System.Void mainScript::SendData(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void mainScript_SendData_m55469471 (mainScript_t2576383752 * __this, String_t* ___address0, int32_t ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript_SendData_m55469471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___address0;
		FieldInfo_t * L_2 = Type_GetField_m2961003358(L_0, L_1, /*hidden argument*/NULL);
		RuntimeObject * L_3 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_2, __this);
		__this->set_SendDataTempVar_14(((shadowScript_t3441766022 *)CastclassClass((RuntimeObject*)L_3, shadowScript_t3441766022_il2cpp_TypeInfo_var)));
		shadowScript_t3441766022 * L_4 = __this->get_SendDataTempVar_14();
		int32_t L_5 = ___data1;
		shadowScript_SetText_m1138413144(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3108907650, /*hidden argument*/NULL);
		textBoxScript_t653516986 * L_7 = GameObject_GetComponent_TistextBoxScript_t653516986_m169484749(L_6, /*hidden argument*/GameObject_GetComponent_TistextBoxScript_t653516986_m169484749_RuntimeMethod_var);
		String_t* L_8 = __this->get_questionString_22();
		L_7->set_text_4(L_8);
		return;
	}
}
// System.Void mainScript::AbilityOne()
extern "C" IL2CPP_METHOD_ATTR void mainScript_AbilityOne_m3984098970 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript_AbilityOne_m3984098970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->set_abilityOneCharge_33(0);
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3011993501, /*hidden argument*/NULL);
		Slider_t3903728902 * L_1 = GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisSlider_t3903728902_m1168358497_RuntimeMethod_var);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, (1.0f));
		__this->set_hideCount_31(2);
		V_0 = 0;
		goto IL_007e;
	}

IL_002e:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_solutionShadow_21();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_4 = __this->get_hideCount_31();
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_5 = __this->get_hideCount_31();
		__this->set_hideCount_31(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		String_t* L_6 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3551177027, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = GameObject_Find_m2032535176(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		shadowScript_t3441766022 * L_9 = GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609(L_8, /*hidden argument*/GameObject_GetComponent_TisshadowScript_t3441766022_m1770556609_RuntimeMethod_var);
		shadowScript_Hide_m1649439648(L_9, /*hidden argument*/NULL);
	}

IL_007a:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_007e:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)4)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
// System.Boolean mainScript::GetCharges(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool mainScript_GetCharges_m803361978 (mainScript_t2576383752 * __this, int32_t ___abilityNum0, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void mainScript::lineChanger(System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void mainScript_lineChanger_m1727562556 (RuntimeObject * __this /* static, unused */, String_t* ___newText0, String_t* ___fileName1, int32_t ___line_to_edit2, const RuntimeMethod* method)
{
	StringU5BU5D_t1281789340* V_0 = NULL;
	{
		String_t* L_0 = ___fileName1;
		StringU5BU5D_t1281789340* L_1 = File_ReadAllLines_m2281910820(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringU5BU5D_t1281789340* L_2 = V_0;
		int32_t L_3 = ___line_to_edit2;
		String_t* L_4 = ___newText0;
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (String_t*)L_4);
		String_t* L_5 = ___fileName1;
		StringU5BU5D_t1281789340* L_6 = V_0;
		File_WriteAllLines_m3166020039(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mainScript::Lose()
extern "C" IL2CPP_METHOD_ATTR void mainScript_Lose_m1690486384 (mainScript_t2576383752 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mainScript_Lose_m1690486384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_bpworkaround_35();
		blackWallWorkaroundScript_t2860277821 * L_1 = GameObject_GetComponent_TisblackWallWorkaroundScript_t2860277821_m600730148(L_0, /*hidden argument*/GameObject_GetComponent_TisblackWallWorkaroundScript_t2860277821_m600730148_RuntimeMethod_var);
		L_1->set_show_4((bool)1);
		V_0 = _stringLiteral1310150670;
		String_t* L_2 = V_0;
		StringU5BU5D_t1281789340* L_3 = File_ReadAllLines_m2281910820(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_1;
		int32_t* L_5 = __this->get_address_of_totalScore_24();
		String_t* L_6 = Int32_ToString_m141394615((int32_t*)L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t1281789340* L_7 = V_1;
		int32_t L_8 = 1;
		String_t* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_10 = Convert_ToInt32_m1758051682(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_11 = V_1;
		int32_t L_12 = 0;
		String_t* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = Convert_ToInt32_m1758051682(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_10) >= ((int32_t)L_14)))
		{
			goto IL_004d;
		}
	}
	{
		StringU5BU5D_t1281789340* L_15 = V_1;
		StringU5BU5D_t1281789340* L_16 = V_1;
		int32_t L_17 = 0;
		String_t* L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
	}

IL_004d:
	{
		StringU5BU5D_t1281789340* L_19 = V_1;
		int32_t L_20 = 0;
		String_t* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		String_t* L_22 = V_0;
		mainScript_lineChanger_m1727562556(NULL /*static, unused*/, L_21, L_22, 0, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_23 = V_1;
		int32_t L_24 = 1;
		String_t* L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		String_t* L_26 = V_0;
		mainScript_lineChanger_m1727562556(NULL /*static, unused*/, L_25, L_26, 1, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1251326993, /*hidden argument*/NULL);
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
// System.Void platformScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void platformScript__ctor_m1438522751 (platformScript_t2304018581 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m286683560((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_colour_5(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void platformScript::Start()
extern "C" IL2CPP_METHOD_ATTR void platformScript_Start_m555577735 (platformScript_t2304018581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (platformScript_Start_m555577735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_4(L_0);
		return;
	}
}
// System.Void platformScript::Update()
extern "C" IL2CPP_METHOD_ATTR void platformScript_Update_m3754307569 (platformScript_t2304018581 * __this, const RuntimeMethod* method)
{
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_spriteRenderer_4();
		Color_t2555686324  L_1 = __this->get_colour_5();
		SpriteRenderer_set_color_m3056777566(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void platformScript::OnInstantiation(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void platformScript_OnInstantiation_m1140309040 (platformScript_t2304018581 * __this, int32_t ___typeData0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___typeData0;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		Color_t2555686324  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Color__ctor_m286683560((&L_1), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_colour_5(L_1);
		goto IL_008b;
	}

IL_0025:
	{
		int32_t L_2 = ___typeData0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		Color_t2555686324  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Color__ctor_m286683560((&L_3), (0.0f), (0.7333f), (0.0f), /*hidden argument*/NULL);
		__this->set_colour_5(L_3);
		goto IL_008b;
	}

IL_004b:
	{
		int32_t L_4 = ___typeData0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		Color_t2555686324  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Color__ctor_m286683560((&L_5), (1.0f), (0.0157f), (0.0431f), /*hidden argument*/NULL);
		__this->set_colour_5(L_5);
		goto IL_008b;
	}

IL_0071:
	{
		Color_t2555686324  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Color__ctor_m286683560((&L_6), (0.9843f), (0.7765f), (0.149f), /*hidden argument*/NULL);
		__this->set_colour_5(L_6);
	}

IL_008b:
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
// System.Void playerScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void playerScript__ctor_m1687851810 (playerScript_t1783615218 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerScript__ctor_m1687851810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = (Animator_t434523843 *)il2cpp_codegen_object_new(Animator_t434523843_il2cpp_TypeInfo_var);
		Animator__ctor_m4069340359(L_0, /*hidden argument*/NULL);
		__this->set_anim_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void playerScript::Start()
extern "C" IL2CPP_METHOD_ATTR void playerScript_Start_m1877633170 (playerScript_t1783615218 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerScript_Start_m1877633170_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_anim_4(L_0);
		return;
	}
}
// System.Void playerScript::Update()
extern "C" IL2CPP_METHOD_ATTR void playerScript_Update_m1807313470 (playerScript_t1783615218 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void playerScript::Animate(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void playerScript_Animate_m1495422730 (playerScript_t1783615218 * __this, int32_t ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerScript_Animate_m1495422730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___target0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___target0;
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		Animator_t434523843 * L_4 = __this->get_anim_4();
		Animator_Play_m1697843332(L_4, _stringLiteral3960002225, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0026:
	{
		int32_t L_5 = ___target0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		Animator_t434523843 * L_6 = __this->get_anim_4();
		Animator_Play_m1697843332(L_6, _stringLiteral3855564506, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0042:
	{
		int32_t L_7 = ___target0;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005e;
		}
	}
	{
		Animator_t434523843 * L_8 = __this->get_anim_4();
		Animator_Play_m1697843332(L_8, _stringLiteral537532534, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_005e:
	{
		Animator_t434523843 * L_9 = __this->get_anim_4();
		Animator_Play_m1697843332(L_9, _stringLiteral1945530226, /*hidden argument*/NULL);
	}

IL_006e:
	{
		return;
	}
}
// System.Void playerScript::AbilityOne()
extern "C" IL2CPP_METHOD_ATTR void playerScript_AbilityOne_m981504815 (playerScript_t1783615218 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (playerScript_AbilityOne_m981504815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3395669589, /*hidden argument*/NULL);
		Animator_t434523843 * L_0 = __this->get_anim_4();
		Animator_Play_m1697843332(L_0, _stringLiteral1812612118, /*hidden argument*/NULL);
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
// System.Void shadowScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void shadowScript__ctor_m2972285527 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shadowScript::Start()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_Start_m2041334663 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadowScript_Start_m2041334663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Canvas_t3310196443 * L_0 = Component_GetComponentInChildren_TisCanvas_t3310196443_m1141242226(__this, /*hidden argument*/Component_GetComponentInChildren_TisCanvas_t3310196443_m1141242226_RuntimeMethod_var);
		__this->set_myCanvas_9(L_0);
		Canvas_t3310196443 * L_1 = __this->get_myCanvas_9();
		TextMesh_t1536577757 * L_2 = Component_GetComponent_TisTextMesh_t1536577757_m1070281259(L_1, /*hidden argument*/Component_GetComponent_TisTextMesh_t1536577757_m1070281259_RuntimeMethod_var);
		__this->set_textMesh_8(L_2);
		SpriteRenderer_t3235626157 * L_3 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Sprite_t280657092 * L_4 = __this->get_sprite0_10();
		SpriteRenderer_set_sprite_m1286893786(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shadowScript::Update()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_Update_m3426530057 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadowScript_Update_m3426530057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_animFrame_20();
		__this->set_animFrame_20(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get_animFrame_20();
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0068;
		}
	}
	{
		__this->set_animFrame_20(0);
		SpriteRenderer_t3235626157 * L_2 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Type_t * L_3 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		int32_t L_4 = Random_Range_m4054026115(NULL /*static, unused*/, 0, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_5 = Convert_ToInt32_m1086006904(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1244386375, L_6, /*hidden argument*/NULL);
		FieldInfo_t * L_8 = Type_GetField_m2961003358(L_3, L_7, /*hidden argument*/NULL);
		RuntimeObject * L_9 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_8, __this);
		SpriteRenderer_set_sprite_m1286893786(L_2, ((Sprite_t280657092 *)CastclassSealed((RuntimeObject*)L_9, Sprite_t280657092_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void shadowScript::SetText(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void shadowScript_SetText_m1138413144 (shadowScript_t3441766022 * __this, int32_t ___intToInput0, const RuntimeMethod* method)
{
	{
		shadowScript_Show_m2522332212(__this, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_0 = __this->get_textMesh_8();
		String_t* L_1 = Int32_ToString_m141394615((int32_t*)(&___intToInput0), /*hidden argument*/NULL);
		TextMesh_set_text_m446189179(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___intToInput0;
		__this->set_answer_6(L_2);
		return;
	}
}
// System.Void shadowScript::OnInstantiation(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void shadowScript_OnInstantiation_m2510879210 (shadowScript_t3441766022 * __this, int32_t ___typeData0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___typeData0;
		__this->set_type_4(L_0);
		return;
	}
}
// System.Void shadowScript::OnMouseOver()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_OnMouseOver_m2225351185 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mouseOver_7((bool)1);
		return;
	}
}
// System.Void shadowScript::OnMouseExit()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_OnMouseExit_m569451509 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	{
		__this->set_mouseOver_7((bool)0);
		return;
	}
}
// System.Void shadowScript::OnMouseDown()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_OnMouseDown_m4000828438 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadowScript_OnMouseDown_m4000828438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mouseOver_7();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3500269141, /*hidden argument*/NULL);
		mainScript_t2576383752 * L_2 = GameObject_GetComponent_TismainScript_t2576383752_m2032384778(L_1, /*hidden argument*/GameObject_GetComponent_TismainScript_t2576383752_m2032384778_RuntimeMethod_var);
		int32_t L_3 = __this->get_type_4();
		mainScript_Clicked_m1209104345(L_2, L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		playerScript_t1783615218 * L_5 = GameObject_GetComponent_TisplayerScript_t1783615218_m2559433916(L_4, /*hidden argument*/GameObject_GetComponent_TisplayerScript_t1783615218_m2559433916_RuntimeMethod_var);
		int32_t L_6 = __this->get_type_4();
		playerScript_Animate_m1495422730(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void shadowScript::Hide()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_Hide_m1649439648 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadowScript_Hide_m1649439648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Renderer_set_enabled_m1727253150(L_0, (bool)0, /*hidden argument*/NULL);
		BoxCollider_t1640800422 * L_1 = Component_GetComponent_TisBoxCollider_t1640800422_m3817794521(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t1640800422_m3817794521_RuntimeMethod_var);
		Collider_set_enabled_m1517463283(L_1, (bool)0, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_2 = Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852(__this, /*hidden argument*/Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		TextMesh_set_text_m446189179(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void shadowScript::Show()
extern "C" IL2CPP_METHOD_ATTR void shadowScript_Show_m2522332212 (shadowScript_t3441766022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (shadowScript_Show_m2522332212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		Renderer_set_enabled_m1727253150(L_0, (bool)1, /*hidden argument*/NULL);
		BoxCollider_t1640800422 * L_1 = Component_GetComponent_TisBoxCollider_t1640800422_m3817794521(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t1640800422_m3817794521_RuntimeMethod_var);
		Collider_set_enabled_m1517463283(L_1, (bool)1, /*hidden argument*/NULL);
		TextMesh_t1536577757 * L_2 = Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852(__this, /*hidden argument*/Component_GetComponentInChildren_TisTextMesh_t1536577757_m1883617852_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		TextMesh_set_text_m446189179(L_2, L_3, /*hidden argument*/NULL);
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
// System.Void ssBackgroundScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ssBackgroundScript__ctor_m2213634182 (ssBackgroundScript_t1410928264 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ssBackgroundScript::Start()
extern "C" IL2CPP_METHOD_ATTR void ssBackgroundScript_Start_m880216754 (ssBackgroundScript_t1410928264 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ssBackgroundScript::Update()
extern "C" IL2CPP_METHOD_ATTR void ssBackgroundScript_Update_m4201660402 (ssBackgroundScript_t1410928264 * __this, const RuntimeMethod* method)
{
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
// System.Void textBoxScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void textBoxScript__ctor_m1203299919 (textBoxScript_t653516986 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void textBoxScript::Start()
extern "C" IL2CPP_METHOD_ATTR void textBoxScript_Start_m2467035543 (textBoxScript_t653516986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (textBoxScript_Start_m2467035543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextMeshProUGUI_t529313277 * L_0 = Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281(__this, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		TMP_Text_set_text_m1216996582(L_0, L_1, /*hidden argument*/NULL);
		TextMeshProUGUI_t529313277 * L_2 = Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281(__this, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		TMP_Text_set_fontSize_m259875298(L_2, ((float)((float)(((float)((float)L_3)))/(float)(13.33f))), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_4 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_5)))/(float)(1440.0f))), (float)(1200.0f))), ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_6)))/(float)(2960.0f))), (float)(600.0f))), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m3462269772(L_4, L_7, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_8 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		int32_t L_9 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m3970636864((&L_13), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_9)))/(float)(2960.0f))), (float)(-250.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_10))))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_11)))/(float)(1440.0f))), (float)(400.0f))), (float)((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_12))))))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_8, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void textBoxScript::Update()
extern "C" IL2CPP_METHOD_ATTR void textBoxScript_Update_m1888600828 (textBoxScript_t653516986 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (textBoxScript_Update_m1888600828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TextMeshProUGUI_t529313277 * L_0 = Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281(__this, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_t529313277_m1758674281_RuntimeMethod_var);
		String_t* L_1 = __this->get_text_4();
		TMP_Text_set_text_m1216996582(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
