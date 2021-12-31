//header file and do not need to end with ;
// preprocessor directive
#include <iostream>

/*
notes 
variables must be declared before usage,
declare variable will reserving space in the memory.
int a = 0;  initialized var
int a;      uninitialized var
*/

int main() 
{
    std::cout << "Annie: \"lol\" \n";
    // expression follow by a ; is a expression statements.
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    // std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n";

    
    // following are declaration statements
    const int CodeA = 7;
    const int CodeB = 8;
    const int CodeC = 9;
    // a = 100; if already const, then can not change it.
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeMul = CodeA * CodeB * CodeC;

    // expression follow by a ; is a expression statements.
    std::cout << "There are 3 numbers in our code." << std::endl;
    std::cout << "The sum: " << CodeSum << std::endl;
    std::cout << "The product: " << CodeMul << std::endl;

    int PlayerGuessA, PlayerGuessB, PlayerGuessC;
    std::cout << "Please enter your guess: \n";
    // std::cout << "Please enter your guess of A: \n";
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;
    // std::cout << "Please enter your guess of B: \n";
    // std::cin >> PlayerGuessB;
    // std::cout << "Please enter your guess of C: \n";
    // std::cin >> PlayerGuessC;
    std::cout << "You entered: " << PlayerGuessA << PlayerGuessB << PlayerGuessC << std::endl;

    int CheckSum = PlayerGuessA + PlayerGuessB + PlayerGuessC;
    int CheckPro = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    if (CheckSum == CodeSum) 
    {
        std::cout << "You Win \n";
    } 
    else 
    {
        std::cout << "You Lose \n";
    }
    // return statement
    // if + tab
    
    return 0;
}