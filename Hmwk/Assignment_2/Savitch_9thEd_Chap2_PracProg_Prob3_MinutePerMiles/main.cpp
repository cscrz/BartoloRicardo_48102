/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 27, 2016, 12:26 PM
   Purpose:  "Speed in mph and converts the quantity into minutes and seconds per mile.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For setprecision
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int
    MINPH=60;               //Minutes Per Hour


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float
    spd,                //Speed (MPH) the user will input
    mpm,                //Miles per minute
    minpm;              //Minute per miles
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;                //Display decimal
    cout<<"Please enter the speed (MPH)."<<endl;            //Ask user how fast in MPH
    cin>>spd;
    
    mpm=spd/MINPH;                                          //Divide speed (MPH) by 60 to get Miles per minute
    minpm=1/mpm;                                            //Divide 1 (1 minute) by Miles per minute to get Minute per mile
    
    cout<<endl;
    cout<<"You entered "<<spd<<" MPH."<<endl;               //Display what user entered for speed
    cout<<"That is equivalent to "<<minpm<<" minutes per mile."<<endl;//Display results
    

    //Exit Program
    return 0;
}