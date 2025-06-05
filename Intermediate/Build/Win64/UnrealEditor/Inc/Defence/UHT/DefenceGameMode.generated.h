// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefenceGameMode.h"

#ifdef DEFENCE_DefenceGameMode_generated_h
#error "DefenceGameMode.generated.h already included, missing '#pragma once' in DefenceGameMode.h"
#endif
#define DEFENCE_DefenceGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADefenceGameMode *********************************************************
DEFENCE_API UClass* Z_Construct_UClass_ADefenceGameMode_NoRegister();

#define FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefenceGameMode(); \
	friend struct Z_Construct_UClass_ADefenceGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DEFENCE_API UClass* Z_Construct_UClass_ADefenceGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ADefenceGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Defence"), Z_Construct_UClass_ADefenceGameMode_NoRegister) \
	DECLARE_SERIALIZER(ADefenceGameMode)


#define FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADefenceGameMode(ADefenceGameMode&&) = delete; \
	ADefenceGameMode(const ADefenceGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DEFENCE_API, ADefenceGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefenceGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefenceGameMode) \
	DEFENCE_API virtual ~ADefenceGameMode();


#define FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h_9_PROLOG
#define FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADefenceGameMode;

// ********** End Class ADefenceGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Defence_Source_Defence_DefenceGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
