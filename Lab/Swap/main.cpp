/*
 * File: main.cpp
 * Author: Guinevere Negrete
 *Created on June 29, 2015, 12:59 PM
 * Purpose: How to Swap
 */
//System Libraries
#include <iostream>
 
using namespace std;
 
/*//User Libraries
 *
 *///Function prototypes
 
//execution begins here!
int main(int argc, char** argv) {
 
//Declare Variables
int a, b;
int min=10, max=100;
//input values for a and b
cout<<"input 2 interger values between"<<min<<" and";
cout<<max<<endl;
cin>>a>>b;
 
//Validate the results
if (a>=min && a <=max && b>=min && b<=max){
//prompt the user for which swap
cout<<"What swap would you like to choose?"<<endl;
cout<<"storage -> s or in-place -> i"<<endl;
char type;
cin>>type;
switch(type){
case 's':{
int temp=a;
a=b;
b=temp;
cout<<"type is visible because of scope"<<endl;
cout<<"type = "<<endl;
break;
}
case 'i':{
a=a^b;
b=a^b;
a=a^b;
}
default: cout<<"You don't follow instructions"<<endl;
}
}else{
cout<<"You don't follow instructions"<<endl;
cout<<"No swap for you"<<endl;
}
//Output results for the swap
cout<<"old a = "<< b <<", new a = "<<a<<endl;
cout<<"old b = "<<a<<", new a = "<<b<<endl;
//cout<<temp<<endl;
//exit stage
 
return 0;
}
