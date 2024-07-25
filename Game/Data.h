#pragma once
#ifndef DATA_H
#define DATA_H

// data.h - основная библеотека и хранилище тех переменных которые будут часто нужны. Либо их нужно изменить их параметры
#include<stdio.h>
#include<windows.h>
#include <tchar.h>


int Error(int error_code) {
	if (error_code == 1) {
		MessageBox(NULL, LPCWSTR("Hi"), LPCWSTR("Hi"), 0x00000000L); // фатальная ошибка. Код номер 1. Неверный символ
		return 0x1;
	} else if (error_code == 2){
		MessageBox(NULL, LPCWSTR("Hi"), LPCWSTR("Hi"), 0x00000000L); // фатальная ошибка. Код номер 2. Неверный Выбор меню
		return 0x1;
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
	switch (hp) {
	case 100:
		std::cout << "You have " << hp << " health. You don't need a doctor.";
			break;
	case 75: 
		std::cout << "You have " << hp << " health. You don't need a doctor.";
		break;
	case 50: 
		std::cout << "You have " << hp << " health. You don't need a doctor.";
		break;
	case 25: 
		std::cout << "You have " << hp << " health. You need a doctor.";
		break;
	case 0:
		std::cout << "You have " << hp << " health. You're dead :(\nStart new game.";
		return 0;
	}
}

int cursor(int s);

#endif // !DATA_H
