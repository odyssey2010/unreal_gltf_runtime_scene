// Copyright 2023.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "glTFRuntimeComponent.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "MyActor")
	FString FileName;

	UPROPERTY(EditAnywhere, Category = "MyActor")
	FString Url;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UglTFRuntimeComponent* GltfComponent;
};
