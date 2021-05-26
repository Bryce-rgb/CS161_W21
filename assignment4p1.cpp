/*********************************************************************  
 * ** Program Filename: assingment4p1.cpp
 * ** Author:  Bryce Davenport
 * ** Date:  05/24/21
 * ** Description: Part one of assignment, text surgeon
 * ** Input:  c Style string
 * ** Output:   strings post flip, and letter swap
 * *********************************************************************/


 //using one gracy day, I have 2 total before this

 
#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;

void letter_swap(char *og_string);
void string_replace(char* source, char substring, char replace);
void flip_string(char* source, int length);
//char * purge_string(char *str, int length);


/*********************************************************************  
 * ** Function:  letter_swap()
 * ** Description:  manages array copies amd user input to be used in string_replace function call
 * ** Parameters:  char *og_string, int length
 * ** Pre-Conditions:  user inputs string and letters
 * ** Post-Conditions:  outputs swapped string
 * *********************************************************************/

void letter_swap(char *og_string, int length){
    cout << "in function: "; // delete after done testing

    char letter_1, letter_2;
    char *temp_str = new char[length+1]; 
    
    cout << "Enter one letter that you would like to be replaced: " << endl;
    cin >> letter_1;
    cout << "Enter the letter you wish to swap the " << letter_1 << "'s with" << endl;
    cin >> letter_2;
    
    strcpy(temp_str, og_string);
  
    string_replace(temp_str, letter_1, letter_2);

    
    cout << "Replaced all " << letter_1 << "'s" << " with " << letter_2 << "'s :";
    cout << temp_str << endl;

    delete[] temp_str;
    temp_str = NULL;

}
/*********************************************************************  
 * ** Function:  string_replace()
 * ** Description:  replaces tje value of [i] index
 * ** Parameters:  source, substring, replace
 * ** Pre-Conditions:  user inputs all parametes
 * ** Post-Conditions:  sends replaced string within letter_swap()
 * *********************************************************************/
void string_replace(char* source, char substring, char replace)
{
    for (int i = 0; i <= strlen(source); i++) 
    {   
        
        if(source[i] == substring){ // if substring is not present, this wont execute
            
            source[i] = replace;
        }
    }
}
/*********************************************************************  
 * ** Function:  purge_string() didnt complete word frequency
 * ** Description:  purges specials chars, numbers and reduces capitalization
 * ** Parameters:  dtr, length
 * ** Pre-Conditions:  string passed in, and length passed in
 * ** Post-Conditions:  purged string
 * *********************************************************************/

/*
char * purge_string(char* str, int length)
{
    char* temp = new char[length+1]; 

    strcpy(temp, str);    

    for(int i = 0; i < length+1; i++) 
    {
        if(temp[i] < 91) // uncapitalize
        {
            temp[i] = temp[i] + 32;
        }

        if(temp[i] < 97 && temp[i] > 90) //special cahrs
        {
            //strcpy(&temp[i], &temp[i+1]);
        }

        if(temp[i] < 65) //special chars cont. & nums
        {
            //strcpy(&temp[i], &temp[i+1]);
        }
    }        
    cout << temp << endl;
    return temp;

    delete[] temp;
    temp = NULL;
}
*/
/*********************************************************************  
 * ** Function:  flip_string()
 * ** Description:  flips a string, reverses
 * ** Parameters:  source, length
 * ** Pre-Conditions:  user inputted str and length
 * ** Post-Conditions:  outputs reversed string
 * *********************************************************************/
void flip_string(char* source, int length) //used youtuber "jacob sorbers" video as a starting point
{
    char* flipped = new char[length+1];

    strcpy(flipped, source);
    
    for (int i=0, j=length-1; i < j; i++, j--) // inspiration was to add more than one variable into a for loop
    {
        char temp = flipped[i];
        flipped[i]= flipped[j];
        flipped[j]= temp;
    }
    cout << "Flipped string: ";
    cout << flipped << endl;

    delete[] flipped;
    flipped = NULL;
}

int main()
{
    int choice;

    cout << "Hello User" << endl;
    cout << "Enter a string that you would like to perform operations on: ";

    char *og_string = new char[1024];  //heap allocation

    cin.getline(og_string, 1024);
    cout << endl;               //can delete
    cout << og_string << endl; //can delete

    int stringlen = strlen(og_string);
do {

    cout <<"Which operation would you to run?(1-letter_swap, 2-flip_string:" << endl;
    cin >> choice;

    if (choice == 1)
    {
        letter_swap(og_string,stringlen);
    }

    if(choice == 2)
    {
        flip_string(og_string, stringlen);
    }

    /*
    if(choice == 3)
    {
        purge_string(og_string, stringlen);
    }
    */

}while(choice != 0);


    delete[] og_string;
    og_string = NULL;
}


