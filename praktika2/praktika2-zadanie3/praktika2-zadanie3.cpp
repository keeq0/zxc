#include "specification.h";
#include <iostream>

using namespace std;

int main() {

	figure A(0, 0, 0, 0);
	figure B(0, 0, 0, 0);
	figure C(0, 0, 0, 0);

	float a, b, c, d, a1, b1, c1, d1;

	setlocale(LC_ALL, "Russian");
	cout << "Введите координаты х четырёхугольника №1 через пробел: ";
	cin >> a >> b >> c >> d >> a1 >> b1 >> c1 >> d1;
	A.set_figure(a, b, c, d, a1, b1, c1, d1);		
	cout << "Введите координаты х четырёхугольника №2 через пробел: ";
	cin >> a >> b >> c >> d >> a1 >> b1 >> c1 >> d1;
	B.set_figure(a, b, c, d, a1, b1, c1, d1);
	cout << "Введите координаты х четырёхугольника №3 через пробел: ";
	cin >> a >> b >> c >> d >> a1 >> b1 >> c1 >> d1;
	C.set_figure(a, b, c, d, a1, b1, c1, d1);


}