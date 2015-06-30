/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 29, 2015, 12:43 PM
 * Purpose: To show the truth
 */
 
//System Libraries
#include <iostream>
 
using namespace std;
 
/*//User Libraries
 *
 *///Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
 
 
//Declare Variables
bool x, y;
 
//Output the heading of the table
cout<<"The Truth Table"<<endl;
cout<<"x y !x !y x&&y X||y x^y (x^y)^y ";
cout<<"(x^y)^ !(x&&y) !x||!y;";
cout<<"!(x||y) !x&&!y";
 
//Row 1 output
x=true;y=true;
cout<<(x?'t':'f')<<"";
cout<<(y?'t':'f')<<"";
cout<<(!x?'t':'f')<<"";
cout<<(!y?'t':'f')<<"";
cout<<(x&&y?'t':'f')<<"";
cout<<(x||y?'t':'f')<<"";
 
//Row 2 Output
x=true;y=false;
cout<<(x?'t':'f')<<"";
cout<<(y?'t':'f')<<"";
cout<<(!x?'t':'f')<<"";
cout<<(!y?'t':'f')<<"";
cout<<(x&&y?'t':'f')<<"";
cout<<(x||y?'t':'f')<<"";
 
//Exit Stage!
 
return 0;
}