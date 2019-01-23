#ifndef SLAYER_H
#define SLAYER_H

#include "Character.h" //include parent header

//slayer sub class, parent class of character
class Slayer :
	public Character
{
public: //slayer public functions, setters (update), getters, constructors, destructor, and printInfo (two for static poly)
	Slayer();
	Slayer(int h, int a, int g, int b);
	int getGuns();
	int getBullets();
	void updateGuns();
	void updateBullets();
	void printInfo();
	void printInfo(bool extra);
	~Slayer();
private: //slayer private variables, guns and bullets. Inherited health and armor from parent
	int slayerGuns;
	int slayerBullets;
};

#endif
