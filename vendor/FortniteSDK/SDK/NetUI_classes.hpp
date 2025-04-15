#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetUI

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// Class NetUI.NetDebugWidget
// 0x0108 (0x0310 - 0x0208)
class UNetDebugWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                       PingUI;                                            // 0x0208(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketInRateUI;                                    // 0x0210(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketOutRateUI;                                   // 0x0218(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketInLossUI;                                    // 0x0220(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       PacketOutLossUI;                                   // 0x0228(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       UpBandwidthUI;                                     // 0x0230(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                       DownBandwidthUI;                                   // 0x0238(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                         TimeoutUI;                                         // 0x0240(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_21F7[0xC8];                                    // 0x0248(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartTimer();
	void StopTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetDebugWidget">();
	}
	static class UNetDebugWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDebugWidget>();
	}
};
static_assert(alignof(UNetDebugWidget) == 0x000008, "Wrong alignment on UNetDebugWidget");
static_assert(sizeof(UNetDebugWidget) == 0x000310, "Wrong size on UNetDebugWidget");
static_assert(offsetof(UNetDebugWidget, PingUI) == 0x000208, "Member 'UNetDebugWidget::PingUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketInRateUI) == 0x000210, "Member 'UNetDebugWidget::PacketInRateUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketOutRateUI) == 0x000218, "Member 'UNetDebugWidget::PacketOutRateUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketInLossUI) == 0x000220, "Member 'UNetDebugWidget::PacketInLossUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, PacketOutLossUI) == 0x000228, "Member 'UNetDebugWidget::PacketOutLossUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, UpBandwidthUI) == 0x000230, "Member 'UNetDebugWidget::UpBandwidthUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, DownBandwidthUI) == 0x000238, "Member 'UNetDebugWidget::DownBandwidthUI' has a wrong offset!");
static_assert(offsetof(UNetDebugWidget, TimeoutUI) == 0x000240, "Member 'UNetDebugWidget::TimeoutUI' has a wrong offset!");

}

