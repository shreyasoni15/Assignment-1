//WAP to enter marks of 5 diff subjects and cal total, avg and percentage

//Declare library
# include <iostream>
using namespace std;

int main () {
  //Declare input variable
  float max,sub1, sub2, sub3, sub4, sub5;
  cout<< " The maximum marks in each subject is = ";
  cin>> max;
  cout<< " Enter marks in sub1 = ";
  cin>> sub1;
  cout<< " Enter marks in sub2 = ";
  cin>> sub2;
  cout<< " Enter marks in sub3 = ";
  cin>> sub3;
  cout<< " Enter marks in sub4 = ";
  cin>> sub4;
  cout<< " Enter marks in sub5 = ";
  cin>> sub5;
  //Declare and define variables for calculation and display result
  float total = sub1+sub2+sub3+sub4+sub5;
  cout<< " The total marks obtained is = " << total << endl;
  float avg = total/5.0 ;
  cout<< " The average marks are = " << avg << endl;
  float tmax = max*5;
  float per = (total/tmax)*100;
  cout<< " The percentage marks scored is = " << per << " % ";
  return 0;
}

