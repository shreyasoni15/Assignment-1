// WAP that includes the sum, max, min functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output.

//library
# include <iostream>
using namespace std;

int sum(int a, int b) //define function for calculating sum
{
	int y;
	y = (a + b);
return y;
}

int max(int a, int b) //define function for max
{
	int y;
	if(a > b)
	y = a;
	else 
	y = b;
return y;
}

int min(int a, int b) //define function for min
{
	int y;
	if(a < b)
	y = a;
	else
	y = b;
return y;
}

int main()
{
	int a, b, y, func; //ask for input of nos.
	cout << " Enter num1 : ";
	cin >> a;
	cout << " Enter num2 : ";
	cin >> b;
	cout << " Enter the 1 for sum, 2 for max, 3 for min : " << endl; //ask the user for operation
	cin >> func;
	if (func == 1) //call the sum function
	{
		y = sum(a, b);
		cout << " The sum is : " << y;
	}
	else if(func == 2) //call the max function
	{
		y = max(a, b);
		cout << " The max no. is : " << y;
	}
	else if(func ==3) //call the min function
	{
		y = min (a, b);
		cout << " The min no. is : " << y;
	}
return 0;
}

