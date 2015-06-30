/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 24, 2015, 1:25 PM
 * Purpose: Labwork, Taxes Paid per Gallon
 */
//System Libraries
#include <iostream>
using namespace std;//Namespace for iostream
 
/*//User Libraries
 *
 */
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
float CaExTax = .38;//California extended tax per gallon
float FedTax = .18;//Federal tax per gallon
float CalStTax = 1.08;//8 % in state taxes per gallon
float ToAmTax = .24;//total amount in taxes per gallon
float BasPGal = 3.13f;//3.13 $'s cost in gas before taxes
float GasPrc = 3.69;//3.69 total $'s paid after taxes
float Tender = 2.89;//reduced total after taxes and percentage are subtracted from price
float Total; //Sales Tax Value $'s
float PerTot; //Total Tax Value %
//Calculate percentage of gas paid per gallon
//Calculate price paid per gallon
 
//Total = CalStTax*BasPGal;
//PerTot = (BasPGal-Tender)
//Output the results
cout<<"percentage of tax = "<<PerTot<<endl;
cout<<"total taxes = "<<Total<<endl;
//Exit Stage Right!
 
return 0;
} 