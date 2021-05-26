#include<iostream>
#include<string>


using namespace std;

bool check_range(int lower_bound , int upper_bound  , int test_value  );
int equality_test(int num1, int num2);
bool is_int(string num);
void string_to_int(string num, int &value);
void swap(int &num1, int &num2);
int word_count(string num);

/*int main(){
      	int value = 0; 
        check_range(1,10,5);
	equality_test(5,7);  
	is_int("423");
	string_to_int("1234",value);
	swap(&num1,&num2);
} */

bool check_range(int lower_bound , int upper_bound, int test_value )

{	
	if(test_value >= lower_bound && test_value <= upper_bound)
	{
		
		cout << "Test value is withing the range of " << lower_bound << " & " << upper_bound << endl;
		return true;
	}
	else
	{
		cout << "Test value is not within the range of " << lower_bound << " & " << upper_bound << endl;
		return false;
	}
		 
}

int equality_test(int num1, int num2)
{
	if(num1 < num2)
	{
		cout << num1 << " Is less than " << num2 << endl;
		return -1;
	}
	else if(num1 == num2)
	{
		cout << num1 << " Is equal to " << num2 << endl;
		return 1;
	}
	else if(num1 > num2)
	{
		cout << num1 << " Is greater than " << num2 << endl;
		return 0;
	}

} 

bool is_int(string num)
{

	for (int i = 1; i < num.length(); i++){
		if(!(num[i] > 47 && num[i] < 58))
		{
			cout << "not an int" << endl;
			break;
			return false;
		}
		else{
			cout << " is int" << endl;
			return true;
		}
	}


}

void string_to_int(string num, int &value)
{
	value = 0;
	cout << "Works here" << endl;
	for (int i = 0; i < num.length(); i++)
	{
		value = value * 10 + (int) (num[i] - '0');

	}
	cout << value << endl;
}

void swap(int & num1, int & num2)
{
	int temp1 = 0;
	int temp2 = 0;
	temp1 = num1;
	temp2 = num2;
	num2 = temp1;
	num1 = temp2;

}

int word_count(string sentence){

            int words = 0;
            char x = ' ';
            for (char i=0; i <=sentence.length(); i++) {
            if (i != ' ' && x == ' ' ) {
                    words++;

                              }
                    x = i;
                }

                        return words;

}




int main(){
	int value = 0;        

	cout << "\nTesting is_int(\"34\")...\n";
	cout << "Expected: 1";
	cout << "\tAcutal: " << is_int("34");
	(is_int("34")==1)? 
	cout << "\tPASSED\n" : cout << "\tFAILED\n";
	cout << "\nTesting is_int(\"abc\")...\n";
	cout << "Expected:0" << endl;


	cout << "\nTesting check_range(\"1,10,5\")...\n";
        cout << "Expected: 1";
        cout << "\tAcutal: " << check_range(1,10,5);
        (check_range(1,10,5)==1)?
        cout << "\tPASSED\n" : cout << "\tFAILED\n";
        cout << "\nTesting check_range(\"1,10,40\")...\n";
        cout << "Expected:0" << endl;
	

	cout << "\nTesting equality_test(\"5,5\")...\n";
        cout << "Expected: 1";
        cout << "\tAcutal: " << equality_test(5,5);
        (equality_test(5,5)==1)?
        cout << "\tPASSED\n" : cout << "\tFAILED\n";
        cout << "\nTesting equality_check(\"5,7\")...\n";
        cout << "Expected:0" << endl;

	
/*	cout << "\nTesting string_to_int(\"1234\")...\n";
        cout << "Expected: 1";
        cout << "\tAcutal: " << string_to_int("1234",value);
  */     
    	    
        
	cout << "\nTesting word_count(\'dogs are cool'\")...\n";
        cout << "Expected: 1";
        cout << "\tAcutal: " << word_count("dogs are cool");
        (word_count("dogs are cool")==1)?
        cout << "\tPASSED\n" : cout << "\tFAILED\n";
        cout << "\nTesting word_count(\"dogs are cool\")...\n";
        cout << "Expected:0" << endl;
        






	
       // check_range(1,10,5);
       // equality_test(5,7);
        //is_int("423");
       // string_to_int("1234",value);
       // swap(&num1,&num2);
	//word_count("dogs are cool");
}






















































