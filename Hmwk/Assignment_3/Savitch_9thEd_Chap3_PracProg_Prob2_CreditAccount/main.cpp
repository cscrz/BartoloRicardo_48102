/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 3, 2016, 10:12 PM
   Purpose:         
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>      //Show decimal
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float         MCAP=1000,          //$1000
                    INTR1=0.015f,       //Interest the first $1000
                    INTR2=0.01f,        //Interest after $1000
                    INTR3=0.1f,         //Minimum payment if > $10
                    MINAD=10;           //$10 minimum payment

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   accB,                       //Account Balance Input
            tota,                       //Total Amount Due
            mina,                       //Minimum Amount Due
            intrst1,                    //Total interest
            intrst2,                    //Interest after 1000
            amo1k;                      //Amount over 1000
    
    //Input values
    cout<<"Please enter the account balance."<<endl;        //Ask user to input balance
    cin>>accB;
    
    //Process values -> Map inputs to Outputs
    if (accB <= MCAP)                                       //If account balance is less than $1000
    {
        intrst1=INTR1*accB;                                 //Calculate interest
        tota=intrst1+accB;                                  //Add interest to total amount due
    }
    else                                                    //If account balance is more than $1000
    {
        amo1k=accB-MCAP;                                    //Calculate how much amount is over $1000
        intrst2=INTR2*amo1k;                                //Interest for amount over $1000
        intrst1=MCAP*INTR1;                                 //Interest 1.5% of $1000
        intrst1=intrst1+intrst2;                            //We add both interest over $1000 (1%) & first $1000 (1.5%)
        tota=intrst1+accB;                                  //We add total interest to total amount due
    }
    
    if (tota <= MINAD)                                      //If total amount due is <= $10
        mina=tota;                                          //Then minimum payment is the total amount due
    else if (MINAD < tota*INTR3)                            //If total amount times 10% is > than $10
        mina=tota*INTR3;                                    //Then minimum payment is total amount due * 10%
    else
        mina=MINAD;                                         //If total amount due * 10% is less than $10 then minimum payment is $10
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;                //Show decimal
    
    cout<<"Your total amount is     $"<<accB<<"."<<endl;    //Show output
    cout<<"The interest due is      $"<<intrst1<<"."<<endl;
    cout<<"The minimum payment is   $"<<mina<<"."<<endl;

    //Exit Program
    return 0;
}