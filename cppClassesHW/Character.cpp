#include "Character.h" //include header 
#include <iostream> //cout/cin

using namespace std; //no std:: needed

Character::Character() //primary constructor, no parameters
{
}

Character::Character(int h, int a) //secondary constructor, sets health and armor
{
	characterHealth = h;
	characterArmor = a;
	cout << "A character with " << characterHealth << " health and " << characterArmor << " has been created.\n\n";
}

void Character::updateHealth() //update health variable 
{
	bool healthVerification = false;
	int health;
	while (healthVerification == false) //verification loop, keep health <=100 and >=0
	{
		cout << "How much health would you like to add on or take away?\nEnter amount of health to add or subtract: ";
		cin >> health;
		if (characterHealth + health > 100)
		{
			cout << "\nYou entered a number that resulted in more than 100 health, choose again. Remember health is at " << characterHealth << ".\n\n";
		}
		else if (characterHealth + health < 0)
		{
			cout << "\nYou entered a number that resulted in less than 100 health, choose again. Remember health is at " << characterHealth << ".\n\n";
		}
		else
		{
			characterHealth += health; 
			cout << "\nHealth has changed by " << health << ". Total health is now " << characterHealth << ".\n\n";
			healthVerification = true;
		}

	}
}

void Character::updateArmor() //update armor variable
{
	bool armorVerification = false;
	int armor;
	while (armorVerification == false) //verification loop, keep armor <=100 and >=0
	{
		cout << "How much armor would you like to add on or take away?\nEnter amount of armor to add or subtract: ";
		cin >> armor;
		if (characterArmor + armor > 100)
		{
			cout << "\nYou entered a number that resulted in more than 100 armor, choose again. Remember armor is at " << characterArmor << ".\n\n";
		}
		else if (characterArmor + armor < 0)
		{
			cout << "\nYou entered a number that resulted in less than 100 armor, choose again. Remember armor is at " << characterArmor << ".\n\n";
		}
		else
		{
			characterArmor += armor;
			cout << "\nTotal armor has changed by " << armor << ". Total armor is now " << characterArmor << ".\n\n";
			armorVerification = true;
		}

	}
}

int Character::getArmor() //getter for armor 
{
	return characterArmor;
}

int Character::getHealth() //getter for health
{
	return characterHealth;
}

void Character::printInfo() //print variables, health and armor 
{
	cout << "This character has " << characterHealth << " health and " << characterArmor << " armor.\n\n";
}

Character::~Character() //destructor
{
}
