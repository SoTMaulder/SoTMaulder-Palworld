#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1A8 - 0x150)
// Class WebBrowserWidget.WebBrowser
class UWebBrowser : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnUrlChanged;                                      // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforePopup;                                     // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConsoleMessage;                                  // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                InitialURL;                                        // 0x180(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTransparency;                             // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_124C[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowser* GetDefaultObj();

	void OnUrlChanged__DelegateSignature(class FText& Text);
	void OnConsoleMessage__DelegateSignature(const class FString& Message, const class FString& Source, int32 Line);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void LoadURL(const class FString& NewURL);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	class FString GetUrl();
	class FText GetTitleText();
	void ExecuteJavascript(const class FString& ScriptText);
};

// 0x60 (0x88 - 0x28)
// Class WebBrowserWidget.WebBrowserAssetManager
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x28(0x30)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1253[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowserAssetManager* GetDefaultObj();

};

}


