#include<iostream>
/*
    Author: Bryce Davenport 02/24/2021
    Description: practice with arrays
    Inputs: 
    Outputs: 

*/


int main()
{
    int bryce[9];

    std::cout << "Element  -  Value" << std::endl;

    for(int i = 0; i <=8; i++)      // int = index, i <=8 (as long as index isnt greater than size of array, i=++ (add one))
    {
        bryce[i] = 99;              // index [i] will be set to 99

        std::cout << i << "   ------   " << bryce[i] << std::endl;
    }


}





