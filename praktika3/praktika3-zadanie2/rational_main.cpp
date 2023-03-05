#include "rational.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	cout << "Введите числитель и знаменатель дроби через пробел: ";
	int a, b; cin >> a >> b;
	rational fraction(a, b);
	if (b == 0) {
		cout << "Знаменатель равен 0, попробуйте ещё раз";
	}
	fraction.show();
	cout << endl;

}