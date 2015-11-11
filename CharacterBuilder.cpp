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
#include "Character.h"

using namespace std;

//Functions
void createChar(Character &temp);
void createRace(Character &actor);

//Main Program
int main()
{
    //Variables
    
    char ans = 0;
    int exit = 0;
    Character temp;
    
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
void createChar(Character &actor)
{
    //variables
    int exit = 0;
    char ans = 0;
    string temp;
    
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
        cout<<"6) Stats"<<endl;
        cout<<"8) Print Character"<<endl;
        cout<<"9) Exit"<<endl;
        
        //wait for answer
        cin>>ans;
        
        //check for int value
              ans = ans - '0';
                       
            //go to option chosen
            switch( ans )
            {
                //create name for character
                case 1 : 
                    system ("clear");
                    cout<<"What is your character's name?"<<endl;
                    cin>>temp;
                    actor.setName(temp);
                    
                    break;
                //create a random character   
                case 2 : 
                    createRace(actor);
                    break;
                    
                case 8 :
                	cout<<"Name: ";
                	actor.printName();
                	cin>>temp;
                	break;
                //exit   
                case 9 : exit = 1;
                    break;
                //default is to not exit and reprint menu    
                default : exit = 0;
                    break;
            
            }
        ans = 0;
        
    }
    while(exit == 0);


}

void createRace(Character &actor)
{
	//variables
    int exit = 0;
    char ans = 0;
    string temp;
    
    do
    {
        //clear the screen
        system ("clear");
        
        //print the menu
        cout<<"Select your race:"<<endl;
        cout<<"1) Dwarf"<<endl;
        cout<<"2) Elf"<<endl;
        cout<<"3) Halfling"<<endl;
        cout<<"4) Human"<<endl;
        cout<<"5) Dragonborn"<<endl;
        cout<<"6) Gnome"<<endl;
        cout<<"7) Half-Elf"<<endl;
        cout<<"8) Half-Orc"<<endl;
        cout<<"9) Tiefling"<<endl;
        cout<<"I) Information"<<endl;
        cout<<"E) Exit"<<endl;
        
        //wait for answer
        cin>>ans;
        
        //check for int value
              ans = ans - '0';
                       
            //go to option chosen
            switch( ans )
            {

			}

	}
	while(exit == 0);

}























