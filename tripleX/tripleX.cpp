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
    // expression follow by a ; is a expression statements.
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    // std::cout << std::endl;
    std::cout << "Enter the correct code to continue...\n";

    
    // following are declaration statements
    const int a = 7;
    const int b = 8;
    const int c = 9;
    // a = 100; if already const, then can not change it.
    const int sum = a + b + c;
    const int mul = a * b * c;

    // expression follow by a ; is a expression statements.
    std::cout << "There are 3 numbers in our code." << std::endl;
    std::cout << "The sum: " << sum << std::endl;
    std::cout << "The product: " << mul << std::endl;

    // return statement
    return 0;
}