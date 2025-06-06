#pragma once

#include "Widgets/SCompoundWidget.h"

/** Simple Slate widget for the main menu */
class SMainMenuWidget : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SMainMenuWidget){}
        SLATE_EVENT(FSimpleDelegate, OnStartClicked)
        SLATE_EVENT(FSimpleDelegate, OnQuitClicked)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

private:
    FSimpleDelegate StartClicked;
    FSimpleDelegate QuitClicked;

    FReply HandleStartClicked();
    FReply HandleQuitClicked();
};
