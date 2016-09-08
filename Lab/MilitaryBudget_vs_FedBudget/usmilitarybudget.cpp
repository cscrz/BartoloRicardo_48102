/* File:   main.cpp
 * Author: Ricardo Bartolo
 * Created on September 8, 2016, 10:05 AM
 * Purpose: Program that calculates the Military Budget percentage of Fed budget
 */

//Include system level libraries
#include <iostream>      //Input/Output Libraries
using namespace std;    //Libraries compiled under standard namespace

//User Libraries

//Global Constants
const char PERCENT=100;

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    float fbud=3.95f;                   //Fed Budget
    float mbud=0.6f;                    //Military Budget
    float perc;                         //Percentage
    
    //Calculate
    perc=mbud/fbud*PERCENT;
    
    //Output the results
    cout<<"Military Budget percentage of Fed budget"<<endl<<endl;
    cout<<"Fed Budget       = $"<s<fbud<<"^12 Trillion"<<endl;
    cout<<"Military Budget  = $"<<mbud<<"^12 Trillion"<<endl<<endl;
    cout<<"Percentage       = "<<perc<<"%"<<endl;
    
    //Exit
    return 0;
}