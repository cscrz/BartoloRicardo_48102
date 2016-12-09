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
#include <cstdlib>      //Random Generator
#include <ctime>        //Time
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void fillArry(int []);
void display(int []);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    const short SIZE=9;
    
    int array[SIZE]={};
    
    //Input values
    fillArry(array);
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    display(array);

    //Exit Program
    return 0;
}


void fillArry(int array[])
{
    short   size=9,
            rn;
    
    bool isSame;
    
    for(int x=0; x<size; x++)
    {
        rn=rand()%size+1;
        
        do
        {
            isSame=false;
            for(int x2=0; x2<size; x2++)
            {
                
                if(array[x2]==rn)
                {
                    cout<<"DUPE! Place:"<<x2<<" N:"<<rn<<endl;
                    if(rn==9) { rn=1; }
                    else { rn++; }
                    isSame=true;
                }
            }
        }while(isSame==true);
        
        array[x]=rn;
    }
}



void display(int array[])
{
    for(int x=0; x<9; x++)
    {
        cout<<array[x]<<" ";
    }
}