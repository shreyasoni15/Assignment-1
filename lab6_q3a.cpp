//WAP to find MAXIMUM (By Value)with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.
//library
#include <iostream>
using namespace std;

int max(int a, int b) //define function for calculating maximum num
{
    int maximum;
    if(a > b)
    maximum = a;
    else
    maximum = b;
    return maximum;
}

int main ()
{
    int a, b, y; //ask for input
    cout<< " Enter num1 : ";
    cin>> a;
    cout<< " Enter num2 : ";
    cin>> b;
    
    y = max(a, b); //call function by value
    cout << " The maximum number is : " << y ; //print result
return 0;
}
