#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PL_Title.PL_Title_C
// (Actor)

class UClass* APL_Title_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PL_Title_C");

	return Clss;
}


// PL_Title_C PL_Title.Default__PL_Title_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APL_Title_C* APL_Title_C::GetDefaultObj()
{
	static class APL_Title_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APL_Title_C*>(APL_Title_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PL_Title.PL_Title_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APL_Title_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PL_Title_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PL_Title.PL_Title_C.ExecuteUbergraph_PL_Title
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APL_Title_C::ExecuteUbergraph_PL_Title(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PL_Title_C", "ExecuteUbergraph_PL_Title");

	Params::APL_Title_C_ExecuteUbergraph_PL_Title_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


