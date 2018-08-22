//WAP to enter base and height of a triangle and find its area

//Declare library
# include <iostream>
using namespace std;

int main () {
//Declare variable for input
  float b,h;
  cout<< " Enter the base length of triangle in cm = " ;
  cin>> b ;
  cout<< " Enter the height of triangle in cm = " ;
  cin>> h ;
  //Declare and define variable for calculation and display the result
  float area = 0.5 * b * h ;
  cout<< " The area of the given triangle is = " << area << " sq cm ";
  return 0;
} 

