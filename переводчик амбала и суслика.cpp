#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "Добро пожаловать в переводчик\n";
	cout << "Выберите слова\n";
	cout << "[1] Русские слова\n";
	cout << "[2] Английские слова\n";
	cout << "[3] Выйти\n";


	int menu;
	cin >> menu;
	switch (menu) {
	case 1:

		cout << "[1] рука\n";
		cout << "[2] нога\n";
		cout << "[3] машина\n";
		cout << "[4] велосипед\n";
		cout << "[5] земля\n";
		cout << "[6] мяч\n";
		cout << "[7] фото\n";
		cout << "[8] футбол\n";
		cout << "[9] тигр\n";
		cout << "[10] панда\n";
		cout << "[11] акула\n";
		cout << "[12] краб\n";
		cout << "[13] повербанк\n";
		cout << "[14] автобус\n";
		cout << "[15] мотоцикл\n";
		
		int RUS;
		cin >> RUS;
		switch (RUS) {
		case 1:
			system("cls");
			cout << "\n[1] hand\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 2:
			system("cls");
			cout << "\n[2] leg\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 3:
			system("cls");
			cout << "\n[3] car\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 4:
			system("cls");
			cout << "\n[4] bike\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 5:
			system("cls");
			cout << "\n[5] earth\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 6:
			system("cls");
			cout << "\n[6] ball\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 7:
			system("cls");
			cout << "\n[7] photo\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 8:
			system("cls");
			cout << "\n[8] football\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 9:
			system("cls");
			cout << "\n[9] tiger\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 10:
			system("cls");
			cout << "\n[10] panda\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 11:
			system("cls");
			cout << "\n[11] shark\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 12:
			system("cls");
			cout << "\n[12] crab\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 13:
			system("cls");
			cout << "\n[13] power bank\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 14:
			system("cls");
			cout << "\n[14] bus\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		case 15:
			system("cls");
			cout << "\n[15] motorbike\n";
			Sleep(2000);
			system("cls");
			main();
			break;
		}
		
		case 2:

			cout << "[1] hand\n";
			cout << "[2] leg\n";
			cout << "[3] car\n";
			cout << "[4] bike\n";
			cout << "[5] earth\n";
			cout << "[6] ball\n";
			cout << "[7] photo\n";
			cout << "[8] football\n";
			cout << "[9] tiger\n";
			cout << "[10] panda\n";
			cout << "[11] shark\n";
			cout << "[12] crab\n";
			cout << "[13] power bank\n";
			cout << "[14] bus\n";
			cout << "[15] motorbike\n";

			int EN;
			cin >> EN;
			switch (EN) {
			case 1:
				system("cls");
				cout << "\n[1] рука\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 2:
				system("cls");
				cout << "\n[2] нога\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 3:
				system("cls");
				cout << "\n[3] машина\n";
				Sleep(2000);
				system("cls");
				break;
			case 4:
				system("cls");
				cout << "\n[4] велосипед\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 5:
				system("cls");
				cout << "\n[5] земля\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 6:
				system("cls");
				cout << "\n[6] мяч\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 7:
				system("cls");
				cout << "\n[7] фото\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 8:
				system("cls");
				cout << "\n[8] футбол\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 9:
				system("cls");
				cout << "\n[9] тигр\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 10:
				system("cls");
				cout << "\n[10] панда\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 11:
				system("cls");
				cout << "\n[11] акула\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 12:
				system("cls");
				cout << "\n[12] краб\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 13:
				system("cls");
				cout << "\n[13] повербанк\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 14:
				system("cls");
				cout << "\n[14] автобус\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			case 15:
				system("cls");
				cout << "\n[15] мотоцикл\n";
				Sleep(2000);
				system("cls");
				main();
				break;
			}
	return 0;
	}
}