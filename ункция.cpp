#include <iostream>
#include <windows.h>
#define color system("color 61")
#define text system("color 0c");
using namespace std;


int main() {
	setlocale(0, "");
	cout << "[+] Программа - Функции \n";
	cout << "[1] очищение консоли \n";
	cout << "[2] изменить цвет фона \n";
	cout << "[3] изменить цвет текста \n";
	cout << "[4] вывод размера типа данных int \n";
	cout << "[5] вывод размера типа данных char \n";
	cout << "[6] вывод размера типа данных double \n";
	cout << "[7] вывод размера типа данных float \n";
	cout << "[8] вывод размера типа данных bool \n";
	cout << "[9] вывод сообщения привет я функция \n";
	cout << "[10] вывод квадрата 5x5\n";
	cout << "[+] Введите цифру \n";



	int menu;
	cin >> menu;
    
	if (menu == 1) {
		cout << " Очищение консоли \n";
		Sleep(1500);
		system("cls");
	}
		
	if (menu == 2) {
		system("cls");
		cout << " измените цвет фона \n";
		color;
	}
	if (menu == 3) {
		system("cls");
		cout << " измените цвет текста \n";
		text;
	}
	if (menu == 4) {
		system("cls");
		cout << " вывод размера типа данных int \n";
		int var = 1;
		cout << "int | var = " << sizeof(var) << endl;
	}

	if (menu == 5) {
		system("cls");
		cout << " вывод размера типа данных char \n";
		char var1 = '#';
		cout << "char | var1 = " << sizeof(var1) << endl;
	}
	
	












	int _; cin >> _;
	return 0;
}