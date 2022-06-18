// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SummerGame2022 : ModuleRules
{
	public SummerGame2022(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
