//WAP to calculate area of an equilateral triangle

//Declare library
# include <iostream>
using namespace std;

int main() {

  //Declare variable for input
  float l;
  cout<< " Enter the length of the equilateral triangle in cm = " ;
  cin>> l;
  //Declare and define variable for calculation and display the result
  float area = 0.433 * l*l;
  cout<< " The area of the given equilateral triangle is = " << area << " sq cm " ;
  return 0;
}
