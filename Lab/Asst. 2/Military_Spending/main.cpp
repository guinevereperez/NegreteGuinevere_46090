
/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 23, 2015, 1:40 PM
 * Purpose: Homework, Excessive Military Budget
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
float FedBudg=.598;//Amount of Federal Budget
float MilBudg=3.9;//Amount of Budget Spent on the Military
float Budg=FedBudg/MilBudg*100;//Federal Budget Divided By Military Spending
 
cout<<"Amount of military spending = "<<Budg<<endl;
return 0;
}
