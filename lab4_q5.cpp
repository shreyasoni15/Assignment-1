//WAP to enter two angles of a triangle and find the third angle.

//Declare library
# include <iostream>
using namespace std;

int main() {
  //Declare input variables
  float ang1, ang2;
  cout<< " Enter the first angle = " << endl ;
  cin>> ang1;
  cout<< " Enter the second angle = " << endl ;
  cin>> ang2;
  //Declare and define variable for calculation and display the result
  float ang3 = 180- ( ang1+ang2) ;
  cout<< " The third angle of the given triangle is = " << ang3;
  return 0;
}
