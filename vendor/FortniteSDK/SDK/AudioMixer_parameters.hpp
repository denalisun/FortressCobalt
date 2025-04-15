#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioMixer

#include "Basic.hpp"

#include "AudioMixer_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// 0x0010 (0x0010 - 0x0000)
struct AudioMixerBlueprintLibrary_AddMasterSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*               SubmixEffectPreset;                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_AddMasterSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_AddMasterSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_AddMasterSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddMasterSubmixEffect, SubmixEffectPreset) == 0x000008, "Member 'AudioMixerBlueprintLibrary_AddMasterSubmixEffect::SubmixEffectPreset' has a wrong offset!");

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// 0x0020 (0x0020 - 0x0000)
struct AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          PresetChain;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectChainEntry                Entry;                                             // 0x0010(0x0010)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain");
static_assert(sizeof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain) == 0x000020, "Wrong size on AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain, Entry) == 0x000010, "Member 'AudioMixerBlueprintLibrary_AddSourceEffectToPresetChain::Entry' has a wrong offset!");

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// 0x0008 (0x0008 - 0x0000)
struct AudioMixerBlueprintLibrary_ClearMasterSubmixEffects final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioMixerBlueprintLibrary_ClearMasterSubmixEffects) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_ClearMasterSubmixEffects");
static_assert(sizeof(AudioMixerBlueprintLibrary_ClearMasterSubmixEffects) == 0x000008, "Wrong size on AudioMixerBlueprintLibrary_ClearMasterSubmixEffects");
static_assert(offsetof(AudioMixerBlueprintLibrary_ClearMasterSubmixEffects, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_ClearMasterSubmixEffects::WorldContextObject' has a wrong offset!");

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// 0x0018 (0x0018 - 0x0000)
struct AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          PresetChain;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D58[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain");
static_assert(sizeof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain, ReturnValue) == 0x000010, "Member 'AudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain::ReturnValue' has a wrong offset!");

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// 0x0010 (0x0010 - 0x0000)
struct AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSubmixPreset*               SubmixEffectPreset;                                // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect) == 0x000010, "Wrong size on AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect, SubmixEffectPreset) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveMasterSubmixEffect::SubmixEffectPreset' has a wrong offset!");

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// 0x0018 (0x0018 - 0x0000)
struct AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          PresetChain;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EntryIndex;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D59[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain");
static_assert(sizeof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain, EntryIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain::EntryIndex' has a wrong offset!");

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// 0x0018 (0x0018 - 0x0000)
struct AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry final
{
public:
	const class UObject*                          WorldContextObject;                                // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*          PresetChain;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EntryIndex;                                        // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bBypassed;                                         // 0x0014(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D5A[0x3];                                     // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry) == 0x000008, "Wrong alignment on AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry");
static_assert(sizeof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry) == 0x000018, "Wrong size on AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, WorldContextObject) == 0x000000, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::WorldContextObject' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, PresetChain) == 0x000008, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::PresetChain' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, EntryIndex) == 0x000010, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::EntryIndex' has a wrong offset!");
static_assert(offsetof(AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry, bBypassed) == 0x000014, "Member 'AudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry::bBypassed' has a wrong offset!");

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// 0x0028 (0x0028 - 0x0000)
struct SubmixEffectDynamicsProcessorPreset_SetSettings final
{
public:
	struct FSubmixEffectDynamicsProcessorSettings InSettings;                                        // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SubmixEffectDynamicsProcessorPreset_SetSettings) == 0x000004, "Wrong alignment on SubmixEffectDynamicsProcessorPreset_SetSettings");
static_assert(sizeof(SubmixEffectDynamicsProcessorPreset_SetSettings) == 0x000028, "Wrong size on SubmixEffectDynamicsProcessorPreset_SetSettings");
static_assert(offsetof(SubmixEffectDynamicsProcessorPreset_SetSettings, InSettings) == 0x000000, "Member 'SubmixEffectDynamicsProcessorPreset_SetSettings::InSettings' has a wrong offset!");

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// 0x0010 (0x0010 - 0x0000)
struct SubmixEffectSubmixEQPreset_SetSettings final
{
public:
	struct FSubmixEffectSubmixEQSettings          InSettings;                                        // 0x0000(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(SubmixEffectSubmixEQPreset_SetSettings) == 0x000008, "Wrong alignment on SubmixEffectSubmixEQPreset_SetSettings");
static_assert(sizeof(SubmixEffectSubmixEQPreset_SetSettings) == 0x000010, "Wrong size on SubmixEffectSubmixEQPreset_SetSettings");
static_assert(offsetof(SubmixEffectSubmixEQPreset_SetSettings, InSettings) == 0x000000, "Member 'SubmixEffectSubmixEQPreset_SetSettings::InSettings' has a wrong offset!");

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// 0x0030 (0x0030 - 0x0000)
struct SubmixEffectReverbPreset_SetSettings final
{
public:
	struct FSubmixEffectReverbSettings            InSettings;                                        // 0x0000(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(SubmixEffectReverbPreset_SetSettings) == 0x000004, "Wrong alignment on SubmixEffectReverbPreset_SetSettings");
static_assert(sizeof(SubmixEffectReverbPreset_SetSettings) == 0x000030, "Wrong size on SubmixEffectReverbPreset_SetSettings");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettings, InSettings) == 0x000000, "Member 'SubmixEffectReverbPreset_SetSettings::InSettings' has a wrong offset!");

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// 0x0010 (0x0010 - 0x0000)
struct SubmixEffectReverbPreset_SetSettingsWithReverbEffect final
{
public:
	const class UReverbEffect*                    InReverbEffect;                                    // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WetLevel;                                          // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D5E[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect) == 0x000008, "Wrong alignment on SubmixEffectReverbPreset_SetSettingsWithReverbEffect");
static_assert(sizeof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect) == 0x000010, "Wrong size on SubmixEffectReverbPreset_SetSettingsWithReverbEffect");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect, InReverbEffect) == 0x000000, "Member 'SubmixEffectReverbPreset_SetSettingsWithReverbEffect::InReverbEffect' has a wrong offset!");
static_assert(offsetof(SubmixEffectReverbPreset_SetSettingsWithReverbEffect, WetLevel) == 0x000008, "Member 'SubmixEffectReverbPreset_SetSettingsWithReverbEffect::WetLevel' has a wrong offset!");

// Function AudioMixer.SynthComponent.SetSubmixSend
// 0x0010 (0x0010 - 0x0000)
struct SynthComponent_SetSubmixSend final
{
public:
	class USoundSubmix*                           Submix;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SendLevel;                                         // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D63[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SynthComponent_SetSubmixSend) == 0x000008, "Wrong alignment on SynthComponent_SetSubmixSend");
static_assert(sizeof(SynthComponent_SetSubmixSend) == 0x000010, "Wrong size on SynthComponent_SetSubmixSend");
static_assert(offsetof(SynthComponent_SetSubmixSend, Submix) == 0x000000, "Member 'SynthComponent_SetSubmixSend::Submix' has a wrong offset!");
static_assert(offsetof(SynthComponent_SetSubmixSend, SendLevel) == 0x000008, "Member 'SynthComponent_SetSubmixSend::SendLevel' has a wrong offset!");

// Function AudioMixer.SynthComponent.IsPlaying
// 0x0001 (0x0001 - 0x0000)
struct SynthComponent_IsPlaying final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SynthComponent_IsPlaying) == 0x000001, "Wrong alignment on SynthComponent_IsPlaying");
static_assert(sizeof(SynthComponent_IsPlaying) == 0x000001, "Wrong size on SynthComponent_IsPlaying");
static_assert(offsetof(SynthComponent_IsPlaying, ReturnValue) == 0x000000, "Member 'SynthComponent_IsPlaying::ReturnValue' has a wrong offset!");

}

