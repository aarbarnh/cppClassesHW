#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	Character(int h, int a);
	void updateHealth();
	void updateArmor();
	int getHealth();
	int getArmor();
	void printInfo();
	~Character();

protected:
	int characterHealth;
	int characterArmor;

private:
};

#endif

