#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalPlayerController_Title.BP_PalPlayerController_Title_C
// (Actor, PlayerController)

class UClass* ABP_PalPlayerController_Title_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalPlayerController_Title_C");

	return Clss;
}


// BP_PalPlayerController_Title_C BP_PalPlayerController_Title.Default__BP_PalPlayerController_Title_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalPlayerController_Title_C* ABP_PalPlayerController_Title_C::GetDefaultObj()
{
	static class ABP_PalPlayerController_Title_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalPlayerController_Title_C*>(ABP_PalPlayerController_Title_C::StaticClass()->DefaultObject);

	return Default;
}

}


