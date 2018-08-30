// WAP  to print all even numbers between 1 to 100.


//library

#include <iostream>

using namespace std;

int main()
{
    cout<<"Even numbers from 1 to 100 are: "<<"\n";
    int i=1;  //initializing counter

    //while loop
    while(i<=100)
    {
        if(i%2==0)   //condition for even number
            cout<<i<<",";
        i++;
    }

    return 0;
}
