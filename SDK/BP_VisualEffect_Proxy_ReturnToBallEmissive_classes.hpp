#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Proxy_ReturnToBallEmissive.BP_VisualEffect_Proxy_ReturnToBallEmissive_C
class UBP_VisualEffect_Proxy_ReturnToBallEmissive_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Proxy_ReturnToBallEmissive_C* GetDefaultObj();

	void OnBeginVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CopyMesh_ReturnToBallEmissive_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


