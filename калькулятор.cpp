#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "������� ������ ��������: ";
	double a;
	cin >> a;
	cout << "������� ������ ��������: ";
	double b;
	cin >> b;
	cout << "�������� ��������: ";
	char c;
	cin >> c;
	
	
	 if (c == '+') {
		cout << "\n �����: " << a << " + " << b << " = " << a + b;
	Sleep(2000);
	system("cls");
	main();
	}
	else if (c == '-') {
		cout << "\n �����: " << a << " - " << b << " = " << a - b;
		Sleep(2000);
		system("cls");
		main();
	}
	else if (c == '*') {
		cout << "\n �����: " << a << " * " << b << " = " << a * b;
		Sleep(2000);
		system("cls");
		main();
	}
	else if (c == '/') {
		if (b == 0)
		{
			cout << "������ �� 0 ������!";
		
		}
		else {
			cout << "\n �����: " << a << " / " << b << " = " << a / b;
			Sleep(2000);
			system("cls");
			main();
		}

	}
	else if (c == '%') {
		cout << "\n �����: " << a << " % " << b << " = " << int(a) % int(b);

	}
	else
	 {
		 cout << "������ �������� ����!\n";
		 return 0;
	 }



	 return 0;
}