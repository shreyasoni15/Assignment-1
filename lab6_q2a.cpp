//WAP to calculate SUM (By Value)with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.

//library
#include <iostream>
using namespace std;

int func(int a, int b) //define function
{
    int sum = (a + b);
    return sum;
}

int main()
{
    int a, b, y; //ask for input
    cout << " Enter num1 : ";
    cin>> a ;
    cout << " Enter num2 : ";
    cin>> b;
    
    y = func(a, b); //call function by value
    cout<< " The sum is : " << y; //print the result
return 0;
}
