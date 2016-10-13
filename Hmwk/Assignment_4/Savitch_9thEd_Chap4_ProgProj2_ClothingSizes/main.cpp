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
const float EOAI=0.125f,                            //One eighth of an inch
            TOAI=0.1f;                              //One tenth of an inch

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   inh,                                    //User input for height
            inw,                                    //User input for weight
            hatsz,                                  //Total hat size
            jasz,                                   //Total jacket size
            waisz,                                  //Waist size
            jr,                                     //Jacket size remainder
            jr2,
            wr,                                     //Weight remainder
            wr2;
    
    int     inage;                                  //User input for age
    
    char    inan;                                   //User answer for yes or no
    
    
    do
    {
    //Input values
    cout<<"Please enter your height: ";cin>>inh;    //Ask user for height, weight, and age
    cout<<"Please enter your weight: ";cin>>inw;
    cout<<"Please enter your age: ";cin>>inage;
    cout<<endl;
    
    //Process values -> Map inputs to Outputs
    hatsz=(inw/inh)*2.9;                            //Calculate hat size
    jasz=(inh*inw)/288;                             //Calculate Jacket size
    
    if (inage>=40)                                  //We add an eighth of an inch for ever 10 years over 30 to jacket size
    {
        if ((inage%10) == 0)
        {
            jr=(inage-30)/10;
            jasz+=jr*EOAI;
            jr2=jr*EOAI;
        }
    }
    
    waisz=inw/5.7;                                  //Calculate waist size
    
    if (inage>=30)                                  //We add a tenth of an inch for ever 2 years over 28 to jacket size
    {
        if ((inage%2) == 0)
        {
            wr=(inage-28)/2;
            waisz+=wr*TOAI;
            wr2=wr*TOAI;
        }
    }
    
    //Display Output
    cout<<"Your Hat Size is: "<<hatsz<<endl;
    cout<<"Your Jacket Size(Chest size) is: "<<jasz<<" inches."<<endl;
    cout<<"Your Waist Size is "<<waisz<<" inches."<<endl<<endl;
    
    cout<<"Do you want to try again? Type Y for Yes or N for no."<<endl;
    cin>>inan;
    
    switch (inan)
    {
        case 'y': inan='y'; break;
        case 'Y': inan='y'; break;
        case 'n': inan='n'; break;
        case 'N': inan='n'; break;
        default: inan='y'; break;
    }
    
    } while (inan=='y');

    //Exit Program
    return 0;
}