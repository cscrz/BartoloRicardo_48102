/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 5, 2016, 5:50 PM
   Purpose:         "Write a program that finds the temperature that is the same in both Celsius
                    and Fahrenheit."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int     cels,                           //Celsius
            fah;                            //Fahrenheit
    
    //Input values
    cels=100;                               //Initialize Celsius to 100
    
    //Process values -> Map inputs to Outputs
    while (cels >= 0)                       //Do until Celsius is down to 0
    {
        fah=cels*9/5+32;                    //Do conversion
        cout<<cels<<" Degrees Celsius = "<<fah<<" Degrees Fahrenheit."<<endl;   //Display results
        cels--;                             //Subtract 1 from Celsius each loop
    }
    
    //Display Output

    //Exit Program
    return 0;
}