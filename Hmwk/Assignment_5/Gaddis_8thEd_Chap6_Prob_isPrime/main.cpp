/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on Nov 1st, 2016, 12:00 PM
   Purpose:  Find all Primes
 *           Utilize with and without the approximation of Square Root
 *           Utilize with and without the limit on prime search
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Square root
#include <iomanip>    //formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
bool  isPrime(int);
float apxSqrt(int);//Approximate Square Root

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare counter
    int count=0,columns=10;
    //Display Output
    for(int i=-100;i<=100000;i++){
        if(isPrime(i)){
            cout<<setw(3)<<i<<" ";
            count++;
            if(count==columns){
                cout<<endl;
                count=0;
            }
        }
    }

    //Exit Program
    return 0;
}

float apxSqrt(int n){
    float guess=n/2,r;
    float tol=1e-1f;
    do{
        r=n/guess;
        guess=(r+guess)/2;
    }while((guess-r)>tol);
    return guess;
}

bool isPrime(int n){
    if(n<2)return false;
    float sqrtn=apxSqrt(n);//Approximate Square Root -> Babylonians
    //float sqrtn=sqrt(n);
    //for(int i=2;i<=n-1;i++){//Inefficient
    for(int i=2;i<=sqrtn;i++){//Efficient
        if(n%i==0)return false;
    }
    return true;
}