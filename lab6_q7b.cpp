//WAP to convert a lower case character to upper case using functions

//library
#include <iostream>

using namespace std;

//function definition
char toLower(char c)
{
    return c+32;
}


//main
int main()
{
    //inpput
    char a;
    cout<<"Enter the Character(A-Z):"<<"\n";
    cin>>a;
    //condition to check valid input ising ASCII number
    if(a>90 || a<65)
        {
            cout<<"Enter valid upper case character";
            return 0;
        }
    a=toLower(a); //function call

    cout<<"Lower Case:"<<" "<<a<<"\n";
    return 0;
}
