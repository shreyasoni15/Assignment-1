//WAP to convert days into years, weeks and days

//Declare library
# include <iostream>
using namespace std;

int main() {
  //Declare variable for input
  int days;
  cout<< " Enter the number of days = " ;
  cin>> days;
  //Declare and define variables for calculation and display result
  int yrs,weeks,dayY,dayW;
  yrs = days/365;
  dayY = days-(365*yrs);
  weeks = dayY/7;
  dayW = dayY-(7*weeks);
  cout<< " Equivalent conversion of the given days is = " << yrs << " years " << weeks << " weeks and " << dayW << " days ";
  return 0;
}

