// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCalculator.h"


double UMyCalculator::Count(double left, FString operation, double right) {

	if (operation == TEXT("+"))
		return Plus(left, right);
	else if (operation == TEXT("-"))
		return Minus(left, right);
	else if (operation == TEXT("*"))
		return Multiplication(left, right);
	else if (operation == TEXT("/"))
		return Division(left, right);

	return 0;
}

double UMyCalculator::Plus(double left, double right) {

	return left + right;
}

double UMyCalculator::Minus(double left, double right) {

	return left - right;
}

double UMyCalculator::Multiplication(double left, double right) {

	return left * right;
}

double UMyCalculator::Division(double left, double right) {

	if (right)
		return left / right;
	else
		return 0;
}