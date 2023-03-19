#include "rational.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество дробей: ";
	int n, a, b; cin >> n; cout << endl;

	rational* mass = new rational[n];

	for (int i = 0; i < n; i++) {
		cout << "Введите через пробел числитель и знаменатель для дроби №" << i + 1 << ": "; cin >> a >> b;
		mass[i].set(a, b);
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << "Дробь №" << i + 1 << ": ";
		mass[i].show();
		cout << endl;
	}
	rational P = mass[0];
	rational Q;
	if (n < 2)
	{
		Q = rational(1, 2);
	}
	else
	{
		Q = mass[1];
	}
	P.show(); cout << endl;
	Q.show(); cout << endl;
	(P + Q).show(); cout << endl;
	(P - Q).show(); cout << endl;
	rational M = P;
	++M;
	M.show(); cout << endl;
	cout << (P == Q); cout << endl;
	cout << (P > Q); cout << endl;

	mass = NULL;
	delete[] mass;

}