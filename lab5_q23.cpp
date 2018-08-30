// WAP to print all natural numbers in reverse (from n to 1). - using while loop

//library

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number (n) :";
    cin>>n;                         // taking input

    int i=n;

    cout<<"The numbers in reversed order are: "<<"\n";

    //while loop

    while(i>=1)
    {
        cout<<i<<" ";
        i--;
    }

    return 0;
}
