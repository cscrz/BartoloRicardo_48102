/* 
   File:   main
   Author: Ricardo Bartolo
   Created on September 7th, 2016, 10:26 AM
   Purpose:  Solve how many people get wired in the morning
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100; //Global conversion

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables and Initialization
    unsigned short  cstSurv=16500,  //Number of customers surveyed
                    cstEnrg,        //Energy Drinkers
                    cstCitr;        //Citrus Energy Drinkers
    unsigned char   pEnergy=15,     //Percentage of energy drinkers
                    pCitrus=58;     //Percentage of citrus energy drinkers
    
    //Process values -> Map inputs to Outputs
    cstEnrg=cstSurv*pEnergy/PERCENT;
    cstCitr=cstEnrg*pCitrus/PERCENT;
    
    //Display Output
    cout<<"The number of customers surveyed      = "<<cstSurv<<endl;
    cout<<"The percentage energy drinkers        =    "<<static_cast<int>(pEnergy)<<endl;
    cout<<"The percentage citrus energy drinkers =    "<<static_cast<int>(pCitrus)<<endl;
    cout<<"The number of energy drinkers         =  "<<cstEnrg<<endl;
    cout<<"The number of citrus energy drinkers  =  "<<cstCitr<<endl;

    //Exit Program
    return 0;
}