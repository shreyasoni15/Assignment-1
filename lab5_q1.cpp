//WAP to find maximum number between two numbers

//library
#include <iostream>
using namespace std;

int main ()
{
  //Declare variables
  int num1,num2;
  cout<< " Enter num1 = ";
  cin>> num1;
  cout<< " Enter num2 = ";
  cin>> num2;

  //Specify condition for output
  if (num1> num2)
 {
  cout<< " The maximum number between the two entered numbers is = " << num1;
 }
  else
 {
  cout<< " The maximum number between the two entered numbers is = " << num2;
 }
  return 0;
} 
