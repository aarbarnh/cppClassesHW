#include "Demon.h" //include header for class 
#include <iostream> //use cout/cin

using namespace std; //no std:: 

Demon::Demon() //primary constructor, no parameters
{
}

Demon::Demon(int h, int a, int energy, string type) //secondary constructor, set initial values 
{
	characterHealth = h;
	characterArmor = a;
	demonEnergy = energy;
	demonType = type;
	cout << "A(n) " << demonType << " demon with " << characterHealth << " health, " << characterArmor << " armor, and " << demonEnergy << " energy has been created.\n\n";
}

string Demon::getType() //get type variable 
{
	return demonType;
}

int Demon::getEnergy() //get energy variable 
{
	return demonEnergy;
}

void Demon::updateEnergy(int energy) //update for energy variable (done differently than slayer and character variable verification)
{
	if (demonEnergy + energy > 50) //if more than 50 set at 50
	{
		demonEnergy = 50;
		cout << "The demon's energy cannot go over 50. Energy is now maxed out.\n\n";
	}
	else if (demonEnergy + energy < 0) //if less than 0 set at 0
	{
		demonEnergy = 0;
		cout << "The demon's energy cannot go lower than 0. Energy is completely drained.\n\n";
	}
	else //else set what it would be adding energy
	{
		demonEnergy += energy;
		cout << "The demon's energy has changed by " << energy << ". The demon now has " << demonEnergy << " energy.\n\n";
	}
}

void Demon::updateType(string t) //update type variable 
{
	if (t == "null") //if null passed in, no change 
	{
		demonType = demonType;
		cout << "The demon is still a(n) " << demonType << ".\n\n";
	}
	else //else change demon type
	{
		demonType = t;
		cout << "The demon is now a(n) " << demonType << ".\n\n";
	}
}

void Demon::printInfo() //print inherited info
{
	cout << "\nThe demon has " << characterHealth << " health and " << characterArmor << " armor.\n";
}

void Demon::printInfo(bool extra) //print own attributes
{
	if (extra)
	{
		cout << "The demon is a(n) " << demonType << " and has " << demonEnergy << " energy.\n\n";
	}
}


Demon::~Demon() //destructor
{
}
