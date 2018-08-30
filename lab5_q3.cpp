//WAP to check whether a number is positive, negative or zero

//library
# include <iostream>
using namespace std;

int main ()
{
	//Declare variables
	int num;
	//Ask for input
	cout<< " Enter any number = " ;
	cin>> num;
	
	//Specify the condition for output
	if (num> 0)
    {
	//do this
	cout<< " The entered number is positive. ";
    }
	else if (num< 0)
    {
	//do this
	cout<< " The entered number is negative. ";
    }
	else
    {
	cout<< " The entered number is zero. ";
    }
return 0;
}
