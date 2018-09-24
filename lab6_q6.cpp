//WAP to find Sum of even and odd and their squares as well in a given range of  2 numbers


//library
#include <iostream>

using namespace std;

/*Write a function that outputs the sum of all even numbers between firstNum and secondNum*/

int sumEvenNumbers(int firstNum, int secondNum)
{   int sumE=0;
    if(firstNum%2==0)
    {
        for(int i=firstNum;i<=secondNum;i+=2)
            sumE+=i;
    }
    else if(firstNum%2!=0)
    {
        for(int i=firstNum+1;i<=secondNum;i+=2)
            sumE+=i;
    }
    return sumE;
}
//Write a function that outputs the sum of all odd numbers between firstNum and secondNum

int sumOddNumbers(int firstNum, int secondNum)
{   int sumO=0;
    if(firstNum%2!=0)
    {
        for(int i=firstNum;i<=secondNum;i+=2)
            sumO+=i;
    }
    else if(firstNum%2==0)
    {
        for(int i=firstNum+1;i<=secondNum;i+=2)
            sumO+=i;
    }
    return sumO;
}

//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum
int sumSquareOddNumbers(int firstNum, int secondNum)
{   int sumOS=0;
    if(firstNum%2!=0)
    {
        int i=firstNum;
        while(i<=secondNum)
        {

            sumOS+=(i*i);
            i+=2;
        }
    }
    else if(firstNum%2==0)
    {
        int i=firstNum+1;
            while(i<=secondNum)
            {

                sumOS+=(i*i);
                i+=2;
            }
    }
    return sumOS;
}

//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum
int sumSquareEvenNumbers(int firstNum, int secondNum)
{   int sumES=0;
    if(firstNum%2==0)
    {
        int i=firstNum;
        while(i<=secondNum)
        {

            sumES+=(i*i);
            i+=2;
        }
    }
    else if(firstNum%2!=0)
    {
            int i=firstNum+1;
            while(i<=secondNum)
            {

                sumES+=(i*i);
                i+=2;
            }
    }
    return sumES;
}
//main 
int main()
{
    int sumEven,sumOdd,sumSquareEven,sumSquareOdd,n1,n2; //variables

    
    //input
    cout<<"Enter first number"<<" "<<"\n";
    cin>>n1;


    cout<<"Enter second number"<<" "<<"\n";
    cin>>n2;
    
    //function calls
    
    sumEven=sumEvenNumbers(n1,n2);
    sumOdd=sumOddNumbers(n1,n2);
    sumSquareEven=sumSquareEvenNumbers(n1,n2);
    sumSquareOdd=sumSquareOddNumbers(n1,n2);

    //output
    cout<<"the values are:"<<"\n";

    cout<<"sumEven: "<<sumEven<<"\n";
    cout<<"sumOdd: "<<sumOdd<<"\n";
    cout<<"sumSquareEven: "<<sumSquareEven<<"\n";
    cout<<"sumSquareOdd: "<<sumSquareOdd<<"\n";


}

