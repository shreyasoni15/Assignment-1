#include <iostream>

using namespace std;

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


int sumSquareOddNumbers(int firstNum, int secondNum)
{   int sumOS=0;
    if(firstNum%2!=0)
    {
        for(int i=firstNum;i<=secondNum;i+=2)
            sumOS+=(i*i);
    }
    else if(firstNum%2==0)
    {
        for(int i=firstNum+1;i<=secondNum;i+=2)
            sumOS+=(i*i);
    }
    return sumOS;
}


int sumSquareEvenNumbers(int firstNum, int secondNum)
{   int sumES=0;
    if(firstNum%2==0)
    {
        for(int i=firstNum;i<=secondNum;i+=2)
            sumES+=(i*i);
    }
    else if(firstNum%2!=0)
    {
        for(int i=firstNum+1;i<=secondNum;i+=2)
            sumES+=(i*i);
    }
    return sumES;
}

int main()
{
    int sumEven,sumOdd,sumSquareEven,sumSquareOdd,n1,n2;

    cout<<"Enter first number"<<" "<<"\n";
    cin>>n1;


    cout<<"Enter second number"<<" "<<"\n";
    cin>>n2;

    sumEven=sumEvenNumbers(n1,n2);
    sumOdd=sumOddNumbers(n1,n2);
    sumSquareEven=sumSquareEvenNumbers(n1,n2);
    sumSquareOdd=sumSquareOddNumbers(n1,n2);

    cout<<"the values are:"<<"\n";

    cout<<"sumEven: "<<sumEven<<"\n";
    cout<<"sumOdd: "<<sumOdd<<"\n";
    cout<<"sumSquareEven: "<<sumSquareEven<<"\n";
    cout<<"sumSquareOdd: "<<sumSquareOdd<<"\n";


}

