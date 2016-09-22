/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 21, 2016, 7:56 PM
   Purpose: Allows the user to enter a number of quarters, dimes,
            and nickels and then outputs the monetary value of the coins in cents.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short   qrt, qrtIn,     //Total of Quarters, Quarters entered.
            dms, dmsIn,     //Total of Dimes, Dimes entered.
            nkl, nklIn;     //Total of Nickels, Nickels entered.
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"How many Quarters?"<<endl;       //Ask how many Quarters
    cin>>qrtIn;
    qrt=qrtIn*25;                           //Convert to cents
    
    
    cout<<"Quarters Entered = "<<qrtIn<<endl;
    cout<<"How many Dimes?"<<endl;          //Ask how many Dimes
    cin>>dmsIn;
    dms=dmsIn*10;                           //Convert to cents
    
    
    cout<<"Quarters Entered = "<<qrtIn<<endl;
    cout<<"Dimes Entered    = "<<dmsIn<<endl;
    cout<<"How many Nickels?"<<endl;        //Ask how many Nickels
    cin>>nklIn;
    nkl=nklIn*5;                            //Convert to cents
    
    
    cout<<"Quarters Entered = "<<qrtIn<<endl;
    cout<<"Dimes Entered    = "<<dmsIn<<endl;
    cout<<"Nickels Entered  = "<<nklIn<<endl<<endl;
    
    cout<<"Total            = "<<qrt+dms+nkl<<" cents"<<endl; //Total of coins IN CENTS

    //Exit Program
    return 0;
}