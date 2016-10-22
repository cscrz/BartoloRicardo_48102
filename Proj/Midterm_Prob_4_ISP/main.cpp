/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 21, 2016, 6:09 PM
   Purpose: "Write a program that calculates a customers monthly bill.  
            Ask which package, and how many hours then display the monthly charge.  
            Also, output when customers should transition to another package and 
            what package that should be to save the most money.  Calculate the money saved."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float MAYP1=16.75f,           //Monthly pay for package A
            MAYP2=23.75f,           //Monthly pay for package B
            MAYP3=34.95f,           //Monthly pay for package C
            LAC1=0.85f,             //Additional cost 5-20 hours package A
            HAC1=1.0f,              //Additional cost 20+ hours package A
            LAC2=0.65f,             //Additional cost 15-25 hours package B
            HAC2=0.75f;             //Additional cost 25+ hours package B

const int   LH1=5,                  //after 5 hours package A
            MH1=20,                 //after 20 hours package A
            LH2=15,                 //after 15 hours package B
            MH2=25;                 //after 25 hours package B

//Function prototypes
float   op(int,float,int,int,float,float);      //Function to calculate total payment

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   tot,                        //Total cost for user's package
            tot2,                       //Total cost for other package
            tot3,                       //Total cost for other package 2
            save;                       //How much user will save
    
    int     hin;                        //Hours
    
    char    uin,                        //User's pick
            p1,                         //User's package
            p2,                         //Other package
            p3;                         //Other package 2
    
    //Ask user which package a, b, or c and hours
    cout<<"Which package would you choose (a, b, or c)? ";cin>>uin;
    cout<<endl;
    cout<<"How many hours? ";cin>>hin;
    
    switch(uin)                         //Use switch to determine which package user picked.
    {
        case 'a':                                               //Pick Package A
        {
            tot=op(hin,MAYP1,LH1,MH1,LAC1,HAC1); p1='A';        //Calculate total cost for user's package
            tot2=op(hin,MAYP2,LH2,MH2,LAC2,HAC2); p2='B';       //Calculate total cost for other package
            tot3=MAYP3; p3='C';                                 //Calculate total cost for other package 2
            break;                                              //Same with other swap below
        }
        case 'A':                                               //Pick Package A
        {
            tot=op(hin,MAYP1,LH1,MH1,LAC1,HAC1); p1='A';
            tot2=op(hin,MAYP2,LH2,MH2,LAC2,HAC2); p2='B';
            tot3=MAYP3; p3='C';
            break;
        }
        case 'b':                                               //Pick Package B
        {
            tot=op(hin,MAYP2,LH2,MH2,LAC2,HAC2); p1='B';
            tot2=op(hin,MAYP1,LH1,MH1,LAC1,HAC1); p2='A';
            tot3=MAYP3; p3='C';
            break;
        }
        case 'B':                                               //Pick Package B
        {
            tot=op(hin,MAYP2,LH2,MH2,LAC2,HAC2); p1='B';
            tot2=op(hin,MAYP1,LH1,MH1,LAC1,HAC1); p2='A';
            tot3=MAYP3; p3='C';
            break;
        }
        case 'c':                                               //Pick Package C
        {
            tot=MAYP3; p1='C';
            tot2=op(hin,MAYP1,LH1,MH1,LAC1,HAC1); p2='A';
            tot3=op(hin,MAYP2,LH2,MH2,LAC2,HAC2); p3='B';
            break;
        }
        case 'C':                                               //Pick Package C
        {
            tot=MAYP3; p1='C';
            tot2=op(hin,MAYP1,LH1,MH1,LAC1,HAC1); p2='A';
            tot3=op(hin,MAYP2,LH2,MH2,LAC2,HAC2); p3='B';
            break;
        }
        default: cout<<"You did not pick a, b, or c!"; break;   //Did not pick A, B, or C
    }
    
    cout<<fixed<<setprecision(2)<<showpoint;                                            //Show two decimal points
    cout<<"The total cost for package "<<p1<<" is $"<<tot<<" per month."<<endl<<endl;   //Print total cost for picked package
    
    cout<<"Package "<<p2<<" will cost $"<<tot2<<"."<<endl;                              //Print other two package cost
    cout<<"Package "<<p3<<" will cost $"<<tot3<<"."<<endl;
    
    
    if(tot<tot2 && tot<tot3)                                                            //If picked best package
    {
        cout<<"You chose the best package out of the three."<<endl;
    }
    else if(tot2<tot && tot2<tot3)                                                      //If other two package are cheaper, tell user which one is the best
    {                                                                                   //and how much they would save
        save=tot-tot2;
        cout<<"We recommend package "<<p2<<". You will save: $"<<save<<"."<<endl;
    }
    else if(tot3<tot && tot3<tot2)
    {
        save=tot-tot3;
        cout<<"We recommend package "<<p3<<". You will save: $"<<save<<"."<<endl;
    }


    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   ISP  *********************************************
//Purpose:  Calculate monthly payment
//Inputs:   Inputs to the function here -> Description, Range, Units
//  h->Hours
//  mp->Monthly payment
//  lh->First hour limit before additional cost
//  mh->Second hour limit before additional cost
//  c1->First additional cost
//  c2->Second additional cost
//Output:   Outputs to the function here -> Description, Range, Units
//  Returns the monthly payment everything calculated
//******************************************************************************

float op(int h,float mp,int lh,int mh,float c1,float c2)                        //Function to calculate total cost
{
    float   tot;
    int     hr;
    
    if(h>lh && h<=mh)
    {
        hr=h-lh;
        tot=hr*c1+mp;
        return tot;
    }
    else if(h>mh)
    {
        hr=h-mh;
        tot=(mh-lh)*c1+mp+hr*c2;
        return tot;
    }
    else if(h<lh)
    {
        tot=mp;
        return tot;
    }
}