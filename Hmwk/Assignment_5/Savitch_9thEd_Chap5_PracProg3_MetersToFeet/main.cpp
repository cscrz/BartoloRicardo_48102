/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 3, 2016, 11:30 AM
   Purpose: "Reads in a length in meters and centimeters and outputs the
            equivalent length in feet and inches."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float cmtom(float);
float toft(float);
float toin(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   um,                    //User meters input
            ucm,                    //User centimeters input
            ft,                      //Converted Feet
            in;                     //Converted Inches
    
    char    uan;                    //User's answer if they want to try again
    
    do
    {
        //Ask user for inputs
        cout<<"Meters? ";cin>>um;
        cout<<"Centimeters? ";cin>>ucm;

        //Process values
        um+=cmtom(ucm);             //Add the centimeters to meters as a decimal

        ft=toft(um);                //Calculate the total meters to feet

        in=toin(ft);                 //Calculate the total feet to centimeters

        //Display Output
        cout<<"The total Meters is "<<um<<"."<<endl;

        cout<<"That is equivalent to "<<ft<<" feet"<<endl;
        cout<<"or "<<in<<" inches."<<endl<<endl;

        cout<<"Do you want to try again? (Y/N) ";cin>>uan;

        switch(uan)                 //Filter user's input
        {
            case 'y': uan='Y'; break;
            case 'n': uan='N'; break;
            default: uan='Y'; break;
        }
    }while(uan=='Y');               //Repeat until user says no

    //Exit Program
    return 0;
}


//Calculate how much inches in decimal of feet and add to total feet
float cmtom(float cm)
{
    float   cmpm=100;
    
    return cm/cmpm;
}


//Calculate the total meters
float toft(float m)
{
    float   ftpm=3.28084f;                      //Feet per meter
    
    return m*ftpm;
}


//Calculate the centimeters
float toin(float ft)
{
    float   mpft=12;                        //Inches per foot
    
    return ft*mpft;
}