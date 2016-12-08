/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on December 7, 2016, 10:12 PM
   Purpose: "Fill in a 9×9 grid with digits so that each column, row, and 3×3 
 *          section contain the numbers between 1 to 9. At the beginning of the 
 *          game, the 9×9 grid will have some of the squares filled in. Your job 
 *          is to use logic to fill in the missing digits and complete the grid."
 *          -www.sudoku.com
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <fstream>      //File I/O
#include <cstdlib>      //Random Generator
#include <ctime>        //Time
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void fillArry(int [],int);                                                      //Fill our arrays with random digits
void display(int []);                                                           //Display out arrays
bool find(int,int,int);
void load(int [],int [],int [],int [],int [],int [],int [],int [],int []);      //Load game
void save(int [],int [],int [],int [],int [],int [],int [],int [],int []);      //Save game

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    const short SIZE=9;                                                         //Array size
    
    int     x1[SIZE],                                                           //Rows
            x2[SIZE],
            x3[SIZE],
            x4[SIZE],
            x5[SIZE],
            x6[SIZE],
            x7[SIZE],
            x8[SIZE],
            x9[SIZE],
            y1[SIZE],                                                           //Columns
            y2[SIZE],
            y3[SIZE],
            y4[SIZE],
            y5[SIZE],
            y6[SIZE],
            y7[SIZE],
            y8[SIZE],
            y9[SIZE],
            z1[SIZE],                                                           //3x3 Section
            z2[SIZE],
            z3[SIZE],
            z4[SIZE],
            z5[SIZE],
            z6[SIZE],
            z7[SIZE],
            z8[SIZE],
            z9[SIZE];
    
    short   ans;                                                                //User's digit answer
    
    char    ans2;                                                               //User's answer (load/save)
    
    
    //Ask user if they want to Load or start a New Game
    cout<<"New game or Load from a file?"<<endl;
    cout<<"Press   N: New Game, L: Load"<<endl<<endl;
    
    cin>>ans2;
    
    //Depending on user's answer, switch if load or new game
    switch(ans2)
    {
        case 'l': { load(x1,x2,x3,x4,x5,x6,x7,x8,x9); break; }
        case 'L': { load(x1,x2,x3,x4,x5,x6,x7,x8,x9); break; }
        default : { ans2='n'; break; }
    }
    
    //If new game
    if(ans2=='n' || ans2=='N')
    {
        fillArry(x1,1);                                   //Fill each rows 1-9 with random numbers
        fillArry(x2,2);
        fillArry(x3,3);
        fillArry(x4,4);
        fillArry(x5,5);
        fillArry(x6,6);
        fillArry(x7,7);
        fillArry(x8,8);
        fillArry(x9,9);
    }
    
    
    //Process values -> Map inputs to Outputs
    
    //Display SUDOKU
    cout<<"Press   S: Save, Q: Quit"<<endl<<endl;
    
    cout<<"*************************************"<<endl;
    display(x1);
    cout<<endl;
    cout<<"*---+---+---*---+---+---*---+---+---*"<<endl;
    display(x2);
    cout<<endl;
    cout<<"*---+---+---*---+---+---*---+---+---*"<<endl;
    display(x3);
    cout<<endl;
    cout<<"*************************************"<<endl;
    display(x4);
    cout<<endl;
    cout<<"*---+---+---*---+---+---*---+---+---*"<<endl;
    display(x5);
    cout<<endl;
    cout<<"*---+---+---*---+---+---*---+---+---*"<<endl;
    display(x6);
    cout<<endl;
    cout<<"*************************************"<<endl;
    display(x7);
    cout<<endl;
    cout<<"*---+---+---*---+---+---*---+---+---*"<<endl;
    display(x8);
    cout<<endl;
    cout<<"*---+---+---*---+---+---*---+---+---*"<<endl;
    display(x9);
    cout<<endl;
    cout<<"*************************************"<<endl;
    
    for(int x=0; x<SIZE; x++)        //Go through all 9 slots find if same number
        {
            cout<<y1[x]<<endl;
        }
    
    
    cout<<endl<<endl;
    cin>>ans2;
    
    switch(ans2)
    {
        case 's': { save(x1,x2,x3,x4,x5,x6,x7,x8,x9); break; }
        case 'S': { save(x1,x2,x3,x4,x5,x6,x7,x8,x9); break; }
        case 'q': break;
        case 'Q': break;
        default: break;
    }
    //Exit Program
    return 0;
}





void fillArry(int array[],int row)
{
    short   rn,                                 //Random number to fill the slot in array
            rn2,                                //Random number to determine if we will write in slot or not
            size=9;                             //Size of our array
    
    bool    tof;
    
    for(int x=0; x<size; x++)                   //REPEAT 9 times to fill row
    {
        rn=rand()%9+1;                          //Set random number to fill slot
        rn2=rand()%9+1;                         //Set random number 2. If lands on (1-4), then fill slot
        
        if(rn2==1)                              //If rn2 lands on 1, fill slot
        {
            do
            {
                for(int x2=0; x2<size; x2++)        //Go through all 9 slots find if same number
                {
                    if(rn==array[x2])                  //If same, set rn to 0 or blank
                    {
                        rn=0;
                    }
                }
                
                tof=find(row,x,rn);
                
                if(tof==true)
                {
                    if(rn==9) rn=1;
                    else rn++;
                }
            }while(tof==true);
        }
        else if(rn2==2)                         //If rn2 lands on 2, fill slot
        {
            do
            {
                for(int x2=0; x2<size; x2++)        //Go through all 9 slots find if same number
                {
                    if(rn==array[x2])                  //If same, set rn to 0 or blank
                    {
                        rn=0;
                    }
                }
                
                find(row,x,rn);
                
                if(tof==true)
                {
                    if(rn==9) rn=1;
                    else rn++;
                }
            }while(tof==true);
        }
        else if(rn2==3)                         //If rn2 lands on 3, fill slot
        {
            do
            {
                for(int x2=0; x2<size; x2++)        //Go through all 9 slots find if same number
                {
                    if(rn==array[x2])                  //If same, set rn to 0 or blank
                    {
                        rn=0;
                    }
                }
                
                find(row,x,rn);
                
                if(tof==true)
                {
                    if(rn==9) rn=1;
                    else rn++;
                }
            }while(tof==true);
        }
        else if(rn2==4)                         //If rn2 lands on 4, fill slot
        {
            do
            {
                for(int x2=0; x2<size; x2++)        //Go through all 9 slots find if same number
                {
                    if(rn==array[x2])                  //If same, set rn to 0 or blank
                    {
                        rn=0;
                    }
                }
                
                find(row,x,rn);
                
                if(tof==true)
                {
                    if(rn==9) rn=1;
                    else rn++;
                }
            }while(tof==true);
        }
        else rn=0;
        
        array[x]=rn;                               //Fill slot in array
    }
}






void display(int array[])
{
    cout<<"* ";
    for(int x=0; x<9; x++)
    {
        if(array[x]==0) cout<<" ";
        else cout<<array[x];
        if(x==2 || x==5 || x==8) cout<<" * ";
        else cout<<" | ";
    }
}






void save(int x1[],int x2[],int x3[],int x4[],int x5[],int x6[],int x7[],int x8[],int x9[])
{
    ofstream savef;
    
    savef.open("savefile.dat");
    
    for(int x=0; x<9; x++)
    {
        savef<<x1[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x2[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x3[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x4[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x5[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x6[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x7[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x8[x]<<" ";
    }
    
    savef<<endl;
    
    for(int x=0; x<9; x++)
    {
        savef<<x9[x]<<" ";
    }
    
    cout<<"Saved!";
    savef.close();
}





void load(int x1[],int x2[],int x3[],int x4[],int x5[],int x6[],int x7[],int x8[],int x9[])
{
    ifstream savef;
    savef.open("savefile.dat");
    
    for(int x=0; x<9; x++)
    {
        savef>>x1[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x2[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x3[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x4[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x5[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x6[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x7[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x8[x];
    }
    
    for(int x=0; x<9; x++)
    {
        savef>>x9[x];
    }
    
    cout<<"LOADED!"<<endl<<endl;
    savef.close();
}

bool find(int row,int col,int num)
{
    short size=9;
    
    switch(col)
    {
        case 0:
        {
            for(int x=0; x<size; x++)        
                {
//                    if(num==y1[x])                  
//                    {
//                        return true;
//                    }
//                    else
//                    {
//                        y1[row]=num;
//                    }
                }
        }
    }
}