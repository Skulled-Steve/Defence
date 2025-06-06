#include "SMainMenuWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/Layout/SVerticalBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SMainMenuWidget::Construct(const FArguments& InArgs)
{
    StartClicked = InArgs._OnStartClicked;
    QuitClicked = InArgs._OnQuitClicked;

    ChildSlot
    [
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight().Padding(20)
        [
            SNew(SButton)
            .Text(FText::FromString(TEXT("Start Game")))
            .OnClicked(this, &SMainMenuWidget::HandleStartClicked)
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(20)
        [
            SNew(SButton)
            .Text(FText::FromString(TEXT("Quit")))
            .OnClicked(this, &SMainMenuWidget::HandleQuitClicked)
        ]
    ];
}

FReply SMainMenuWidget::HandleStartClicked()
{
    if (StartClicked.IsBound())
    {
        StartClicked.Execute();
    }
    return FReply::Handled();
}

FReply SMainMenuWidget::HandleQuitClicked()
{
    if (QuitClicked.IsBound())
    {
        QuitClicked.Execute();
    }
    return FReply::Handled();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
