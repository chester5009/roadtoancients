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
