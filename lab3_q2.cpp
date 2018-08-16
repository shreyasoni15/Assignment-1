//library
#include <iostream>
using namespace std;

int main() {
//Declaring variables in required datatypes and asking for input
int num1, num2;
cout<< "Enter the first number = ";
cin>> num1;
cout<< "Enter the second number = ";
cin>> num2;
//Performing the arithmatic functions
int sum= num1 + num2;
int diff= num1 - num2;
int product= num1* num2;
int div= num1/num2;
int mod= num1 % num2;
//Show the output of the results
cout<< "The sum of the entered numbers is = " << sum << endl;
cout<< "The difference of the entered numbers is = " << diff << endl;
cout<< "The product of the entered numbers is = " << product << endl;
cout<< "The quotient of the entered numbers is = " << div << endl;
cout<< "The remainder when num1 is divided by num2 is = " << mod << endl;
return 0;
}

