// Copyright A.T. Chamillard. All Rights Reserved.

#include "Egg.h"
#include "EggColor.h"
#include "HowCooked.h"

/**
 * Constructor
 * @param Size size of egg
 * @param Color egg color
*/
Egg::Egg(int Size, EggColor Color) : AmountLeft{Size}, Color{Color}, CookedStatus{HowCooked::NotCooked}
{
}

/**
 * Gets how much of the egg is left
 * @return amount left
*/
int Egg::GetAmountLeft()
{
	return AmountLeft;
}

/**
 * Gets the color of the egg
 * @return egg color
*/
EggColor Egg::GetEggColor()
{
	return Color;
}

/**
 * Gets how the egg is cooked
 * @return how the egg is cooked
*/
HowCooked Egg::GetCookedStatus()
{
	return CookedStatus;
}

/**
 * Gets whether or not the egg is cooked
 * @return true if the egg is cooked, false otherwise
*/
bool Egg::IsCooked()
{
	// Check if egg is uncooked or not:
	if (CookedStatus == HowCooked::NotCooked)
	{
		return false;
	}
	else
	{
		return true;
	}
}

/**
 * Cooks the egg
 * @param HowToCook how the egg should be cooked
*/
void Egg::Cook(HowCooked HowToCook)
{
	// Only cook if was not cooked before:
	if (!IsCooked())
	{
		CookedStatus = HowToCook;
	}
}

/**
 * Takes a bite of the given size from the egg.
 * Only takes a bite if the egg is cooked
 * @param Size size of the bite to take
*/
void Egg::TakeBite(int Size)
{
	// Can only bite cooked egg:
	if (IsCooked())
	{
		// Can not have negative amount left:
		if (Size > AmountLeft)
		{
			Size = AmountLeft;
		}
		// Take bite:
		AmountLeft -= Size;
	}
}

/**
 * Dyes the egg the given color. Only white eggs
 * can be dyed, and eggs can only be dyed blue
 * @param Color color to dye the egg
*/
void Egg::Dye(EggColor Color)
{
	// Can only dye blue:
	if (Color == EggColor::Blue)
	{
		// Only white eggs can be colored:
		if (this->Color == EggColor::White)
		{
			// Dye egg:
			this->Color = Color;
		}
	}
}