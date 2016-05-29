#include <iostream>
#include "Unit.h"
using namespace std;

void createHeroe(){
	int race=0;
	Unit *heroe;
	char *name;
	do{
		cout<<"Выберите класс персонажа 1-Паладин 2-Наёмник 3-Маг"<<endl;
		cin>>race;
		cout<<race<<endl;
	}while(race<1 || race>3);


}

int main(int argc, char **argv) {
	setlocale(LC_ALL,"Russian");
	cout << "Добро пожаловать в игру Road to ancients" << endl;
	cout<<"Создание персонажа.."<<endl;
	createHeroe();


}

