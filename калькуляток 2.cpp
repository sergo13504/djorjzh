#include <iostream>
using namespace std;

double m1(double num1, double num2, char num3) {
	switch (num3) {
	case '+': return num1 + num2;
	case '-': return num1 - num2;
	case '*': return num1 * num2;
	case '/': return num1 / num2;
	case '%': return (int)num1 % (int)num2;
	default:
		return 0;
	}
}
int main() {
	system("color 0b");
	setlocale(0, "");
	cout << "[+] �����������\n\n";
	cout << "[+] ������� ������ �����: ";
	double num1;
	cin >> num1;
	cout << "[+] ������� ������ �����: ";
	double num2;
	cin >> num2;
	cout << "[+] �������� ��������: ";
	char num3;
	cin >> num3;
	cout << "[+] ���������: " << m1(num1, num2, num3);
	int _; cin >> _;
	return 0;
}
