/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 18, 2016, 11:35 AM
   Purpose:     "Outputs the lyrics for the song “Ninety-Nine Bottles
                of Beer on the Wall.” Your program should print the number of bottles in
                English, not as a number.
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int     tp,                         //Tenth Place of number
            op;                         //Ones Place of number
    
    string  tpw,                        //String value for tenth place
            opw;                        //String value for ones place
    
    //Input values
    
    //Repeat from 99 to 0
    for(int num=99;num>=0;num--)        
    {
        tp=num/10;                      //Divide number by 10 to get 10th place
        
        switch(tp)                      //Assign string for all 10th place
        {
            case 9: tpw="Ninety"; break;
            case 8: tpw="Eighty"; break;
            case 7: tpw="Seventy"; break;
            case 6: tpw="Sixty"; break;
            case 5: tpw="Fifty"; break;
            case 4: tpw="Forty"; break;
            case 3: tpw="Thirty"; break;
            case 2: tpw="Twenty"; break;
            case 1: tpw="teen"; break;
            default: tpw=""; break;
        }
        
        op=num%10;                      //Mod number to get ones place
        
        switch(op)                      //Assign string for all ones place
        {
            case 9: opw="Nine"; break;
            case 8: opw="Eight"; break;
            case 7: opw="Seven"; break;
            case 6: opw="Six"; break;
            case 5: opw="Five"; break;
            case 4: opw="Four"; break;
            case 3: opw="Three"; break;
            case 2: opw="Two"; break;
            case 1: opw="One"; break;
            default: opw=""; break;
        }
        
                
        if (op==0 && num>=20)                                               //If number is 20,30,40...
        {
            cout<<tpw<<" bottles of beer on the wall."<<endl;
            cout<<"..."<<endl<<endl;
            cout<<tpw<<" bottles of beer on the wall,"<<endl;
            cout<<tpw<<" bottles of beer,"<<endl;
            cout<<"Take one down, pass it around,"<<endl;
        }
        
        else if(num<20 && num>13 && num!=18 && num!=15)                     //If number is within "teens"
        {
            cout<<opw<<tpw<<" bottles of beer on the wall."<<endl;
            cout<<"..."<<endl<<endl;
            cout<<opw<<tpw<<" bottles of beer on the wall,"<<endl;
            cout<<opw<<tpw<<" bottles of beer,"<<endl;
            cout<<"Take one down, pass it around,"<<endl;
        }
        
        else if(num<10 && num!=0)                                           //If number is less than 10 & not 0
        {
            cout<<tpw<<opw<<" bottles of beer on the wall."<<endl;
            cout<<"..."<<endl<<endl;
            cout<<tpw<<opw<<" bottles of beer on the wall,"<<endl;
            cout<<tpw<<opw<<" bottles of beer,"<<endl;
            cout<<"Take one down, pass it around,"<<endl;
        }
        
        else if(num>20)                                                     //Default for all numbers except mentioned above
        {
            cout<<tpw<<"-"<<opw<<" bottles of beer on the wall."<<endl;
            cout<<"..."<<endl<<endl;
            cout<<tpw<<"-"<<opw<<" bottles of beer on the wall,"<<endl;
            cout<<tpw<<"-"<<opw<<" bottles of beer,"<<endl;
            cout<<"Take one down, pass it around,"<<endl;
        }
        
        else
        {
            switch(num)                                                     //We use switch for special cases like 18,15,0...
            {
                case 18:    cout<<opw<<"een bottles of beer on the wall."<<endl;
                            cout<<"..."<<endl<<endl;
                            cout<<opw<<"een bottles of beer on the wall,"<<endl;
                            cout<<opw<<"een bottles of beer,"<<endl; 
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                case 15:    cout<<"Fif"<<tpw<<" bottles of beer on the wall."<<endl;
                            cout<<"..."<<endl<<endl;
                            cout<<"Fif"<<tpw<<" bottles of beer on the wall,"<<endl;
                            cout<<"Fif"<<tpw<<" bottles of beer,"<<endl;
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                case 13:    cout<<"Thir"<<tpw<<" bottles of beer on the wall."<<endl; 
                            cout<<"..."<<endl<<endl;
                            cout<<"Thir"<<tpw<<" bottles of beer on the wall,"<<endl; 
                            cout<<"Thir"<<tpw<<" bottles of beer,"<<endl; 
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                case 12:    cout<<"Twelve bottles of beer on the wall."<<endl; 
                            cout<<"..."<<endl<<endl;
                            cout<<"Twelve bottles of beer on the wall,"<<endl;
                            cout<<"Twelve bottles of beer,"<<endl;
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                case 11:    cout<<"Eleven bottles of beer on the wall."<<endl; 
                            cout<<"..."<<endl<<endl;
                            cout<<"Eleven bottles of beer on the wall,"<<endl; 
                            cout<<"Eleven bottles of beer,"<<endl; 
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                case 10:    cout<<"Ten bottles of beer on the wall."<<endl; 
                            cout<<"..."<<endl<<endl;
                            cout<<"Ten bottles of beer on the wall,"<<endl; 
                            cout<<"Ten bottles of beer,"<<endl; 
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                case 0:     cout<<"Zero bottles of beer on the wall."<<endl; 
                            cout<<"..."<<endl<<endl;
                            cout<<"Zero bottles of beer on the wall,"<<endl;
                            cout<<"Zero bottles of beer,"<<endl;
                            cout<<"Take one down, pass it around,"<<endl;
                            break;
                default: break;
            }
        }

        
    }
    
    //Display Output

    //Exit Program
    return 0;
}