/* 
 * File:   main.cpp
 * Author: Guinevere Negrete
 * Created on July 1, 2015, 2:26 PM
 * Purpose: To Sum up Automobile Costs
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

//User Libraries
/*
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here!
 */
int main(int argc, char** argv) {
//Declare Variables
    
    unsigned short LPay;//Loan Payments
    unsigned short Ins;//Insurance
    unsigned short Gas;//Cost of gas utilized
    unsigned short Oil;//Cost of oil spent
    unsigned short Tires;//Cost of tire changes
    unsigned short Mntnce;//Amount of $'s spent on car maintenance
    unsigned short AnalCst;//Total costs per year
    float mnth=30;
    float anal=12;
    
////Input Variables
 
        cout<<"Enter monthly costs on Loan Payment : "<<endl;
        cin>>LPay;
        cout<<"Enter monthly costs on Insurance :   "<<endl;
        cin>>Ins;
        cout<<"Enter monthly costs on gas:  "<<endl;
        cin>>Gas;
        cout<<"Enter monthly costs on oil : "<<endl;
        cin>>Oil;
        cout<<"Enter monthly costs on tires :   "<<endl;
        cin>>Tires;
        cout<<"Enter monthly costs on maintenance:  "<<endl;
        cin>>Mntnce;
        
//Output Results
   
   LPay=(mnth*anal);
   Ins=(mnth*anal);
   Gas=(mnth*anal);
   Oil=(mnth*anal);
   Tires=(mnth*anal);
   Mntnce=(mnth*anal);
   mnth=(LPay+Ins+Gas+Oil+Tires+Mntnce);
   AnalCst=mnth*anal;
           
   cout<<"Total monthly expenses = "<<mnth<<endl;
   cout<<"Total Amount spent Annually = "<<AnalCst<<endl;
   
    return 0;
}

