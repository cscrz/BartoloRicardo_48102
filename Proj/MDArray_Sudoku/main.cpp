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
const short SIZE=9;

//Function prototypes
void fillArry(int [][SIZE]);
void display(int [][SIZE]);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables
    int table[SIZE][SIZE] = {{},{}};
    
    //Input values
    fillArry(table);
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    display(table);

    //Exit Program
    return 0;
}



//void fillArry(int array[][SIZE])
//{
//    short   rn,                                 //Random number to fill the slot in array
//            rn2;
//    
//    for(int x=0; x<SIZE; x++)
//    {
//        for(int y=0; y<SIZE; y++)                   //REPEAT 9 times to fill row
//        {
//            rn=rand()%SIZE+1;                          //Set random number to fill slot
//            rn2=rand()%SIZE+1;
//            
//            bool isSame;
//            
//            if(rn2==1)                              //If rn2 lands on 1, fill slot
//            {
//                do                                             //First find if the number has dupe
//                {
//                    for(int x2=0; x2<SIZE; x2++)
//                    {
//                        isSame=false;
//                        if(rn==array[x][x2])                  //Find in row
//                        {
//                            if(rn==9) rn=1;
//                            else rn++;
//                            isSame=true;
//                        }
//
//                        if(rn==array[x2][y])                  //Find in Col
//                        {
//                            if(rn==9) rn=1;
//                            else rn++;
//                            isSame=true;
//                        }
//                    }
//                }while(isSame==true);
//                array[x][y]=rn;                               //If no dupe, register number
//            }
//            
//            else if(rn2==2)                              //If rn2 lands on 1, fill slot
//            {
//                do
//                {
//                    for(int x2=0; x2<SIZE; x2++)        //Go through all 9 slots find if same number
//                    {
//                        isSame=false;
//                        if(rn==array[x][x2])                  //If same, set rn to 0 or blank
//                        {
//                            if(rn==9) rn=1;
//                            else rn++;
//                            isSame=true;
//                        }
//
//                        if(rn==array[x2][y])                  //If same, set rn to 0 or blank
//                        {
//                            if(rn==9) rn=1;
//                            else rn++;
//                            isSame=true;
//                        }
//                    }
//                }while(isSame==true);
//                array[x][y]=rn;                               //If no dupe, register number
//            }
//            
//            else if(rn2==3)                              //If rn2 lands on 1, fill slot
//            {
//                do
//                {
//                    for(int x2=0; x2<SIZE; x2++)        //Go through all 9 slots find if same number
//                    {
//                        isSame=false;
//                        if(rn==array[x][x2])                  //If same, set rn to 0 or blank
//                        {
//                            if(rn==9) rn=1;
//                            else rn++;
//                            isSame=true;
//                        }
//
//                        if(rn==array[x2][y])                  //If same, set rn to 0 or blank
//                        {
//                            if(rn==9) rn=1;
//                            else rn++;
//                            isSame=true;
//                        }
//                    }
//                }while(isSame==true);
//                array[x][y]=rn;                               //If no dupe, register number
//            }
//        }
//    }
//}





void fillArry(int array[][SIZE])
{
    short   rn,                                 //Random number to fill the slot in array
            rn2;
    
    for(int x=0; x<SIZE; x++)
    {
        for(int y=0; y<SIZE; y++)                   //REPEAT 9 times to fill row
        {
            rn=rand()%SIZE+1;                          //Set random number to fill slot
            rn2=rand()%SIZE+1;
            
            bool isSameX,isSameY;
            
            do
            {
                isSameX=false;
                isSameY=false;
                for(int x2=0; x2<SIZE; x2++)        //Go through all 9 slots find if same number
                {
                    if(array[x][x2]==rn)                  //If same, set rn to 0 or blank
                    {
                        if(rn==9) { rn=1; }
                        else { rn++; }
                        isSameX=true;
                        cout<<"STUCK IN X"<<endl;
                    }
                }
                
                
                if(isSameX==false)
                {
                    for(int x3=0; x3<SIZE; x3++)
                    {
                        if(array[x3][y]==rn)                  //If same, set rn to 0 or blank
                        {
                            if(rn==9) { rn=1; }
                            else { rn++; }
                            isSameY=true;
                            cout<<"STUCK IN Y"<<endl;
                        }
                    }
                }
            }while(isSameX==true || isSameY==true);
            array[x][y]=rn;
        }
    }
}









void display(int array[][SIZE])
{
    for(int x=0; x<SIZE; x++)
    {
        for(int y=0; y<SIZE; y++) 
        {
            cout<<array[x][y]<<" ";
        }
        cout<<endl;
    }
}