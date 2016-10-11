/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 11, 2016, 11:33 AM
   Purpose:    "Read in the number
                of liters of gasoline consumed by the user’s car and the number of miles
                traveled by the car and will then output the number of miles per gallon the
                car delivered."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>      //Conversion
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float LPG=0.264179f;              //Liter per Gallon

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   inlit,                      //User input for liters
            inmil,                      //User input for miles
            totgal,                     //Total gallons
            mpg;                        //Miles per gallon
    
    char    inans='Y';                  //User input if they want to try again
    
    do
    {
    //Input values
    cout<<"Enter number of liters of gasoline consumed by your car: ";cin>>inlit;   //Ask user for liters
    cout<<"Enter number of miles traveled: ";cin>>inmil;                            //Ask user for miles
    
    //Process values -> Map inputs to Outputs
    totgal=inlit*LPG;                                                   //Convert liters to gallons
    mpg=totgal/inmil;                                                   //Find out how many miles per gallon
            
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;                            //Show decimal
    cout<<endl;
    cout<<"Your car has delivered "<<mpg<<" miles per gallon."<<endl;   //Show miles per gallon
    cout<<endl;
    cout<<"Do you want to try again?"<<endl;                            //Ask if user wants to try again
    cin>>inans;
    
        switch (inans)                                                  //If user input capitalized or lower case or other inputs
            {
            case 'Y': inans='Y'; break;
            case 'y': inans='Y'; break;
            case 'N': inans='N'; break;
            case 'n': inans='N'; break;
            default: inans='Y'; break;
            }
    } while (inans=='Y');

    //Exit Program
    return 0;
}