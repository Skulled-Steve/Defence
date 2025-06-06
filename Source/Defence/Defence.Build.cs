// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Defence : ModuleRules
{
	public Defence(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Niagara", "AIModule", "UMG", "Slate", "SlateCore"});

    }
}
