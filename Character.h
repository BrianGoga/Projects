#ifndef Character_h
#define Character_h
#include <iostream>
#include <string>

//class
using namespace std;

class Character 
{
    private:
    string name;
    string race;
    string profession;
    string alignment;
    int level;
    int stats[6];
    
    public:
    Character();
        
    void setName(string id);
    void printName();
    
    void setRace(string id);
    void printRace();
    
    void setClass(string id);
    void printClass();
    
    void setAlign(string id);
    void printAlign();
    
    void setLevel(int id);
    void printLevel();

    void setStats(int* id);
    void printStats();
};

Character::Character()
{
    name = "NULL";
    race = "NULL";
    profession = "NULL";
    alignment = "NULL";
    level = 0;
    
    for(int i = 0; i<6; i++)
    {
        stats[i] = 0;
    }
}

void Character::setName(string id)
{
    name = id;
}

void Character::printName()
{
    cout<< name <<endl;
}

void Character::setRace(string id)
{
    race = id;
}

void Character::printRace()
{
    cout<< race <<endl;
}

void Character::setClass(string id)
{
    profession = id;
}

void Character::printClass()
{
    cout<< profession <<endl;
}

void Character::setAlign(string id)
{
    alignment = id;
}

void Character::printAlign()
{
    cout<< alignment <<endl;
}

void Character::setLevel(int id)
{
    level = id;
}

void Character::printLevel()
{
    cout<< level <<endl;
}

void Character::setStats(int* id)
{
	for(int i = 0; i<6; i++)
		stats[i] = id[i];
}

void Character::printStats()
{
	for(int i = 0; i<6; i++)
		cout<< stats[i] << endl;
}







#endif




