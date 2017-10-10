#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
	double ignore = rand() % (0.5 * armor);
	double damage = hitPoints - ignore;

	if (damage < 0)
		return 0;

	return damage;

}
