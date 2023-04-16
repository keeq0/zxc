#include <iostream>
#include "types5_6.h"
#include <windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите коэффициенты B и С для уравнения 5-го типа через пробел соответственно: "; double valB, valC; std::cin >> valB >> valC;
	std::cout << "Введите коэффициенты A, B и C для уравнения 6-го типа через пробел соответсвенно: "; double ValA, ValB, ValC; std::cin >> ValA >> ValB >> ValC;
	Type5 first(valB, valC);
	Type6 second(ValA, ValB, ValC);

	first.show();
	first.get_answer();

	second.show();
	second.get_answer();
}