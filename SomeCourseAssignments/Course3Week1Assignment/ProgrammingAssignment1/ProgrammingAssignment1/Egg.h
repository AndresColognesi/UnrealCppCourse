// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "EggColor.h"
#include "HowCooked.h"

/**
 * An egg
*/
class Egg
{
private:
    int AmountLeft;
    EggColor Color;
    HowCooked CookedStatus;

public:
    /**
     * Constructor
     * @param Size size of egg 
     * @param Color egg color
    */
    Egg(int Size, EggColor Color);

    /**
     * Gets how much of the egg is left
     * @return amount left
    */
    int GetAmountLeft();

    /**
     * Gets the color of the egg
     * @return egg color
    */
    EggColor GetEggColor();

    /**
     * Gets how the egg is cooked
     * @return how the egg is cooked
    */
    HowCooked GetCookedStatus();

    /**
     * Gets whether or not the egg is cooked
     * @return true if the egg is cooked, false otherwise
    */
    bool IsCooked();

    /**
     * Cooks the egg
     * @param HowToCook how the egg should be cooked
    */
    void Cook(HowCooked HowToCook);

    /**
     * Takes a bite of the given size from the egg. 
     * Only takes a bite if the egg is cooked
     * @param Size size of the bite to take
    */
    void TakeBite(int Size);

    /**
     * Dyes the egg the given color. Only white eggs 
     * can be dyed, and eggs can only be dyed blue
     * @param Color color to dye the egg
    */
    void Dye(EggColor Color);
};

