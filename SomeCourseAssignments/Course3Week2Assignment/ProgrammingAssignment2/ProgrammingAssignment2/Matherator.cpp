// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Matherator.h"

int Matherator::GetNthEvenNumber(int N)
{
    return N * 2;
}

int Matherator::GetTenthEvenNumber()
{
    return GetNthEvenNumber(10);
}

void Matherator::PrintMToN(int M, int N)
{
    for (int i = M; i <= N; i++)
    {
        std::cout << i << ' ';
    }
    // Break line at end:
    std::cout << "\n";
}

void Matherator::PrintOneToTen()
{
    PrintMToN(1, 10);
}