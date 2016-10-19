/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 18, 2016, 8:35 PM
   Purpose: "Asks for the price of an item (such as a hot dog or a 1-carat diamond)
            both one year ago and today. It estimates the inflation rate as the difference
            in price divided by the year-ago price.
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float calin(float,float);                   //Declare function to calculate inflation rate

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   yap,                            //Year ago price
            cyp,                            //Current year price
            ir;                             //Inflation rate
    
    char    uan;                            //User's answer if they want to try again
    
    do
    {
    //Input values/Ask user
    cout<<"Enter the price a year ago: ";cin>>yap;
    cout<<"Enter the price for the current year: ";cin>>cyp;
    
    //Process values
    ir=calin(yap,cyp);                      //Calculate inflation rate
    
    //Display Output
    cout<<"The inflation rate is "<<ir<<"%"<<endl<<endl;
    cout<<"Do you want to try again (Y/N)?";cin>>uan;       //Ask user if they want to try again
    
    switch(uan)                                             //Switch if user inputs lower-case
    {
        case 'y': uan='y'; break;
        case 'Y': uan='y'; break;
        case 'n': uan='n'; break;
        case 'N': uan='n'; break;
        default: uan='y'; break;
    }
    
    }while(uan=='y');                                       //Repeat if user wants to try again

    //Exit Program
    return 0;
}

float calin (float yap2,float cyp2)                         //Function to calculate inflation rate
{
    return ((cyp2-yap2)/yap2);
}