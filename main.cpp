#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
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
	bool isGame = true;

	while (isGame) {
		system("clear");
		int action = 0;
		do {
			cout << "Выберите пункт.." << endl;
			cout << "1. Передвигаться" << endl;
			cout << "2. Прокачать" << endl;
			cout << "3. Выход" << endl;

			scanf("%d", &action);
			//printf("action %d", action);

		} while (action < 1 && action > 3);

		if (action == 1) {

		} else if (action == 2) {

		} else if (action == 3) {

			isGame = false;
		}

	}
	int x = 3;
	double timer = clock();
	while (x > 0) {

		if (clock() > (timer + CLOCKS_PER_SEC)) {
			timer = clock();
			//cout << x <<" "<<CLOCKS_PER_SEC<< endl;
			system("clear");
			cout << "Выход из игры" << endl;
			printf("через %d\n", x);

			//printf("\n");
			x--;
		}

	}
	printf("\n");
	exit(0);

}

