/* File:   main.cpp
 * Author: Ricardo Bartolo
 * Created on September 7, 2016, 9 PM
 * Purpose: Program that reads in two integers and then outputs both their
 *          sum and their product
 */

//Include system level libraries
#include <iostream>      //Input/Output Libraries
using namespace std;    //Libraries compiled under standard namespace

//User Libraries

//Global Constants

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short x=33, y=22, sum, pdct;     //Two integers
    
    //Calculate
    sum=x+y;
    pdct=x*y;
    
    //Output the results
    cout<<"Two integers with their Sum and Product "<<endl;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    cout<<"x + y = "<<sum<<endl;
    cout<<"x * y = "<<pdct<<endl;
    
    //Exit
    return 0;
}