#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Reflex.ReflexBlueprintLibrary
class UReflexBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UReflexBlueprintLibrary* GetDefaultObj();

	void SetReflexMode(enum class EReflexMode Mode);
	void SetFlashIndicatorEnabled(bool bEnabled);
	float GetRenderLatencyInMs();
	enum class EReflexMode GetReflexMode();
	bool GetReflexAvailable();
	float GetGameToRenderLatencyInMs();
	float GetGameLatencyInMs();
	bool GetFlashIndicatorEnabled();
};

}


