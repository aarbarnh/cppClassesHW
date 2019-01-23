#ifndef CHARACTER_H
#define CHARACTER_H

//parent/base class of character
class Character
{
public: //public character setters, getters, constructors, destructor, and printInfo
	Character();
	Character(int h, int a);
	void updateHealth();
	void updateArmor();
	int getHealth();
	int getArmor();
	void printInfo();
	~Character();

protected: //protected health and armor for inheritence to two sub/child classes
	int characterHealth;
	int characterArmor;

private: //no privates
};

#endif

