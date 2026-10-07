// Copyright (c) 2026 WebSpider Studios (Vivekanand Rajbhar). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * Main game module definition for ALS Refactored Locomotion standalone runtime.
 */
class FALSRefactoredLocomotionModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
