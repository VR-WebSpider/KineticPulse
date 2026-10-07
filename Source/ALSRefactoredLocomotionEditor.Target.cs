using UnrealBuildTool;
using System.Collections.Generic;

public class ALSRefactoredLocomotionEditorTarget : TargetRules
{
	public ALSRefactoredLocomotionEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("ALSRefactoredLocomotion");
	}
}
