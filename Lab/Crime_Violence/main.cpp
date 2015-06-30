/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 25, 2015, 12:53 PM
 * Purpose: To Find the percentage of Violent crimes in the U.S. in comparison to the U.K.
 */
 
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function types
 
//Execution Begins
/*
 *
 */
int main(int argc, char** argv) {
 
 
 
//Declare and Initialize Values
float USPop = 318; //number in millions
float UKPop = 64; //number in millions
float USVC = 11.88; //number in millions
float UKVC = 6.52; //number in millions
float USP;//United States Crime percentage
float UKP;//United Kingdom Crime percentage
 
 
 
 
//calculate USVC and UKVC results
USP = USVC/USPop*100;
UKP = UKVC/UKPop*100;
//output results
cout<<"The percentage of Crimes in the United States equals "  <<USP<<fixed<<showpoint<<setprecision(2)<<endl;
cout<<"The percentage of crimes in the United Kingdom equals "  <<UKP<<fixed<<showpoint<<setprecision(2)<<endl;
//exit stage right!
 
return 0;
}

