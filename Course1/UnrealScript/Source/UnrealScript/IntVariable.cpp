// Fill out your copyright notice in the Description page of Project Settings.


#include "IntVariable.h"

int UIntVariable::GetValue()
{
	return _value;
}

void UIntVariable::SetValue(int desiredValue)
{
	_value = desiredValue;
}