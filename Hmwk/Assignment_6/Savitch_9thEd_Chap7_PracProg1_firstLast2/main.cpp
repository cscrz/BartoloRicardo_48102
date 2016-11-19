/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 15, 2016, 12:12 PM
   Purpose: "Write a function named firstLast2 that takes as input an array of integers
            and an integer that specifies how many entries are in the array. The function
            should return true if the array starts or ends with the digit 2. Otherwise it
            should return false."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int LENGTH=5;                 //Length of array

//Function prototypes
bool firstLast2(int [LENGTH]);      //Function to input values in array

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int array[LENGTH];              //Declare our array
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    firstLast2(array);              //Run function to input values in array
    
    //Display Output

    //Exit Program
    return 0;
}

bool firstLast2(int array[LENGTH])
{
    int ans;                        //User's input value
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
    
    cout<<endl;
    if(array[0]==2 || array[LENGTH-1]==2) cout<<"The array is TRUE"<<endl;  //Display if our array hold 2 in the first place or last place then it's TRUE
    else cout<<"The array is FALSE"<<endl;                                  //If not, display FALSE
}