//library
# include <iostream>
using namespace std;

int main ()
{
	//ask no. of rows
	int n;
	cout<< " Enter no. of rows : ";
	cin>> n;
	//loop
	for(int i=0; i<n; i++) //print no. of rows
	{
		cout<< "*";
		for(int j=0; j<i; j++)
		{
			cout<< "*";	
		}
	cout<< endl;
	}
	return 0;
}















