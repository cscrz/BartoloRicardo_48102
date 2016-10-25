/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 24, 2016, 11:18 PM
   Purpose: "User have to guess the letters of the word and will have a maximum 
 *          of 10 guesses in order to win.
 *          If the user does not guess each letter in 10 guesses, they will lose."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <fstream>      //File I/O
#include <string>       //String Library
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    ifstream in;
    ofstream out;
    
    string  name1,
            name2;
    
    //Input values
    in.open("words.dat");
    in>>name1>>name2;
    cout<<"Name 1 = "<<name1<<endl;
    cout<<"Name 2 = "<<name2<<endl;
    
    
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    in.close();
    //Exit Program
    return 0;
}