#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalGamemode_Title.BP_PalGamemode_Title_C
// (Actor)

class UClass* ABP_PalGamemode_Title_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalGamemode_Title_C");

	return Clss;
}


// BP_PalGamemode_Title_C BP_PalGamemode_Title.Default__BP_PalGamemode_Title_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalGamemode_Title_C* ABP_PalGamemode_Title_C::GetDefaultObj()
{
	static class ABP_PalGamemode_Title_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalGamemode_Title_C*>(ABP_PalGamemode_Title_C::StaticClass()->DefaultObject);

	return Default;
}

}


