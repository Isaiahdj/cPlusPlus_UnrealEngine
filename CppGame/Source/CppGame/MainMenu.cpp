
#include "MainMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UMainMenu::Initialize()
{

	Super::Initialize();

	StartGame->OnClicked.AddDynamic(this, &UMainMenu::StartButtonClicked);

	return true;
}

void UMainMenu::StartButtonClicked()
{

	UGameplayStatics::OpenLevel(this, "JumpMazeLevel");
	
}