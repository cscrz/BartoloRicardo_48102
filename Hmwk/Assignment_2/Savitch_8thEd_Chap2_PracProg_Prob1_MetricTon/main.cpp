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
const float OZPTON=35273.92f;//Ounces per metric ton
const short WCBOZ=25;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char    stp='n';
    short   cbox;
    float   totw;
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    
    
    do
    {
    cout<<"The average weight of a cereal box is "<<WCBOZ<<"ounces."<<endl;
    cout<<"A metric ton is "<<OZPTON<<" ounces."<<endl<<endl;
    cout<<"How many boxes of cereal?"<<endl;
    cin>>cbox;
    
    totw=cbox*WCBOZ;
    
    cout<<endl;
    cout<<"You entered "<<cbox<<" boxes of cereal."<<endl;
    cout<<"The total weight of "<<cbox<<" boxes of cereal is "<<totw<<" ounces."<<endl<<endl;
    cout<<"Do you want to try again? Type Y for yes and N for no."<<endl;
    cin>>stp;
    } while (stp=='y');

    //Exit Program
    return 0;
}