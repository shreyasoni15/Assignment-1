//WAP to check whether a number is divisible by 5 and 11 or not.

//library
# include <iostream>
using namespace std;

int main ()
{
	//Declare a variable
	int num;
	//Ask for input
	cout<< " Enter any number = ";
	cin>> num;
	//Specify the condition
	if (num % 5 == 0 and num % 11 == 0)
    {
	//do this
	cout<< " The entered number is divisible by 5 and 11 both. " ;
    }
	else
    {
	cout<< " The entered number is not divisible by 5 and 11. " ;
    }
return 0;
}
