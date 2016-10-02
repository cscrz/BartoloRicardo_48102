/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 1, 2016, 4:17 PM
   Purpose:     Rewrite the program (from book) using
                the style described in the chapter for indentation, adding comments, and
                appropriately named constants.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   radius,                 //Radius user will enter
            vm;                     //Calculation of volume of the sphere
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"Enter radius of sphere."<<endl;      //Ask user for radius
    cin>>radius;
    
    vm=(4.0/3.0)*3.1415*radius*radius*radius;   //Calculate volume
    
    cout<<"The volume is "<<vm<<endl;           //Display results

    //Exit Program
    return 0;
}