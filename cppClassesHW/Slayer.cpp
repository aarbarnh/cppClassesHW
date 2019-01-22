#include "Slayer.h"
#include <iostream>

using namespace std;

Slayer::Slayer()
{
}

Slayer::Slayer(int h, int a, int g, int b)
{
	characterHealth = h;
	characterArmor = a;
	slayerGuns = g;
	slayerBullets = b;
	cout << "A slayer with " << characterHealth << " health, " << characterArmor << " armor, " << slayerGuns << " guns, and " << slayerBullets << " bullets has been created.\n\n";
}


Slayer::~Slayer()
{
}
