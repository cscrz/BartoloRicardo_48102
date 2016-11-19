/* 
 * File:   main.cpp
 * Author: Ricardo Bartolo Jr.
 * Created on November 8th, 2016, 9:37 AM
 * Purpose:  Grading a 20 Question DMV Exam using a vector
 */

//System Libraries Here
#include <iostream>  //I/O
#include <fstream>   //I/O
#include <vector>    //Vector
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(char [],vector<char> &,int &);
void prntAry(char [],vector<char> &,int);
int  score(vector<char> &,vector<char> &,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int const SIZE=100;
    vector<char> key(SIZE),user(SIZE);
    int utilize;
    
    //Fill the array
    char fnKey[]="key.dat";
    char fnUser[]="user.dat";
    fillAry(fnKey,key,utilize);
    fillAry(fnUser,user,utilize);
    
    //Output Located Here
    prntAry(fnKey,key,utilize);
    prntAry(fnUser,user,utilize);
    
    //Results
    cout<<"The percentage = "
        <<100.0f*score(key,user,utilize)/utilize<<"%"<<endl;
    
    //Exit
    return 0;
}

int  score(vector<char> &key,vector<char> &user,int n){
    //Declare Variables
    int correct=0;
    //Score the test
    for(int i=0;i<n;i++){
        if(key[i]==user[i])correct++;
    }
    //Return the number correct
    return correct;
}

void prntAry(char fn[],vector<char> &a,int n){
    //Output Located Here
    int count=0;
    cout<<"The Array is from file -> "<<fn<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if((count++)%10==9)cout<<endl;
    }
    cout<<endl;
}

void fillAry(char fn[],vector<char> &a,int &n){
    //Declare variables and open the file
    ifstream in;
    n=0;
    
    //Open the stream
    in.open(fn);
    
    //Read in data
    while(in>>a[n++]);
    n--;
    
    //Close the file
    in.close();
}