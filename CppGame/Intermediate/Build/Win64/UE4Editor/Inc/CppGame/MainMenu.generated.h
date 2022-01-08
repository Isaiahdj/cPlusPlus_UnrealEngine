// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPGAME_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define CPPGAME_MainMenu_generated_h

#define CppGame_Source_CppGame_MainMenu_h_12_SPARSE_DATA
#define CppGame_Source_CppGame_MainMenu_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartButtonClicked);


#define CppGame_Source_CppGame_MainMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartButtonClicked);


#define CppGame_Source_CppGame_MainMenu_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CppGame"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define CppGame_Source_CppGame_MainMenu_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CppGame"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define CppGame_Source_CppGame_MainMenu_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define CppGame_Source_CppGame_MainMenu_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define CppGame_Source_CppGame_MainMenu_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartGame() { return STRUCT_OFFSET(UMainMenu, StartGame); }


#define CppGame_Source_CppGame_MainMenu_h_9_PROLOG
#define CppGame_Source_CppGame_MainMenu_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppGame_Source_CppGame_MainMenu_h_12_PRIVATE_PROPERTY_OFFSET \
	CppGame_Source_CppGame_MainMenu_h_12_SPARSE_DATA \
	CppGame_Source_CppGame_MainMenu_h_12_RPC_WRAPPERS \
	CppGame_Source_CppGame_MainMenu_h_12_INCLASS \
	CppGame_Source_CppGame_MainMenu_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppGame_Source_CppGame_MainMenu_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppGame_Source_CppGame_MainMenu_h_12_PRIVATE_PROPERTY_OFFSET \
	CppGame_Source_CppGame_MainMenu_h_12_SPARSE_DATA \
	CppGame_Source_CppGame_MainMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CppGame_Source_CppGame_MainMenu_h_12_INCLASS_NO_PURE_DECLS \
	CppGame_Source_CppGame_MainMenu_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPGAME_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppGame_Source_CppGame_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
