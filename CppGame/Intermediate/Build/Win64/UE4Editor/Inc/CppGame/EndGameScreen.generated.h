// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPPGAME_EndGameScreen_generated_h
#error "EndGameScreen.generated.h already included, missing '#pragma once' in EndGameScreen.h"
#endif
#define CPPGAME_EndGameScreen_generated_h

#define CppGame_Source_CppGame_EndGameScreen_h_10_SPARSE_DATA
#define CppGame_Source_CppGame_EndGameScreen_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplayButtonClicked);


#define CppGame_Source_CppGame_EndGameScreen_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplayButtonClicked);


#define CppGame_Source_CppGame_EndGameScreen_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndGameScreen(); \
	friend struct Z_Construct_UClass_UEndGameScreen_Statics; \
public: \
	DECLARE_CLASS(UEndGameScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CppGame"), NO_API) \
	DECLARE_SERIALIZER(UEndGameScreen)


#define CppGame_Source_CppGame_EndGameScreen_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUEndGameScreen(); \
	friend struct Z_Construct_UClass_UEndGameScreen_Statics; \
public: \
	DECLARE_CLASS(UEndGameScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CppGame"), NO_API) \
	DECLARE_SERIALIZER(UEndGameScreen)


#define CppGame_Source_CppGame_EndGameScreen_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameScreen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameScreen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameScreen(UEndGameScreen&&); \
	NO_API UEndGameScreen(const UEndGameScreen&); \
public:


#define CppGame_Source_CppGame_EndGameScreen_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndGameScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndGameScreen(UEndGameScreen&&); \
	NO_API UEndGameScreen(const UEndGameScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndGameScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndGameScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndGameScreen)


#define CppGame_Source_CppGame_EndGameScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Replay() { return STRUCT_OFFSET(UEndGameScreen, Replay); }


#define CppGame_Source_CppGame_EndGameScreen_h_7_PROLOG
#define CppGame_Source_CppGame_EndGameScreen_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppGame_Source_CppGame_EndGameScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	CppGame_Source_CppGame_EndGameScreen_h_10_SPARSE_DATA \
	CppGame_Source_CppGame_EndGameScreen_h_10_RPC_WRAPPERS \
	CppGame_Source_CppGame_EndGameScreen_h_10_INCLASS \
	CppGame_Source_CppGame_EndGameScreen_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppGame_Source_CppGame_EndGameScreen_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppGame_Source_CppGame_EndGameScreen_h_10_PRIVATE_PROPERTY_OFFSET \
	CppGame_Source_CppGame_EndGameScreen_h_10_SPARSE_DATA \
	CppGame_Source_CppGame_EndGameScreen_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	CppGame_Source_CppGame_EndGameScreen_h_10_INCLASS_NO_PURE_DECLS \
	CppGame_Source_CppGame_EndGameScreen_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPGAME_API UClass* StaticClass<class UEndGameScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppGame_Source_CppGame_EndGameScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
