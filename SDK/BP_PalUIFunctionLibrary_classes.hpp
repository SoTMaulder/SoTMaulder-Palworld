#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PalUIFunctionLibrary.BP_PalUIFunctionLibrary_C
class UBP_PalUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_PalUIFunctionLibrary_C* GetDefaultObj();

	void GetPartnerSkillIcon(class FName PalName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* SoftIconTexture, bool* IsSquare, TMap<int32, TSoftObjectPtr<class UTexture2D>> SoftIconTextureMap, TMap<int32, TSoftObjectPtr<class UTexture2D>> K2Node_MakeVariable_MakeVariableOutput, class FName CallFunc_GetTribeIDNameFromCharacterID_outTribeIDName, const struct FFPalPartnerSkillIconData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetupWorkSuitabilityWidgetToUniformGrid(class UUniformGridPanel* UniformGridPanel, int32 RowNum, int32 ColumnNum, TMap<enum class EPalWorkSuitability, int32> SuitabilityRankMap, class UObject* __WorldContext, int32 TmpCountValidSuitability, int32 Temp_int_Variable, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_MainMenu_Pal_WorkIconText_C* CallFunc_Create_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetTechnologyIcon(class FName TechnologyName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* SoftIconTexture, const struct FPalBuildObjectIconData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FPalEditorItemIconTableRow& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FFPalTechnologyIconData& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2);
	void GetPalGenderText(enum class EPalGenderType GenderType, class UObject* __WorldContext, class FText* Text, bool K2Node_SwitchEnum_CmpSuccess);
	void WrapSizeBox(class UWidget* ChildWidget, double OverrideWidth, double OverrideHeight, class UObject* SizeBoxOuter, class UObject* __WorldContext, class USizeBox** CreatedSizeBox, class USizeBox* CallFunc_SpawnObject_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void WorldLocationToWidgetOffset(const struct FVector2D& LandscapeMinXY, const struct FVector2D& LandscapeMaxXY, const struct FVector& WorldLocation, class UObject* __WorldContext, struct FVector2D* Offset, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	void Project_Icon_Position_to_World_Postion(const struct FVector2D& MinLandscapePositionXY, const struct FVector2D& MaxLandscapePositionXY, class UWidget* TargetWigdet, class UCanvasPanel* TargetCanvas, double Scale, class UObject* __WorldContext, struct FVector* WorldPosition, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_3, double CallFunc_BreakVector2D_X_4, double CallFunc_BreakVector2D_Y_4, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_BreakVector2D_X_5, double CallFunc_BreakVector2D_Y_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X_6, double CallFunc_BreakVector2D_Y_6, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UpdateWorldMapIconPosition(const struct FVector2D& MinLandscapePositionXY, const struct FVector2D& MaxLandscapePositionXY, class UCanvasPanel* TargetCanvas, const struct FVector& WorldLocation, class UWidget* TargetWidget, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_WorldLocationToWidgetOffset_offset, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue);
	void ProjectIconToWorldMap(const struct FVector2D& MinLandscapePositionXY, const struct FVector2D& MaxLandscapePositionXY, class UCanvasPanel* TargetCanvas, const struct FVector& WorldLocation, class UWidget* AddWidget, class UObject* __WorldContext, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& CallFunc_WorldLocationToWidgetOffset_offset, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue);
	void GetLocalizedTextFromHandle(const struct FDataTableRowHandle& RowHandle, enum class EPalLocalizeTextCategory TextVategory, class UObject* __WorldContext, class FText* Text, class FText CallFunc_GetLocalizedText_ReturnValue);
	void BuildPassiveSkillDescText(class FName PassiveName, class UObject* __WorldContext, class FText* Text, const class FString& TmpString, TMap<enum class EPalPassiveSkillEffectType, struct FDataTableRowHandle> TextIDMap, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TMap<enum class EPalPassiveSkillEffectType, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, const class FString& CallFunc_Left_ReturnValue, class UPalPassiveSkillManager* CallFunc_GetPassiveSkillManager_ReturnValue, const struct FPalPassiveSkillDatabaseRow& CallFunc_GetSkillData_outSkillData, bool CallFunc_GetSkillData_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, TArray<float>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, TArray<enum class EPalPassiveSkillEffectType>& K2Node_MakeArray_Array_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, enum class EPalPassiveSkillEffectType CallFunc_Array_Get_Item_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, bool CallFunc_Less_DoubleDouble_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, bool CallFunc_Less_DoubleDouble_ReturnValue_3, const class FString& CallFunc_SelectString_ReturnValue_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_SelectString_ReturnValue_3, class FText CallFunc_GetLocalizedText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_2, double CallFunc_Less_DoubleDouble_A_ImplicitCast_2, double CallFunc_Conv_DoubleToText_Value_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_3);
	void SnapWidgetPosition(class UWidget* TargetWidget, class UWidget* RelativeWidget, const struct FVector2D& AnchorPosition, bool IsFitViewport, const struct FVector2D& FitViewportPadding, class UWidget* OffsetRootWidget, class UObject* __WorldContext, const struct FVector2D& TmpLocation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_FMax_ReturnValue, double CallFunc_FMax_ReturnValue_1, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition_1, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void SetupGenusCategoryWidget(class UWBP_PalGenusCategoryIcon_C* IconWidget, class UPalTextBlockBase* TextBlock, class FName CharacterID, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPalDatabaseCharacterParameter* CallFunc_GetDatabaseCharacterParameter_ReturnValue, enum class EPalGenusCategoryType CallFunc_GetGenusCategory_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class FText CallFunc_GetPalGenusCategoryName_outName);
	void SetStatusValueToText(class UBP_PalTextBlock_C* MeleeText, class UBP_PalTextBlock_C* RangeText, class UBP_PalTextBlock_C* DefenseText, class UBP_PalTextBlock_C* SupportText, class UBP_PalTextBlock_C* SpeedText, class UPalIndividualCharacterParameter* IndividualParam, bool IsBuffedValue, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetDefense_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetCraftSpeed_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetShotAttack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_GetMeleeAttack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_GetDefense_withBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class FText CallFunc_Conv_IntToText_ReturnValue_4, int32 CallFunc_GetCraftSpeed_withBuff_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class FText CallFunc_Conv_IntToText_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_GetShotAttack_withBuff_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_10, int32 CallFunc_GetMeleeAttack_withBuff_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_7);
	void SetWeaponSubParameterToWidgets(const struct FPalWeaponSubParameterData& SubParameter, class UBP_PalTextBlock_C* DPSTextBlock, class UProgressBar* RangeGauge, class UProgressBar* StabilityGauge, class UProgressBar* AccuracyGauge, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Abs_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Abs_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast, double CallFunc_Abs_A_ImplicitCast_1, float CallFunc_SetPercent_InPercent_ImplicitCast_1, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_2);
	void ChangeTextFontMaterial(class UPalTextBlockBase* TargetTextBlock, class UMaterial* NewMaterial, class UObject* __WorldContext, const struct FSlateFontInfo& K2Node_Copy_ReturnValue, const struct FSlateFontInfo& K2Node_SetFieldsInStruct_StructOut);
	void SetMapObjectInfo(class FName MapObjectId, class UPalTextBlockBase* NameTextBlock, class UPalTextBlockBase* DescTextBlock, class UImage* IconImage, class UObject* __WorldContext, class UPalMasterDataTableAccess_BuildObjectIconData* CallFunc_GetBuildObjectIconDataTableAccess_ReturnValue, bool CallFunc_BP_FindRow_bResult, const struct FPalBuildObjectIconData& CallFunc_BP_FindRow_ReturnValue, class FText CallFunc_GetBuildObjectDesc_outDesc, class FText CallFunc_GetMapObjectName_outName, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void SetItemInfo(class FName ItemId, class UPalTextBlockBase* NameTextBlock, class UPalTextBlockBase* DescTextBlock, class UImage* IconImage, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UPalStaticItemDataBase* CallFunc_GetStaticItemData_ReturnValue, class FText CallFunc_GetItemDescription_outName, bool CallFunc_IsValid_ReturnValue_4, class FText CallFunc_GetItemName_outName);
	void SetupPalWazaWidget(TArray<class UWBP_MainMenu_Pal_Skill_Active_C*>& WazaWidget, TArray<enum class EPalWazaID>& WazaID, bool ShowEmptySlot, class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_MainMenu_Pal_Skill_Active_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWBP_MainMenu_Pal_Skill_Active_C* CallFunc_Array_Get_Item_1, enum class EPalWazaID CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void Setup_Pal_Characteristic_Widget(TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*>& CharacteristicWidget, TArray<class FName>& PassiveList, class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, class UWBP_MainMenu_Pal_Skill_Passive_C* CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetupPalConditionWidget(TArray<class UWBP_MainMenu_Pal_State_C*>& ConditionWidget, TArray<enum class EPalUIConditionType>& Conditions, class UObject* __WorldContext, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Min_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_MainMenu_Pal_State_C* CallFunc_Array_Get_Item, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class EPalUIConditionType CallFunc_Array_Get_Item_1, class UWBP_MainMenu_Pal_State_C* CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetSanityToTextBox(class UPalTextBlockBase* TargetText, int32 NowSanity, int32 MaxSanity, class UMaterial* NormalMaterial, class UMaterial* MiddleSanityMaterial, class UMaterial* LowSanityMaterial, class UObject* __WorldContext, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FSlateFontInfo& K2Node_Copy_ReturnValue, const struct FSlateFontInfo& K2Node_SetFieldsInStruct_StructOut, const struct FSlateFontInfo& K2Node_Copy_ReturnValue_1, const struct FSlateFontInfo& K2Node_SetFieldsInStruct_StructOut_1, const struct FSlateFontInfo& K2Node_Copy_ReturnValue_2, const struct FSlateFontInfo& K2Node_SetFieldsInStruct_StructOut_2, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
};

}


