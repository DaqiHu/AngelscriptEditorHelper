// Copyright (c) 2023-2024 Danta1ion.
#include "ASLibrary.h"

#include "Kismet/KismetSystemLibrary.h"

void UASLibrary::Print(const FString& InString, FLinearColor TextColor, float Duration, const FName Key)
{
    UKismetSystemLibrary::PrintString(GEditor->PlayWorld, InString, true, true, TextColor, Duration, Key);
}
