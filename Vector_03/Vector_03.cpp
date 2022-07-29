// Vector_03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<int>numbers;
    std::vector<int> numbers(200); 
    std::iota(numbers.begin(), numbers.end(), -100); 
    //for(auto it = 0; )


//a)
    if (std::all_of(numbers.cbegin(), numbers.cend(), [](int i) { return i % 2 == 0; })) {
        std::cout << "All numbers are even\n";


        auto ifBigger = [](int value) -> bool
        {
            if (value > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        };

        if (std::all_of(numbers.begin(), numbers.end(), ifBigger))
        {
            std::cout << "All numbers are bigger than 0" << std::endl;
        }
        else
        {
            std::cout << "Not all numbers are bigger than 0" << std::endl;
        }

        auto ifDivisible = [](int value) //-> bool //mozna nie podawac; to jest jawne okreslenie typu zwracanego
        {
            if (value % 3 && value % 5 && value % 30)
            {
                return true;
            }
        };

        numbers.erase(remove(numbers.begin()), numbers.end(), )


            ec.erase(vec.begin() + 100);
        for (auto it = vec.begin(); it != vec.end(); ++it)
        {
            std::cout << *it << " ";
        }



    }