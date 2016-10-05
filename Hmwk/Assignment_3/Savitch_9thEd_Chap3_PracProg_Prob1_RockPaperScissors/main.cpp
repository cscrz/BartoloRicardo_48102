/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 4, 2016, 7:56 PM
   Purpose:     "Program to score the paper-rock-scissor game. Each of two users
                types in either P, R, or S. The program then announces the winner."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>       //Strings
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const short     R=1,                    //Rock value
                P=2,                    //Paper value
                S=3;                    //Scissors value

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char        p1,                     //Player 1 input
                p2;                     //Player 2 input
    
    string rr("Rock");                  //String Rock to display
    string pp("Paper");                 //String Paper to display
    string ss("Scissors");              //String Scissors to display
    
    string sp1, sp2;                    //String container to display in output
    
    //Input values
    cout<<"Please enter your choice: R for Rock, P for Paper, S for Scissors."<<endl<<endl; //Remind user to use only R, P, or S
    cout<<"Player 1: ";cin>>p1;                                                 //Player 1 input
    cout<<endl;
    cout<<"Player 2: ";cin>>p2;                                                 //Player 2 input
    
    //Process values -> Map inputs to Outputs
    switch (p1)                                                                 //Switch statement for player 1 input
    {
        case 'R': p1=R; sp1=rr; break;
        case 'r': p1=R; sp1=rr; break;
        case 'P': p1=P; sp1=pp; break;
        case 'p': p1=P; sp1=pp; break;
        case 'S': p1=S; sp1=ss; break;
        case 's': p1=S; sp1=ss; break;
    }
    
    switch (p2)                                                                 //Switch statement for player 2 input
    {
        case 'R': p2=R; sp2=rr; break;
        case 'r': p2=R; sp2=rr; break;
        case 'P': p2=P; sp2=pp; break;
        case 'p': p2=P; sp2=pp; break;
        case 'S': p2=S; sp2=ss; break;
        case 's': p2=S; sp2=ss; break;
    }
     
    //Display Output
    cout<<endl;
    
    if (p1==p2)                                                                 //If draw
    {
        cout<<"Player 1 used "<<sp1<<"!"<<endl;
        cout<<"Player 2 used "<<sp2<<"!"<<endl<<endl;
        
        cout<<"IT's A DRAW!!"<<endl;
    }
    if (p1>p2)                                                                  //If player 1 win
    {
        cout<<"Player 1 used "<<sp1<<"!"<<endl;                                 //Display what both players used
        cout<<"Player 2 used "<<sp2<<"!"<<endl<<endl;
        
        cout<<sp1<<" beats "<<sp2<<endl;                                        //What beats what
        cout<<"Player 1 WINS!"<<endl;                                           //Declare who wins
    }
    else                                                                        //Player 2 win
    {
        cout<<"Player 1 used "<<sp1<<"!"<<endl;                                 //Display what both players used
        cout<<"Player 2 used "<<sp2<<"!"<<endl<<endl;
        
        cout<<sp2<<" beats "<<sp1<<endl;                                        //What beats what
        cout<<"Player 2 WINS!"<<endl;                                           //Declare who wins
    }

    //Exit Program
    return 0;
}