// Copyright 2019 ayumax. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"


class IuWindowCapture : public IModuleInterface
{

public:

	static inline IuWindowCapture& Get()
	{
		return FModuleManager::LoadModuleChecked< IuWindowCapture >( "uWindowCapture" );
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "uWindowCapture" );
	}
};

