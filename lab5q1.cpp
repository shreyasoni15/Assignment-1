//library
#include <iostream>
using namespace std;

int main()
{
	//ask for input
	int n;
	cout<< " Enter no. of rows: " ;
	cin>> n;
	//print * to form a square
	for(int i=0; i<n; i++) //loop for no. of lines
	{
		cout<< "*";
		for(int j=1; j<n; j++) //loop for no. of * in each line
		{	
			cout<< "*";
		}
		cout<< endl;
	}
return 0;
}
