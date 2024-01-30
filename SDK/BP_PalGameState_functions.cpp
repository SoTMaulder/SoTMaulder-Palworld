#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalGameState.BP_PalGameState_C
// (Actor)

class UClass* ABP_PalGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalGameState_C");

	return Clss;
}


// BP_PalGameState_C BP_PalGameState.Default__BP_PalGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalGameState_C* ABP_PalGameState_C::GetDefaultObj()
{
	static class ABP_PalGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalGameState_C*>(ABP_PalGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


