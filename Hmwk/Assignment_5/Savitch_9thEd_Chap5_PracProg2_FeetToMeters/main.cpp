/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 3, 2016, 10:05 AM
   Purpose: "Reads in a length in feet and inches and outputs the
            equivalent length in meters and centimeters."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float intofeet(float);
float tometer(float);
float tocm(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   uft,                    //User feet input
            uin,                    //User inch input
            m,                      //Converted Meters
            cm;                     //Converted Centimeters
    
    char    uan;                    //User's answer if they want to try again
    
    do
    {
        //Ask user for inputs
        cout<<"Feet? ";cin>>uft;
        cout<<"Inches? ";cin>>uin;

        //Process values
        uft+=intofeet(uin);         //Add the inches to feet as a decimal

        m=tometer(uft);             //Calculate the total feet to meters

        cm=tocm(m);                 //Calculate the total feet to centimeters

        //Display Output
        cout<<"The total feet is "<<uft<<"."<<endl;

        cout<<"That is equivalent to "<<m<<" meters"<<endl;
        cout<<"or "<<cm<<" centimeters."<<endl<<endl;

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
float intofeet(float in)
{
    float   inpf=12,
            feet;
    
    feet=in/inpf;
    
    return feet;
}


//Calculate the total meters
float tometer(float feet)
{
    float   mpf=0.3048f,
            m;
    
    m=feet*mpf;
    
    return m;
}


//Calculate the centimeters
float tocm(float m)
{
    float   cmpm=100,
            cm;
    
    cm=m*cmpm;
    
    return cm;
}