//including headers to the 3 classes
#include "Character.h"
#include "Demon.h"
#include "Slayer.h"
#include <iostream> //cin/cout

using namespace std; //no std::

int main() //main program
{
	Character characterTest(60, 40); //create a character

	Demon demonTest(25, 15, 30, "imp"); //create a demon 
	demonTest.updateHealth(); //update demon health (inherited function)
	demonTest.updateArmor(); //update demon armor (inherited function)
	demonTest.updateEnergy(-5); //update demon energy 
	demonTest.updateType("null"); //update demon type (not updated)

	Slayer slayerTest(50, 50, 3, 75); //create a slayer
	slayerTest.updateHealth(); //update slayer health (inherited function)
	slayerTest.updateArmor(); //update slayer armor (inherited function) 
	slayerTest.updateGuns(); //update slayer guns 
	slayerTest.updateBullets(); //update slayer bullets 

	characterTest.printInfo(); //print character info
	slayerTest.printInfo(); //print slayer info (inherited attributes only)
	slayerTest.printInfo(true); //print slayer info (extra attributes)
	demonTest.printInfo(); //print demon info (inherited attributes only)
	demonTest.printInfo(true); //print demon info (extra attributes)

	//showing some of the getters
	if (slayerTest.getHealth() > 0)
	{
		cout << "In the end, the slayer defeated the " << demonTest.getType() << " using his " << slayerTest.getGuns() << " gun(s) and " << slayerTest.getBullets() << " bullet(s). The demon never stood a chance.\n\n";
	}
	else
	{
		cout << "Sadly, the slayer could not destroy the " << demonTest.getType() << ". The demon used its hellish powers fueled by its " << demonTest.getEnergy() << " energy and killed the slayer.\n\n";
	}

	system("pause");
	return 0;
}