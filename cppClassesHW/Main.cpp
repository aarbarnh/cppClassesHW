#include "Character.h"
#include "Demon.h"
#include "Slayer.h"
#include <iostream>

using namespace std;

void main()
{
	Character characterTest(60, 40);
	Demon demonTest(45, 20, 30, "imp");
	demonTest.updateHealth();
	demonTest.updateArmor();
	Slayer slayerTest(50, 50, 3, 120);
	slayerTest.updateHealth();
	slayerTest.updateArmor();

	characterTest.printInfo();
	system("pause");
}