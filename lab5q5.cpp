//library
#include <iostream>
using namespace std;

int main()
{
	//ask for input
	int n;
	cout<< "enter no. of line : ";
	cin>> n;
	//loop
	for(int i=0; i<n; i++) //no. of lines
	{
		for(int j=1;j<=(n-i); j++) //no. of # in each line
		{
			cout<< "#"; //print #
		}
		cout<< endl; //change line	
	}
	
return 0;
}
