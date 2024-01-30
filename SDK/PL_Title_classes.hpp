#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A0 - 0x298)
// BlueprintGeneratedClass PL_Title.PL_Title_C
class APL_Title_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class APL_Title_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_PL_Title(int32 EntryPoint);
};

}


