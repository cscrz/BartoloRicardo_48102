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
#include <ctime>        //Time
#include <limits>       //Bad entry/input
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void prog(int,string,int,int,int,int,int,int,int,int,int,int,int,int,int,int);
void find(int,string,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&,int&);
void hangman(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    ifstream    inf;                                //Open list of words from a file
    
    string  name;                                   //Word that computer randomly picks from the list
    
    char    uan;                                    //User's letter guess
            
    
    int     rn,
            size,
            uana,
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
            a12=0,
            a13,
            a14,
            ng=10,                                  //Number of guesses/Life
            gr=1,                                   
            nyg=0,                                  //Letter not yet guess
            pt,                                     //Points
            gar[25],                                //We store user's guesses
            x=0,
            y=0,
            dm,                                     //User's difficulty choice
            dma=0;
    
    rn=rand()%15+1;                                 //Random number from 1-15 to pick a random word from the list of 15 lines
    
    cout<<"WELCOME TO THE \"WORD GUESSING GAME\""<<endl<<endl<<endl<<endl<<endl;
    
    do
    {
        cout<<"Please select difficulty!"<<endl;
        cout<<"1=Easy(1-5 letters), 2=Normal(8-10 letters), 3=HARD(10+ letters)"<<endl;
        cin>>dm;

        switch(dm)
        {
            case 1: { inf.open("ewords.dat"); dma=0; break; }
            case 2: { inf.open("nwords.dat"); dma=0; break; }
            case 3: { inf.open("hwords.dat"); dma=0; break; }
            default: { cout<<endl<<"Please enter 1, 2, or 3!"<<endl; dma=1; break; }
        }
        
        while(cin.fail())
        {
            cin.clear();
            cout<<endl<<endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
    }while(dma==1);
    
    for(int rn1=rn;rn1>0;rn1--)
    {
        inf>>name;
    }

    size=name.size();
    
    do
    {
        do
        {
            if(ng==0)                                               //If number of guesses/Life is 0, show answer and exit game!
            {
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                
                hangman(ng);
                
                cout<<"YOU LOSE!!!"<<endl<<endl;
                cout<<"The answer is: "<<name;
                exit(0);
            }
            
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            
            hangman(ng);
            
            if (gr==0)                                                  //If wrong guess, subtract from life, display warning
            {
                cout<<"YOU GUESSED WRONG!!! "<<ng<<" guesses left!"<<endl;
            }
            
            if (nyg==1) cout<<"YOU ALREADY GUESSED THAT LETTER! Try Again!"<<endl;
            
            cout<<endl;
            cout<<"Number of Guesses left = "<<ng<<endl;
            prog(size,name,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);
            
            nyg=0;
            cout<<endl;
            
            cout<<"Guess a letter: ";cin>>uan;                      //Ask user to guess a letter

            uana=static_cast<int>(uan);                             //Turn user input char into ascii
        
            if(uana>60 && uana<123)                                 //If lower case
            {
                uana-=32;                                           //Make it UPPERCASE
            }   
            
            for(int m=size;m>0;m--)                                 //Check answer if already guessed previously!
            {
                if(gar[x]==uana)
                {
                    cout<<endl;
                    nyg=1;
                    gr=1;
                }
                x++;
            }
            x=0;
        }while(nyg==1);                                                         //Repeat to ask user for another answer if already guessed
        
        gar[y]=uana;                                                            //Save the letter user guessed to array gar!

        gr=0;                                                   //Reset guess right or wrong
        
        find(uana,name,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,gr,pt);   //Find if answer is in the word, if not, subtract life

        prog(size,name,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);         //Display letters answered and unanswered
        
        if (gr==0)                                                  //If wrong guess, subtract from life, display warning
            {
                ng--;
            }
        
        y++;                                                                    //Go to next line in array
        
    }while(pt<size+1);
    
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    prog(size,name,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14);
    cout<<endl;
    cout<<"YOU WON THE GAME!!!"<<endl;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    

    inf.close();
    //Exit Program
    return 0;
}

void prog(int size, string nm, int an1, int an2, int an3, int an4, int an5, int an6, int an7, int an8, int an9, int an10, int an11, int an12, int an13, int an14)
{
    if (size>=1)
    {
        if(an1==1) cout<<nm[0]<<" ";
        else cout<<"_ ";
    }
    if (size>=2)
    {
        if(an2==1) cout<<nm[1]<<" ";
        else cout<<"_ ";
    }
    if (size>=3)
    {
        if(an3==1) cout<<nm[2]<<" ";
        else cout<<"_ ";
    }
    if (size>=4)
    {
        if(an4==1) cout<<nm[3]<<" ";
        else cout<<"_ ";
    }
    if (size>=5)
    {
        if(an5==1) cout<<nm[4]<<" ";
        else cout<<"_ ";
    }
    if (size>=6)
    {
        if(an6==1) cout<<nm[5]<<" ";
        else cout<<"_ ";
    }
    if (size>=7)
    {
        if(an7==1) cout<<nm[6]<<" ";
        else cout<<"_ ";
    }
    if (size>=8)
    {
        if(an8==1) cout<<nm[7]<<" ";
        else cout<<"_ ";
    }
    if (size>=9)
    {
        if(an9==1) cout<<nm[8]<<" ";
        else cout<<"_ ";
    }
    if (size>=10)
    {
        if(an10==1) cout<<nm[9]<<" ";
        else cout<<"_ ";
    }
    if (size>=11)
    {
        if(an11==1) cout<<nm[10]<<" ";
        else cout<<"_ ";
    }
    if (size>=12)
    {
        if(an12==1) cout<<nm[11]<<" ";
        else cout<<"_ ";
    }
    if (size>=13)
    {
        if(an13==1) cout<<nm[12]<<" ";
        else cout<<"_ ";
    }
    if (size>=14)
    {
        if(an14==1) cout<<nm[13]<<" ";
        else cout<<"_ ";
    }
}

void find(int let, string nm, int& an1, int& an2, int& an3, int& an4, int& an5, int& an6, int& an7, int& an8, int& an9, int& an10, int& an11, int& an12, int& an13, int& an14, int& lf, int& p)
{
    if (let==nm[0]) {an1=1; p++; lf=1;}
    if (let==nm[1]) {an2=1; p++; lf=1;}
    if (let==nm[2]) {an3=1; p++; lf=1;}
    if (let==nm[3]) {an4=1; p++; lf=1;}
    if (let==nm[4]) {an5=1; p++; lf=1;}
    if (let==nm[5]) {an6=1; p++; lf=1;}
    if (let==nm[6]) {an7=1; p++; lf=1;}
    if (let==nm[7]) {an8=1; p++; lf=1;}
    if (let==nm[8]) {an9=1; p++; lf=1;}
    if (let==nm[9]) {an10=1; p++; lf=1;}
    if (let==nm[10]) {an11=1; p++; lf=1;}
    if (let==nm[11]) {an12=1; p++; lf=1;}
    if (let==nm[12]) {an13=1; p++; lf=1;}
    if (let==nm[13]) {an14=1; p++; lf=1;}
}

void hangman(int life)
{
    switch(life)
    {
        case 10:
        {
            break;
        }
        
        case 9:
        {
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"      "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"	 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 8:
        {
            cout<<"      *"<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 7:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *           "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 6:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *           "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 5:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *            "<<endl;
            cout<<"      *           "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 4:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *           "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 3:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            **"<<endl;
            cout<<"      *            * *"<<endl;
            cout<<"      *            *  *"<<endl;
            cout<<"      *            *   *"<<endl;
            cout<<"      *           "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 2:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *           ***"<<endl;
            cout<<"      *          * * *"<<endl;
            cout<<"      *         *  *  *"<<endl;
            cout<<"      *        *   *   *"<<endl;
            cout<<"      *           "<<endl;
            cout<<"      *          "<<endl;
            cout<<"      *         "<<endl;
            cout<<"      *        "<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 1:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *           ***"<<endl;
            cout<<"      *          * * *"<<endl;
            cout<<"      *         *  *  *"<<endl;
            cout<<"      *        *   *   *"<<endl;
            cout<<"      *           *"<<endl;
            cout<<"      *          *"<<endl;
            cout<<"      *         *"<<endl;
            cout<<"      *        *"<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
        
        case 0:
        {
            cout<<"      **************"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *         *******"<<endl;
            cout<<"      *          *****"<<endl;
            cout<<"      *            *"<<endl;
            cout<<"      *           ***"<<endl;
            cout<<"      *          * * *"<<endl;
            cout<<"      *         *  *  *"<<endl;
            cout<<"      *        *   *   *"<<endl;
            cout<<"      *           * *"<<endl;
            cout<<"      *          *   *"<<endl;
            cout<<"      *         *     *"<<endl;
            cout<<"      *        *       *"<<endl;
            cout<<"      *                 "<<endl;
            cout<<"******************      "<<endl;
            break;
        }
    }
}

