/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 5, 2016, 5:31 PM
   Purpose:         "Finds and prints all of the prime numbers between 3
                    and 100."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    for (int i=2; i<100; i++)               //Initialize with i=2, check if i<100, add 1 to i
    {
        bool prime=true;                    
        for (int j=2; j*j<=i; j++)          //Check if number is prime
        {
            if (i % j == 0)                 //If not prime, exit
            {
                prime=false;
                break;    
            }
        }   
        if(prime) cout << i << " ";         //If prime, then print number
    }
    
    //Display Output

    //Exit Program
    return 0;
}