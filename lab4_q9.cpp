//WAP to enter P,R,T and calculate simple interest

//Declare library
# include <iostream>
using namespace std;

int main () {
  //Declare variables for input
  float p,r,t;
  cout<< " Enter the principle value = " << endl;
  cin>> p;
  cout<< " Enter the rate of interest = " << endl;
  cin>> r;
  cout<< " Enter the time period in years = " << endl;
  cin>> t;
  //Declare and define variable for calculation and display result
  float si = (p*r*t)/100.0;
  cout<< " The simple interest for the given principle amount value is = " << si;
  return 0;
}
