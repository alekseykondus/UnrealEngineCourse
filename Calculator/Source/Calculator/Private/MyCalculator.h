// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Containers/UnrealString.h"
#include <string>
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyCalculator.generated.h"

/**
 * 
 */
UCLASS()
class UMyCalculator : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
		double Count(double left, FString operation, double right);

private:
	UFUNCTION(BlueprintCallable)
		double Plus(double left, double right);
	UFUNCTION(BlueprintCallable)
		double Minus(double left, double right);
	UFUNCTION(BlueprintCallable)
		double Multiplication(double left, double right);
	UFUNCTION(BlueprintCallable)
		double Division(double left, double right);
};
