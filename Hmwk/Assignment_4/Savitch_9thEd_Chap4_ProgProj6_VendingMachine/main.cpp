/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 18, 2016, 3:55 PM
   Purpose:     "Simulate a person putting
    money into the vending machine by repeatedly prompting the user for the
    next coin to be inserted. Output the total entered so far when each coin is
    inserted. When $3.50 or more is added, the program should output “Enjoy
    your deep-fried twinkie” along with any change that should be returned."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
float   DLA=1.00f,          //Dollar value
        QRT=0.25f,          //Quarter value
        DME=0.10f,          //Dime value
        NKL=0.05f;          //Nickel value

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   tot,            //Total money inserted
            cnh;            //Change
    
    char    uin;            //User input for coins
    
    //Prompt user what to type for each coin
    cout<<"Type in O for one dollar,"<<endl;
    cout<<"        Q for quarter,"<<endl;
    cout<<"        D for dime,"<<endl;
    cout<<"        N for nickel."<<endl<<endl;
    
    do                                              //Do loop start
    {
        cout<<"Please enter a coin: ";cin>>uin;     //Ask user for coin
        
        switch(uin)                                 //Switch if user inputs lower case letter
        {
            case 'o': tot+=DLA; break;
            case 'O': tot+=DLA; break;
            case 'q': tot+=QRT; break;
            case 'Q': tot+=QRT; break;
            case 'd': tot+=DME; break;
            case 'D': tot+=DME; break;
            case 'n': tot+=NKL; break;
            case 'N': tot+=NKL; break;
            default: break;
        }

        cout<<endl;
        cout<<"You inserted: $"<<tot<<endl<<endl;   //Show total money so far
    
    }while(tot<3.5);                                //Repeat until $3.50

    //Display Output
    cnh=tot-3.5;                                    //Get change
    
    cout<<"Enjoy your deep-fried twinkie"<<endl;    //Show result and change
    cout<<"Your change is: $"<<cnh<<endl;

    //Exit Program
    return 0;
}