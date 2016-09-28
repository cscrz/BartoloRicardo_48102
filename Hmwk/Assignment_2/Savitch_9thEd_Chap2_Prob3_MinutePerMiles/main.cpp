/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 27, 2016, 12:26 PM
   Purpose:  "Speed in mph and converts the quantity into minutes and seconds per mile.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned short
MINPH=60,               //Minutes Per Hour
?????=1;                //IDK WHAT THIS THING IS


//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short
    spd;                //Speed (MPH) the user will input
    
    float
    mpm,                //Miles per minute
    minpm;              //Minute per miles
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"Please enter the speed (MPH)."<<endl;
    cin>>spd;
    
    mpm=spd/MINPH;
    minpm=?????/mpm;
    
    cout<<endl;
    cout<<"You entered "<<spd<<" MPH."<<endl;
    cout<<"That is equivalent to "<<minpm<<" minutes per mile."<<endl;
    

    //Exit Program
    return 0;
}