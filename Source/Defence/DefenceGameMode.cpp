// Copyright Epic Games, Inc. All Rights Reserved.

#include "DefenceGameMode.h"
#include "DefencePlayerController.h"
#include "DefenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADefenceGameMode::ADefenceGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ADefencePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
    if(PlayerControllerBPClass.Class != nullptr)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}
