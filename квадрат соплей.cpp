#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "����� ���������� � ������\n";
	cout << " �������� ������\n";
	cout << "[+] �������\n";

	cout << "[1]������� �������\n";
	cout << "[2]������ �������\n";
	int menu;
	
	
		
		cin >> menu;
		switch (menu) {
		case 1: {
			system("cls");
			cout << "[+] �������\n";
			cout << "[+] ������\n";
			int size;
			cin >> size;
			cout << "[+] ��������\n";
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
			cout << "[+] �������\n";
			cout << "[+] ������\n";
			int size;
			cin >> size;
			cout << "[+] ��������\n";
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
			  
	
	