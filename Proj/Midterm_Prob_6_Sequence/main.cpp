/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 21, 2016, 8:25 PM
   Purpose: 
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <cmath>        //For power/exponent
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   x,                          //x value
            dm=1.0f,                    //Denominator value
            nc2=1,                      //Sequence counter 2 for denominator
            tot;                        //Total
    
    int     sign=1,                     //Determine if will add(0) or not(1)
            n,                          //Number of sequence user will input
            nc=2;                       //Number of sequence counter

    
    //Ask user for x and n=number of sequence
    cout<<"Please input x: ";cin>>x;
    cout<<"Please input the number or terms: ";cin>>n;
    cout<<endl;

    cout<<"Sum = 1";                            //Print out the sequence...
    
    for(int lp=n;lp>0;lp--)                     //Loop until n reaches 0
    {
        if (sign%2==0)                          //Check if counter is even number we are ADDING
        {
            for(int lp=nc;lp>0;lp--)            //Loop - We calculate denominator nc times
                {
                    dm=dm*nc2;                  //Multiply 1*2*3*4....
                    nc2++;                      //Add 1 to the number we are multiplying each pass
                }
            tot+=(pow(x,nc))/dm;                //Calculate total so far and add to tot
            cout<<" + "<<x<<"^"<<nc<<"/"<<dm;   //Print out to see
        }
        else if (sign%2==1)                     //Check if counter is odd number we are SUBTRACTING
        {
            for(int lp=nc;lp>0;lp--)            //Loop - We calculate denominator nc times
                {
                    dm=dm*nc2;                  //Multiply 1*2*3*4....
                    nc2++;                      //Add 1 to the number we are multiplying each pass
                }
            tot-=(pow(x,nc))/dm;                //Calculate total so far and add to tot
            cout<<" - "<<x<<"^"<<nc<<"/"<<dm;   //Print out to see
        }
        sign+=1;                                //Counter increases by 1 each pass to alternate add or subtract
        nc+=2;                                  //Add 2 to nc for each pass uses for exponent and denominator
        dm=1;                                   //Reset denominator to 1 for next pass
        nc2=1;                                  //Reset nc2 to 1 for next pass to calculate denominator
    }
    
    cout<<" = "<<tot<<endl<<endl;               //Print out total
    cout<<"(Dr. Lehr I'm not sure if \"1\" is part of one sequence...)"<<endl;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}