//WAP to enter length in cm and convert it into m and km

//Declare library
#include <iostream>
using namespace std;

int main() {
  //Declaring variables
  float length;
  //Asking for input
  cout<< " Enter the length in cm = " ;
  cin>> length;
  //Declaring and defining variables for calculations and printing the result
  float m = length * 0.01;
  cout<< " The given length in metres is = " << m << "m" << endl;
  float km = m * 0.001;
  cout<< " The given length in kilometres is = " << km << "km" << endl;
  return 0;
}


