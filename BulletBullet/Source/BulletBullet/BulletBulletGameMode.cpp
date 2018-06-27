// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BulletBulletGameMode.h"
#include "BulletBulletHUD.h"
#include "BulletBulletCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABulletBulletGameMode::ABulletBulletGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABulletBulletHUD::StaticClass();
}
