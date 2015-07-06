/* 
 * File:   main.cpp
 * Author: Guinevere Negrete
 * Created on July 6, 2015, 12:42 PM
 * Purpose to learn how to save for retirement
 */
//System Libraries
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int);
/*
 * 
 */
int main(int argc, char** argv) {
//Declare
    float pv=1e4f;//Present value in $'s
    float i=5e-2f;//Interest rate
    int nCmpd=50;//Number of compounding periods (yrs)
    
    //output the future value of our savings
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Present Value = "<<pv<<endl;
    cout<<"Interest rate = "<<i*100<<"%"<<endl;
    cout<<"Years to save = "<<nCmpd<<"(yrs)"<<endl;
    cout<<"Savings 1 = $"<<save1(pv,i,nCmpd)<<endl;
    cout<<"Savings 2 = $"<<save2(pv,i,nCmpd)<<endl;
    cout<<"Savings 3 = $"<<save3(pv,i,nCmpd)<<endl;
    cout<<"Savings 4 = $"<<save3(pv,i,nCmpd)<<endl;
    cout<<"Savings 5 = $"<<save3(pv,i,nCmpd)<<endl;
//exit stage right!
    return 0;
}
//Savings Function
//inputs
//p->Present Value in $'s
//i->Interest rate %/year
//n->Compounding periods (yrs)
float save5(float p,float i, int n){
    //Loop to Determine the answer
    float power=1.0f;
for(int year=1;year<=n;year++){
power*=(1+i);
}
return p*power;
}
//Savings Function
//inputs
//p->Present Value in $'s
//i->Interest rate %/year
//n->Compounding periods (yrs)
float save4(float p,float i, int n){
    //Call Ourself aka recursion
if (n<=0){return p;
}
else save4(p,i,n-1)*(1+i);
}
//Savings Function
//inputs
//p->Present Value in $'s
//i->Interest rate %/year
//n->Compounding periods (yrs)
float save3(float p,float i,int n){
    //Use exp and log function    
    return p*exp(n*log(1+i));
}
//Savings Function
//inputs
//p->Present Value in $'s
//i->Interest rate %/year
//n->Compounding periods (yrs)
float save2(float p,float i,int n){
    //utilize power
    return p*pow(1+i,n);
}
   
//Savings Function
//inputs
//p->Present Value in $'s
//i->Interest rate %/year
//n->Compounding periods (yrs)
float save1(float p,float i,int n){
    //Loop to determine to answer
    for(int year=1;year<=n;year++){
        p*=(1+i);
}
    return p;
}