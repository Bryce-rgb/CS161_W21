#include<iostream>

using namespace std;

bool to_lowest_terms(int &numerator, int &denomenator);
int g_c_d(int num1, int num2);

int main()
{
        int numerator, denomenator;
        int value;
        bool repeat = true;
{
        while (repeat == true){
        cout << "Enter your numerator (whole num): " << endl;
                cin >> numerator;
if (numerator == 0){
                cout << "No 0 and whole Numbers only " << endl;
                cin.clear();
                cin.ignore(256, '\n');
                        cout << "Enter Your Numerator again: " << endl;
                                cin >> numerator;
                        }

        cout << "Enter your denominator (whole num): " << endl;
                cin >> denomenator;
if (denomenator == 0){
        cout << "No 0 and whole Numbers only " << endl;
                cin.clear();
                cin.ignore(256, '\n');
                        cout << "Enter Your denominator again: " << endl;
                                cin >> denomenator;
                        }
        g_c_d(numerator,denomenator);
        to_lowest_terms(numerator, denomenator);

int again;
        cout << "Do you want to run again? (0 no, 1 yes)" << endl;
                cin >> again;
                        if (again == 1){
                                        repeat = true;
                                        }
                                if (again == 0){
                                        repeat = false;


                                                  }



}






}
}

bool to_lowest_terms(int &numerator, int &denomenator)
{
        int low_term = g_c_d(numerator,denomenator);
        cout << "Original fraction: " << numerator << "/" << denomenator << endl;


        numerator = numerator / low_term;
        denomenator = denomenator / low_term;


        cout << "the reduced fraction is: " << numerator << "/" << denomenator << endl;

        return true;
}

int g_c_d(int num1 , int num2)
{
        if (num1 == 0)
                return num2;
        if (num2 == 0)
                return num1;
