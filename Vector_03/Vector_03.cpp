// Vector_03

//Utwórz wektor liczb całkowitych od - 100 do 100.
//a) Następnie sprawdź czy wszystkie liczby są dodatnie.
//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.
//c) Usuń z kontenera 0.
//d) Następnie sprawdź czy kontener nie zawiera wartości 0.
//e) Sprawdź czy kontener jest posortowany
//f) Skopiuj do drugiego wektora wszystkie liczby większe od 90 i mniejsze od - 90
//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynając od 78

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    
    std::vector<int> numbers(200); 
    std::iota(numbers.begin(), numbers.end(), -100); 
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

//a) Następnie sprawdź czy wszystkie liczby są dodatnie.
 
    //lambda pisana w kodzie
    if (std::all_of(numbers.cbegin(), numbers.cend(), [](int i) { return i > 0; }))
    {
        std::cout << "All numbers are positive." << std::endl;
    }
    else
    {
        std::cout << "Not all numbers are positive." <<std::endl;
    }


    //lambda przypisana do zmiennej
    auto ifPositive = [](int value) -> bool // -> bool znaczy jawne okreslenie typu zwracanego funkcji lamba; mozna, ale nie trzeba podawac
    {
        return value > 0;
    };

    if (std::all_of(numbers.begin(), numbers.end(), ifPositive))
    {
        std::cout << "All numbers are positive." << std::endl;
    }
    else
    {
        std::cout << "Not all numbers are positive." << std::endl;
    }

//b) Czy istnieje jakakolwiek liczba podzielna przez 3, 5 i 30.

    auto ifDivisible = [](int value)
    {
        if (value % 3 && value % 5 && value % 30)
        {
            return true;
        }
    };

    if (std::any_of(numbers.begin(), numbers.end(), ifDivisible))
    {
        std::cout << "Vector cointains the number divisible by 3, 5 and 30." << std::endl;
    }
    else
    {
        std::cout << "Vector doesn't cointain the number divisible by 3, 5 and 30." << std::endl;
    }

//c) Usuń z kontenera 0.

    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int value) {return 0 == value; }), numbers.end());

//d) Następnie sprawdź czy kontener nie zawiera wartości 0.

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
 
//e) Sprawdź czy kontener jest posortowany

    auto ifSorted = [](int i)
    {
        if (i < i++)
        {
            return true;
        }
    };

    std::for_each(numbers.begin(), numbers.end(), [](int i)
        {
            if (i < i++)
            {
                std::cout << "Container is sorted." << std::endl;
            }

        });

//f) Skopiuj do drugiego wektora wszystkie liczby większe od 90 i mniejsze od - 90
 
    std::vector<int> numbersNew;
    std::copy(numbers.begin(), numbers.end(), std::back_inserter(numbersNew));



    for (auto itNew = numbersNew.begin(); itNew != numbersNew.end(); ++itNew)
    {
        std::cout << *itNew << "N";
    }

//g) Skopiuj do innego wektora 10 kolejnych liczb zaczynając od 78

    std::vector<int> numbers78plus10;

}