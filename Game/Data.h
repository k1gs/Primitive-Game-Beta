#pragma once
#ifndef DATA_H
#define DATA_H

// data.h - основная библеотека и хранилище тех переменных которые будут часто нужны. Либо их нужно изменить их параметры


#include <iostream>
int Error(int error_code) {
	if (error_code == 1) {
		std::cout << "Fatal Error code No. 1 - unknown symbol. Please, try again."; // фатальная ошибка. Код номер 1. Неверный символ
		return 0x1;
	} else if (error_code == 2){
		std::cout << "Fatal Error code No. 2 - Unknown entry in menu. Please, try again.\n"; // фатальная ошибка. Код номер 2. Неверный выбор в меню
		return 0x2;
	}
	return 1;
}



int money(int wallet, int hard) {
	wallet = 1;
	// функция money хранит 2 параметра w и h. H выполняется 2 и выдаются деньги для 2 сложности пр. money(1,2)
	if (hard == 2) {
		wallet = 75;
		return wallet;
	}
	else if (hard == 3) {
		wallet = 50;
		return wallet;
	}
	else if (hard == 1) {
		wallet = 100;
		return wallet;
	} else {
	 Error(1);
	 return 0x1;
	}
}

int health(int hp) {
	return 100;
}

int cursor(int s);

#endif // !DATA_H
