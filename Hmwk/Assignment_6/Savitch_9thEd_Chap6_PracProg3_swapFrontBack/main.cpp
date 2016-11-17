/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 15, 2016, 12:12 PM
   Purpose: "Write a function named swapFrontBack that takes as input an array of integers
            and an integer that specifies how many entries are in the array. The
            function should swap the first element in the array with the last element in
            the array."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int SIZE=5;                 //Length of array

//Function prototypes
void swapFrontBack(int [SIZE]);      //Function to input values in array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int array[SIZE];              //Declare our array
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    swapFrontBack(array);              //Run function to input values in array
    
    //Display Output

    //Exit Program
    return 0;
}

void swapFrontBack(int array[SIZE])
{
    int     ans,                        //User's input value
            temp;                       //Temp for swapping
    for(int c=0;c<SIZE;c++)       //Begin asking for values. Repeat as many times as the length of array
        {
            cout<<"Please input value for entry "<<c+1<<": ";cin>>ans;      //Ask user for value
            array[c]=ans;                                                   //Input value in array base on position
        }
    
    cout<<endl;
    
        for(int c=0;c<SIZE;c++)                                             //Show all values in our array UNSWAPPED
    {
        cout<<array[c]<<" ";
    }
    
    cout<<endl;
    
    if (array[0]==0 || array[SIZE-1]==0) return;                            //Check if first value and last value is NOT zero
    
    temp=array[0];                                                          //Copy first value
    array[0]=array[SIZE-1];                                                 //Turn first value into last
    array[SIZE-1]=temp;                                                     //Turn last value into copied first value
    
    for(int c=0;c<SIZE;c++)                                               //Show all values in our array
    {
        cout<<array[c]<<" ";
    }
}