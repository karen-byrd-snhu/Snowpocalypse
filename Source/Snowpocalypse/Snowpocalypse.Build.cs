// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Snowpocalypse : ModuleRules
{
	public Snowpocalypse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
