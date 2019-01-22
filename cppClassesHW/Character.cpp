#include "Character.h" //include header 
#include <iostream>

using namespace std; //no std:: needed

Character::Character()
{
}

Character::Character(int h, int a)
{
	characterHealth = h;
	characterArmor = a;
	cout << "A character with " << characterHealth << " health and " << characterArmor << " has been created.\n\n";
}

void Character::updateHealth()
{
	bool healthVerification = false;
	int health;
	while (healthVerification == false)
	{
		cout << "How much health would you like to add on?\nEnter amount of health to add: ";
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
			cout << "\nHealth has increased by " << health << ". Total health is now " << characterHealth << ".\n\n";
			healthVerification = true;
		}

	}
	
}

void Character::updateArmor()
{
	bool armorVerification = false;
	int armor;
	while (armorVerification == false)
	{
		cout << "How much armor would you like to add on?\nEnter amount of armor to add: ";
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
			cout << "\nTotal armor has increased by " << armor << ". Total armor is now " << characterArmor << ".\n\n";
			armorVerification = true;
		}

	}
}

int Character::getArmor()
{
	return characterArmor;
}

int Character::getHealth()
{
	return characterHealth;
}

void Character::printInfo()
{
	cout << "This character has " << characterHealth << " health and " << characterArmor << " armor.\n\n";
}

Character::~Character()
{
}
