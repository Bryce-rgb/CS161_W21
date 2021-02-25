#include<iostream>
#include<cstring>   // needed to use functions that can ready strings with spaces

/*
    Author: Bryce Davenport 02/24/2021
    Description: Practice and testing with c style strings
    Inputs: 
    Outputs: 

*/

// c style strings are just one dimensional arrays which are terminated will the null char "\0"
/*
int main()
{
    char str[6] = "bobby";
    std::cout << "name is: " << str;

    return 0;
}
*/

/*
// user input of c style strings:
int main()
{
    char str[100];
    std::cout << "Enter your name: ";
    std::cin >> str;                //only prints first name, space termiantes 
    std::cout << str;



}
*/



//getline() function that gets entire line including spaces, str name first then size of array in parameters
int main()
{
    char str[100];
    std::cout << "Enter your name: ";
    std::cin.getline(str,100);             
    std::cout << str;

}