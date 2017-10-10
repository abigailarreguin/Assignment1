/*
 * File:   CommonSword.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 */

#include "Cushion.h"

double Cushion::hit(double armor) {
	if (armor > 10)
		return 0;

	double damage = hitPoints - armor;
	if(damage < 0){
        return 0;
    }
    return damage;
}

