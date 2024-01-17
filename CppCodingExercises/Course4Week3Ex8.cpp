/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

bool Shorter(std::string FirstString, std::string SecondString);
bool Longer(std::string FirstString, std::string SecondString);
std::string FindExtreme(std::vector<std::string>& Values, bool (*Compare)(std::string, std::string));


int main()
{
    // Declare vector of strings to be analysed:
    std::vector<std::string> stringVector { "oi", "goiaba", "maracutaia", "banana", "mato" };
    
    std::cout << "Shortest string: " << FindExtreme(stringVector, &Shorter) << "\n";
    std::cout << "Longest string: " << FindExtreme(stringVector, &Longer) << "\n";

    return 0;
}

bool Shorter(std::string FirstString, std::string SecondString)
{
    return FirstString.size() < SecondString.size();
}

bool Longer(std::string FirstString, std::string SecondString)
{
    return FirstString.size() > SecondString.size();
}

std::string FindExtreme(std::vector<std::string>& Values, bool (*Compare)(std::string, std::string))
{
    // Initialize current extreme with first value:
    std::string extremeString = Values[0];

    // Loop over values to compare:
    for (int i = 1; i < Values.size(); i++)
    {
        if (Compare(Values[i], extremeString))
        {
            extremeString = Values[i];
        }
    }

    return extremeString;
}