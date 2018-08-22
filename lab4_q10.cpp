//WAP to enter P,R,T and calculate compound interest.

//Declare library
# include <iostream>
# include <cmath>
using namespace std;

int main() {
  //Declare variables for input
  double p,r,t;
  cout<< " Enter the principle amount = " << endl;
  cin>> p;
  cout<< " Enter the rate of interest = " << endl;
  cin>> r;
  cout<< " Enter the time period in years = " << endl;
  cin>> t;
  //Declare and define variables for calculation and display the result
  double x = pow((1+r/100.0),t);
  double amt = p*x;
  double ci = amt-p;
  cout<< " The compound interest on the given principle amount value is = " << ci;
  return 0;
}

