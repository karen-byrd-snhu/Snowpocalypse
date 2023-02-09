// Copyright Epic Games, Inc. All Rights Reserved.

#include "SnowpocalypseGameMode.h"
#include "SnowpocalypseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASnowpocalypseGameMode::ASnowpocalypseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
