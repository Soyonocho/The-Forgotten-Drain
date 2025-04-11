// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class first_game : ModuleRules
{
	public first_game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
