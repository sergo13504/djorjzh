#include <iostream>
#include <windows.h>
#define color system("color 61")
#define text system("color 0c");
using namespace std;


int main() {
	setlocale(0, "");
	cout << "[+] ��������� - ������� \n";
	cout << "[1] �������� ������� \n";
	cout << "[2] �������� ���� ���� \n";
	cout << "[3] �������� ���� ������ \n";
	cout << "[4] ����� ������� ���� ������ int \n";
	cout << "[5] ����� ������� ���� ������ char \n";
	cout << "[6] ����� ������� ���� ������ double \n";
	cout << "[7] ����� ������� ���� ������ float \n";
	cout << "[8] ����� ������� ���� ������ bool \n";
	cout << "[9] ����� ��������� ������ � ������� \n";
	cout << "[10] ����� �������� 5x5\n";
	cout << "[+] ������� ����� \n";



	int menu;
	cin >> menu;
    
	if (menu == 1) {
		cout << " �������� ������� \n";
		Sleep(1500);
		system("cls");
	}
		
	if (menu == 2) {
		system("cls");
		cout << " �������� ���� ���� \n";
		color;
	}
	if (menu == 3) {
		system("cls");
		cout << " �������� ���� ������ \n";
		text;
	}
	if (menu == 4) {
		system("cls");
		cout << " ����� ������� ���� ������ int \n";
		int var = 1;
		cout << "int | var = " << sizeof(var) << endl;
	}

	if (menu == 5) {
		system("cls");
		cout << " ����� ������� ���� ������ char \n";
		char var1 = '#';
		cout << "char | var1 = " << sizeof(var1) << endl;
	}
	
	












	int _; cin >> _;
	return 0;
}