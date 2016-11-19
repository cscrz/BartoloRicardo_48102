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
string lookupName(string,string[],string[],int);        //Declare function to find number

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string names[] =    {"Michael Myers",
                        "Ash Williams",
                        "Jack Torrance",
                        "Freddy Krueger"};
    
    string phoneNumbers[] = {"333-8000","333-2323",
                            "333-6150","339-7970"};
    
    string targetName, targetPhone;                     //Strings for User's name input
    
    char c;                                             //User's answer if they want to try again
    
    //Input values
    do
    {
        cout<< "Enter a name (and last name) to find the corresponding phone number. (Case Sensitive)"<<endl;
        getline(cin, targetName);
        targetPhone=lookupName(targetName, names, phoneNumbers, 4);     //Run function to find input name's number
        
        if (targetPhone.length() > 2)                                   //If number found, display
        {
            cout << "The number is: "<<targetPhone<<endl;
            c='n';
        }
        else                                                            //If not, ask user if they want to try again
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
    for(int c=0; c<size; c++)
    {
        if(nameA[c]==name)
        {
            return numbersA[c];
        }
    }
    return "NA";
}