#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndGameScreen.generated.h"

UCLASS()
class CPPGAME_API UEndGameScreen : public UUserWidget
{
	GENERATED_BODY()
		virtual bool Initialize();

	UPROPERTY(meta = (BindWidget))
		class UButton* Replay;
		class UButton* Quit;

	UFUNCTION()
		void ReplayButtonClicked();
};
