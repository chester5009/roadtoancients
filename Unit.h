/*
 * Unit.h
 *
 *  Created on: 29 мая 2016 г.
 *      Author: chester
 */
#include <vector>
#include "Spell.h"
using namespace std;

#ifndef UNIT_H_
#define UNIT_H_

class Unit {
public:
	Unit(char *name,char *race,int lvl,int totalHp,int def,int totalMana);
	virtual ~Unit();
private:
	char *name;
	char *race;
	int lvl;
	int currentExp;
	int needsExp;
	int hp;
	int totalHp;
	vector<Spell> spells;
	int def;
	int totalMana;
	int mana;

};

#endif /* UNIT_H_ */
