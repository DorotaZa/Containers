//Zad 0.1 Lambda
//Napisz zwykłą funkcją oraz lambdę(przypisz ją do zmiennej) Następnie je wywołaj :
//a) funkcją wypisująca “Hello World”
//b) Funkcja dodająca dwie liczby do siebie(i zwracająca ją)

#include <iostream>

void print()
{
    std::cout << "Hello World!" << std::endl;
}

double addition(double a, double b)
{
    return a + b;
}

int main()
{

    //a)
    auto lambdaPrint = []() { std::cout << "Lambda says Hello!" << std::endl; };
    lambdaPrint();
    print();

 
    //b)
    auto lambdaAddition = [](double a, double b) {return a + b; };
    std::cout << "Sum using lambda function = " << lambdaAddition(1.11, 2.22) << std::endl;
    std::cout << "Sum = " << addition(1.23, 3.45) << std::endl;
    
}
