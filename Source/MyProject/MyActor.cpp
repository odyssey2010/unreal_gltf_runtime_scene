// Copyright 2023.

#include "MyActor.h"
#include <cstring>

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GltfComponent = CreateDefaultSubobject<UglTFRuntimeComponent>(TEXT("GltfComponent"));
	GltfComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	if (!FileName.IsEmpty())
	{
		FString FullPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir() + FileName);
		GltfComponent->LoadFromFile(FullPath);
	}
	else if (!Url.IsEmpty())
	{
		GltfComponent->LoadFromUrl(Url);
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
