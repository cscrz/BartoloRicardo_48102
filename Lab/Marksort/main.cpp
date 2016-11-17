/* 
 * File:   main.cpp
 * Author: Ricardo Bartolo Jr
 * Created on November 17th, 2016, 9:37 AM
 * Purpose:  Mark Sort in 3
 */

//System Libraries Here
#include <iostream>  //I/O
#include <cstdlib>   //Random
#include <ctime>     //Time
#include <vector>       //Vector
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(vector<int>&,int);
void prntAry(vector<int>&,int);
void swap(int &,int &);
void minPos(vector<int>&,int,int);
void markSrt(vector<int>&,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int const SIZE=100;
    int utilize;
    
    vector<int> vec(SIZE);
    
    //Input or initialize values Here
    do{
        cout<<"How much of the array to utilize?"<<endl;
        cout<<"Choose a number between 2 and 100"<<endl;
        cin>>utilize;
    }while(utilize<2||utilize>100);
    
    //Fill the array
    fillAry(vec,utilize);
    
    //Output Located Here
    prntAry(vec,utilize);
    
    //Test out minPos
    markSrt(vec,utilize);
    
    //Output Located Here
    prntAry(vec,utilize);

    //Exit
    return 0;
}

void markSrt(vector<int> &a,int size)
{
    int     i2=0;
    
    for(int i=0;i<size-1;i++)
    {
        i2=i;
        
        for(int ii=i2+1;ii<size;ii++)
        {
            if(a[i2]>a[ii])
            {
                a[i2]=(a[i2])^(a[ii]);
                a[ii]=(a[i2])^(a[ii]);
                a[i2]=(a[i2])^(a[ii]);
            }
        }
    }
}



//void markSrt(int a[],int size){
//    for(int i=0;i<size-1;i++){
//        minPos(a,size,i);
//    }
//}
//
//void minPos(int a[],int size,int pos){
//    for(int i=pos+1;i<size;i++){
//        if(a[pos]>a[i])swap(a[pos],a[i]);
//    }
//}
//
//void swap(int &a,int &b){
//    //Temp memory Swap
//    //int temp=a;
//    //a=b;
//    //b=temp;
//    //In place memory Swap
//    a=a^b;
//    b=a^b;
//    a=a^b;
//}

void prntAry(vector<int> &a,int n){
    //Output Located Here
    cout<<"The Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(vector<int> &a,int n){
    //Fill the array
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Random 2 digit number
    }
}