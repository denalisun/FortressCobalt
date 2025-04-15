#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuScreen_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MenuScreen_Athena.MenuScreen_Athena_C
// 0x09E8 (0x0E28 - 0x0440)
class UMenuScreen_Athena_C final : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC; // 0x0448(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E; // 0x0490(0x0048)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715; // 0x04D8(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57; // 0x0520(0x0070)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22; // 0x0590(0x00E0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8; // 0x0670(0x0070)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5; // 0x06E0(0x0070)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20; // 0x0750(0x0070)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98; // 0x07C0(0x0070)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A; // 0x0830(0x00D0)()
	struct FAnimNode_BlendListByInt               AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D; // 0x0900(0x00D0)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2; // 0x09D0(0x00A0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1; // 0x0A70(0x00B8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54; // 0x0B28(0x0070)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B; // 0x0B98(0x00E0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134; // 0x0C78(0x00E0)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B; // 0x0D58(0x0050)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224; // 0x0DA8(0x0050)()
	UMulticastDelegateProperty_                   MenuScreenDispatcher;                              // 0x0DF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasBeenSelected;                                   // 0x0E08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4278[0x3];                                     // 0x0E09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PoseInt;                                           // 0x0E0C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetTranslate;                                   // 0x0E10(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotate;                                      // 0x0E1C(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void MenuScreenDispatcher__DelegateSignature();
	void ExecuteUbergraph_MenuScreen_Athena(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_LeftB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2();
	void AnimNotify_playFacialAnim();
	void BlueprintBeginPlay();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1();
	void UserFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuScreen_Athena_C">();
	}
	static class UMenuScreen_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuScreen_Athena_C>();
	}
};
static_assert(alignof(UMenuScreen_Athena_C) == 0x000008, "Wrong alignment on UMenuScreen_Athena_C");
static_assert(sizeof(UMenuScreen_Athena_C) == 0x000E28, "Wrong size on UMenuScreen_Athena_C");
static_assert(offsetof(UMenuScreen_Athena_C, UberGraphFrame) == 0x000440, "Member 'UMenuScreen_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC) == 0x000448, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E) == 0x000490, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715) == 0x0004D8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57) == 0x000520, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22) == 0x000590, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8) == 0x000670, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5) == 0x0006E0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20) == 0x000750, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98) == 0x0007C0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A) == 0x000830, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D) == 0x000900, "Member 'UMenuScreen_Athena_C::AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2) == 0x0009D0, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1) == 0x000A70, "Member 'UMenuScreen_Athena_C::AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54) == 0x000B28, "Member 'UMenuScreen_Athena_C::AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B) == 0x000B98, "Member 'UMenuScreen_Athena_C::AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134) == 0x000C78, "Member 'UMenuScreen_Athena_C::AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B) == 0x000D58, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224) == 0x000DA8, "Member 'UMenuScreen_Athena_C::AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, MenuScreenDispatcher) == 0x000DF8, "Member 'UMenuScreen_Athena_C::MenuScreenDispatcher' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, HasBeenSelected) == 0x000E08, "Member 'UMenuScreen_Athena_C::HasBeenSelected' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, PoseInt) == 0x000E0C, "Member 'UMenuScreen_Athena_C::PoseInt' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, OffsetTranslate) == 0x000E10, "Member 'UMenuScreen_Athena_C::OffsetTranslate' has a wrong offset!");
static_assert(offsetof(UMenuScreen_Athena_C, OffsetRotate) == 0x000E1C, "Member 'UMenuScreen_Athena_C::OffsetRotate' has a wrong offset!");

}

