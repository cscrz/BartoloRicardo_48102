/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 17, 2016, 10:31 AM
   Purpose: "Write a function named countNum2s that takes as input an array of integers
            and an integer that specifies how many entries are in the array. The function
            should return the number of 2’s in the array."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int LENGTH=5;                 //Length of array

//Function prototypes
int countNum2s(int [LENGTH]);      //Function to input values in array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int array[LENGTH];              //Declare our array
    
    //Input values
    
    //Process values
    countNum2s(array);              //We start our function
    
    //Display Output

    //Exit Program
    return 0;
}



int countNum2s(int array[LENGTH])
{
    int     ans,                        //User's input value
            two=0;
    
    for(int c=0;c<LENGTH;c++)       //Begin asking for values. Repeat as many times as the length of array
        {
            cout<<"Please input value for entry "<<c+1<<": ";cin>>ans;      //Ask user for value
            array[c]=ans;                                                   //Input value in array base on position
        }
    
    cout<<endl;
    
    for(int c=0;c<LENGTH;c++)                                               //Show all values in our array
    {
        cout<<array[c]<<" ";
    }
    
    for(int c=0;c<LENGTH;c++)                                               //Do a search on all values in the array for number 2
    {
        if(array[c]==2) two++;
    }
    
    cout<<endl;
    cout<<"The number of TWO's in the array is "<<two<<"."<<endl;           //Show how many 2's found
    
}