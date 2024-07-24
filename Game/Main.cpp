#include <iostream>
#include "data.h"
#include <stdlib.h>

using namespace std;
const char NEW_LINE = '\n';

int game(int dif) {
	if (dif == 1) {
		cout << "you st";
	}
}

int settings(int x, int y) {
	cout << "Placeholder";
	x = 10;
	x = y; 
}
void start(int x) {
	int difficulty;
	cout << "select your difficulty:\n1 - easy\n2 - medium\n3 - hard\n";
	cin >> difficulty;
	x = difficulty;
	switch (difficulty) {
	case 1: 
		cout << "you selected easy difficulty";
		game(1);
		break;
	case 2:
		cout << "you selected medium difficulty";
		game(2);
		break;
	case 3:
		cout << "you selected hard difficulty";
		game(3);
		break;
	}
}
int main() {
	int cursor;
	cout << "Hi! Select what u want\n1 - start\n2 - settings\n3 - exit\n";
	cin >> cursor;
	
	if (cursor == 3) {
		exit(1);
		return 10;
	} else if (cursor == 2) {
		settings;
	} else if (cursor == 1){
		start(2);
	}
}
