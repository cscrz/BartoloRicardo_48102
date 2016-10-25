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
#include <cstdlib>      //Random Generator
#include <ctime>         //Time
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    ifstream    ine,                                //1-5 letters
                inn,                                //8-10 letters
                inh;                                //10+ letters
    
    string  name;
    
    int     rn,
            size,
            ch1;
    
    rn=rand()%15+1;
    
    ine.open("ewords.dat");
    
    for(int rn1=rn;rn1>0;rn1--)
    {
        ine>>name;
    }
    
    ch1=name[0];
    size=name.size();
    
    cout<<"Rand="<<rn<<endl;
    cout<<name<<size<<ch1;
    
    
    //Input values
//    in.open("words.dat");
//    in>>name1>>name2;
//    cout<<"Name 1 = "<<name1<<endl;
//    cout<<"Name 2 = "<<name2<<endl;
    

    
    
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    ine.close();
    //Exit Program
    return 0;
}