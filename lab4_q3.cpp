//WAP to enter temp in fahrenheit and convert it into celsius

//Declare library
# include <iostream>
using namespace std;

int main () {
  //Declare input variable
  float F;
  cout<< " Enter the temperature in fahrenheit = " ;
  cin>> F;
  //Declare and define variable for calculation and dislay result
  float celsius = (5/9.0) * (F - 32);
  cout<< " Entered temperature in Celsius is = " << celsius << "C";
  return 0;
}
