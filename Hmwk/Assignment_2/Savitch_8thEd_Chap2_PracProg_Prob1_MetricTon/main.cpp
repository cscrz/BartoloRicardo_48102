/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on September 22, 2016, 12:12 PM
   Purpose:  Read the weight of a package of breakfast cereal in ounces
 *           and output the weight in metric tons as well as the number
 *           of boxes needed to yield 1 metric ton of cereal.
 *           Average box of cereal weight: 25 ounces from
 *              http://www.chegg.com
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float OZPTON=35273.92f;       //Ounces per metric ton
const short WCBOZ=25;               //Average weight of a cereal box in ounces

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char    stp='n';                //User's answer if they want to try again
    short   cbox;                   //Number of cereal boxes user enters
    float   totw;                   //Total weight of cereal boxes altogether
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;    //Show decimal
    
    
    do                                          //LOOP if user wants to keep trying
    {
    cout<<"The average weight of a cereal box is "<<WCBOZ<<"ounces."<<endl;     //Displays inputs
    cout<<"A metric ton is "<<OZPTON<<" ounces."<<endl<<endl;
    cout<<"How many boxes of cereal?"<<endl;                                    //Ask user how many boxes
    cin>>cbox;
    
    totw=cbox*WCBOZ;                                                            //Calculates total weight of all boxes
    
    cout<<endl;
    cout<<"You entered "<<cbox<<" boxes of cereal."<<endl;                      //Repeat back what user entered
    cout<<"The total weight of "<<cbox<<" boxes of cereal is "<<totw<<" ounces."<<endl<<endl;//Display calculation
    cout<<"Do you want to try again? Type Y for yes and N for no."<<endl;       //Ask user if they want to try again
    cin>>stp;
    } while (stp=='y');

    //Exit Program
    return 0;
}