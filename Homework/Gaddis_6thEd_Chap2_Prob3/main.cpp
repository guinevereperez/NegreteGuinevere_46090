/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 28, 2015, 9:34 PM
 * Purpose: Homework, Sales Tax
 */
//System Libraries
#include <iostream>
 
using namespace std;//Namepace for iostream
 
/*//User Libraries
 *
 */
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
 
float State=2.08;//State taxes in $ form
float Cnty=1.09;//County taxes in $ form
short PurcTot=52;//Amount before Taxes
float StTx=.04;//State Tax in Percent
float CryTx=.02;//Country sales tax in Percent
 
//Input Results
float (PurcTot*StTx*CryTx)/100;//Sales purchase added with State and county taxes for total paid
float Total=State+Cnty+PurcTot;//Combined Total
 
cout<<"Spending Total = "<<Total<<endl;
 
return 0;
}