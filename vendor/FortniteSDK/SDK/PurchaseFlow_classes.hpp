#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseFlow

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PurchaseFlow.PurchaseFlowJSBridge
// 0x0010 (0x0038 - 0x0028)
class UPurchaseFlowJSBridge final : public UObject
{
public:
	uint8                                         Pad_22CF[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RECEIPT(const struct FPurchaseFlowReceiptParam& Param_RECEIPT);
	void RequestClose(const class FString& CloseInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PurchaseFlowJSBridge">();
	}
	static class UPurchaseFlowJSBridge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseFlowJSBridge>();
	}
};
static_assert(alignof(UPurchaseFlowJSBridge) == 0x000008, "Wrong alignment on UPurchaseFlowJSBridge");
static_assert(sizeof(UPurchaseFlowJSBridge) == 0x000038, "Wrong size on UPurchaseFlowJSBridge");

}

