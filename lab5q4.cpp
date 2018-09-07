//library
#include <iostream>
using namespace std;

int main()
{
    //ask for input
    int n;
    cout<< "enter a no. : ";
    cin>>n;
    //loop
    for(int i=1;i<=n;i++) //no. of rows
    {
        if(i==1 || i==2 || i==n) //normal loop in 1st, 2nd and last line
        {
            for(int j=1;j<=i;j++)
            {
                cout<< "#";
            }
            cout<<endl; //next line
        }
        else
        {
            for(int j=1;j<=i;j++) 
            if(j==1 || j==i) //insert # in 1st and last place of each line
            {
                cout<< "#";
            }
            else
            {
                cout<< " "; //insert space
            }
            cout<<endl;
        }
    }
return 0;
}


