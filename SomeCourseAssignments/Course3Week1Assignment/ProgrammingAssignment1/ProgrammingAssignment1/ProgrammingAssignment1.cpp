// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

#include "Egg.h"
#include "EggColor.h"
#include "HowCooked.h"

// Don't change ANY of the code in this file; 
// if you do, you'll break the automated grader!

/**
 * Programming Assignment 1
 * @return exit status
*/
int main()
{
	// test case to run
	static int TestCaseNumber;

	// test cases eggs
	Egg TC1Egg{ 10, EggColor::Blue };
	Egg TC2Egg{ 10, EggColor::White };
	Egg TC3Egg{ 10, EggColor::White };
	Egg TC4Egg{ 10, EggColor::White };
	Egg TC5Egg{ 10, EggColor::White };
	Egg TC6Egg{ 10, EggColor::White };
	Egg TC7Egg{ 10, EggColor::White };
	Egg TC8Egg{ 10, EggColor::White };
	Egg TC9Egg{ 10, EggColor::Brown };
	Egg TC10Egg{ 10, EggColor::White };

	// loop while there's more input
	std::string Input;
	std::cin >> Input;
	while (Input[0] != 'q')
	{
		// extract test case number from string
		TestCaseNumber = std::stoi(Input);

		// execute selected test case
		switch (TestCaseNumber)
		{
		case 1:
			if (TC1Egg.GetEggColor() == EggColor::Blue &&
				TC1Egg.GetAmountLeft() == 10)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 2:
			TC2Egg.Cook(HowCooked::Fried);
			if (TC2Egg.GetCookedStatus() == HowCooked::Fried)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 3:
			TC3Egg.Cook(HowCooked::Fried);
			TC3Egg.Cook(HowCooked::HardBoiled);     // make sure no re-cooking
			if (TC3Egg.GetCookedStatus() == HowCooked::Fried)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 4:
			TC4Egg.Cook(HowCooked::Fried);
			if (TC4Egg.IsCooked())
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 5:
			TC5Egg.TakeBite(1);     // no effect because egg isn't cooked
			if (TC5Egg.GetAmountLeft() == 10)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 6:
			TC6Egg.Cook(HowCooked::HardBoiled);
			TC6Egg.TakeBite(1);
			if (TC6Egg.GetAmountLeft() == 9)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 7:
			TC7Egg.Cook(HowCooked::HardBoiled);
			TC7Egg.TakeBite(11);     // making sure amount left clamps at 0
			if (TC7Egg.GetAmountLeft() == 0)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 8:
			TC8Egg.Dye(EggColor::Blue);
			if (TC8Egg.GetEggColor() == EggColor::Blue)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 9:
			TC9Egg.Dye(EggColor::Blue);     // can only dye white eggs
			if (TC9Egg.GetEggColor() == EggColor::Brown)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		case 10:
			TC10Egg.Dye(EggColor::Brown);     // can only dye eggs blue
			if (TC10Egg.GetEggColor() == EggColor::White)
			{
				std::cout << "Passed\n";
			}
			else
			{
				std::cout << "FAILED\n";
			}
			break;
		}

		std::cin >> Input;
	}
}
