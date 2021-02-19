#include<iostream>
/*
    Author: Bryce Davenport 02/19/2021
    Description: simple program that uses if statements to help solve a simple math problem for the user
    Inputs: int choice, int num1, int num2 
    Outputs: int answer

*/
int main(){
    
    std::cout << " Welcome User\n";
    std::cout << " choose which operation you would like to perform\n";
    std::cout << " Enter:1 for addition, 2 for subctraction, 3 for multiplication, 4 for divison\n";

    int choice;
    std::cin >> choice;

    if (choice == 1){
        int num1;
        int num2; 
        int answer;

        std::cout << "Addition Selected\n";
        std::cout << "Input the first integer\n";
        std::cin >> (num1);
        std::cout << "Input the second integer you want to add\n";
        std::cin >> (num2);

        answer = (num1) + (num2);
        std::cout << (num1) << " + " << (num2) << " Equals: " << answer << std::endl;
    }
    else if (choice == 2){
        int num1;
        int num2;
        int answer;

        std::cout << "Subtraction Selected\n";
        std::cout << "Input the first integer\n";
        std::cin >> (num1);
        std::cout << "Input a second integer\n";
        std::cin >> (num2);

        answer = (num1) - (num2);
        std::cout << (num1) << " - " << (num2) << " Equals: " << answer << std::endl;
    }
    else if (choice == 3){
        int num1;
        int num2;
        int answer;

        std::cout << "Multiplication Selected\n";
        std::cout << "Input the first integer\n";
        std::cin >> (num1);
        std::cout << "Input a second integer\n";
        std::cin >> (num2);

        answer = (num1) * (num2);
        std::cout << (num1) << " * " << (num2) << " Equals: " << answer << std::endl;
    }
    else if (choice == 4){
        int num1;
        int num2;
        int answer;

        std::cout << "Division Selected\n";
        std::cout << "Input the first integer\n";
        std::cin >> (num1);
        std::cout << "Input a second integer\n";
        std::cin >> (num2);

        answer = (num1) / (num2);
        std::cout << (num1) << " / " << (num2) << " Equals: " << answer << std::endl;
    }







}