// Copyright Epic Games, Inc. All Rights Reserved.

#include "Final_Project_0_03GameMode.h"
#include "Final_Project_0_03Character.h"
#include "UObject/ConstructorHelpers.h"

AFinal_Project_0_03GameMode::AFinal_Project_0_03GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
