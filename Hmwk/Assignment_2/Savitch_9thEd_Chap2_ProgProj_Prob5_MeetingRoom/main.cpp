/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 3, 2016, 8:15 PM
   Purpose:  "A program that determines whether a meeting room is in violation
                of fire law regulations regarding the maximum room capacity."
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const short     MCAP=30;                            //Maximum capacity

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short       nop,                                //Number Of People
                rmd;                                //Remainder of MCAP - nop
    char        stp='y';                            //User's answer if they want to try again
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    while (stp=='y')
    {
        cout<<"Please enter the number of people attending the meeting."<<endl;                 //Ask user for number of people attending
        cin>>nop;
        cout<<endl;
        
        rmd=MCAP-nop;                                                                           //Get remainder if reached max cap or not
        
        if (nop<MCAP)                                                                           //If less than the max cap
        {
            cout<<"You may proceed and use the room for your meeting with "<<nop                //Tells user that they are able to proceed and how many more can enter
            <<" people."<<endl;
            cout<<"You may also invite "<<rmd<<" more people in the meeting."<<endl<<endl;
            
            cout<<"Do you want to try again?"<<endl;                                            //Ask user if they want to try again
            cin>>stp;
            nop=0;                                                                              //Reset number of people entered to 0 for next loop
            cout<<endl;
        }
        else
        {
            rmd=rmd*-1;                                                                         //If nop > MCAP then the rmd would be negative. So we turn it to positive
            cout<<"Unfortunately, you may not use the room for the meeting due to fire law regulations."<<endl; //Tells user they can't proceed due to exceeding the max cap and how many to 
            cout<<"The maximum capacity is "<<MCAP<<". You entered "<<nop<<"."<<endl;
            cout<<"Please remove "<<rmd<<" to be able to use the room."<<endl<<endl;
            
            cout<<"Do you want to try again? Type Y for yes and N for no."<<endl;               //Ask the user if they want to try again
            cin>>stp;
            nop=0;                                                                              //Reset number of people input for next loop
            cout<<endl;
        }
    }
    cout<<"Program will now exit."<<endl;                                                       //Display for "No" if user does not want to try again

    //Exit Program
    return 0;
}

