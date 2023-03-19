#include "rational.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество дробей: ";
	int n, a, b; cin >> n; cout << endl;
	
	rational* mass = new rational[n];

	for (int i = 0; i < n; i++) {
		cout << "Введите через пробел числитель и знаменатель для дроби №" << i+1 << ": "; cin >> a >> b;
		mass[i].set(a, b); 
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "Дробь №" << i + 1 << ": ";
		mass[i].show();
		cout << endl;
	}

	delete[] mass;

}