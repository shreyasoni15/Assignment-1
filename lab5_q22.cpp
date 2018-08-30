// WAP to print all natural numbers from 1 to n. - using while loop

//Library
#include <iostream>

using namespace std;

int main()
{
    //Declare variables

    int n;
    cout<<"Enter Number = ";
    cin>>n;  //Taking input


    int i=1;


    cout<<"The natural numbers are:"<<"\n";

    // while loop to print natural numbers

    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }


    return 0;
}
