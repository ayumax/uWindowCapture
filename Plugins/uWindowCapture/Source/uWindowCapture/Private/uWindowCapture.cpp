// Copyright 2019 ayumax. All Rights Reserved.

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IuWindowCapture.h"


class FuWindowCapture : public IuWindowCapture
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FuWindowCapture, uWindowCapture)



void FuWindowCapture::StartupModule()
{
}


void FuWindowCapture::ShutdownModule()
{
}



