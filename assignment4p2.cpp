/*********************************************************************  
 * ** Program Filename: assingment4p2.cpp
 * ** Author:  Bryce Davenport
 * ** Date:  05/24/21
 * ** Description: producces fractals
 * ** Input:  n and col
 * ** Output:   fractals
 * *********************************************************************/

#include <iostream>

using namespace std;

void pattern(int n, int col);

int main()
{
    int col;
    int n;

    cout << "Enter num: " << endl;
    cin >>n;
    cout << "Enters col: " << endl;
    cin >>col;

    cout << "user inputted one" << endl;
    pattern(n,col);

    cout << "Test Fractals " << endl;
    cout << "3,2" << endl;
    pattern(3,2);
    cout << "       " << endl;
    cout << "5,1" << endl;
    pattern(5,1);
    cout << "7,0" << endl;
    pattern(7,0);

}

/*********************************************************************  
 * ** Function:  pattern()
 * ** Description:  generates 
 * ** Parameters:  int n, int col
 * ** Pre-Conditions: n and col are valid 
 * ** Post-Conditions:  outputs: fractals
 * *********************************************************************/
void pattern(int n, int col)
{
    if (n > 0)
    {
        
        pattern(n-2,col+1); //recrusive call 1
        //print offset
        for (int i = 0; i < col; ++i) 
            cout << "  ";

        
        
        //print stars
        for (int i = 0; i < n; ++i) 
            cout <<"* ";
                
        cout << endl;

      pattern(n-2, col+1); //(n-2 ,col), col-num failed 



    }


}
