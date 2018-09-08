// WAP to print maximum (By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.

//library
#include <iostream>
using namespace std;

void max (int a, int b, int &c) //define function for finding maximum no.
{
    if(a>b)
    c = a;
    else
    c = b;
}

int main()
{
    int a, b, y; //ask for input
    cout << " Enter num1 : ";
    cin >> a;
    cout << " Enter num2 : ";
    cin >> b;
    
    max(a, b, y); //call function by reference parameter
    cout << " The maximum no. is : " << y; //print the result
return 0;
}
