#include<iostream>
#include<string>


// use a do while loop when you want something to happen at least once
// structure is different than for loops and while loops



int main()
{
    std::string password = "hellotacos123";
    std::string guess;
    do
    {
        std::cout << "Guess the password: ";
        std::cin >> guess;

    } while(guess != password);
    std::cout << "(Hacker Voice) I'm in";
    
}