#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MenuGameMode.generated.h"

class UMainMenuWidget;

/** Game mode used for the main menu */
UCLASS()
class AMenuGameMode : public AGameModeBase
{
    GENERATED_BODY()
public:
    AMenuGameMode();

    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=UI)
    TSubclassOf<UMainMenuWidget> MainMenuWidgetClass;

private:
    UPROPERTY()
    UMainMenuWidget* MainMenuWidget;

    UFUNCTION()
    void HandleStartClicked();

    UFUNCTION()
    void HandleQuitClicked();
};
