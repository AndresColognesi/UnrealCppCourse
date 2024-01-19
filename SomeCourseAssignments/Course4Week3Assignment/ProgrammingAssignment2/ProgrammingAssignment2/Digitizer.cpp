// Copyright A.T. Chamillard. All Rights Reserved.

#include "Digitizer.h"

#include <cctype>

/**
 * Constructor
*/
Digitizer::Digitizer()
{
	// populate your map here
	WordToDigitMap["ZERO"] = 0;
	WordToDigitMap["ONE"] = 1;
	WordToDigitMap["TWO"] = 2;
	WordToDigitMap["THREE"] = 3;
	WordToDigitMap["FOUR"] = 4;
	WordToDigitMap["FIVE"] = 5;
	WordToDigitMap["SIX"] = 6;
	WordToDigitMap["SEVEN"] = 7;
	WordToDigitMap["EIGHT"] = 8;
	WordToDigitMap["NINE"] = 9;
}

/**
 * Converts the given word to the corresponding digit.
 * If the word isn't a valid digit name, returns -1
 * @param Word word to convert
 * @return corresponding digit or -1
*/
int Digitizer::ConvertWordToDigit(std::string Word)
{
	// convert to lower case 
	// DO NOT use std::transform, which works fine in Visual
	// Studio and in Xcode, but doesn't work in g++ in the autograder
	// Instead, use a for loop to convert each character to
	// lower or upper case (depending on the case you used
	// in your map


	// do the conversion
	// replace the code below with your code


	// Converting input to uppercase:
	for (int i = 0; i < Word.size(); i++)
	{
		Word[i] = std::toupper(Word[i]);
	}
	// Check if word is a valid map entry:
	if (WordToDigitMap.count(Word) == 1)
	{
		return WordToDigitMap[Word];
	}
	else
	{
		return -1;
	}
}