/*
 * File: main.cpp
 * Author: Guinevere Negrete
 * Created on June 28, 2015, 11:23 PM
 * Purpose: Homework, Restaurant Bill
 */
//System Libraries
#include <iostream>
 
using namespace std;
 
/*//User Libraries
 *
 */
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
 
float Bill=44.5;//$ amount before taxes and tip
float Tax=3;//Percentage of taxes
float Tip=6.68;//Percent of Tip
 
//Input Results
float GrndTot=Bill+Tax+Tip;//All three amounts multiplied
 
cout<<"Total Bill Expense = "<<GrndTot<<endl;
 
return 0;
}