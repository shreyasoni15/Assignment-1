//WAP to calculate sum (By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

//library
#include <iostream>
using namespace std;

void func(int a, int b, int &c) //define void function that takes third parameter for pass by reference
{
    c = (a + b); //calculate sum 
}

int main()
{
    int a, b, y; //ask for input
    cout << " Enter num1 : ";
    cin >> a;
    cout << " Enter num2 : ";
    cin>> b;
    
    func(a, b, y); //call function by reference parameter
    cout << " The sum is : " << y; //print sum
return 0;
}
