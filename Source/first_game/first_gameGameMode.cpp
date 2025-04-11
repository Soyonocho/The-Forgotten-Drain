// Copyright Epic Games, Inc. All Rights Reserved.

#include "first_gameGameMode.h"
#include "first_gameCharacter.h"
#include "UObject/ConstructorHelpers.h"

Afirst_gameGameMode::Afirst_gameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
