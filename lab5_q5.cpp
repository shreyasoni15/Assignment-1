//WAP to check whether a number is even or odd.

//library
# include <iostream>
using namespace std;

int main ()
{ 
	//declare a variable
	int num;
	//ask for input
	cout<< " Enter any number = " ;
	cin>> num;
	
	//specify condition for output
	if (num % 2 ==0)
    {
	//do this
	cout<< " The entered number is even. ";
    }
	else
    {
	cout<< " The entered number is odd. ";
    }
return 0;
}

