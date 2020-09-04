// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "XUEXIHUD.generated.h"

UCLASS()
class AXUEXIHUD : public AHUD
{
	GENERATED_BODY()

public:
	AXUEXIHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

