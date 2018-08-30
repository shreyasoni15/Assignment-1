// WAP to find sum of all natural numbers between 1 to n.

//library

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the number :";
    int n;
    cin>>n;                         //taking input

    int i=1,sum=0;                  //declaring variables


    // while loop

    while(i<=n)
    {
        sum+=i;
        i++;
    }

    cout<<"The sum is :"<<sum<<"\n";        //Output
    return 0;
}
