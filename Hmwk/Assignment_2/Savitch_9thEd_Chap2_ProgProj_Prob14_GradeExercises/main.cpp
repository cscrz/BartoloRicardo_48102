/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 1, 2016, 4:32 PM
   Purpose:     "Calculates the total grade for N classroom exercises
                as a percentage. The user should input the value for N followed by each of
                the N scores and totals. Calculate the overall percentage (sum of the total
                points earned divided by the total points possible) and output it as a percentage."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>      //Set precision
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int PERCENT=100;                          //Percentage conversion

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short  N,                          //Number of exercises
                    en=1;                       //Exercise number
    
    float   scr,                                //Score in an exercise
            pscr,                               //Total possible score in an exercise
            totscr,                             //User's score in total
            totpscr,                            //Total possible score altogether
            totper;                             //Total grade percentage
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;    //Show decimal
    
    cout<<"How many exercises to input? ";      //Ask user how many exercises
    cin>>N;
    
    while (N>0)                                 //Repeat to ask for user's score and total possible score N times
    {
        cout<<endl;
        cout<<"Score received for exercise "<<en<<": ";cin>>scr;                //Ask user's score
        cout<<"Total points possible for exercise "<<en<<": ";cin>>pscr;        //Ask user for total possible score
        
        totscr += scr;                                                          //Add score to score in total
        totpscr += pscr;                                                        //Add total possible score altogether
        
        N -= 1;                                                                 //Subtract number of exercises until 0 to exit LOOP
        en += 1;                                                                //Increase exercise number for next loop pass
    }

    totper=(totscr/totpscr)*PERCENT;                                            //Calculate user's grade then convert to percent
    
    cout<<endl;
    cout<<"Your total is "<<totscr<<" out of "<<totpscr<<", or "<<totper<<"%."; //Display results

    //Exit Program
    return 0;
}