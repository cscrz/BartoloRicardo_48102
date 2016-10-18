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
    
    //Process values -> Map inputs to Outputs
    for(int num=99;num>=0;num--)
    {
        tp=num/10;
        
        switch(tp)
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
        
        op=num%10;
        
        switch(op)
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
        
                
        if (op==0 && num>=20)
        {
            cout<<tpw<<" bottles of beer on the wall,"<<endl;
        }
        else if(num<20 && num>13 && num!=18 && num!=15)
        {
            cout<<opw<<tpw<<" bottles of beer on the wall,"<<endl;
        }
        if(num<10)
        {
            cout<<tpw<<opw<<" bottles of beer on the wall,"<<endl;
        }
        else
        {
            switch(num)
            {
                case 18: cout<<opw<<"een bottles of beer on the wall,"<<endl; break;
                case 15: cout<<"Fif"<<tpw<<" bottles of beer on the wall,"<<endl; break;
                case 13: cout<<"Thir"<<tpw<<" bottles of beer on the wall,"<<endl; break;
                case 12: cout<<"Twelve bottles of beer on the wall,"<<endl; break;
                case 11: cout<<"Eleven bottles of beer on the wall,"<<endl; break;
                case 10: cout<<"Ten bottles of beer on the wall,"<<endl; break;
                case 0: cout<<"Zero bottles of beer on the wall,"<<endl; break;
                default: cout<<tpw<<"-"<<opw<<" bottles of beer on the wall,"<<endl; break;
            }
        }

        
    }
    
    //Display Output

    //Exit Program
    return 0;
}