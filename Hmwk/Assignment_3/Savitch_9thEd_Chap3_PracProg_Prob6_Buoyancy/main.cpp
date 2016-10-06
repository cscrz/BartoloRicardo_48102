/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 5, 2016, 6:05 PM
   Purpose:        "Write a program that inputs the weight (in pounds) and radius (in feet)
                    of a sphere and outputs whether the sphere will sink or float in water." 
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float WAWE=62.4f,             //Weight of water
            PI=3.14f;               //Pi

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   wei,                    //Weight of the sphere
            rad,                    //Radius of the sphere
            vol,                    //Volume of the sphere
            bf;                     //Buoyant force
    
    //Input values
    cout<<"Please enter the weight of the sphere: ";cin>>wei;   //Ask user for weight and radius of the sphere
    cout<<"Please enter the radius of the sphere: ";cin>>rad;
    
    //Process values -> Map inputs to Outputs
    vol=(4/3)*PI*(rad*rad*rad);                                 //Calculate the volume of the sphere
    bf=vol*WAWE;                                                //Calculate buoyant force
    
    //Display Output
    cout<<"The volume of the sphere is "<<vol<<"ft^3."<<endl;   //Display the volume of the sphere
    cout<<"The buoyant force is "<<bf<<"ft^3."<<endl<<endl;     //Display the buoyant force
    
    if (bf>=wei)                                                //If object will float
        cout<<"The sphere will float."<<endl;
    else
        cout<<"The sphere will sink."<<endl;                    //If object will sink

    //Exit Program
    return 0;
}

