#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalHUDTitle.BP_PalHUDTitle_C
// (Actor)

class UClass* ABP_PalHUDTitle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalHUDTitle_C");

	return Clss;
}


// BP_PalHUDTitle_C BP_PalHUDTitle.Default__BP_PalHUDTitle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalHUDTitle_C* ABP_PalHUDTitle_C::GetDefaultObj()
{
	static class ABP_PalHUDTitle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalHUDTitle_C*>(ABP_PalHUDTitle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalHUDTitle.BP_PalHUDTitle_C.OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PalHUDTitle_C::OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalHUDTitle_C", "OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0");

	Params::ABP_PalHUDTitle_C_OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PalHUDTitle.BP_PalHUDTitle_C.Initialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PalHUDTitle_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalHUDTitle_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalHUDTitle.BP_PalHUDTitle_C.ExecuteUbergraph_BP_PalHUDTitle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_PushWidgetStackableUI_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUDTitle_C::ExecuteUbergraph_BP_PalHUDTitle(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI, bool K2Node_ClassDynamicCast_bSuccess, const struct FGuid& CallFunc_PushWidgetStackableUI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalHUDTitle_C", "ExecuteUbergraph_BP_PalHUDTitle");

	Params::ABP_PalHUDTitle_C_ExecuteUbergraph_BP_PalHUDTitle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI = K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_PushWidgetStackableUI_ReturnValue = CallFunc_PushWidgetStackableUI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


