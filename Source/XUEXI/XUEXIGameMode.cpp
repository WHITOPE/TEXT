// Copyright Epic Games, Inc. All Rights Reserved.

#include "XUEXIGameMode.h"
#include "XUEXIHUD.h"
#include "XUEXICharacter.h"
#include "UObject/ConstructorHelpers.h"

AXUEXIGameMode::AXUEXIGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AXUEXIHUD::StaticClass();
}
