// Copyright (c) 2023-2024 Danta1ion.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ASLibrary.generated.h"

UCLASS()
class ANGELSCRIPTEDITORHELPER_API UASLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Helper function for editor scripts (Toolbox plugin or Editor Utility Widget) to print to viewport. */
    UFUNCTION(BlueprintCallable)
    static void Print(const FString& InString = FString(TEXT("Hello")), FLinearColor TextColor = FLinearColor(0.0f, 0.66f, 1.0f), float Duration = 5.f, const FName Key = NAME_None);
};
