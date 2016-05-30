#include <iostream>
#include "Unit.h"
using namespace std;

void createHeroe() {
	int race = 0;
	Unit *heroe;
	char *name;
	bool created = false;
	do {
		cout << "Выберите класс персонажа 1-Паладин 2-Наёмник 3-Маг" << endl;
		cin >> race;
		cout << race << endl;
	} while (race < 1 || race > 3);

	do {
		cout << "Введите имя персонажа" << endl;
		cin >> name;
	} while (name == NULL);

	if (race == 1) {
		heroe = new Unit(name, "Паладин", 0, 12, 3, 5);
		heroe->getInfo();
	} else if (race == 2) {
		heroe = new Unit(name, "Наемник", 0, 11, 1, 2);
		heroe->getInfo();
	} else if (race == 3) {
		heroe = new Unit(name, "Маг", 0, 8, 1, 15);
		heroe->getInfo();
	}


}

int main(int argc, char **argv) {
	setlocale(LC_ALL, "Russian");
	cout << "Добро пожаловать в игру Road to ancients" << endl;
	cout << "Создание персонажа.." << endl;
	createHeroe();

}

