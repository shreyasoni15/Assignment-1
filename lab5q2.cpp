//library
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a no. : "; //ask for input
    cin>>n;
    //loop
    for(int i=0;i<n;i++) //no. of rows
    {
        if(i==0 or i==n-1) //print # in 1st and last line
        {
            for(int j=0;j<n;j++)
            {
                cout<< "#";
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j==0 or j==n-1) //print # in other lines
                {
                    cout<< "#";
                }
                else //print spaces
                {
                    cout<< " ";
                }
            }
        }
        cout<<endl; //move to next line
    }
return 0;
}
