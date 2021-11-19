#include<iostream>
#include<windows.h>

#define clear system("cls")
using namespace std;

int main()
{
	setlocale(0, "");

	int _menu = 0;
	cout << "Добро пожаловать в фигуры\n";
	cout << " Выберите фигуру\n";
	cout << "[+] Квадрат\n";
	cout << "[+] Прямоугольник\n";
	cin >> _menu;
	if (_menu == 1)
	{
		clear;
	cout << "[1] Заполненный квадрат\n";
	cout << "[2] Пустой квадрат\n";
	

	int menu;
	cin >> menu;
	switch (menu) {
	case 1: {
		cout << "[+] квадрат\n";
		cout << "[+] размер\n";
		int size;
		cin >> size;
		cout << "[+] текстура\n";
		char texture;
		cin >> texture;
		clear;
		for (int x = 0; x < size; x++) {
			for (int y = 0; y < size; y++) {
				cout << texture << " ";

			}
			cout << "\n";
		}

		break;
	}
	case 2: {


		system("cls");
		cout << "[+] квадрат\n";
		cout << "[+] размер\n";
		int size;
		cin >> size;
		cout << "[+] текстура\n";
		char texture;
		cin >> texture;
		for (int y = 0; y < size; y++)
		{
			for (int x = 0; x < size; x++)
			{
				if (y == 0 || y == size - 1 || x == 0 || x == size - 1)
				{
					cout << texture << " ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << "\n";
		}

		break;
	}
	default:
	{
		break;
	}

	}
	}
	else if (_menu == 2)
	{
		clear;
	cout << "[+] Прямоугольник\n";
	cout << "[3] Заполненный прямоугольник\n";
	cout << "[4] Пустой прямоугольник\n";
	
	

	}
	
	return 0;
	}





