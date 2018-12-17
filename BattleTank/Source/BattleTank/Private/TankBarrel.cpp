// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"

void UTankBarrel::Elevate(float MaxDegreesPerSencond) {
	// Move the barrel the right amount this frame
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at spped %f"), MaxDegreesPerSencond);
}