#include "MainMenuWidget.h"
#include "SMainMenuWidget.h"

TSharedRef<SWidget> UMainMenuWidget::RebuildWidget()
{
    SlateWidget = SNew(SMainMenuWidget)
        .OnStartClicked(BIND_UOBJECT_DELEGATE(FSimpleDelegate, OnStartClicked))
        .OnQuitClicked(BIND_UOBJECT_DELEGATE(FSimpleDelegate, OnQuitClicked));

    return SlateWidget.ToSharedRef();
}

void UMainMenuWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    SlateWidget.Reset();
    Super::ReleaseSlateResources(bReleaseChildren);
}
