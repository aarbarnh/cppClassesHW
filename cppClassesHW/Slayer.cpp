#include "Slayer.h" //include header 
#include <iostream> //to use cout/cin

using namespace std; //no std:: 

Slayer::Slayer() //first constructor
{
}

Slayer::Slayer(int h, int a, int g, int b) //second constructor to set initial values 
{
	characterHealth = h;
	characterArmor = a;
	slayerGuns = g;
	slayerBullets = b;
	cout << "A slayer with " << characterHealth << " health, " << characterArmor << " armor, " << slayerGuns << " guns, and " << slayerBullets << " bullets has been created.\n\n";
}

int Slayer::getGuns() //get guns variable
{
	return slayerGuns;
}

int Slayer::getBullets() //get bullets variable 
{
	return slayerBullets;
}

void Slayer::updateGuns() //update guns variable 
{
	bool gunVerification = false;
	int guns;
	while (gunVerification == false) //verification loop, keep guns <=6 and >=0
	{
		cout << "How many more guns are needed? Or do you want to take some away?\nEnter number of guns to add or subtract: ";
		cin >> guns;
		if (slayerGuns + guns > 6)
		{
			cout << "\nThe slayer cannot hold onto more than 6 guns at a time, choose again. Remember the slayer has " << slayerGuns << " at the moment.\n\n";
		}
		else if (slayerGuns + guns < 0)
		{
			cout << "\nThe slayer cannot have less than 0 guns, choose again. Remember the slayer has " << slayerGuns << " at the moment.\n\n";
		}
		else
		{
			slayerGuns += guns;
			cout << "\nYou have changed the slayer's arsenal by " << guns << " gun(s). The slayer now has " << slayerGuns << " gun(s).\n\n";
			gunVerification = true;
		}

	}

}

void Slayer::updateBullets() //update bullets variable 
{
	bool bulletVerification = false;
	int bullets;
	while (bulletVerification == false) //verification loop, keep bullets <=250 and >=0
	{
		cout << "How many bullets would you like to give or take from the slayer?\nEnter amount of bullets to add or subtract: ";
		cin >> bullets;
		if (slayerBullets + bullets > 250)
		{
			cout << "\nThe slayer cannot hold more than 250 bullets at a time, choose again. Remember the slayer has " << slayerBullets << " bullets right now.\n\n";
		}
		else if (slayerBullets + bullets < 0)
		{
			cout << "\nThe slayer cannot be at a negative number of bullets, choose again. Remember the slayer has " << slayerBullets << " bullets right now.\n\n";
		}
		else
		{
			slayerBullets += bullets;
			cout << "\nBullets have been change by " << bullets << ". The slayer now has " << slayerBullets << " bullet(s).\n\n";
			bulletVerification = true;
		}

	}

}

void Slayer::printInfo() //print inherited info
{
	cout << "The slayer has " << characterHealth << " health and " << characterArmor << " armor.\n";
}

void Slayer::printInfo(bool extra) //print its own attributes if true, static polymorphism
{
	if (extra)
	{
		cout << "The slayer has " << slayerGuns << " gun(s) and " << slayerBullets << " bullet(s).\n";
	}
}


Slayer::~Slayer() //destructor
{
}
