/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 30, 2015, 12:58 PM
 * Purpose: Test Scores #2
 */
 
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
/*//User Libraries
 *
 * //Global Constants
 *
 * //Function Prototypes
 *
 *///Execution Begins Here!
 
int main(int argc, char** argv) {
//Set the random seed
srand(static_cast<unsigned int>(time(0)));
//Declare variables
unsigned short op1, op2, result;
bool doAgain=true;
//Loop based upon continuing to play with the math tutor
do{
//Determine op1/op2
op1=rand()%900+100;//[100-999]
op2=rand()%900+100;//[100-999]
//Display the problem
cout<<setw(6)<<op1<<endl;
cout<<" + "<<op2<<endl;
cout<<"------"<<endl;
//Input the value for the sum
cin>>result;
//If correct output Congratulations else try again?
if(result==op1+op2){
cout<<"congratulations"<<endl;
}else{
cout<<"Wrong Answer"<<endl;
cout<<"The answer was = "<<op1+op2<<endl;
}
//Prompt if the would like to continue
cout<<"Would you like to continue y/n"<<endl;
char response;
cin>>response;
if(response=='y')doAgain=true;
else doAgain=false;
 
}while(doAgain);
//Exit stage right!
return 0;
}