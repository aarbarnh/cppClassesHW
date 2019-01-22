#ifndef SLAYER_H
#define SLAYER_H

#include "Character.h"
class Slayer :
	public Character
{
public:
	Slayer();
	Slayer(int h, int a, int g, int b);
	~Slayer();
private:
	int slayerGuns;
	int slayerBullets;
};

#endif
