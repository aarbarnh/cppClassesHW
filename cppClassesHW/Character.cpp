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
	cout << "A character with " << characterHealth << " health and " << characterArmor << " was created.\n\n";
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
			cout << "\nYou entered a number that gave you over 100 health, choose again. Remember you have " << characterHealth << ".\n\n";
		}
		else if (characterHealth + health < 0)
		{
			cout << "\nYou entered a number that gave you lower than 100 health, choose again. Remember you have " << characterHealth << ".\n\n";
		}
		else
		{
			characterHealth += health; 
			cout << "\nYour health has increased by " << health << ". Your total health is now " << characterHealth << ".\n\n";
			healthVerification = true;
		}

	}
	
}

void Character::updateArmor()
{
	//characterArmor = armor;
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
