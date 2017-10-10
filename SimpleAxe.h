/*
        Author: Abigail Arreguin
        HW 2
        10.10.17
*/

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/* hitpoints = 60. If armor is greater than 0 and less than 20, the axe will ignore all the armor points. */

class SimpleAxe : public Weapon {

public: 

	SimpleAxe() : Weapon("Simple Axe", 60) {}
	virtual ~SimpleAxe {};
	virtual double hit(double armor);

};

#endif
