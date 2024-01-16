// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <array>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
	std::string Input;

	// loop while there's more input
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		// Create array to store letter count:
		std::array<int, 26> LetterCounts{ 0 };
		// Loop over string:
		for (int i = 0; i < Input.size(); i++)
		{
			// Only process alphabetic characters:
			if (isalpha(Input[i]))
			{
				// Set to uppercase:
				Input[i] = toupper(Input[i]);
				// Increment letter counter:
				LetterCounts[Input[i] - 'A']++;
			}
		}

		// Loop over conter array:
		for (int i = 0; i < 26; i++)
		{
			// Only display characters that have appeared:
			if (LetterCounts[i] > 0)
			{
				std::cout << (char) (i + 'A') << LetterCounts[i] << ' ';
			}
		}
		std::cout << "\n";

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
