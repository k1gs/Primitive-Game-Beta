#include <iostream>
#include "data.h"
#include <stdlib.h>

using namespace std;

int settings() {
	cout << "Placeholder";
	return 1;
}
int start(int x) {
	int difficulty;
	cout << "select your difficulty:\n1 - easy\n2 - medium\n2 - hard\n";
	cin >> difficulty;
	x = difficulty;
	switch (difficulty) {
	case 1: 
		cout << "you selected easy difficulty";
			return difficulty;
	case 2:
		cout << "you selected medium difficulty";
		return difficulty;
	case 3:
		cout << "you selected hard difficulty";
		return difficulty;
	}
}
int game() {
	return 0x2;
}

int main() {
	int cursor;
	cout << "Hi! Select what u want\n1 - start\n2 - settings\n3 - exit\n";
	cin >> cursor;
	
	if (cursor == 3) {
		exit;
		return 10;
	} else if (cursor == 2) {
		settings;
	} else if (cursor == 1){
		start(2);
	}
}