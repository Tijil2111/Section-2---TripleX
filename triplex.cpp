#include <iostream>

int main()
{

    // Print welcome message to the console 
    std::cout <<"You are a secret agent breaking into a secure server room";
    std::cout << std::endl;
    std::cout <<"Enter the correct code to continue.......";


    // Declaring variables 
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;
    

    const int CodeSum = CodeA+CodeB+CodeC;
    const int CodeProduct = CodeA*CodeB*CodeC;



    // Printing sum and product in console 
    std::cout << std::endl;
    std::cout << " -- There are three number in the code" << std::endl;
    std::cout << " -- The code adds up to -> " << CodeSum << std::endl;
    std::cout << " -- The code multiplies up to -> "<<CodeProduct<< std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;


    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;



    
    return 0;
}
