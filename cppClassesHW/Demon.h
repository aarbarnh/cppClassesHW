#ifndef DEMON_H
#define DEMON_H

#include "Character.h" //include parent header 
#include <string> //used to make string function 

using namespace std; //no std:: 

//demon sub class with character as parent class
class Demon :
	public Character
{
public: //public functions (setters, getters, constructors, destructor, and printInfo's)
	Demon();
	Demon(int h, int a, int energy, string type);
	string getType();
	int getEnergy();
	void updateType(string t);
	void updateEnergy(int e);
	void printInfo();
	void printInfo(bool extra);
	~Demon();
private: //private class variables energy and type. Inherited health and armor from parent 
	int demonEnergy;
	string demonType;
}; 

#endif  