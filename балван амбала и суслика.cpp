#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "¬ыберите мес€ц\n";
	cout << "€нварь\n";
	cout << "февраль\n";
	cout << "март\n";
	cout << "апрель\n";
	cout << "май\n";
	cout << "июнь\n";
	cout << "июль\n";
	cout << "август\n";
	cout << "сент€брь\n";
	cout << "окт€брь\n";
	cout << "но€брь\n";
	cout << "декабрь\n";
	
	int monts;
	cin >> monts;

	switch(monts) {
	case 1:
		cout << "[1] Ѕалван сейчас окт€брь \n";
		break;

	case 2:
		cout << "[2] Ѕалван сейчас окт€брь \n";
		break;
	case 3:
		cout << "[3] Ѕалван сейчас окт€брь \n";
		break;
	case 4:
		cout << "[4] Ѕалван сейчас окт€брь \n";
		break;
	case 5:
		cout << "[5] Ѕалван сейчас окт€брь \n";
		break;
	case 6:
		cout << "[6] Ѕалван сейчас окт€брь \n";
		break;
	case 7:
		cout << "[7] Ѕалван сейчас окт€брь \n";
		break;
	case 8:
		cout << "[8] Ѕалван сейчас окт€брь \n";
		break;
	case 9:
		cout << "[9] Ѕалван сейчас окт€брь \n";
		break;
	case 10:
		cout << "[10] ћолодец сейчас окт€брь \n";
		break;
	case 11:
		cout << "[11] Ѕалван сейчас окт€брь \n";
		break;
	case 12:
		cout << "[12] Ѕалван сейчас окт€брь \n";
		break;
	}
	return 0;
}