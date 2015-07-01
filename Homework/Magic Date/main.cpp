/*
 * File: main.cpp
 * Author: Guinevere Negrete
 * Created on June 30, 2015, 3:11 PM
 * Purpose: Determine if Birthday Multiplied by Birth month
 * is equal to Birth year
 */
//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins Here
using namespace std;
/*
 *
 */
//Execution Begins Here!
int main(int argc, char** argv) {
    unsigned short Day;//Birthday
    unsigned short Month;//Birth Month
    unsigned short Year;//Birth Year
    unsigned short MagicDate;// The Magic date for playing game.
//Input Variables
    MagicDate=(Month*Day);
    cout<<"Enter your two digit numeric month: "<<endl;
        cin>>Month;
        cout<<"Enter your two digit numeric day:   "<<endl;
        cin>>Day;
        cout<<"Enter your two digit numeric year:  "<<endl;
        cin>>Year;
//Math for Loop
    if (MagicDate==Year)
{
cout<<"You are magic! "<<endl;
}
else
cout<<"Sorry you are not magic. "<< endl;

return 0;
}