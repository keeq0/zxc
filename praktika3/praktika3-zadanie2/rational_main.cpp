#include "rational.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество дробей: ";
	int n, a, b; cin >> n; cout << endl;
	int* mas_a = new int[n];
	int* mas_b = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Введите через пробел числитель и знаменатель для дроби №" << i+1 << ": "; cin >> a >> b;
		mas_a[i] = a;
		mas_b[i] = b;
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "Дробь №" << i + 1 << ": ";
		rational fraction(mas_a[i],mas_b[i]);
		fraction.show();
		cout << endl;
	}


}