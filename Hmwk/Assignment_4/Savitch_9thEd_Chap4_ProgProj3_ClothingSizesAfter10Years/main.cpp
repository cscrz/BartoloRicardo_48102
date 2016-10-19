/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 11, 2016, 12:30 PM
   Purpose:     "Modify your program from Programming Project 2 so that it also calculates
                the user’s jacket and waist sizes after 10 years."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float EOAI=0.125f,                            //One eighth of an inch
            TOAI=0.1f,                              //One tenth of an inch
            A10Y=10.0f;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   inh,                                    //User input for height
            inw,                                    //User input for weight
            hatsz,                                  //Total hat size
            jasz,                                   //Total jacket size
            waisz,                                  //Waist size
            jr,                                     //Jacket size remainder
            wr;                                     //Weight remainder
    
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
        }
    }
    
    waisz=inw/5.7;                                  //Calculate waist size
    
    if (inage>=30)                                  //We add a tenth of an inch for ever 2 years over 28 to jacket size
    {
        if ((inage%2) == 0)
        {
            wr=(inage-28)/2;
            waisz+=wr*TOAI;
        }
    }
    
    //Display Output
    cout<<"Your Hat Size is: "<<hatsz<<endl;
    cout<<"Your Jacket Size(Chest size) is: "<<jasz<<" inches."<<endl;
    cout<<"Your Waist Size is "<<waisz<<" inches."<<endl<<endl;
    
    
    //Process values for after 10 years
    inage+=10;                                    //Add 10 to age
    hatsz=(inw/inh)*2.9;                            //Calculate hat size
    jasz=(inh*inw)/288;                             //Calculate Jacket size
    
    if (inage>=40)                                  //We add an eighth of an inch for ever 10 years over 30 to jacket size
    {
        if ((inage%10) == 0)
        {
            jr=(inage-30)/10;
            jasz+=jr*EOAI;
        }
    }
    
    waisz=inw/5.7;                                  //Calculate waist size
    
    if (inage>=30)                                  //We add a tenth of an inch for ever 2 years over 28 to jacket size
    {
        if ((inage%2) == 0)
        {
            wr=(inage-28)/2;
            waisz+=wr*TOAI;
        }
    }
    
    //Display Output
    cout<<"Your Hat Size after 10 years is: "<<hatsz<<endl;                             //Results after 10 years
    cout<<"Your Jacket Size(Chest size) after 10 years is: "<<jasz<<" inches."<<endl;
    cout<<"Your Waist Size after 10 years is "<<waisz<<" inches."<<endl<<endl;
    
    cout<<"Do you want to try again? Type Y for Yes or N for no."<<endl;                //Asks user if they want to try again
    cin>>inan;
    
    switch (inan)                                                                       //Turn users answer into lower case
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