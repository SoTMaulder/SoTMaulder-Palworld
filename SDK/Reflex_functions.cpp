#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Reflex.ReflexBlueprintLibrary
// (None)

class UClass* UReflexBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReflexBlueprintLibrary");

	return Clss;
}


// ReflexBlueprintLibrary Reflex.Default__ReflexBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UReflexBlueprintLibrary* UReflexBlueprintLibrary::GetDefaultObj()
{
	static class UReflexBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UReflexBlueprintLibrary*>(UReflexBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Reflex.ReflexBlueprintLibrary.SetReflexMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EReflexMode             Mode                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReflexBlueprintLibrary::SetReflexMode(enum class EReflexMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "SetReflexMode");

	Params::UReflexBlueprintLibrary_SetReflexMode_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UReflexBlueprintLibrary::SetFlashIndicatorEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "SetFlashIndicatorEnabled");

	Params::UReflexBlueprintLibrary_SetFlashIndicatorEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UReflexBlueprintLibrary::GetRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "GetRenderLatencyInMs");

	Params::UReflexBlueprintLibrary_GetRenderLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetReflexMode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EReflexMode             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EReflexMode UReflexBlueprintLibrary::GetReflexMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "GetReflexMode");

	Params::UReflexBlueprintLibrary_GetReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReflexBlueprintLibrary::GetReflexAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "GetReflexAvailable");

	Params::UReflexBlueprintLibrary_GetReflexAvailable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UReflexBlueprintLibrary::GetGameToRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "GetGameToRenderLatencyInMs");

	Params::UReflexBlueprintLibrary_GetGameToRenderLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UReflexBlueprintLibrary::GetGameLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "GetGameLatencyInMs");

	Params::UReflexBlueprintLibrary_GetGameLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UReflexBlueprintLibrary::GetFlashIndicatorEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReflexBlueprintLibrary", "GetFlashIndicatorEnabled");

	Params::UReflexBlueprintLibrary_GetFlashIndicatorEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


