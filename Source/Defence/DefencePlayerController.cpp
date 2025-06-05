// Copyright Epic Games, Inc. All Rights Reserved.

#include "DefencePlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h" 
#include "AIController.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ADefencePlayerController::ADefencePlayerController()
{
    DefaultMouseCursor = EMouseCursor::Default;
    bIsSelecting = false;
}

void ADefencePlayerController::BeginPlay()
{
    Super::BeginPlay();
    FInputModeGameAndUI InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    SetInputMode(InputMode);
    bShowMouseCursor = true;

    // Spawn and add the selection UMG widget to viewport
    if (SelectionWidgetClass)
    {
        SelectionWidget = CreateWidget<UUserWidget>(this, SelectionWidgetClass);
        if (SelectionWidget)
        {
            SelectionWidget->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
            SelectionWidget->AddToViewport();
        }
    }
}

void ADefencePlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Add Enhanced Input Mapping Context
    if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
        ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
    {
        Subsystem->AddMappingContext(DefaultMappingContext, 0);
    }

    // Bind input actions
    if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
    {
        EnhancedInput->BindAction(LeftMouseClick, ETriggerEvent::Started, this, &ADefencePlayerController::OnLeftMouseDown);
        EnhancedInput->BindAction(LeftMouseClick, ETriggerEvent::Completed, this, &ADefencePlayerController::OnLeftMouseUp);
        EnhancedInput->BindAction(LeftMouseDrag, ETriggerEvent::Triggered, this, &ADefencePlayerController::OnLeftMouseDrag);

        EnhancedInput->BindAction(RightMouseClick, ETriggerEvent::Started, this, &ADefencePlayerController::OnRightMouseClick);
    }
    else
    {
        UE_LOG(LogTemplateCharacter, Error, TEXT("Failed to find Enhanced Input Component!"));
    }
}

void ADefencePlayerController::OnLeftMouseDown()
{
    bIsSelecting = true;
    float MouseX, MouseY;
    GetMousePosition(MouseX, MouseY);
    SelectionStart = FVector2D(MouseX, MouseY);
    SelectionEnd = SelectionStart;
    UE_LOG(LogTemp, Warning, TEXT("Start Drag at: %f, %f"), MouseX, MouseY);
}

void ADefencePlayerController::OnLeftMouseDrag()
{
    if (bIsSelecting)
    {
        float MouseX, MouseY;
        GetMousePosition(MouseX, MouseY);
        SelectionEnd = FVector2D(MouseX, MouseY);
        UE_LOG(LogTemp, Warning, TEXT("Dragging: %f, %f"), MouseX, MouseY);
    }
}

void ADefencePlayerController::OnLeftMouseUp()
{
    if (bIsSelecting)
    {
        bIsSelecting = false;
        float MouseX, MouseY;
        GetMousePosition(MouseX, MouseY);
        SelectionEnd = FVector2D(MouseX, MouseY);
        UE_LOG(LogTemp, Warning, TEXT("End Drag at: %f, %f"), MouseX, MouseY);
        SelectActorsInBox();
    }
}

void ADefencePlayerController::OnRightMouseClick()
{
    FHitResult Hit;
    if (GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit))
    {
        const FVector TargetLocation = Hit.Location;

        for (AActor* Actor : SelectedActors)
        {
            if (Actor)
            {
                APawn* InPawn = Cast<APawn>(Actor);
                if (InPawn)
                {
                    AAIController* AICon = Cast<AAIController>(InPawn->GetController());
                    if (AICon)
                    {
                        AICon->MoveToLocation(TargetLocation);
                    }
                }
            }
        }
    }
}

void ADefencePlayerController::SelectActorsInBox()
{
    SelectedActors.Empty();

    // Calculate selection box min/max
    FVector2D Min(FMath::Min(SelectionStart.X, SelectionEnd.X), FMath::Min(SelectionStart.Y, SelectionEnd.Y));
    FVector2D Max(FMath::Max(SelectionStart.X, SelectionEnd.X), FMath::Max(SelectionStart.Y, SelectionEnd.Y));

    // Get all pawns (or a specific class, e.g. units) in the world
    UWorld* World = GetWorld();
    if (!World) return;

    for (TActorIterator<APawn> It(World); It; ++It)
    {
        APawn* CurPawn = *It;
        if (!CurPawn || CurPawn->IsPlayerControlled()) continue; // Skip self

        FVector2D ScreenPos;
        ProjectWorldLocationToScreen(CurPawn->GetActorLocation(), ScreenPos);

        if (ScreenPos.X >= Min.X && ScreenPos.X <= Max.X
            && ScreenPos.Y >= Min.Y && ScreenPos.Y <= Max.Y)
        {
            SelectedActors.Add(CurPawn);

            // Optionally: highlight selection in your pawn class
            // CurPawn->SetSelected(true);
        }
    }
}