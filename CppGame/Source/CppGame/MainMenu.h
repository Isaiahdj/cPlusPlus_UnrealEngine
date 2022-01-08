#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenu.generated.h"


UCLASS()
class CPPGAME_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()
	
		virtual bool Initialize();

		UPROPERTY(meta = (BindWidget))
		class UButton* StartGame;

		UFUNCTION()
			void StartButtonClicked();
		
		
};
