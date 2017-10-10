/* 	Author: Abigail Arreguin
        HW 2
        10.10.17
*/

#include <string>
#include "Weapon.h"

#ifndef CUSHION_H
#define CUSHION_H

/* Hitpoints are 10. If armor is greater than 10, no damage */

class Cushion : public Weapon {

public:
	
	Cushion () : Weapon ("Cushion", 10) {}
	virtual ~Cushion {};
	virtual double hit (double armor);

};

#endif
