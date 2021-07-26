// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EOSCPP : ModuleRules
{
	public EOSCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EOSCore" });
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"EOSCore"
			}
		);
	}
}
