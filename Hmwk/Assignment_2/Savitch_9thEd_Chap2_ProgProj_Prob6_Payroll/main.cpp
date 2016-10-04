/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 3, 2016, 10:12 PM
   Purpose:         "Read in the number of hours worked in a week
                    and the number of dependents as input and will then output the worker’s
                    gross pay, each withholding amount, and the net take-home pay for the
                    week."
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float     PR=     16.78f,         //Pay rate
                SST=    0.06f,          //Social Security tax
                FIT=    0.14f,          //Federal Income tax
                SIT=    0.05f,          //State Income tax
                OR=     25.17f;           //Overtime pay rate 1.5*16.78f
const short     HM=     40,             //Hours max before over time
                UD=     10,             //Union dues
                HI=     35;             //Health insurance

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float       tot,                    //Total overtime hours
                hrin,                   //Hours worked input
                otp,                    //Overtime payment
                totp,                   //Total payment
            
                dgp,                    //Total Gross pay
                dsst,                   //Total Social Security tax
                dfit,                   //Total Federal Income tax
                dsit;                   //Total State Income tax
    
    short       dep;                    //Dependents input
    
    //Input values
    cout<<"Please enter how many hours you have worked this week."<<endl;       //Ask user how many hours
    cin>>hrin;
    
    cout<<endl;
    cout<<"Please enter the number of dependents."<<endl;                       //Ask how many dependents
    cin>>dep;
    
    cout<<endl;
    //Process values -> Map inputs to Outputs
    dgp=hrin*PR;                                                                //Gross pay (hours input * Pay)
    dsst=dgp*SST;                                                               //Calculate Social Security tax
    dfit=dgp*FIT;                                                               //Calculate Federal Income tax
    dsit=dgp*SIT;                                                               //Calculate Federal Income tax
    totp=totp-UD;                                                               //Subtract Union dues
    
    cout<<fixed<<setprecision(2)<<showpoint;                                    //Show 2 places of decimal points
    
    //Display Output
    if (hrin<HM)                                                                //If worked within 40 hours or less
    {        
        totp=hrin*PR;                                                           //Total pay is hours in * pay rate
        totp=totp-dsst-dfit-dsit;
                if (dep>=3) totp=totp-HI;                                       //If dependents >= 3 then subtract Health Insurance from total pay

    }
    else
    {
        tot=hrin-HM;                                                            //Calculate the total overtime hours
        otp=tot*OR;                                                             //Calculate overtime pay with overtime rate
        totp=otp+(PR*HM);                                                       //Add overtime pay + 40 hours * normal pay
        totp=totp-dsst-dfit-dsit;                                               //Subtract taxes from total pay
        dgp=HM*PR;                                                              //Total pay with 40 hours only
    }
    
        cout<<"You have worked for      "<<hrin<<" hours."<<endl;               //Show how many hours user entered
        if (hrin>HM)
        {
        cout<<"Total Overtime           "<<tot<<" hours."<<endl;                //If overtime then show how many hours worked OT
        cout<<"Overtime pay            $"<<otp<<endl;                           //Show how much earned for OT
        }
        else
        {
            //null
        }
        cout<<"Your gross pay is       $"<<dgp<<endl<<endl;                     //Show pay and taxes
        cout<<"Social Security Tax     $"<<dsst<<endl;
        cout<<"Federal Income Tax      $"<<dfit<<endl;
        cout<<"State Income Tax        $"<<dsit<<endl;
        if (dep>=3)
        {
        cout<<"Health Insurance        $"<<HI<<endl;                            //If dependents more than 3, show health insurance
        totp=totp-HI;
        }
        else
        {
            //null
        }
        
        cout<<endl;
        cout<<"The net pay             $"<<totp<<endl;                          //Show net pay

    //Exit Program
    return 0;
}