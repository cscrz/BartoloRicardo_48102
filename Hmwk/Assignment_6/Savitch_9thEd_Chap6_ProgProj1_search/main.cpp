/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 18, 2016, 10:27 PM
   Purpose: "Write a program that will search a file of numbers of type int and write the
            largest and the smallest numbers to the screen. The file contains nothing
            but numbers of type int separated by blanks or line breaks."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const int SIZE=5;                           //Declare size of array

//Function prototypes
int findLARGE(int [],int);                  //Function to find largest number
int findSMALL(int [],int);                  //Function to find smallest number

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int array[SIZE];                        //Declare array
    int     a,                              //User's answer
            large,                          //Largest value
            small;                          //Smallest value
    
    //Input values
    for(int c=0;c<SIZE;c++)                 //Ask user for values in the array
    {
        cout<<"Enter integer value for positon "<<c+1<<": ";cin>>a;
        array[c]=a;
    }
    
    //Process values
    large=findLARGE(array,SIZE);            //Start to find largest value
    small=findSMALL(array,SIZE);            //Start to find largest value
    
    //Display Output
    cout<<endl;
    for(int c=0;c<SIZE;c++)                 //Display all values in array
    {
        cout<<array[c]<<" ";
    }
    
    cout<<endl<<endl;                       //Display largest and smallest
    cout<<"The largest value in the array is: "<<large<<endl;
    cout<<"The smallest value in the array is: "<<small<<endl;

    //Exit Program
    return 0;
}

int findLARGE(int a[SIZE],int s)
{
    int high;
    high=a[0];
    for(int c=0;c<s;c++)
    {
        if(a[c]>high) high=a[c];
    }
    return high;
}

int findSMALL(int a[SIZE],int s)
{
    int small;
    small=a[0];
    for(int c=0;c<s;c++)
    {
        if(a[c]<small) small=a[c];
    }
    return small;
}