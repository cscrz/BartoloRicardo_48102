/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 20, 2016, 10:56 AM
   Purpose:         "Input the number than make an X in the following way"
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>       //String for space
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int     uin,                                    //User input for a number
            uin2,                                   //Value of original input number (wont change)
            ns=2,                                   //Number of space in the middle of 2 numbers in a line
            nsb=0,                                  //Number of space in the middle for the bottom side
            fs=0,                                   //Space before the first number in a line
            wa=0;                                   //If user put invalid number.. display warning
    
    do
    {
        switch(wa)                                                              //Display warning if invalid answer
        {
            case 1: cout<<"YOU DID NOT FOLLOW DIRECTION!!!"<<endl<<endl; break;
            case 2: cout<<"ARE YOU EVEN READING THE INSTRUCTION!?"<<endl<<endl; break;
            case 3: cout<<"You are dumb. Congratulations."<<endl<<endl; break;
            default: break;
        }
        cout<<"Please enter a number between 1 and 50: ";cin>>uin;              //Ask user for a number from 1-50
        cout<<endl;
        wa+=1;
    }while(uin>=50 || uin<=1);                                                  //Must input number 1-50 or will repeat
    
    uin2=uin;                                                       //Assign user input to uin2 to keep track of original number
    
    if(uin%2!=0)                                                    //If it's an even number
    {
        for(int lp=uin;lp>0;lp--)                                   //Repeat print out lines til the number is 0
        {
            for(int fs2=0;fs2<fs;fs2++)                             //Space before first number
            {
                cout<<" ";
            }
            
            cout<<uin;                                              //Print out first number
            
            for(int ns2=uin2-ns;ns2>0;ns2--)                        //Space in between two numbers (top side of x)
            {
                cout<<" ";
            }
            
            if(ns>=uin2+1)                                          //Space between two numbers (bottom side of x)
            {
                for(int ns3=nsb-1;ns3>0;ns3--)
                {
                    cout<<" ";
                }
            }
            
            if (ns!=uin2+1) cout<<uin;                              //Print out second number ONLY if not the middle/center
            
            uin--;                                                  //We subtract original input number for next line
            ns+=2;                                                  //We subtract additional 2 spaces for next line
            
            if (ns<=uin2+1) fs++;                                   //If top side of x, add another space in front of first number
            else
            {
                fs--;                                               //If bottom side, subtract
                nsb+=2;                                             //Add 2 spaces for bottom side middle space
            }
            
            cout<<endl;                                             //Next line and repeat
        }
    }
    else
    {
        for(int lp=uin;lp>0;lp--)                                   //Repeat print out lines til the number is 0
        {
            for(int fs2=0;fs2<fs;fs2++)                             //Space before first number
            {
                cout<<" ";
            }
            
            cout<<uin;                                              //Print out first number
            
            for(int ns2=uin2-ns;ns2>0;ns2--)                        //Space in between two numbers (top side of x)
            {
                cout<<" ";
            }
            
            if(ns>=uin2)                                            //Space between two numbers (bottom side of x)
            {
                for(int ns3=nsb-2;ns3>0;ns3--)
                {
                    cout<<" ";
                }
            }
            
            cout<<uin;                                              //Print out second number
            if (ns>=uin2 && ns!=uin2) fs--;
            uin--;                                                  //We subtract original input number for next line
            ns+=2;                                                  //We subtract additional 2 spaces for next line
            
            if (ns<=uin2) fs++;                                     //If top side of x, add another space in front of first number
            else
            {
                nsb+=2;                                             //Add 2 spaces for bottom side middle space
            }
                
            cout<<endl;                                             //Next line and repeat
        }
    }

    //Exit Program
    return 0;
}