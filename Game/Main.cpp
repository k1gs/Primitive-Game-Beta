#include <iostream>
#include "data.h"
#include <stdlib.h>

using namespace std;

int settings() {
	cout << "Placeholder";
}
int start() {
	int difficulty;
	cout << "select your difficulty:\n1";
}

int main() {
	int cursor;
	cout << "Hi! Select what u want\n1 - start\n2-settings\n3-exit";
	cin >> cursor;
	
	if (cursor == 3) {
		exit;
	} else if (cursor == 2) {
		settings;
	} else if (cursor == 1){

	}
}