/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 23, 2015, 12:50 PM
 * Purpose: Homework, Energy Drinks
 */
//System Libraries
#include <iostream>
using namespace std;//Namespace for iostream
 
/*//User Libraries
 *
 *///Global Constants
const float CNVPCT=100.0f;//Conversion
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
unsigned short cServ=12467;//Number of Customers Surveyed ,nEDrnks,nCDrnks;
unsigned short nEDrnks; //Number of Customers drinks
unsigned short nCDrnks; //Number of Energy Drinks
unsigned char pEDrnks=14; //Percentage of Energy Drinks
unsigned char pCDrnks=64; //percentage of Citrus Energy Drinks
//Calculate the number of Drinkers
 
//nEDrnks=cSurv*pEDrnks/CNVPCT
//nCDrnks=nEDrnks*pCDrnks/CNVPCT
//Output results
cout<<"Number of Energy Drinkers = "<<nEDrnks<<endl;
cout<<"Number of Citrus Drinkers = "<<nCDrnks<<endl;
return 0;
}
