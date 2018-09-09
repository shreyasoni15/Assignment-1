//WAP MINIMUM (By Value) with a function that takes two int parameters, finds the min, then returns the minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the minimum.

//library
# include <iostream>
using namespace std;

int min(int a, int b) //define function
{
        int y;
        if(a < b)
        {
            y = a;
        }
        else
        y = b;
return y;
}

int main()
{
    int a, b, y; //ask for input values
    cout << " Enter num1 : ";
    cin >> a;
    cout << " Enter num2 : ";
    cin >> b;
    
    y = min(a , b); //call function by value
    cout << " The minimum no. is : " << y ; //print result
return 0;
}
