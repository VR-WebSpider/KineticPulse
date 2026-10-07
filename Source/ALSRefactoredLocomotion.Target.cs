using UnrealBuildTool;
using System.Collections.Generic;

public class ALSRefactoredLocomotionTarget : TargetRules
{
	public ALSRefactoredLocomotionTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("ALSRefactoredLocomotion");
	}
}
