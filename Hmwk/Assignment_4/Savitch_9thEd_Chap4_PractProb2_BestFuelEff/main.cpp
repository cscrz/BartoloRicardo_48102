/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 11, 2016, 11:33 AM
   Purpose:    "Modify your program from Practice Program 1 so that it will take input
                data for two cars and output the number of miles per gallon delivered by
                each car. Your program will also announce which car has the best fuel efficiency
                (highest number of miles per gallon)."
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
            mpg,                        //Miles per gallon
            inlit2,                     //User input for liters for car 2
            inmil2,                     //User input for miles for car 2
            totgal2,                    //Total gallons for car 2
            mpg2;                       //Miles per gallon for car 2
    
    char    inans='Y';                  //User input if they want to try again
    
    do
    {
    //Input values
    cout<<"Enter number of liters of gasoline consumed by car #1: ";cin>>inlit;   //Ask user for liters
    cout<<"Enter number of miles traveled by car #1: ";cin>>inmil;                //Ask user for miles
    cout<<endl;
    cout<<"Enter number of liters of gasoline consumed by car #2: ";cin>>inlit2;   //Ask user for liters for car 2
    cout<<"Enter number of miles traveled by car #2: ";cin>>inmil2;                //Ask user for miles for car 2
    
    //Process values -> Map inputs to Outputs
    totgal=inlit*LPG;                                                   //Convert liters to gallons
    mpg=totgal/inmil;                                                   //Find out how many miles per gallon
    
    totgal2=inlit2*LPG;                                                 //Convert liters to gallons
    mpg2=totgal2/inmil2;                                                //Find out how many miles per gallon
    
            
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;                            //Show decimal
    cout<<endl;
    cout<<"The first car has delivered "<<mpg<<" miles per gallon."<<endl;      //Show miles per gallon
    cout<<"The second car has delivered "<<mpg2<<" miles per gallon."<<endl;    //Show miles per gallon
    cout<<endl;
    
    if (mpg>mpg2)
        cout<<"The first car is more efficient."<<endl;
    else
        cout<<"The second car is more efficient."<<endl;
    
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