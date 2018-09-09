// WAP to find MINIMUM (By Reference) Goal is the same as previous, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.

//library
# include <iostream>
using namespace std;

void min(int a, int b, int &c) //define void function
{
    if ( a < b )
    c = a;
    else
    c = b;
}

int main()
{
    int a, b , c, y; //ask for input
    cout << " Enter num1 : ";
    cin >> a;
    cout << " Enter num2 : ";
    cin >> b;
    
    y = min(a, b, c); //call function by reference parameter
    cout << " The minimum no. is : " << y; 
return 0;
}
    
