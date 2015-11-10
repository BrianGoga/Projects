//////////////////////////////////
// Brian Goga   		        //
// Character Builder for D&D 5e //
// Version 0			        //
//////////////////////////////////

//Header Files
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

//struct
struct character 
{
    string name;
    string race;
    string profession;
    string alignment;
    int level;

} temp;

//Functions
void createChar(character temp);

//Main Program
int main()
{
    //Variables
    
    char ans = 0;
    int exit = 0;
    
    //Menu 
    do
    {
        //clear the screen
        system ("clear");
        
        //print the menu
        cout<<"Welcome to 5e Character Builder"<<endl;
        cout<<"1) Create New Character"<<endl;
        cout<<"2) Create a Random Character"<<endl;
        cout<<"3) Exit Character Builder"<<endl;
        
        //wait for answer
        cin>>ans;
        
        //check for int value
              ans = ans - '0';
                       
            //go to option chosen
            switch( ans )
            {
                //creat new character
                case 1 : 
                    createChar(temp);
                    break;
                //create a random character   
                case 2 : 
                    cout<<"you got to case 2"<<endl;
                    break;
                //exit   
                case 3 : exit = 1;
                    break;
                //default is to not exit and reprint menu    
                default : exit = 0;
                    break;
            
            }
        ans = 0;
    }
    //looping till user wants out
    while(exit == 0);

    cout<<"Thank you for using 5e Character Builder"<<endl;

    //going home
    return 0;
}

//Implementation
void createChar(character acter)
{
    //variables
    int exit = 0;
    
    do
    {
        //clear the screen
        system ("clear");
        
        //print the menu
        cout<<"Building New Character"<<endl;
        cout<<"1) Name"<<endl;
        cout<<"2) Race"<<endl;
        cout<<"3) Class"<<endl;
        cout<<"4) Alignment"<<endl;
        cout<<"5) Level"<<endl;
        cout<<"10) Exit"<<endl;
    }
    while(exit == 0)


}

























