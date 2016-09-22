/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 20th, 2016, 12:13 PM
   Purpose:  Use trigonometric functions
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <iomanip>      //Formatting
#include <cmath>        //Sin Cos Tan
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=4*atan(1.0);//PI
const float CNVDEGR=PI/180;//Conversion from degrees to radians

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float deg,radians;
    
    //Input values
    deg=0;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"[ Degrees, Radians,    Sine,  Cosine,  Tanget]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Input values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display Output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
        <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
        <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    //Exit Program
    return 0;
}