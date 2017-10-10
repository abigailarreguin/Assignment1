/*
	Author: Abigail Arreguin
	HW 2
	10.10.17
*/

#include "SimpleAxe.h"

double SimpleAxe::hit(double armor)
{
	if ((armor > 0) && (armor < 20))
		return hitPoints;
	
	double damage = hitPoints - armor;
	if (damage < 0)
		return 0;
	else
		return hitPoints;
}



