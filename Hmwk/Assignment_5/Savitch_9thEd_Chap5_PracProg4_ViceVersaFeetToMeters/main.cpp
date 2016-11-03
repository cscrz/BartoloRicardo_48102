/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 3, 2016, 12:02 PM
   Purpose: "Asks the user if he or she wants to convert
            from feet and inches to meters and centimeters or from meters and
            centimeters to feet and inches."
 */

//System Libraries
#include <iostream>     //Input/Output objects
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
float intofeet(float);
float tometer(float);
float tocm(float);

float cmtom(float);
float toft(float);
float toin(float);

void cnfttom();
void cnmtoft();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short   uan;                        //User's pick 1 or 2
    
    char    uan2;                       //User's answer if they want to try again
    
    bool    rp;                         //Repeat if they dont answer 1 or 2
    
    do
    {
        //Ask user what they want to do
        cout<<"What do you want to do?"<<endl<<endl;

        cout<<"1 = Convert FEET and INCHES to METERS and CENTIMETERS"<<endl;
        cout<<"2 = Convert METERS and CENTIMETERS to FEET and INCHES"<<endl<<endl;

        do
            {
            cout<<"Pick one: ";cin>>uan;

            switch(uan)
            {
                case 1: cnfttom(); rp=false; break;
                case 2: cnmtoft(); rp=false; break;
                default: rp=true; break;
            }
        }while(rp==true);
        
        rp=true;
        cout<<"Do you want to try again? (Y/N) ";cin>>uan2;
        
        cout<<endl;
        
        switch(uan2)                 //Filter user's input
        {
            case 'y': uan2='Y'; break;
            case 'n': uan2='N'; break;
            default: uan2='Y'; break;
        }
    }while(uan2=='Y');               //Repeat until user says no
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}






//Convert FEET to METERS
void cnfttom()
{
    //Declaration of Variables
    float   uft,                    //User feet input
            uin,                    //User inch input
            m,                      //Converted Meters
            cm;                     //Converted Centimeters
    
    //Ask user for inputs
    cout<<"Feet? ";cin>>uft;
    cout<<"Inches? ";cin>>uin;

    //Process values
    uft+=intofeet(uin);         //Add the inches to feet as a decimal

    m=tometer(uft);             //Calculate the total feet to meters

    cm=tocm(m);                 //Calculate the total feet to centimeters

    //Display Output
    cout<<"The total feet is "<<uft<<"."<<endl;

    cout<<"That is equivalent to "<<m<<" meters"<<endl;
    cout<<"or "<<cm<<" centimeters."<<endl<<endl;

    //Exit Program
    exit;
}


//Calculate how much inches in decimal of feet and add to total feet
float intofeet(float in)
{
    float   inpf=12,
            feet;
    
    feet=in/inpf;
    
    return feet;
}


//Calculate the total meters
float tometer(float feet)
{
    float   mpf=0.3048f,
            m;
    
    m=feet*mpf;
    
    return m;
}


//Calculate the centimeters
float tocm(float m)
{
    float   cmpm=100,
            cm;
    
    cm=m*cmpm;
    
    return cm;
}



//Convert METERS to FEET
void cnmtoft()
{
    //Declaration of Variables
    float   um,                    //User meters input
            ucm,                    //User centimeters input
            ft,                      //Converted Feet
            in;                     //Converted Inches

    //Ask user for inputs
    cout<<"Meters? ";cin>>um;
    cout<<"Centimeters? ";cin>>ucm;

    //Process values
    um+=cmtom(ucm);             //Add the centimeters to meters as a decimal

    ft=toft(um);                //Calculate the total meters to feet

    in=toin(ft);                 //Calculate the total feet to centimeters

    //Display Output
    cout<<"The total Meters is "<<um<<"."<<endl;

    cout<<"That is equivalent to "<<ft<<" feet"<<endl;
    cout<<"or "<<in<<" inches."<<endl<<endl;

    //Exit Program
    exit;
}



//Calculate how much inches in decimal of feet and add to total feet
float cmtom(float cm)
{
    float   cmpm=100;
    
    return cm/cmpm;
}


//Calculate the total meters
float toft(float m)
{
    float   ftpm=3.28084f;                      //Feet per meter
    
    return m*ftpm;
}


//Calculate the centimeters
float toin(float ft)
{
    float   mpft=12;                        //Inches per foot
    
    return ft*mpft;
}