// Copyright Epic Games, Inc. All Rights Reserved.

#include "SummerGame2022GameMode.h"
#include "SummerGame2022Character.h"
#include "UObject/ConstructorHelpers.h"

ASummerGame2022GameMode::ASummerGame2022GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
