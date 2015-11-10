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

//Main Program
int main()
{
    //Variables
    
    int ans = 0;
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
        if(ans >= 0 && ans <= 9)
        {
                    
            //go to option chosen
            switch(int(ans))
            {
                //creat new character
                case 1 : 
                    break;
                //create a random character   
                case 2 :
                    break;
                //exit   
                case 3 : exit = 1;
                    break;
                //default is to not exit and reprint menu    
                default : exit = 0;
                    break;
            
            }
        }
        ans = 0;
    }
    //looping till user wants out
    while(exit == 0);

    cout<<"Thank you for using 5e Character Builder"<<endl;

    //going home
    return 0;
}
