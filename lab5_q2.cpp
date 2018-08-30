//WAP to find maximum among three numbers

//library
# include <iostream>
using namespace std;

int main()
{
  //Declare variables
  int num1, num2, num3;
  //Ask for input
  cout << " Enter num1 = " ;
  cin>> num1;
  cout<< " Enter num2 = " ;
  cin>> num2;
  cout<< " Enter num3 = " ;
  cin>> num3;
  
  //Specify the condition to print the output
  if (num1> num2 && num1> num3)
 {
  //do this
  cout<< " The maximum number among the entered numbers is = " << num1;
 } 
  else if (num2> num1 and num2> num3)
 {
  cout<< " The maximum number among the entered numbers is = " << num2;
 }
  else
 {
  cout<< " The maximum number among the entered numbers is = " << num3;
 }
  return 0;
}
