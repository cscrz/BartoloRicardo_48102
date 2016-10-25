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
void prog(int,int,string);
int find(int,int,string);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    ifstream    ine,                                //1-5 letters
                inn,                                //8-10 letters
                inh;                                //10+ letters
    
    string  name;
    
    char    uan;
    
    int     rn,
            size,
            uana,
            ch1,
            ch2,
            ch3,
            ch4,
            ch5,
            ch6,
            ch7,
            ch8,
            ch9,
            ch10,
            ch11,
            ch12,
            ch13,
            ch14,
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12,
            a13,
            a14,
            fn;
    
    rn=rand()%15+1;
    
    ine.open("ewords.dat");
    
    for(int rn1=rn;rn1>0;rn1--)
    {
        ine>>name;
    }
    
    ch1=name[0];
    ch2=name[1];
    ch3=name[2];
    ch4=name[3];
    ch5=name[4];
    ch6=name[5];
    ch7=name[6];
    ch8=name[7];
    ch9=name[8];
    ch10=name[9];
    ch11=name[10];
    ch12=name[11];
    ch13=name[12];
    ch14=name[13];
    
    size=name.size();
    
    cout<<"Rand="<<rn<<endl;
    cout<<ch1<<" "<<ch2<<" "<<ch3<<" "<<ch4<<" "<<ch5<<" "<<ch6<<" "<<ch7<<" ";
    cout<<ch8<<" "<<ch9<<" "<<ch10<<" "<<ch11<<" "<<ch12<<" "<<ch13<<" "<<ch14<<endl;
    
    cout<<name<<size<<static_cast<char>(ch1)<<endl<<endl;
    
    prog(uana,size,name);
    
    cout<<"Guess a letter: ";cin>>uan;
    
    uana=static_cast<int>(uan);
    
    if(uana>60 && uana<123)                                 //If lower case
    {
        uana-=32;                                           //Make it UPPERCASE
    }
    
    uan=static_cast<char>(uana);
    cout<<static_cast<char>(uana)<<endl;
    
    switch(fn)
    {
        case 0: a1=1; break;
        case 1: a2=1; break;
        case 2: a3=1; break;
        case 3: a4=1; break;
        case 4: a5=1; break;
        case 5: a6=1; break;
        case 6: a7=1; break;
        case 7: a8=1; break;
        case 8: a9=1; break;
        case 9: a10=1; break;
        case 10: a11=1; break;
        case 11: a12=1; break;
        case 12: a13=1; break;
        case 13: a14=1; break;
        default: break;
    }

    prog(uana,size,name);
    
    cout<<uana<<static_cast<int>(name[0]);
    
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    ine.close();
    //Exit Program
    return 0;
}

void prog(int let, int size, string nm)
{
    for(int sz=size;sz>0;sz--)
    {
        int x;
        if (let==static_cast<int>(nm[x]))
        {
            cout<<"!!!!";
        }
        else
        {
            cout<<"_ ";
        }
        x++;
    }
}

int find(int let, int size, string nm)
{
    int x;
    for(int sz=size;sz>0;sz--)
    {
        if(let==nm[x])
        {
            return x;
        }
        x++;
    }
}