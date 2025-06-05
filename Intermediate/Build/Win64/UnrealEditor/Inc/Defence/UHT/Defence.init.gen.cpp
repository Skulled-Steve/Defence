// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefence_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Defence;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Defence()
	{
		if (!Z_Registration_Info_UPackage__Script_Defence.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Defence",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDF32BA50,
				0xBCDDF7AF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Defence.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Defence.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Defence(Z_Construct_UPackage__Script_Defence, TEXT("/Script/Defence"), Z_Registration_Info_UPackage__Script_Defence, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDF32BA50, 0xBCDDF7AF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
