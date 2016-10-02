/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 29, 2016, 11:54 AM
   Purpose:  A program that prompts the user to enter strings and output them into a story.
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
    char    inst[16],               //Instructor name
            nm[16],                 //User name
            fd[16],                 //Food name
            adj[16],                //Adjective
            cl[16],                 //Color
            ani[16];                //Animal name
    
    int     rn;                     //Random number
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<"(Minimum of 16 characters per answer.)"<<endl<<endl;                 //Remind that the minimum of characters is 16
    cout<<"Please enter the first or last name of your instructor."<<endl;      //Ask user for instructor input name
    cin>>inst;
    
    cout<<endl;
    cout<<"You have entered \""<<inst<<"\" as your instructor name."<<endl<<endl;//Remind user what they entered for the previous question
    cout<<"Please enter your name."<<endl;                                      //Ask user for their name
    cin>>nm;
    
    cout<<endl;
    cout<<"You have entered \""<<nm<<"\" as your name."<<endl<<endl;            //Remind user what they entered for the previous question
    cout<<"Please enter a name of a food."<<endl;                               //Ask user for a food name
    cin>>fd;
    
    cout<<endl;
    cout<<"You have entered \""<<fd<<"\" for food."<<endl<<endl;                //Remind user what they entered for the previous question
    cout<<"Please enter a number between 100 and 120."<<endl;                   //Ask user for a number
    cin>>rn;

    cout<<endl;
    cout<<"You have entered \""<<rn<<"\" as a random number."<<endl<<endl;      //Remind user what he entered for the previous question
    cout<<"Please enter an adjective."<<endl;                                   //Ask user for an adjective
    cin>>adj;
    
    cout<<endl;
    cout<<"You have entered \""<<adj<<"\" for an adjective."<<endl<<endl;       //Remind user what they entered for the previous question
    cout<<"Please enter a color."<<endl;                                        //Ask user for a color
    cin>>cl;
    
    cout<<endl;
    cout<<"You have entered \""<<cl<<"\" as a color."<<endl<<endl;              //Remind user what they entered for the previous question
    cout<<"Please enter an animal name."<<endl;                                 ////Ask user for an animal name
    cin>>ani;
    
    cout<<endl;
    cout<<"You have entered \""<<ani<<"\" for an animal name."<<endl<<endl;     //Remind user what they entered for the previous question

    cout<<"Dear Instructor "<<inst<<","<<endl<<endl;                            //Print out the letter
    
    cout<<      "I am sorry that I am unable to turn in my homework at this time."<<endl<<
                "I ate a rotten "<<fd<<", which made me turn "<<cl<<" and extremely ill."<<endl<<
                "I came down with a fever of "<<rn<<". Next, my "<<adj<<" pet "<<ani<<endl<<
                "must have smelled the remains of the "<<fd<<" on my homework, "<<endl<<
                "because he ate it. I am currently rewriting my homework and hope"<<endl<<
                "you will accept it late."<<endl<<endl;
    
    cout<<      "Sincerely, "<<endl<<nm;

    //Exit Program
    return 0;
}