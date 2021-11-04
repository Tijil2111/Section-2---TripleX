#include <iostream>

int main()
{
    std::cout <<"You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout <<"Enter the correct code to continue.......";

    const int a = 4;
    const int b = 5;
    const int c = 6;
    

    const int sum = a+b+c;
    const int product = a*b*c;

    std::cout << std::endl;
    std::cout << sum;
    std::cout << std::endl;
    std::cout << product;

    return 0;
}