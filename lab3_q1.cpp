// Library
#include <iostream>
using namespace std;

int main() {
cout<< "Hello" << endl;
// Declaring and defining variables of all types
int intVar= 15;
float floatVar= 1.5;
char charVar= 's';
double doubleVar= 15.091998;
bool boolVar= true;

// Displaying the value and size of datatypes
cout<< "The integer value is = " << intVar << " and the size of integer value is = " << sizeof(int) << endl;
cout<< "The float value is = " << floatVar << " and the size of float value is = " << sizeof(float) << endl;
cout<< "The character value is = " << charVar << " and the size of character value is = " << sizeof(char) << endl;
cout<< "The double value is = " << doubleVar << " and the the size of double value is = " << sizeof(double) << endl;
cout<< "The boolean value is = " << boolVar << " and the size of boolean value is = " << sizeof(bool) << endl;
return 0;
}

