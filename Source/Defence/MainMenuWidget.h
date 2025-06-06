#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

class SMainMenuWidget;

/** UMG wrapper for the main menu */
UCLASS()
class UMainMenuWidget : public UUserWidget
{
    GENERATED_BODY()
public:
    FSimpleDelegate OnStartClicked;
    FSimpleDelegate OnQuitClicked;

protected:
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

private:
    TSharedPtr<SMainMenuWidget> SlateWidget;
};
