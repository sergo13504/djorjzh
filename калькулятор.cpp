#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Введите первое значение: ";
	double a;
	cin >> a;
	cout << "Введите второе значение: ";
	double b;
	cin >> b;
	cout << "Выберите действие: ";
	char c;
	cin >> c;
	
	
	 if (c == '+') {
		cout << "\n Ответ: " << a << " + " << b << " = " << a + b;
	Sleep(2000);
	system("cls");
	main();
	}
	else if (c == '-') {
		cout << "\n Ответ: " << a << " - " << b << " = " << a - b;
		Sleep(2000);
		system("cls");
		main();
	}
	else if (c == '*') {
		cout << "\n Ответ: " << a << " * " << b << " = " << a * b;
		Sleep(2000);
		system("cls");
		main();
	}
	else if (c == '/') {
		if (b == 0)
		{
			cout << "Делить на 0 нельзя!";
		
		}
		else {
			cout << "\n Ответ: " << a << " / " << b << " = " << a / b;
			Sleep(2000);
			system("cls");
			main();
		}

	}
	else if (c == '%') {
		cout << "\n Ответ: " << a << " % " << b << " = " << int(a) % int(b);

	}
	else
	 {
		 cout << "Такого действия нету!\n";
		 return 0;
	 }



	 return 0;
}