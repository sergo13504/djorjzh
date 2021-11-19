#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "Добро пожаловать в фигуры\n";
	cout << " Выберите фигуру\n";
	cout << "[+] Квадрат\n";

	cout << "[1]Выбрать квадрат\n";
	cout << "[2]пустой квадрат\n";
	int menu;
	
	
		
		cin >> menu;
		switch (menu) {
		case 1: {
			system("cls");
			cout << "[+] квадрат\n";
			cout << "[+] размер\n";
			int size;
			cin >> size;
			cout << "[+] текстура\n";
			char texture;
			cin >> texture;
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

	




	return 0;
}
			  
	
	