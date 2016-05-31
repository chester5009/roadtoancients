/*
 * Unit.h
 *
 *  Created on: 29 мая 2016 г.
 *      Author: chester
 */
#include <vector>
#include <iostream>
#include "Spell.h"
using namespace std;

#ifndef UNIT_H_
#define UNIT_H_

class Unit {
public:
	Unit(char *name,char *race,int lvl,int totalHp,int def,int totalMana);
	virtual ~Unit();
	void getInfo();
	int getCurrentExp() const;
	void setCurrentExp(int currentExp);
	int getDef() const;
	void setDef(int def);
	int getHp() const;
	void setHp(int hp);
	int getLvl() const;
	void setLvl(int lvl);
	int getMana() const;
	void setMana(int mana);
	char* getName() const;
	void setName(char* name);
	int getNeedsExp() const;
	void setNeedsExp(int needsExp);
	char* getRace() const;
	void setRace(char* race);
	const vector<Spell>& getSpells() const;
	void setSpells(const vector<Spell>& spells);
	int getTotalHp() const;
	void setTotalHp(int totalHp);
	int getTotalMana() const;
	void setTotalMana(int totalMana);

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
