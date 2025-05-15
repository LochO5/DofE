// Copyright Epic Games, Inc. All Rights Reserved.

#include "V2GameMode.h"
#include "V2Character.h"
#include "UObject/ConstructorHelpers.h"

AV2GameMode::AV2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
