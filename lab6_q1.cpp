//WAP to calculate tax rate using functions


//library

#include<iostream>

using namespace std;
/*
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
*/

//Function Input Data


int InputData(string type)
{
   int value;

    cout<<"Enter "<<type<<" ";
    cin>>value;

    return value;

}

/*
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
*/


//function to compute tax



int tax_compute(int unitCst, int units, int taxRt, int *salesTx, int *totDue)
{
    *salesTx= (taxRt * (units * unitCst))/100;
    *totDue=*salesTx+(units*unitCst);
}

/*
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
*/

void displayData(int unitCst, int units, int taxRt, int salesTx, int totDue)
{   cout<<"Details"<<"\n\n";
    cout<<"Unit Cost: "<<unitCst<<"\n";
    cout<<"Units Purchased: "<<units<<"\n";
    cout<<"Tax Rate: "<<taxRt<<"\n";
    cout<<"Sales Tax: "<<salesTx<<"\n";
    cout<<"Total: "<<totDue<<"\n";
}

//main
int main()
{
    int l=3; //counter variable


    int unitCost, unitsPurch, taxRate;   //variables  unitCost, unitsPurch, taxRate, salesTax, and totalDue

    while(l--)  //input
    {


    cout<<"Enter the Details (unitCst,units,taxRt) :"<<"\n";
    string type;
    cin>>type;

    if(type=="unitCst")
        unitCost=InputData("unitCst");
    else if(type=="units")
         unitsPurch=InputData("units");
    else if(type=="taxRt")
         taxRate=InputData("taxRt");
    }

    int salesTax=0,totalDue=0; //initializing variables

    tax_compute(unitCost, unitsPurch, taxRate, &salesTax, &totalDue); //tax computation

    displayData(unitCost, unitsPurch, taxRate, salesTax, totalDue); // output

}

