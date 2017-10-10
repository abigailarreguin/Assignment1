/*
	Abigail Arreguin
	10.10.17
*/

#include <string>
#include <srand>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/* hitpoints = random integer number between 10 and 100. Ignores a random amount of integer armor points, ranging from to 0 to half of the armor the weapon hits."

class CrazyRandomSword : public Weapon {

public:

	CrazyRandomSword() : Weapon("Crazy Random Sword", (rand() % 100 + 10)) {
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

};

#endif
