#include "classification.h";
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "Введите коэффициенты уравнения a,b,c через пробел соответственно: ";

	double a, b, c;
	cin >> a >> b >> c;

	eq2 A(a, b, c);
	A.find_X();
	cout << A.find_Y(6) << endl;
	return 0;
}