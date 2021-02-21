#include<iostream>
#include<string>
/*
    Author: Bryce Davenport 02/21/2021
    Description: simple practice of dealing with c++ strings and user input
    Inputs: string name 
    Outputs: 
*/
using namespace std;
int main(){

    //string concatenation
    
    string first = "Henry ";
    string middle = "David ";
    string last = "Thoreau";
    string fullname = first + middle + last;
    cout << fullname << endl;
    
   
   
    //user input of a string 
    //getline() allows us to take string input if there is a space char
    
    string input;
    cout << "enter a sentence\n";
    getline(cin, input);
    cout << input << endl;

    //first use of .size() to output size of string
    
    cout << first << "your sentence was " << input.size() << " letters long!" << endl;



    
}