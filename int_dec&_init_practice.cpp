/*
    Author: Bryce Davenport 02/19/2021
    Description: practicing declaring and initializng variables
    Inputs: int num1, int num2 
    Outputs: int answer

*/
#include <iostream>

int main() {

    int num1 = 10;
    int num2;
   

    std::cout << "num1: " << int (num1) << std::endl;
    

    std::cout << "enter a value for num2: ";
    std::cin >> num2;


    int answer;
    answer = num1 - num2;
    std::cout << "answer: " << answer;
}