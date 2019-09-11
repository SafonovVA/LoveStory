#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <conio.h>
using namespace std;

#define BEGIN 1567971660
#define FINISH 4408112460

void write(time_t ourTime);

int main()
{
	system("chcp 1251 > nul");
	system("color 5f");
	time_t raznBig = FINISH - (22 * 24 * 60 * 60) - BEGIN;
	time_t raznSmall = time(NULL) - BEGIN;
	time_t ourTime = raznBig - raznSmall;
	time_t now = time(NULL);
	while (ourTime != 0) {

		raznSmall = time(NULL) - BEGIN;
		ourTime = raznBig - raznSmall;

		if (time(NULL) > now) {
			now = time(NULL);
			system("cls");
			write(ourTime);
		}

		if (_kbhit()) {
			int key = _getch();
			if (key == 27 || key == 113) //TerminateProcess(GetCurrentProcess(), 0);
			exit(0);
		}
	}
	return 0;
}

void write(time_t ourTime) {
	int seconds = ourTime % 60;
	ourTime /= 60;
	int minutes = ourTime % 60;
	ourTime /= 60;
	int hours = ourTime % 24;
	ourTime /= 24;
	int days = ourTime % 365;
	ourTime /= 365;
	int years = ourTime;

	cout << "\nМы будем вместе еще ";
	if (years == 11 || years == 12 || years == 13 || years == 14) cout << years << " лет, ";
	else {
		switch (years % 10) {
		case 1: cout << years << " год, "; break;
		case 2: case 3: case 4: cout << years << " года, "; break;
		default: cout << years << " лет, ";
		}
	}
	if (days == 11 || days == 12 || days == 13 || days == 14) cout << days << " дней, ";
	else {
		switch (days % 10) {
		case 1: cout << days << " день, "; break;
		case 2: case 3: case 4: cout << days << " дня, "; break;
		default: cout << days << " дней, ";
		}
	}
	if (hours == 11 || hours == 12 || hours == 13 || hours == 14) cout << hours << " часов, ";
	else {
		switch (hours % 10) {
		case 1: cout << hours << " час, "; break;
		case 2: case 3: case 4: cout << hours << " часа, "; break;
		default: cout << hours << " часов, ";
		}
	}
	if (minutes == 11 || minutes == 12 || minutes == 13 || minutes == 14) cout << minutes << " минут, ";
	else {
		switch (minutes % 10) {
		case 1: cout << minutes << " минуту, "; break;
		case 2: case 3: case 4: cout << minutes << " минуты, "; break;
		default: cout << minutes << " минут, ";
		}
	}
	if (seconds == 11 || seconds == 12 || seconds == 13 || seconds == 14) cout << seconds << " секунд";
	else {
		switch (seconds % 10) {
		case 1: cout << seconds << " секунду"; break;
		case 2: case 3: case 4: cout << seconds << " секунды"; break;
		default: cout << seconds << " секунд";
		}
		cout << "\n\nДорогая, для выхода жми ESC\n";
	}
}


















//trimL
//#include <iostream>
//#include <ctime>
//#include <string>
//using namespace std;
//void trimL(char* str);
//void trimR(char* str);
//void trimX(char* str);
//void trimAll(char* str);
//
//int main() {
//	system("chcp 1251 > nul");
//	char word[100];
//	int num = 0;
//	cin.getline(word, 100);
//
//	//trimL(word);
//	//trimR(word);
//	//trimX(word);
//	trimAll(word);
//
//}
//
//void trimL(char* str) {
//
	//for (int i = 0; (int)str[i] == 32; i++) {
	//	if ((int)str[i] == 32) {
	//		for (int j = i; str[j] != '\0'; j++) {
	//			str[j] = str[j + 1];
	//		}
	//		i--;
	//	}
	//}
//	cout << str << endl; //Выходная строка
//}
//
//
//void trimR(char* str) {
//	for (int i = strlen(str) - 1; str[i] == ' ' && i > 0; i--) {// 
//		if ((int)str[i] == 32) {
//			str[i] = '\0';
//		}
//	}
//	cout << str << "!" << endl; //Выходная строка
//}
//
//void trimX(char* str) {
//
//	for (int i = 0; (int)str[i] == 32; i++) {
//		if ((int)str[i] == 32) {
//			for (int j = i; str[j] != '\0'; j++) {
//				str[j] = str[j + 1];
//			}
//			i--;
//		}
//	}
//
//	for (int i = strlen(str) - 1; str[i] == ' ' && i > 0; i--) {// 
//		if ((int)str[i] == 32) {
//			str[i] = '\0';
//		}
//	}
//
//	cout << str << "!" << endl; //Выходная строка
//}
//
//void trimAll(char* str) {
//	for (int i = strlen(str) - 1; str[i] == ' ' && i > 0; i--) {//RIGHT
//		if ((int)str[i] == 32) {
//			str[i] = '\0';
//		}
//	}
//	for (int i = 0; (int)str[i] == 32; i++) { //LEFT
//		if ((int)str[i] == 32) {
//			for (int j = i; str[j] != '\0'; j++) {
//				str[j] = str[j + 1];
//			}
//			i--;
//		}
//	}
//	for (int i = 0; str[i] != '\0'; i++) { //MIDDLE
//		if ((int)str[i] == 32 && (int)str[i + 1] == 32) {
//			for (int j = i; str[j] != '\0'; j++) {
//				str[j] = str[j + 1];
//			}
//			i--;
//		}
//	}
//
//	cout << str << "!" << endl; //Выходная строка
//}
//