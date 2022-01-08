// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppGame/EndGameScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameScreen() {}
// Cross Module References
	CPPGAME_API UClass* Z_Construct_UClass_UEndGameScreen_NoRegister();
	CPPGAME_API UClass* Z_Construct_UClass_UEndGameScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CppGame();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEndGameScreen::execReplayButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplayButtonClicked();
		P_NATIVE_END;
	}
	void UEndGameScreen::StaticRegisterNativesUEndGameScreen()
	{
		UClass* Class = UEndGameScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReplayButtonClicked", &UEndGameScreen::execReplayButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EndGameScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameScreen, nullptr, "ReplayButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGameScreen_NoRegister()
	{
		return UEndGameScreen::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Replay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CppGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameScreen_ReplayButtonClicked, "ReplayButtonClicked" }, // 4229676308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndGameScreen.h" },
		{ "ModuleRelativePath", "EndGameScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameScreen_Statics::NewProp_Replay_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EndGameScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEndGameScreen_Statics::NewProp_Replay = { "Replay", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndGameScreen, Replay), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEndGameScreen_Statics::NewProp_Replay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameScreen_Statics::NewProp_Replay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndGameScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndGameScreen_Statics::NewProp_Replay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndGameScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameScreen_Statics::ClassParams = {
		&UEndGameScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEndGameScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndGameScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameScreen, 140588654);
	template<> CPPGAME_API UClass* StaticClass<UEndGameScreen>()
	{
		return UEndGameScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameScreen(Z_Construct_UClass_UEndGameScreen, &UEndGameScreen::StaticClass, TEXT("/Script/CppGame"), TEXT("UEndGameScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
