//WAP to enter temp in celsius and convert it into fahrenheit

//Declare library
# include <iostream>
using namespace std;

int main () {
  //Declaring input variables
  float celsius;
  cout<< " Enter temperature in celsius = " ;
  cin>> celsius;
  //Declare variable for calculation and dispaly result
  float F = (9/5.0 * celsius) + 32;
  cout<< "Entered temperature in fahrenheit is = " << F << "F" << endl;
  return 0;
}  
