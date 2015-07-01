/*
* File: main.cpp
* Author: Guinevere Negrete
* Created on July 1, 2015, 10:20 PM
* Purpose: Amount Paid Monthly
*/
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
//Declare & initialize variables

    int nTrms=200000000;
    float approxPI=1;
    
//Calculate PI with a for-loop

    for(int i=3,nTrms=1;nTrms<=nTrms;i+=4,nTrms+=2){
    approxPI+=(-1.0f/i+1.0f/(i+2));
}

    approxPI*=4;
    
//Output results & compare them

    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<approxPI<<endl;

    //Exit stage right!
    
return 0;
}