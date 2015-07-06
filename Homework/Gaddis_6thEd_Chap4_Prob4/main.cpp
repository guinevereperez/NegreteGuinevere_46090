/* 
 * File:   main.cpp
 * Author: Guinevere Negrete
 * Created on July 6, 2015, 10:30 AM
 * Purpose: Find Areas of two different Rectangles
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global constants

//Function Prototypes
/*
 * 
 */
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    int L, W, A;//Length, Width, & Area
    int L2, W2, A2;//Second Length, Width, & Area
    
    cout<<"What's the length of the rectangle? "<<endl;
    cin>>L;
    
    cout<<"What's the width of the rectangle? "<<endl;
    cin>>W;

    //Input first calculation   
    A=L*W;//Formula for first rectangle
    
    cout<<"What's the length of the second rectangle?"<<endl;
    cin>>L2;
    
    cout<<"What's the width of the second rectangle? "<<endl;
    cin>>W2;
    
//Input second calculation
    A2=L2*W2;//formula for the second rectangle

//Output results of if/else loop    
    if (A>A2)
        cout<<"The 1st rectangle is bigger in area! "<<endl;
    else
        cout<<"The 2nd rectangle is bigger in area! "<<endl;
 
//Exit stage right!
    return 0;
}

