#include "Character.h"
#include <iostream>

using namespace std;

void main()
{
	Character characterTest(60, 40);
	characterTest.updateHealth();

	characterTest.printInfo();
	system("pause");
}