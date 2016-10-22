/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 21, 2016, 1:47 PM
   Purpose: "We would like to write a check.  Input the following:
            Date, Payee, Amount, and the account holder.  Output these
            in the following format, but the amount needs to be output
            numerically as well as grammatically just like a check."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>
#include <iomanip>
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
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

    //Exit Program
    return 0;
}