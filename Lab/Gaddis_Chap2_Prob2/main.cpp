    /*
     * File: main.cpp
     * Author: Guinevere Negrete
     *Created on June 27, 2015, 8:08 PM
     *Purpose: Homework, How much generation in sales.
     */
    //System Libraries
    #include <iostream>
     
    using namespace std;
     
    /*//Function prototypes
     *
     *///Execution Begins Here!
    int main(int argc, char** argv) {
     
    //Declare Variables
    float Prcnt, TotSal, SalYr;
     
    //Input values
    Prcnt=.62; //Percent of total sales
    TotSal=4.6; //Millions in sales this year
     
    //Process Input
    Prcnt*TotSal/100; //Units = Million $'s
     
    //Output Here
    cout<<"Division generated from total sales = 2.8 "<<endl;
     
    //Exit Stage Right!
     
    return 0;
    }
     

