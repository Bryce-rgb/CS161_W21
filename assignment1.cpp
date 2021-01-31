/*********************************************************************
 * ** Program Filename: assignment1.cpp
 * ** Author:Bryce Davenport
 * ** Date:01/12/2021
 * ** Description:calculate taxes owed for a car salesman
 * ** Input:
 * ** Output:
 * *********************************************************************/
/*********************************************************************
 * ** Function:
 * ** Description:
 * ** Parameters:
 * ** Pre-Conditions:
 * ** Post-Conditions:
 * *********************************************************************/


#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

// user inputs


int main() {
	int tax_year;
	cout << "Please enter the tax year you are filling for, input 1 for 2017, input 2 for 2018" << endl;  
	cin >> tax_year;  
	cout << "You selected the tax year of: " << tax_year << endl;

	 
	char state;
	cout << "Please enter the state in which you are filling in ( 'a','b','c')" << endl;
	cin >> state; 
	cout << "You chose state: " << state << endl;
	

	double monthly_salary;
	cout << "Enter your monthly salary in USD: " << endl;
	cin >> monthly_salary;
	cout << "You Entered: " << monthly_salary << endl;
 

	int months_worked;
	cout << "Enter how many months your worked in " << tax_year << "(0-12 only)" << endl;
	cin >> months_worked; 
	cout << "You worked " << months_worked << " in " << tax_year << endl;


	double selling_price;
	cout << "what is the se lling price of your cars?" << endl;
	cin >>  selling_price; 
	cout << " You input: " << selling_price << " dollars" << endl;

	int cars_sold;
	cout << "how many cars did you sell in " << tax_year << " ?" << endl;
	cin >> cars_sold;
	cout << "you sold: " << cars_sold << " cars" << endl;


	int misconducts;
	cout <<  "how many misconducts did you have this year?" << endl;
	cin >>  misconducts;
	cout <<  "you had: " << misconducts;


	int annual_salary;
	cout <<  monthly_salary*months_worked <<  " Is your annual salary" << endl;
	

// profit calculation
// generate random number between 5-10 for profit of car
	
	
	int rand_profit;
	int lower = 5 , upper = 10;	

	srand(time(NULL));
  	rand_profit = ( rand() % ( upper-lower+1)) + lower / 100;
	
	int carProfit;
	carProfit = cars_sold * selling_price * rand_profit - (selling_price * cars_sold)     ; //need to add selling price*cars_sold	
	


// deduction calculation
// use pow function
	
	double deduction = pow(100*2 ,misconducts -1 );
	cout << "you had " << deduction << " removed from pay due to miscindcuts" << endl;

	
//gross income calculation ( annual salary+2% of profit - deduction


	int grossincome = annual_salary + carProfit - deduction;


	


// tax indentification with year, state and income

	double post_tax;
	if (tax_year == 1 ) {		//2017
			
		if (state == 'a' ){
			 post_tax = grossincome - (grossincome * 0.06);
					
		}

		else if (state == 'b' ) {
			if (grossincome < 2000) {
				 post_tax = grossincome - 0;
			}
			else if (grossincome >= 2000 && grossincome <= 10000) { 
				 post_tax = grossincome - 100;
			}
			else if (grossincome > 10000) {
				 post_tax = grossincome - (grossincome * 0.10) - 100;
			}
		}	
		else if (state == 'c' ) {
			if (grossincome < 3500) {
				 post_tax = grossincome - (grossincome * 0.05);
			} 
			else if (grossincome >= 3500 && grossincome < 9000) {    
				 post_tax = grossincome - (grossincome * 0.07) - 175;
			}  					
			else if (grossincome >= 9000 && grossincome < 125000) { 
				 post_tax = grossincome - (grossincome * 0.09) - 560;
			}
			else if (grossincome >= 125000) {
				post_tax = grossincome - (grossincome * 0.099) - 11000;
			}
				 
			
		}  
	}
	else if (tax_year == 2 ) {	//2018
	
		if (state == 'a' ) {
			if (grossincome) {
				post_tax = grossincome - (grossincome * 0.08);
			}
                }
                else if (state == 'b' ) {
			if (grossincome < 2500) {
				post_tax = grossincome - 0;
			}
			else if (grossincome >= 2500 && grossincome < 10000) {
				post_tax = grossincome - 115;
			}
			else if (grossincome >= 10000) {
				post_tax = grossincome - (grossincome * 0.105);
			}
			
                }
                else if (state == 'c' ) {
			if (grossincome < 3450) {
				post_tax = grossincome - (grossincome * 0.05);
			}
			else if (grossincome >= 3450 && grossincome < 8700) {
				post_tax = grossincome - (grossincome * 0.07) - 172.5;
			}
			else if (grossincome >= 8700 && grossincome < 125000) {
				post_tax = grossincome - (grossincome * 0.09) - 540;
			}
			else if (grossincome >= 125000) {
				post_tax = grossincome - (grossincome * 0.99) - 11007;
			}
                }
	}
	else  {
		cout << " invalid tax year input " << endl; 
	
	}		
	
	//output final income (post tax and deduction), gross income, taxes paid, deductions

	double final_income;
	final_income = post_tax - deduction;

	double taxes_paid;
	taxes_paid = grossincome - post_tax;
	
	cout << " Your post tax income for " << tax_year << " is " << final_income << " USD" << endl;
	cout << " Gross income: " << grossincome << endl;
 	cout << " You paid " << taxes_paid  << " in taxes" << endl;
	cout << " Total deductions: " << deduction << endl;



	return 0;
}


