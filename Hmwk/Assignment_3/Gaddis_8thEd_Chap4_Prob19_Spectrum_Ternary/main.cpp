/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 29th, 2016, 12:00 PM
   Purpose:  To determine the Band of Radiation from the Wave Length
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
    float waveLen;
    
    //Input values
    cout<<"Input wave length of radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    
    //Process values -> Map inputs to Outputs then display
    cout<<((waveLen>1e-2f) ?"Radio Band":
           (waveLen>1e-3f) ?"Micro Wave Band":
           (waveLen>7e-7f) ?"Infra-Red Band":
           (waveLen>4e-7f) ?"Visible Band":
           (waveLen>1e-8f) ?"Ultra-Violet Band":
           (waveLen>1e-11f)?"X-Ray Band":"Gamma-Ray Band")<<endl;

    //Exit Program
    return 0;
}