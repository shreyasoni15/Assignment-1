//WAP to convert a lower case character to upper case using functions

//library
#include <iostream>

using namespace std;

//function definition
char toUpper(char c)
{
    return c-32;
}


//main
int main()
{
    //inpput
    char a;
    cout<<"Enter the Character(a-z):"<<"\n";
    cin>>a;
    //condition to check valid input ising ASCII number
    if(a<97 || a>122)
        {
            cout<<"Enter valid lower case character";
            return 0;
        }
    a=toUpper(a); //function call

    cout<<"Upper Case:"<<" "<<a<<"\n";
    return 0;
}
