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
	this->mana=totalMana;
	this->hp=totalHp;
}

Unit::~Unit() {
	// TODO Auto-generated destructor stub
}

void Unit::getInfo() {
	cout<<"Имя: "<<this->name<<endl;
	cout<<"Класс: "<<race<<endl;
	cout<<"Уровень: "<<lvl<<endl;
	cout<<"Здоровье: "<<hp<<" / "<<totalHp<<endl;
	cout<<"Броня: "<<def<<endl;
	cout<<"Мана: "<<mana<<" / "<<totalMana<<endl;
}

int Unit::getCurrentExp() const {
	return currentExp;
}

void Unit::setCurrentExp(int currentExp) {
	this->currentExp = currentExp;
}

int Unit::getDef() const {
	return def;
}

void Unit::setDef(int def) {
	this->def = def;
}

int Unit::getHp() const {
	return hp;
}

void Unit::setHp(int hp) {
	this->hp = hp;
}

int Unit::getLvl() const {
	return lvl;
}

void Unit::setLvl(int lvl) {
	this->lvl = lvl;
}

int Unit::getMana() const {
	return mana;
}

void Unit::setMana(int mana) {
	this->mana = mana;
}

char* Unit::getName() const {
	return name;
}

void Unit::setName(char* name) {
	this->name = name;
}

int Unit::getNeedsExp() const {
	return needsExp;
}

void Unit::setNeedsExp(int needsExp) {
	this->needsExp = needsExp;
}

char* Unit::getRace() const {
	return race;
}

void Unit::setRace(char* race) {
	this->race = race;
}

const vector<Spell>& Unit::getSpells() const {
	return spells;
}

void Unit::setSpells(const vector<Spell>& spells) {
	this->spells = spells;
}

int Unit::getTotalHp() const {
	return totalHp;
}

void Unit::setTotalHp(int totalHp) {
	this->totalHp = totalHp;
}

int Unit::getTotalMana() const {
	return totalMana;
}

void Unit::setTotalMana(int totalMana) {
	this->totalMana = totalMana;
}
