// Copyright Epic Games, Inc. All Rights Reserved.

#include "UniGameMode.h"
#include "UniCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUniGameMode::AUniGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
