/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on August 29, 2016, 9:41 AM
   Purpose:  
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
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"The size of a boolean            = "<<sizeof(bool)<<" byte";
    cout<<" [0 -> false, true otherwise]\n";
    cout<<"The size of a character          = "<<sizeof(char)<<" byte";
    cout<<" [-2^7,2^7-1],[-128,127]\n";
    cout<<"The size of a unsigned character = "<<sizeof(unsigned char)<<" byte";
    cout<<" [0,2^8-1],[0,255]\n";
    cout<<"The size of a short              = "<<sizeof(short)<<" bytes";
    cout<<" [-2^15,2^15-1],[-32768,32768]\n";
    cout<<"The size of a unsigned short     = "<<sizeof(unsigned short)<<" bytes";
    cout<<" [0,2^16-1],[0,65535]\n";
    cout<<"The size of a integer            = "<<sizeof(int)<<" bytes";
    cout<<" [-2^31,2^31-1],[+-2.15 Billion]\n";
    cout<<"The size of a unsigned integer   = "<<sizeof(unsigned int)<<" bytes";
    cout<<" [0,2^32-1],[4.3 Billion]\n";
    cout<<"The size of a long               = "<<sizeof(long)<<" bytes";
    cout<<" [-2^63,2^63-1],[+-9.2 Quintillion]\n";
    cout<<"The size of a unsigned long      = "<<sizeof(unsigned long)<<" bytes";
    cout<<" [0,2^64-1],[18.4 Quintillion]\n";
    cout<<"The size of a float              = "<<sizeof(float)<<" bytes";
    cout<<" [10^+-38], 7SD\n";
    cout<<"The size of a double             = "<<sizeof(double)<<" bytes";
    cout<<" [10^+-308], 16SD\n";
    cout<<"The size of a long double        = "<<sizeof(long double)<<" bytes";
    cout<<" [10^+-4932], 33SD\n";
    //Exit Program
    return 0;
}