#include "type.h"
#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите значение А для уравнения типа Аx^2 = 0: "; int val; std::cin >> val;

	type1 A;
	A.show();
	A.get_answer();

	type2 B(val);
	B.show();
	B.get_answer();

}