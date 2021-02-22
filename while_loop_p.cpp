#include<iostream>
/*
    Author: Bryce Davenport 02/22/2021
    Description: practice with while loops, using to calcuate factorials
    Inputs: 
    Outputs: 

*/
/*
int main()
{

    int i = 10;                           //follows same order structure as for loop(int i=o; i <10; i++), 
                                        //but in different locations
    while (i >= 0)
    {

        std::cout << i << std::endl;
        i--;
    }
    return 0;
}
*/

int main()
{
    int factorial = 5;
    int i = factorial - 1;
    while(i > 1)
    {
        factorial *= i;
        i--;
                 
    }
    std::cout << factorial << std::endl;
}