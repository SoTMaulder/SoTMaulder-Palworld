#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x618 - 0x608)
// BlueprintGeneratedClass BP_PalHUDTitle.BP_PalHUDTitle_C
class ABP_PalHUDTitle_C : public APalHUDInGame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x608(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalHUDTitle_C* GetDefaultObj();

	void OnLoaded_981603EC4815B7D716BC83B5FE8C3FD0(TSubclassOf<class UObject> Loaded);
	void Initialize();
	void ExecuteUbergraph_BP_PalHUDTitle(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPal_User_Widget_Stackable_UI, bool K2Node_ClassDynamicCast_bSuccess, const struct FGuid& CallFunc_PushWidgetStackableUI_ReturnValue);
};

}


