
#include "EndGameScreen.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UEndGameScreen::Initialize()
{

	Super::Initialize();

	Replay->OnClicked.AddDynamic(this, &UEndGameScreen::ReplayButtonClicked);

	return true;
}

void UEndGameScreen::ReplayButtonClicked()
{

	UGameplayStatics::OpenLevel(this, "JumpMazeLevel");

}
