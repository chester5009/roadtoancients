/*
 * Unit.cpp
 *
 *  Created on: 29 мая 2016 г.
 *      Author: chester
 */

#include "Unit.h"

Unit::Unit(char *name,char *race,int lvl,int totalHp,int def,int totalMana) {
	this->name=name;
	this->race=race;
	this->lvl=lvl;
	this->totalHp=totalHp;
	this->def=def;
	this->totalMana=totalMana;
}

Unit::~Unit() {
	// TODO Auto-generated destructor stub
}

