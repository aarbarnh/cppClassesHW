#include "Demon.h"
#include <iostream>

using namespace std;

Demon::Demon()
{
}

Demon::Demon(int h, int a, int energy, string type)
{
	characterHealth = h;
	characterArmor = a;
	demonEnergy = energy;
	demonType = type;
	cout << "An " << demonType << " demon with " << characterHealth << " health, " << characterArmor << " armor, and " << demonEnergy << " energy has been created.\n\n";
}


Demon::~Demon()
{
}
