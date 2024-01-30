#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x1C0 - 0x130)
// BlueprintGeneratedClass BP_AIAction_CombatPal.BP_AIAction_CombatPal_C
class UBP_AIAction_CombatPal_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetActor;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         SelfActor;                                         // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaSecond;                                   // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                NextActionClass;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         NextIsWaza;                                        // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_306A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NextWazaSlotID;                                    // 0x15C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalAICombatModule*                    CombatModule;                                      // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldSelectWait;                                  // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NextIsProvocation;                                 // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInterrupt;                                       // 0x16A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_306C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InterrputSlotID;                                   // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CantReachTimer;                                    // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PrevLocation;                                      // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StackTimer;                                        // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WarpStackTimer;                                    // 0x198(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WarpStackPrevLocation;                             // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeadTimer;                                         // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_CombatPal_C* GetDefaultObj();

	void CheckDeadTimer(const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class APalAIController* CallFunc_GetControllerRef_PalAIController, class UPalAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPalAIActionBase* CallFunc_SetActionClassParameter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C** PalBB, class APalAIController* CallFunc_GetControllerRef_PalAIController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard);
	void WarpToSpawnerPoint(class APalCharacter* CallFunc_GetCharacter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBB, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void ResetWorpStackTimer();
	void AddWarpStackTimer(double Const_WarpStackTime, const struct FVector& SelfPos, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EPalSpawnedCharacterType CallFunc_GetSpawnedCharacterType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_IsNearTwoPoint_distance_ImplicitCast);
	void AttackNearestMapObject(bool* ReachAble, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalMapObject* CallFunc_GetNearestEnemyBuildObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsExistPathForLocation_ForBP_ReturnValue);
	void PlayWazaAction(class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot, bool CallFunc_IsValidClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue);
	void FindWazaClass(int32 SlotIndex, class UClass** WazaAction, class UPalStaticCharacterParameterComponent* CallFunc_GetStaticParamCompRef_StaticParamComp, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot, enum class EPalWazaID CallFunc_GetWazaType_ReturnValue, TSubclassOf<class UPalActionBase> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void TargetIsValid(bool* Valid, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_IsDead_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Get_Next_Action_Slot_ID(int32* SlotID, int32 EnableSlotIdNum, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot, int32 CallFunc_ChoiceEnableSlotIDByRandom_ReturnValue);
	void InterruptAction(int32 SlotID);
	void ChangeCombatStartLocation(bool* Change, class UBP_PalAIBlackboard_Common_C* SelfBB, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IBPI_GoBackTeritory_C> K2Node_DynamicCast_AsBPI_Go_Back_Teritory, bool K2Node_DynamicCast_bSuccess, class UPalAICombatModule_Wild* K2Node_DynamicCast_AsPal_AICombat_Module_Wild, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_JudgeReturnCombatStartPosition_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, TScriptInterface<class IBPI_GoBackTeritory_C> K2Node_DynamicCast_AsBPI_Go_Back_Teritory_1, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_3, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_GetPalAIBlackboard_C> K2Node_DynamicCast_AsBPI_Get_Pal_AIBlackboard_1, bool K2Node_DynamicCast_bSuccess_4, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, bool CallFunc_IsValid_ReturnValue_2);
	void PlayWazaDarknessStatus(double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UPalActionBase* CallFunc_PlayActionLocation_ReturnValue);
	void PlayerCameraCheck(bool* AttackAble, bool CallFunc_IsAIAttackAbleByPlayerCamera_ReturnValue);
	void RemoveDamageResponse(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue);
	void AddDamageResponse(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue);
	void DamageResponseForCombatPal(const struct FPalDamageResult& DmgResult, const TArray<class APalCharacter*>& AttackerList, bool CallFunc_IsValid_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APalAIController* CallFunc_GetPalAIController_ReturnValue, class APalAIController* CallFunc_GetPalAIController_ReturnValue_1, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_TargetIsPlayerOrPlayersOtomoPal_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalBattleManager* CallFunc_GetBattleManager_ReturnValue_1, class APalCharacter* CallFunc_Array_Get_Item, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SightCheckAndResponseForCombatPal(bool* ChangeNextAction, class APalCharacter* TempTarget, bool HitPlayer, const TArray<class APalCharacter*>& TempTargetList, class AController* CallFunc_GetController_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class APalCharacter*>& CallFunc_SightCheckAllPlayer_InSightPlayers, TArray<class APalCharacter*>& CallFunc_SightCheckAllAliveNPC_InSightCharacters);
	void MoveToTarget(bool Temp, class APalAIController* CallFunc_GetControllerRef_PalAIController, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsOnNavMesh_ReturnValue, bool CallFunc_AttackNearestMapObject_ReachAble, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot, int32 CallFunc_Get_Next_Action_Slot_ID_SlotID, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsNearMaxRange_ReturnValue, class UClass* CallFunc_FindWazaClass_WazaAction, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_AIMoveToTargetActor_ReturnValue);
	void GetActorActionComponentRef(class UPalActionComponent** ActionComp, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetStaticParamCompRef(class UPalStaticCharacterParameterComponent** StaticParamComp, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetSkillSlotRef(class UPalActiveSkillSlot** SkillSlot, class APalAIController* CallFunc_GetControllerRef_PalAIController);
	void GetControllerRef(class APalAIController** PalAIController, class AController* CallFunc_GetController_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetupSkillSlot(int32 Temp_int_Loop_Counter_Variable, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<enum class EPalWazaID>& CallFunc_GetEquipWaza_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EPalWazaID CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ChangeNextAction(int32 NextSlotID, int32 EnableSlotIDLength, const struct FPalAIActionDynamicParameter& TempAIDynamicParam, const TArray<int32>& VaildID, enum class EPalActionType Temp_byte_Variable, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter_1, bool CallFunc_PlayerCameraCheck_AttackAble, class UPalStaticCharacterParameterComponent* CallFunc_GetStaticParamCompRef_StaticParamComp, bool CallFunc_IsNearTwoActor_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Get_Next_Action_Slot_ID_SlotID, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp, TSubclassOf<class UPalActionBase> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, enum class EPalAIActionType Temp_byte_Variable_1, bool CallFunc_IsValidClass_ReturnValue, TSubclassOf<class UPalAIActionBase> CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue, class UClass* CallFunc_FindWazaClass_WazaAction, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void TargetChange(bool CallFunc_IsValid_ReturnValue, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetTargetActor_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionPause(class APawn* ControlledPawn);
	void OnDeadDelegate_Event(const struct FPalDeadInfo& DeadInfo);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void StartNextAction_Event(class UPalActionComponent* ActionComponent);
	void OnChildActionFinished(class UPawnAction* Action, enum class EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_CombatPal(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_3, float K2Node_Event_DeltaSeconds, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_InFanShap_ReturnValue, class APawn* K2Node_Event_ControlledPawn_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, bool CallFunc_IsBattleMode_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, enum class EPawnActionResult K2Node_Event_WithResult_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class APalAIController* CallFunc_GetControllerRef_PalAIController, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot, class UPalAICombatModule* CallFunc_SpawnObject_ReturnValue, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot_1, bool CallFunc_IsNearMaxRange_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UPalActiveSkillSlot* CallFunc_GetSkillSlotRef_SkillSlot_2, bool CallFunc_IsFarMinRange_ReturnValue, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp_1, class UPalStaticCharacterParameterComponent* CallFunc_GetStaticParamCompRef_StaticParamComp, bool CallFunc_ActionIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalAIController* CallFunc_GetControllerRef_PalAIController_1, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue_1, class UPalActionComponent* K2Node_CustomEvent_actionComponent, enum class EPalAIActionType Temp_byte_Variable, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp_2, TSubclassOf<class UPalAIActionBase> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPalAIActionBase* CallFunc_SpawnObject_ReturnValue_1, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_PushChildAction_ReturnValue, class UPalAIAction_LeaveBase* K2Node_DynamicCast_AsPal_AIAction_Leave_Base, bool K2Node_DynamicCast_bSuccess, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp_3, bool CallFunc_InFanShap_ReturnValue_1, class UPalActionBase* CallFunc_PlayAction_ReturnValue, class UPalActionComponent* CallFunc_GetActorActionComponentRef_ActionComp_4, bool CallFunc_LineTraceToTarget_ForAIAttack_ReturnValue, bool CallFunc_ActionIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPawnAction* K2Node_Event_Action, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue_2, class APawn* K2Node_Event_ControlledPawn, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ChangeCombatStartLocation_Change, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_TargetIsValid_Valid, bool CallFunc_IsValid_ReturnValue_3, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBB, class UBP_PalAIBlackboard_Common_C* CallFunc_GetSelfPalBlackBoard_PalBB_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double K2Node_VariableSet_tempDeltaSecond_ImplicitCast, float CallFunc_GeneralTurnToActor_DeltaTime_ImplicitCast, float CallFunc_GeneralTurnToActor_DeltaTime_ImplicitCast_1);
};

}


