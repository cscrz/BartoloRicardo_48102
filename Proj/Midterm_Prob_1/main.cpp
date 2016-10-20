/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 20, 2016, 10:56 AM
   Purpose:         "Input the number than make an X in the following way"
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>       //
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
char spc(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int     uin,                                    //User input for a number
            ns=2,                                   //Number of space in the middle of 2 numbers in a line
            fs=0;                                     //Space before the first number in a line
    
    //Input values
    cout<<"Please enter a number between 1 and 50: ";cin>>uin;
    cout<<endl;                              
    
    if(uin%2!=0)                                    //If it's an even number
    {
        for(int lp=uin;lp>=1;lp--)
        {
            if(ns<=uin+1)
            {
                for(int fs2=fs;fs2!=0;fs2--)
                {
                    cout<<" ";
                }
            }
            else
            {
                for(int fs3=fs;fs3!=0;fs3--)
                {
                    cout<<" ";
                }
            }
            cout<<uin;
                for (int lp2=uin-ns;lp2>=1;lp2--)
                {
                    cout<<" ";
                }
            
//            if(ns<=uin) cout<<uin<<endl;
            
            if(ns<=uin)
            {
                cout<<uin<<endl;
                fs+=1;
            }
            else fs-=1;
            
            uin--;
            ns+=1;
            
//            if(ns<=uin+1) fs+=1;
//            else fs-=1;
        }
    }
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}

char spc(int num)
{
    return(' ');
}