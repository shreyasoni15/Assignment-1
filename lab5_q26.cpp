//WAP to print all odd number between 1 to 100


// library
#include <iostream>

using namespace std;

int main()
{
    cout<<"Odd numbers from 1 to 100 are: "<<"\n";
    int i=1;        //initializing counter

    //while loop

    while(i<=100)
    {
        if(i%2!=0)  //condition for odd numbers
            cout<<i<<",";
        i++;
    }

    return 0;
}
