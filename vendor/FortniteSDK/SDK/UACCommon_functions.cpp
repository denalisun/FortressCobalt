#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UACCommon

#include "Basic.hpp"

#include "UACCommon_classes.hpp"
#include "UACCommon_parameters.hpp"


namespace SDK
{

// Function UACCommon.UACNetComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)

void UUACNetComponent::SendClientHello()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetComponent", "SendClientHello");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function UACCommon.UACNetComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint8                                   Type                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           Packet                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetComponent::SendPacketToClient(uint8 Type, const TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetComponent", "SendPacketToClient");

	Params::UACNetComponent_SendPacketToClient Parms{};

	Parms.Type = Type;
	Parms.Packet = std::move(Packet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UACCommon.UACNetComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// uint8                                   Type                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           Packet                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetComponent::SendPacketToServer(uint8 Type, const TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetComponent", "SendPacketToServer");

	Params::UACNetComponent_SendPacketToServer Parms{};

	Parms.Type = Type;
	Parms.Packet = std::move(Packet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

