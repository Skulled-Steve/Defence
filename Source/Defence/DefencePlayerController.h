#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "DefencePlayerController.generated.h"

class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS()
class ADefencePlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ADefencePlayerController();

    // Niagara FX for move location (optional)
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
    UNiagaraSystem* FXCursor;

    // Enhanced Input
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* LeftMouseClick;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* LeftMouseDrag;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* RightMouseClick;

    // UMG selection widget class
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
    TSubclassOf<UUserWidget> SelectionWidgetClass;

    // Runtime instance of selection widget
    UPROPERTY(BlueprintReadOnly, Category = UI)
    UUserWidget* SelectionWidget;

    // Current drag selection state (for UMG)
    UPROPERTY(BlueprintReadOnly, Category = Selection)
    bool bIsSelecting = false;

    UPROPERTY(BlueprintReadOnly, Category = Selection)
    FVector2D SelectionStart;

    UPROPERTY(BlueprintReadOnly, Category = Selection)
    FVector2D SelectionEnd;

    // The currently selected actors
    UPROPERTY(BlueprintReadOnly, Category = Selection)
    TArray<AActor*> SelectedActors;

protected:
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

    // Drag-select functions
    void OnLeftMouseDown();
    void OnLeftMouseUp();
    void OnLeftMouseDrag();

    // Move selected actors
    void OnRightMouseClick();

    // Selects actors within the current selection box (in screen space)
    UFUNCTION(BlueprintCallable, Category = "Selection")
    void SelectActorsInBox();
};
