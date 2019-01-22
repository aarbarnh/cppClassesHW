#ifndef DEMON_H
#define DEMON_H

#include "Character.h"
#include <string>

using namespace std;

class Demon :
	public Character
{
public:
	Demon();
	Demon(int h, int a, int energy, string type);
	~Demon();
private:
	int demonEnergy;
	string demonType;
}; 

#endif  