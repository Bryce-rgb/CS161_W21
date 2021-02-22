#include <iostream>
#include <string>
/*
    Author: Bryce Davenport 02/22/2021
    Description: for loop practice, using a for loop to calcuate factorials
    Inputs: int num 
    Outputs: int factorial

*/

/*
int main()
{
    for (int i = 0; i <= 10; i++)            //prints int i while i <=10, adds 1 to i each time it runs
    {
        std::cout << i << std::endl;         //outputs 0 -> 10
    }
    return 0;
}
*/

/*
int main()
{
    int factorial = 5;                                 
    for (int i = factorial -1; i >0; i--)               
    {
        factorial = factorial * i;                      //5*4, 20*3, 60*2, 120*1

    }
    std::cout <<"Factorial: " << factorial << std::endl;

}
*/

int main()
{
    int num;
    std::cout << "Enter a integer to factorial: ";
    std::cin >> num;
    int factorial = num;
        
    for (int i = factorial - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "the factorial of " << num << " is " << factorial;
     
    return 0;
}
