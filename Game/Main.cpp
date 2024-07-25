#include <iostream>
#include "data.h"
#include <stdlib.h>

using namespace std;
const char NEW_LINE = '\n'; // Новая строка

void game(int dif) { // Основная функция игры. На данный момент может лишь только отобразить кол-во денег.
	switch (dif) {
		case 1: 
			cout << "you have " << money(1, 1) << " money";
			break;
		case 2:
			cout << "you have " << money(1, 2) << " money";
			break;
		case 3:
			cout << "you have " << money(1, 3) << " money";
			break;
    }
}
	
void settings(int x, int y) { // Заглушка вкладки настроек
	cout << "Placeholder";
	x = y;
}
void start() { // страница выбора сложности, не защищен от других цифр кроме 1, 2 и 3.
	int difficulty;
	cout << "select your difficulty:\n1 - easy\n2 - medium\n3 - hard\n";
	cin >> difficulty;
	if (difficulty == 1) {
		cout << "you selected easy difficulty" << NEW_LINE;
		game(1);
	}else if(difficulty == 2) {
		cout << "you selected medium difficulty" << NEW_LINE;
		game(2);
	}else if(difficulty == 3){
		cout << "you selected hard difficulty" << NEW_LINE;
		game(3);
	}
	else {
		Error(2);
	}
}
int main() { // главный экран
	int cursor;
	cout << "Hi! Select what u want\n1 - start\n2 - settings\n3 - exit\n";
	cin >> cursor; // курсор - переменная выбора меню
	
	if (cursor == 3) {
		exit(1);
		return 10;
	} else if (cursor == 2) {
		settings(10, 2);
	} else if (cursor == 1){
		start();
	} else {
		Error(2);
		main();
	}
	return 0x3;
}


