/* 
   File:   main
   Author: Ricardo Bartolo Jr.
   Created on October 5, 2016, 1:25 PM
   Purpose:         "User types in a birthday, and the program
                    responds with the sign and horoscope for that birthday."
 */

//System Libraries
#include <iostream>     //Input/Output objects
#include <string>       //Formatting
using namespace std;    //Name-space used in the System Library

//User Libraries

//Global Constants
const short JAN=1,      //Months 1-12 for user input
            FEB=2,
            MAR=3,
            APR=4,
            MAY=5,
            JUN=6,
            JUL=7,
            AUG=8,
            SEP=9,
            OCT=10,
            NOV=11,
            DEC=12;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short   dte,        //Day input
            mth;        //Month input
    
    string  ar("Aries"),        //Sign strings to display
            ta("Taurus"),
            ge("Gemini"),
            ca("Cancer"),
            le("Leo"),
            vi("Virgo"),
            li("Libra"),
            sc("Scorpio"),
            sa("Sagittarius"),
            cp("Capricorn"),
            aq("Aquarius"),
            pi("Pisces");
    
    //Input values
    cout<<"Please enter the month you were born (1-12): ";cin>>mth;    //Ask user for inputs
    cout<<"Please enter the day you were born: ";cin>>dte;
    cout<<endl;
    
    //Process values -> Map inputs to Outputs

    //Display Output
    
    //Aries
    
    if ((mth==MAR && dte>=21)||(mth==APR && dte<=19))
    {
        cout<<"You sign is "<<ar<<"."<<endl<<endl;
        cout<<ar<<endl;
        cout<<"\"You're apt to get the feeling that the grass is greener on the "<<endl<<
                "other side of the fence today, Aries. Try not to get too hung "<<endl<<
                "up on this. Either make the effort to go where the landscape "<<endl<<
                "looks richer and more fruitful or stay where you are. "<<endl<<
                "The key to true happiness is to make sure that regardless of "<<endl<<
                "where you end up, you enjoy the spot where you are.\""<<endl<<endl;
        
        if (mth==MAR && dte<=23)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<pi<<"."<<endl;
        
        else if (mth==APR && dte>=17)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ta<<"."<<endl;
    }
    
    //Taurus
    
    else if ((mth==APR && dte>=20)||(mth==MAY && dte<=20))
    {
        cout<<"You sign is "<<ta<<"."<<endl<<endl;
        cout<<ta<<endl;
        cout<<"\"Your mind may wander to a fantasy land full of castles, wizards,"<<endl<<
                " and magic dragons today, Taurus. You could find that you're "<<endl<<
                "putting yourself in the robes of a beautiful or handsome figure "<<endl<<
                "in a tall tower who's waiting for the perfect mate to come along. "<<endl<<
                "Observe the fanciful scenario you've created and see how the "<<endl<<
                "symbols and characters connect with your real life. Your "<<endl<<
                "imagination is trying to tell you something.\""<<endl<<endl;
        
        if (mth==APR && dte<=22)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ar<<"."<<endl;
        
        else if (mth==MAY && dte>=18)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ge<<"."<<endl;
    }
    
    //Gemini
    
    else if ((mth==MAY && dte>=21)||(mth==JUN && dte<=21))
    {
        cout<<"You sign is "<<ge<<"."<<endl<<endl;
        cout<<ge<<endl;
        cout<<"\"Get on the fast track and use your powerful words and creative "<<endl<<
                "mind to make quick decisions that are mindful yet spontaneous. "<<endl<<
                "If you get in a pinch today, Gemini, don't worry about it. "<<endl<<
                "Simply relax, take a deep breath, and let your intuition guide "<<endl<<
                "you to the right path. Instead of wasting your energy thrashing "<<endl<<
                "helplessly in the water, call for help.\""<<endl<<endl;
        
        if (mth==MAY && dte<=23)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ta<<"."<<endl;
        
        else if (mth==JUN && dte>=19)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ca<<"."<<endl;
    }
    
    //Cancer
    
    else if ((mth==JUN && dte>=22)||(mth==JUL && dte<=22))
    {
        cout<<"You sign is "<<ca<<"."<<endl<<endl;
        cout<<ca<<endl;
        cout<<"\"Start the day with some vigorous yoga and then some meditation "<<endl<<
                "to help clear your mind, Cancer. Stretch your body and get the "<<endl<<
                "blood flowing through all of your limbs. Once your blood is "<<endl<<
                "flowing, your mind will get moving. Before it gets too far into"<<endl<<
                " its noisy routine, take the opportunity to maintain a quiet, "<<endl<<
                "serene state while you clear out the static and set forth your "<<endl<<
                "goals for the day.\""<<endl<<endl;
        
        if (mth==JUN && dte<=24)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ge<<"."<<endl;
        
        else if (mth==JUL && dte>=20)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<le<<"."<<endl;
    }
    
    //Leo
    
    else if ((mth==JUL && dte>=23)||(mth==AUG && dte<=22))
    {
        cout<<"You sign is "<<le<<"."<<endl<<endl;
        cout<<le<<endl;
        cout<<"\"Think about broken promises and assess why you missed "<<endl<<
                "fulfilling commitments. You can do something to make amends "<<endl<<
                "today. Someone may be ready to forgive the error. Tonight, "<<endl<<
                "singles are candidates for new love when Venus sextiles Pluto. "<<endl<<
                "Couples are entirely fascinated with one another.\""<<endl<<endl;
        
        if (mth==JUL && dte<=25)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ca<<"."<<endl;
        
        else if (mth==AUG && dte>=20)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<vi<<"."<<endl;
    }
    
    //Virgo
    
    else if ((mth==AUG && dte>=23)||(mth==SEP && dte<=22))
    {
        cout<<"You sign is "<<vi<<"."<<endl<<endl;
        cout<<vi<<endl;
        cout<<"\"If you're having trouble tackling a giant problem, Virgo, don't"<<endl<<
                " get discouraged or overwhelmed. They key for you is to break "<<endl<<
                "things down into smaller chunks, analyze them, and figure out "<<endl<<
                "their role within the greater whole. You will find that by "<<endl<<
                "taking things one step at a time, any problem you encounter "<<endl<<
                "will be infinitely easier to overcome than you may have thought"<<endl<<
                " at first.\""<<endl<<endl;
        
        if (mth==AUG && dte<=25)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<le<<"."<<endl;
        
        else if (mth==SEP && dte>=20)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<li<<"."<<endl;
    }
    
    //Libra
    
    else if ((mth==SEP && dte>=23)||(mth==OCT && dte<=22))
    {
        cout<<"You sign is "<<li<<"."<<endl<<endl;
        cout<<li<<endl;
        cout<<"\"It may seem like everyone around you is happy and getting what "<<endl<<
                "they want while you're stuck in the trenches, Libra. Don't "<<endl<<
                "compare yourself to other people and make judgments based on "<<endl<<
                "outside appearances. The truth of the matter is that they're "<<endl<<
                "most likely only looking at the immediate future and "<<endl<<
                "experiencing short-term pleasures. You, however, have your "<<endl<<
                "sights set on the long-term and will probably be much better "<<endl<<
                "off.\""<<endl<<endl;
        
        if (mth==SEP && dte<=25)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<vi<<"."<<endl;
        
        else if (mth==OCT && dte>=20)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<sc<<"."<<endl;
    }
    
    //Scorpio
    
    else if ((mth==OCT && dte>=23)||(mth==NOV && dte<=21))
    {
        cout<<"You sign is "<<sc<<"."<<endl<<endl;
        cout<<sc<<endl;
        cout<<"\"Imagination and fantasy play a big part in your thinking today,"<<endl<<
                " Scorpio, and you shouldn't hesitate to embrace this frame of "<<endl<<
                "mind. There's a great deal of power to be drawn from your sense"<<endl<<
                " of freedom to explore and dream. Your thinking is more of a "<<endl<<
                "higher consciousness now. You should take advantage of this "<<endl<<
                "lofty perspective to see things from a neutral viewpoint.\""<<endl<<endl;
        
        if (mth==OCT && dte<=25)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<li<<"."<<endl;
        
        else if (mth==NOV && dte>=19)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<sa<<"."<<endl;
    }
    
    //Sagittarius
    
    else if ((mth==NOV && dte>=22)||(mth==DEC && dte<=21))
    {
        cout<<"You sign is "<<sa<<"."<<endl<<endl;
        cout<<sa<<endl;
        cout<<"\"Engage more of your rational mind today, Sagittarius. If your "<<endl<<
                "mind continues on its track into a fantasy world, you might "<<endl<<
                "consider enlisting the help of people who can help you bring "<<endl<<
                "some discipline to your situation. For you, the general feeling"<<endl<<
                " of the day is likely to be that the mind is willing but the "<<endl<<
                "flesh is weak. Let others help you get inspired to get out of "<<endl<<
                "lazy mode.\""<<endl<<endl;
        
        if (mth==NOV && dte<=24)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<sc<<"."<<endl;
        
        else if (mth==DEC && dte>=19)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<cp<<"."<<endl;
    }
    
    //Capricorn
    
    else if ((mth==DEC && dte>=22)||(mth==JAN && dte<=19))
    {
        cout<<"You sign is "<<cp<<"."<<endl<<endl;
        cout<<cp<<endl;
        cout<<"\"Suppose you were someone else for a day, Capricorn. How would "<<endl<<
                "it feel to be treated the way you normally treat other people? "<<endl<<
                "This is a good time to put yourself in someone else's shoes and"<<endl<<
                " experience life through their eyes. By doing this, you're apt "<<endl<<
                "to become more conscious of your own actions and the effect of "<<endl<<
                "those actions on the people around you.\""<<endl<<endl;
        
        if (mth==DEC && dte<=24)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<sa<<"."<<endl;
        
        else if (mth==JAN && dte>=17)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<aq<<"."<<endl;
    }
    
    //Aquarius
    
    else if ((mth==JAN && dte>=20)||(mth==FEB && dte<=18))
    {
        cout<<"You sign is "<<aq<<"."<<endl<<endl;
        cout<<aq<<endl;
        cout<<"\"Today your thoughts may turn to fashion and the different ways "<<endl<<
                "in which you can improve your wardrobe. Don't be afraid to "<<endl<<
                "create a look that reflects your true inner spirit. Deck "<<endl<<
                "yourself in external splendor to illustrate the many different "<<endl<<
                "colors and layers that you carry on the inside. Don't hesitate "<<endl<<
                "to pick up a fashion magazine at the grocery store.\""<<endl<<endl;
        
        if (mth==JAN && dte<=22)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ca<<"."<<endl;
        
        else if (mth==FEB && dte>=16)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<pi<<"."<<endl;
    }
    
    //Pisces
    
    else if ((mth==FEB && dte>=19)||(mth==MAR && dte<=20))
    {
        cout<<"You sign is "<<pi<<"."<<endl<<endl;
        cout<<pi<<endl;
        cout<<"\"The amazing thing about your nature is that, like a good "<<endl<<
                "politician, you have just the right tone of voice and catch "<<endl<<
                "phrase for every situation. You can put on your smile and charm"<<endl<<
                " and talk your way out of just about any pickle you get into. "<<endl<<
                "Embrace this incredible gift, but make sure that your overall "<<endl<<
                "goals are noble as opposed to self-serving or vengeful.\""<<endl<<endl;
        
        if (mth==FEB && dte<=22)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<aq<<"."<<endl;
        
        else if (mth==MAR && dte>=18)
            cout<<"You birthday is on a \"cusp\". Your adjacent sign is "<<ar<<"."<<endl;
    }

    //Exit Program
    return 0;
}