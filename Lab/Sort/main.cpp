/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 3, 2016, 10:12 PM
   Purpose:         
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
    int         a,
                b,
                c,
                d;
    
    //Input values
    cout<<"Please enter four numbers in any order."<<endl;
    cin>>a>>b>>c>>d;
    
    //Process values -> Map inputs to Outputs

    
    //Display Output
    //cout<<a<<b<<c<<d;
    
    if (a>b && a>c && a>d)
    {
        if (b>c && b>d)
        {
            if (c>d)
            {
                cout<<a<<b<<c<<d<<endl;
            }
            else
            {
                cout<<a<<b<<d<<c<<endl;
            }
        }
        if (c>b && c>d)
        {
            if (b>d)
            {
                cout<<a<<c<<b<<d<<endl;
            }
            else
            {
                cout<<a<<c<<d<<b<<endl;
            }
        }
        if (d>b && d>c)
        {
            if (b>c)
            {
                cout<<a<<c<<b<<d<<endl;
            }
            else
            {
                cout<<a<<c<<d<<b<<endl;
            }
        }
    }
    
    
    if (b>a && b>c && b>d)
    {
        if (a>c && a>d)
        {
            if (c>d)
            {
                cout<<a<<b<<c<<d<<endl;
            }
            else
            {
                cout<<a<<b<<d<<c<<endl;
            }
        }
        if (c>b && c>d)
        {
            if (b>d)
            {
                cout<<a<<c<<b<<d<<endl;
            }
            else
            {
                cout<<a<<c<<d<<b<<endl;
            }
        }
        if (d>b && d>c)
        {
            if (b>c)
            {
                cout<<a<<c<<b<<d<<endl;
            }
            else
            {
                cout<<a<<c<<d<<b<<endl;
            }
        }
    }
    
    if (c>a && c>b && c>d)
    {
        if (a>b && a>d)
        {
            if (c>d)
            {
                cout<<a<<b<<c<<d<<endl;
            }
            else
            {
                cout<<a<<b<<d<<c<<endl;
            }
        }
        if (b>a && b>d)
        {
            if (b>d)
            {
                cout<<a<<c<<b<<d<<endl;
            }
            else
            {
                cout<<a<<c<<d<<b<<endl;
            }
        }
        if (d>b && d>c)
        {
            if (b>c)
            {
                cout<<a<<c<<b<<d<<endl;
            }
            else
            {
                cout<<a<<c<<d<<b<<endl;
            }
        }
    }
    


    //Exit Program
    return 0;
}