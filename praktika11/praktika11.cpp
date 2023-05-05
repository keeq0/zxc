#include <iostream>
#include "Type7_8.h"

int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите коэффициент В для уравнения 7-го типа: "; double B_7; std::cin >> B_7;
	std::cout << "Введите коэффициенты А и В для уравнения 8-го типа через пробел: "; double A, B_8; std::cin >> A >> B_8;

	Type7 first(B_7);
	Type8 second(A, B_8);

	first.show();
	first.get_answer();

	second.show();
	second.get_answer();

}