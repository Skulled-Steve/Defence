#include "MenuGameMode.h"
#include "MainMenuWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AMenuGameMode::AMenuGameMode()
{
    // No pawn or controller by default
    DefaultPawnClass = nullptr;
    PlayerControllerClass = nullptr;
}

void AMenuGameMode::BeginPlay()
{
    Super::BeginPlay();

    if (MainMenuWidgetClass)
    {
        MainMenuWidget = CreateWidget<UMainMenuWidget>(GetWorld(), MainMenuWidgetClass);
        if (MainMenuWidget)
        {
            MainMenuWidget->AddToViewport();
            MainMenuWidget->OnStartClicked.BindUObject(this, &AMenuGameMode::HandleStartClicked);
            MainMenuWidget->OnQuitClicked.BindUObject(this, &AMenuGameMode::HandleQuitClicked);
        }
    }
}

void AMenuGameMode::HandleStartClicked()
{
    // Replace "GameMap" with your actual gameplay map
    UGameplayStatics::OpenLevel(this, FName(TEXT("GameMap")));
}

void AMenuGameMode::HandleQuitClicked()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
}
