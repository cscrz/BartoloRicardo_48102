/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 11, 2016, 12:30 PM
   Purpose:     "A program that asks for the user’s height, weight, and age, and then
                computes clothing sizes."
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
    float   inh,
            inw,
            hatsz,
            jasz,
            waisz;
    
    int     inage;
    
    //Input values
    cout<<"Please enter your height: ";cin>>inh;
    cout<<"Please enter your weight: ";cin>>inw;
    cout<<"Please enter your age: ";cin>>inage;
    cout<<endl;
    
    //Process values -> Map inputs to Outputs
    hatsz=(inw/inh)*2.9;
    jasz=(inh*inw)/288;
    
    if (inage>=40)
    {
        jasz+=3;
    }
    
    //Display Output

    //Exit Program
    return 0;
}