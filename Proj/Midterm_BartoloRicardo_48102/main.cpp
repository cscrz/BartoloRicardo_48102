/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 21, 2016, 10:28 PM
   Purpose: MIDTERM
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <cstdlib>      //Random number generator
#include <ctime>        //Time
#include <string>       //Strings
#include <iomanip>      //Setwidth
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float MAYP1=16.75f,           //(Problem 4)Monthly pay for package A
            MAYP2=23.75f,           //(Problem 4)Monthly pay for package B
            MAYP3=34.95f,           //(Problem 4)Monthly pay for package C
            LAC1=0.85f,             //(Problem 4)Additional cost 5-20 hours package A
            HAC1=1.0f,              //(Problem 4)Additional cost 20+ hours package A
            LAC2=0.65f,             //(Problem 4)Additional cost 15-25 hours package B
            HAC2=0.75f;             //(Problem 4)Additional cost 25+ hours package B

const int   LH1=5,                  //(Problem 4)after 5 hours package A
            MH1=20,                 //(Problem 4)after 20 hours package A
            LH2=15,                 //(Problem 4)after 15 hours package B
            MH2=25;                 //(Problem 4)after 25 hours package B

//Function prototypes
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

float   op(int,float,int,int,float,float);      //(Problem 4)Function to calculate total payment

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1 Big X"<<endl;
        cout<<"2.  Type 2  for Problem 2 Sort"<<endl;
        cout<<"3.  Type 3  for Problem 3 Check"<<endl;
        cout<<"4.  Type 4  for Problem 4 ISP"<<endl;
        cout<<"5.  Type 5  for Problem 5 Gross Pay"<<endl;
        cout<<"6.  Type 6  for Problem 6 Sequence"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();break;
            case 4:problem4();break;
            case 5:problem5();break;
            case 6:problem6();break;
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  BIG X!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem1()
{
    //Declaration of Variables
    int     uin,                                    //User input for a number
            uin2,                                   //Value of original input number (wont change)
            ns=2,                                   //Number of space in the middle of 2 numbers in a line
            nsb=0,                                  //Number of space in the middle for the bottom side
            fs=0,                                   //Space before the first number in a line
            wa=0;                                   //If user put invalid number.. display warning
    
    do
    {
        switch(wa)                                                              //Display warning if invalid answer
        {
            case 1: cout<<"YOU DID NOT FOLLOW DIRECTION!!!"<<endl<<endl; break;
            case 2: cout<<"ARE YOU EVEN READING THE INSTRUCTION!?"<<endl<<endl; break;
            case 3: cout<<"You are dumb. Congratulations."<<endl<<endl; break;
            default: break;
        }
        cout<<"Please enter a number between 1 and 50: ";cin>>uin;              //Ask user for a number from 1-50
        cout<<endl;
        wa+=1;
    }while(uin>=50 || uin<=1);                                                  //Must input number 1-50 or will repeat
    
    uin2=uin;                                                       //Assign user input to uin2 to keep track of original number
    
    if(uin%2!=0)                                                    //If it's an even number
    {
        for(int lp=uin;lp>0;lp--)                                   //Repeat print out lines til the number is 0
        {
            for(int fs2=0;fs2<fs;fs2++)                             //Space before first number
            {
                cout<<" ";
            }
            
            cout<<uin;                                              //Print out first number
            
            for(int ns2=uin2-ns;ns2>0;ns2--)                        //Space in between two numbers (top side of x)
            {
                cout<<" ";
            }
            
            if(ns>=uin2+1)                                          //Space between two numbers (bottom side of x)
            {
                for(int ns3=nsb-1;ns3>0;ns3--)
                {
                    cout<<" ";
                }
            }
            
            if (ns!=uin2+1) cout<<uin;                              //Print out second number ONLY if not the middle/center
            
            uin--;                                                  //We subtract original input number for next line
            ns+=2;                                                  //We subtract additional 2 spaces for next line
            
            if (ns<=uin2+1) fs++;                                   //If top side of x, add another space in front of first number
            else
            {
                fs--;                                               //If bottom side, subtract
                nsb+=2;                                             //Add 2 spaces for bottom side middle space
            }
            
            cout<<endl;                                             //Next line and repeat
        }
    }
    else
    {
        for(int lp=uin;lp>0;lp--)                                   //Repeat print out lines til the number is 0
        {
            for(int fs2=0;fs2<fs;fs2++)                             //Space before first number
            {
                cout<<" ";
            }
            
            cout<<uin;                                              //Print out first number
            
            for(int ns2=uin2-ns;ns2>0;ns2--)                        //Space in between two numbers (top side of x)
            {
                cout<<" ";
            }
            
            if(ns>=uin2)                                            //Space between two numbers (bottom side of x)
            {
                for(int ns3=nsb-2;ns3>0;ns3--)
                {
                    cout<<" ";
                }
            }
            
            cout<<uin;                                              //Print out second number
            if (ns>=uin2 && ns!=uin2) fs--;
            uin--;                                                  //We subtract original input number for next line
            ns+=2;                                                  //We subtract additional 2 spaces for next line
            
            if (ns<=uin2) fs++;                                     //If top side of x, add another space in front of first number
            else
            {
                nsb+=2;                                             //Add 2 spaces for bottom side middle space
            }
                
            cout<<endl;                                             //Next line and repeat
        }
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 2 ****************************************
//Purpose:  SORT!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem2()
{
    //Declaration of Variables
    int     //in,
            in1,                //1st place holder
            in2,                //2nd place
            in3,                //3rd place
            in4;                //4th place
    
    string  in;                 //We put user's input into string to use array for each character/place
    
    //Ask user for a 4-character number
    do
    {
    cout<<"Enter 4-character number: ";cin>>in;
    }while(in.size()>4 || in.size()<4);
    cout<<endl;
    
    if(in[0]>=48 && in[0]<=57) in1=(in[0]-48);          //If each place is a number, assign to each variables
    if(in[1]>=48 && in[1]<=57) in2=(in[1]-48);          //100s place
    if(in[2]>=48 && in[2]<=57) in3=(in[2]-48);          //10s place
    if(in[3]>=48 && in[3]<=57) in4=(in[3]-48);          //1s place
    
    for(int lp=2;lp>0;lp--)                                                         //We loop TWICE just to make sure it's SORTED
    {
        if((in[0]>=48 && in[0]<=57) && (in[1]>=48 && in[1]<=57)) swap(in1,in2);     //Swap & SORT ONLY IF BOTH INTEGERS (1000s & 100s place)
        if((in[1]>=48 && in[1]<=57) && (in[2]>=48 && in[2]<=57)) swap(in2,in3);     //(100s & 10s place)
        if((in[2]>=48 && in[2]<=57) && (in[3]>=48 && in[3]<=57)) swap(in3,in4);     //(10s & 1s place)
        if((in[0]>=48 && in[0]<=57) && (in[1]>=48 && in[1]<=57)) swap(in1,in2);     //(1000s & 100s place)
        if((in[1]>=48 && in[1]<=57) && (in[2]>=48 && in[2]<=57)) swap(in2,in3);     //(100s & 10s place)
        if((in[2]>=48 && in[2]<=57) && (in[3]>=48 && in[3]<=57)) swap(in3,in4);     //(10s & 1s place)
        if((in[0]>=48 && in[0]<=57) && (in[1]>=48 && in[1]<=57)) swap(in1,in2);     //(1000s & 100s place)
        if((in[0]>=48 && in[0]<=57) && (in[2]>=48 && in[2]<=57)) swap(in1,in3);     //(1000s & 10s place)
        if((in[1]>=48 && in[1]<=57) && (in[3]>=48 && in[3]<=57)) swap(in2,in4);     //(100s & 1s place)
        if((in[0]>=48 && in[0]<=57) && (in[3]>=48 && in[3]<=57)) swap(in1,in4);     //(1000s & 1s place)
    }
    
    if(in[0]>=48 && in[0]<=57)                                                      //If 1000s place=integer then print out NUMBER & STARS
    {
        cout<<in1<<" ";
        for(int rep=in1;rep>0;rep--)                                                
        {
            cout<<"*";
        }
    }
    else
    {
        cout<<in[0]<<" ";                                                           //ELSE print out character & ASCII code
        cout<<static_cast<int>(in[0]);
    }
    cout<<endl;
    
    if(in[1]>=48 && in[1]<=57)                                                      //If 100s place=integer then print out NUMBER & STARS
    {
        cout<<in2<<" ";
        for(int rep=in2;rep>0;rep--)                                                
        {
            cout<<"*";
        }
    }
    else                                                                            //ELSE print out character & ASCII CODE
    {
        cout<<in[1]<<" ";
        cout<<static_cast<int>(in[1]);
    }
    cout<<endl;
    
    if(in[2]>=48 && in[2]<=57)                                                      //If 10s place=integer then print out NUMBER & STARS
    {
        cout<<in3<<" ";
        for(int rep=in3;rep>0;rep--)
        {
            cout<<"*";
        }
    }
    else                                                                            //ELSE print out character & ASCII CODE
    {
        cout<<in[2]<<" ";
        cout<<static_cast<int>(in[2]);
    }
    cout<<endl;
    
    if(in[3]>=48 && in[3]<=57)                                                      //If 1s place=integer then print out NUMBER & STARS
    {
        cout<<in4<<" ";
        for(int rep=in4;rep>0;rep--)
        {
            cout<<"*";
        }
    }
    else                                                                            //ELSE print out character & ASCII CODE
    {
        cout<<in[3]<<" ";
        cout<<static_cast<int>(in[3]);
    }
    cout<<" ";
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 3 ****************************************
//Purpose:  CHECK!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem3()
{
    //Declaration of Variables
    int     amnt,                   //User's ammount
            pppp,                   //1000s place holder
            ppp,                    //100s place holder
            pp,                     //10s place holder
            p;                      //1s place holder
            
    
    string  date,                   //User's date
            pyee,                   //Payee
            acch,                   //Account holder
            sadd,                   //Street address
            city,                   //City
            state,                  //State
            zip,                    //Zip
            bank,                   //Bank
            rsn,                    //Reason
            oooos,                  //1000s place string to print
            ooos,                   //100s place string to print
            oos,                    //10s place string to print
            os;                     //1s place string to print
    
    //Ask user for information
    cout<<"Date:                            ";cin>>date;cin.ignore();           //Enter date
    cout<<"Payee:                           ";getline(cin,pyee);                //Enter Payee's name
    do                                                                          //Enter only 1-2999 or will repeat
    {
        cout<<"Amount:                          ";cin>>amnt;                    //Enter amount
    }while(amnt<0 || amnt>3000);
    cin.ignore();
    cout<<"Account Holder:                  ";getline(cin,acch);                //Enter Account Holder's name
    cout<<"Acc. Holder's Street Address:    ";getline(cin,sadd);                //Enter Account Holder's street address
    cout<<"Acc. Holder's City:              ";getline(cin,city);                //Enter Account Holder's city
    cout<<"Acc. Holder's State:             ";getline(cin,state);               //Enter Account Holder's state
    cout<<"Acc. Holder's Zip:               ";getline(cin,zip);                 //Enter Account Holder's zip
    cout<<"Bank:                            ";getline(cin,bank);                //Enter bank name
    cout<<"For(reason):                     ";getline(cin,rsn);                 //Enter reason
    cout<<endl<<endl;
    
    pppp=amnt/1000;                 //We get 1000s place number
    ppp=(amnt%1000)/100;            //We get 100s place number
    pp=(amnt%100)/10;               //We get 10s place number
    p=amnt%10;                      //We get 1s place number
    
    switch(pppp)                    //1000s place - Find out what to print
    {
        case 1: oooos="One Thousand "; break;
        case 2: oooos="Two Thousand "; break;
        default: oooos=""; break;
    }
    
    switch(ppp)                     //100s place - Find out what to print
    {
        case 1: ooos="One Hundred "; break;
        case 2: ooos="Two Hundred "; break;
        case 3: ooos="Three Hundred "; break;
        case 4: ooos="Four Hundred "; break;
        case 5: ooos="Five Hundred "; break;
        case 6: ooos="Six Hundred "; break;
        case 7: ooos="Seven Hundred "; break;
        case 8: ooos="Eight Hundred "; break;
        case 9: ooos="Nine Hundred "; break;
        default: ooos=""; break;
    }
    
    switch(pp)                    //10s place - Find out what to print
    {
        case 1: oos="teen"; break;
        case 2: oos="Twenty "; break;
        case 3: oos="Thirty "; break;
        case 4: oos="Forty "; break;
        case 5: oos="Fifty "; break;
        case 6: oos="Sixty "; break;
        case 7: oos="Seventy "; break;
        case 8: oos="Eighty "; break;
        case 9: oos="Ninety "; break;
        default: oos=""; break;
    }
    
    switch(p)                    //1s place - Find out what to print
    {
        case 1: os="One"; break;
        case 2: os="Two"; break;
        case 3: os="Three"; break;
        case 4: os="Four"; break;
        case 5: os="Five"; break;
        case 6: os="Six"; break;
        case 7: os="Seven"; break;
        case 8: os="Eight"; break;
        case 9: os="Nine"; break;
        default: os=""; break;
    }
    
    //Begin Printing Out CHECK
    cout<<"---------------------------------------------------------------------------"<<endl;
    cout<<acch<<endl;                                                               //PRINT Account Holder
    cout<<sadd<<endl;                                                               //PRINT Account Holder's Street Adress
    cout<<city<<", "<<state<<" "<<zip<<right<<setw(40)<<"Date: "<<date<<endl<<endl;       //PRINT Account Holder's City, State, Zip, and Date
    
    cout<<left<<setw(20)<<"Pay to the Order of: "<<left<<setw(21)<<acch<<right<<setw(20)<<"$ "<<amnt<<".00"<<endl<<endl;    //PRINT Pay to the order of account holder and show amount in number

                                                                                    //We show amount in ENGLISH WORDS
    if (pp==1)                   //If between "teens" place 10-19
    {
        switch(p)
        {
            case 1: cout<<oooos<<ooos<<"Eleven"; break;
            case 2: cout<<oooos<<ooos<<"Twelve"; break;
            case 3: cout<<oooos<<ooos<<"Thirteen"; break;
            case 4: cout<<oooos<<ooos<<"Fourteen"; break;
            case 5: cout<<oooos<<ooos<<"Fifteen"; break;
            case 6: cout<<oooos<<ooos<<"Sixteen"; break;
            case 7: cout<<oooos<<ooos<<"Seventeen"; break;
            case 8: cout<<oooos<<ooos<<"Eighteen"; break;
            case 9: cout<<oooos<<ooos<<"Nineteen"; break;
        }
    }
    else                        //Print whole number in English
    {
    cout<<oooos<<ooos<<oos<<os;
    }
    
    cout<<" no/100s Dollars"<<endl<<endl;           //We add at the end of English amount
    
    cout<<"Bank of "<<bank<<endl<<endl;             //Print out Bank name
    
    cout<<"FOR: "<<rsn<<right<<setw(50)<<pyee<<endl<<endl;      //Print out Reason and Payee's name
    
    cout<<"---------------------------------------------------------------------------"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 4 ****************************************
//Purpose:  ISP!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem4()
{
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
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Put function purpose here!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem5()
{
    
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//*************************   Problem 1 ****************************************
//Purpose:  Put function purpose here!
//Inputs:   Inputs to the function here  -> Description, Range, Units
//Output:   Outputs to the function here -> Description, Range, Units
//******************************************************************************

void problem6()
{
    
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