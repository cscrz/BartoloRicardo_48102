/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on November 17, 2016, 12:21 PM
   Purpose: "An array is used to store
            a list of names and another array is used to store the phone numbers that
            go with each name. For example, Michael Myers’ phone number is 333-
            8000 and Ash Williams’ phone number is 333-2323. Write the function
            lookupName so the code properly looks up and returns the phone number
            for the input target name."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>      //strings
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
string lookupName(string,string[],string[],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string names[] =    {"Michael Myers",
                        "Ash Williams",
                        "Jack Torrance",
                        "Freddy Krueger"};
    
    string phoneNumbers[] = {"333-8000","333-2323",
                            "333-6150","339-7970"};
    
    string targetName, targetPhone;
    
    char c;
    
    //Input values
    do
    {
        cout<< "Enter a name to find the corresponding phone number."<<endl;
        getline(cin, targetName);
        targetPhone=lookupName(targetName, names, phoneNumbers, 4);
        if (targetPhone.length() > 0)
        {
            cout << "The number is: "<<targetPhone<<endl;
        }
        else
        {
            cout << "Name not found. "<<endl;
            cout<< "Look up another name? (y/n)"<<endl;
            cin>>c;
            cin.ignore();
        }
    }while(c == 'y');
    
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}
    
string lookupName(string name, string nameA[], string numbersA[], int size)
{
    
}