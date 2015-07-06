/* 
 * File:   main.cpp
 * Author: Guinevere Negrete
 * Created on July 6, 2015, 11:45 AM
 * Purpose: To create a two player rock, paper scissors game
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//user libraries

//global constants

//function prototypes
/*
 * 
 */
//execution begins here!
int main(int argc, char** argv) {
//Declare Variables
        int Fplayer;
        int Splayer;

    cout<<"Player 1: Enter rock, paper, or scissors: "<<endl;
    cin>>Fplayer;
    cout<<"Player 2: Enter rock, paper, or scissors: "<<endl;
    cin>>Splayer;

    if (Fplayer=="rock") || (Fplayer=="paper");
    {
            if  (Splayer=="rock") || (Fplayer=="rock")
            cout<<"Draw"<<endl; 
            }
    }
    else if (Fplayer=="paper") || (Fplayer=="paper")
    {
        if  (Splayer=="paper") || (Splayer=="paper")
        {
            cout<<"Draw"<<endl;
        }
    }
    else if (Fplayer=="scissors") || (Fplayer=="scissors")
    {
    if  (Splayer=="scissors") || (Splayer =="scissors")
    {
    cout<<"Draw"<<endl; 
    }
    }
    else if (Fplayer=="paper") || (Fplayer=="paper") 
    {
        if (Splayer=="rock") || (Splayer=="rock")
        {
            cout<<"Player 1 is the WINNER!"<<endl;
        }
    }
    else if (Fplayer=="rock") || (Fplayer=="rock")
    {
    if (Splayer=="paper") || (Splayer=="paper")
    {
        cout<<"Player 2 is the WINNER!"<<endl;
    }  
    }
    else if (Fplayer=="paper") || (Fplayer=="paper")
    {
    if (Splayer=="scissors") || (Splayer=="scissors")
    {
    cout<<"Player 2 is the WINNER!"<<endl;   
    }  
    }
    else if (Fplayer=="scissors") || (Fplayer=="scissors")
    {
        if (Splayer=="paper") || (Splayer=="paper")
        {
         cout<<"Player 1 is the WINNER!"<< endl;
        }
    }
    else if (Fplayer=="rock") || (Fplayer=="rock")
    {
    if  (Splayer=="scissors") || (Splayer=="scissors")
    {
    cout<<"Player 1 is the WINNER!"<<endl;   
    }  
    }
    else if (Fplayer=="scissors") || (Fplayer=="scissors")
    {
    if (Splayer=="rock") || (Splayer=="rock")
    {
        cout<<"Player 2 is the WINNER!"<< endl;
    }  
    }
    else
    {
        cout<<"ZUGZWAG!!! invalid entry :-( "<<endl;
    }
    system("pause");
}
    return 0;
}