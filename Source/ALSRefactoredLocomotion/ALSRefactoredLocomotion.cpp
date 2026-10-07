// Copyright (c) 2026 WebSpider Studios (Vivekanand Rajbhar). All Rights Reserved.

#include "ALSRefactoredLocomotion.h"
#include "Modules/ModuleManager.h"

void FALSRefactoredLocomotionModule::StartupModule()
{
	// Initialization hooks for standalone locomotion runtime module
}

void FALSRefactoredLocomotionModule::ShutdownModule()
{
	// Clean up module allocations on engine exit
}

IMPLEMENT_PRIMARY_GAME_MODULE(FALSRefactoredLocomotionModule, ALSRefactoredLocomotion, "ALSRefactoredLocomotion");
