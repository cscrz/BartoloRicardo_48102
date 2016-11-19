/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 18, 2016, 9:46 PM
   Purpose: "Write a function called delete_repeats that has a partially filled array of
            characters as a formal parameter and that deletes all repeated letters from the
            array."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int SIZE=10;                          //Size of array

//Function prototypes
void delete_repeats(char [],int);           //Declare function to delete repeats

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char    a[SIZE];                        //Array
    
    //Input values
    a[0]='a';                               //Assign values from 1-4
    a[1]='b';
    a[2]='a';
    a[3]='c';
    
    for(int c=0;c<SIZE;c++)                 //Display array values
    {
        cout<<a[c]<<" ";
    }
    
    //Process values -> Map inputs to Outputs
    delete_repeats(a,SIZE);                 //Find and delete repeats
    
    //Display Output
    cout<<endl;
    for(int c=0;c<SIZE;c++)                 //Display array values again
    {
        cout<<a[c]<<" ";
    }

    //Exit Program
    return 0;
}

void delete_repeats(char a[SIZE],int SIZE)
{
    char val;
    int pos;
    
    for(int c=0;c<SIZE;c++)
    {
        val=a[c];
        pos=c;
        for(int c=pos+1;c<SIZE;c++)
        {
            if(val==a[c]) a[c]=0;
        }
    }
}