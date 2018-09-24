#include <iostream>

using namespace std;

//function definition
char toUpper(char c)
{
    return c-32;
}
char toLower(char c)
{
    return c+32;
}
//main
int main()
{
    //inpput
    char a;
    cout<<"Enter the Character:"<<"\n";
    cin>>a;
    //condition to check valid input ising ASCII number
    if(a>=97 && a<=122)
        {
            a=toUpper(a);
            cout<<"Upper Case:"<<" "<<a<<"\n";
        }
   else if(a>=65 && a<=90)
   {
       a=toLower(a);
       cout<<"Lower Case:"<<" "<<a<<"\n";

   }
    return 0;
}
