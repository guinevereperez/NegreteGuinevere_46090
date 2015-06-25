
/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 23, 2015, 12:08 PM
 * Purpose: Homework, Free Fall
 */
//System Libraries
#include <iostream>
 
using namespace std;//Namespace for iostream
 
/*//User Libraries
 *
 * //Global Constants
 */
const float GRAVITY=32.174e1f;//Acceleration due Gravity
//Function Prototypes
 
//Execution Begins Here!
 
int main(int argc, char** argv) {
//Declare variables
//dstnce=The distanced dropped in (ft)
//time=Time in (secs)
float dstnce, time;
//Prompt then Input the time
cout<<"To calculate the Distance Dropped"<<endl;
cout<<"Time should be in floating point format"<<endl;
cin>>time;
//calculate the free-fall distance
//dstnce=1/2*Gravity*time*time;//Incorrect
//dstnce=1.0f/2*Gravity*time*time//Correct
dstnce=GRAVITY*time*time/2;//Correct
//Output the results
cout<<"The distance traveled = ";
cout<<dstnce<<"(ft"<<endl;
//Exit stage right!
return 0;
}
