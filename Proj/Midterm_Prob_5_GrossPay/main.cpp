/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 21, 2016, 8:02 PM
   Purpose: "Develop an application that will determine the gross pay for 
            employees."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>      //Conversion
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int   M1=40,                          //After 40 hours
            M2=50;                          //After 50 hours

//Function prototypes
float cal(int,float,int,int);               //Function to calculate total pay

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   urate,                              //User time input
            tot;                                //Total pay
    
    int     utime;                              //User rate input
    
    //Ask user for hours worked and rate
    cout<<"How many hours worked? ";cin>>utime;
    cout<<"How much do you get paid? ";cin>>urate;
    
    tot=cal(utime,urate,M1,M2);                 //We call the function to calculate
    
    cout<<fixed<<setprecision(2)<<showpoint;    //Show decimal point
    cout<<"Your total pay is: $"<<tot<<endl;    //Print total pay
    
    
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Gross Pay   **************************************
//Purpose:  Calculate total pay
//Inputs:   Inputs to the function here -> Description, Range, Units
//  t->Hours worked
//  r->Pay rate
//  cap1->First cap before double pay
//  cap2->Second cap before triple pay
//Output:   Outputs to the function here -> Description, Range, Units
//  Returns total pay for hours worked
//******************************************************************************

float cal(int t, float r, int cap1, int cap2)   //Function to calculate total pay
{
    float   tot;
    int     rm;
    if (t<cap1)
    {
        tot=t*r;
        return tot;
    }
    else if (t>cap1 && t<cap2)
    {
        rm=(t-cap1)*2;
        tot=(40*r)+(rm*r);
        return tot;
    }
    else if (t>cap2)
    {
        rm=(t-cap2)*3;
        tot=(40*r)+(20*r)+(rm*r);
        return tot;
    }
}