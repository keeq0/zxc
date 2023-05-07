#include "pr12.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	std::cout << "Введите коэффициенты А и С для уравнения 4-го типа через пробел: "; double A_4, C_4; std::cin >> A_4 >> C_4;
	std::cout << "Введите коэффициенты В и С для уравнения 5-го типа через пробел: "; double B_5, C_5; std::cin >> B_5 >> C_5;
	std::cout << "Введите коэффициенты А, В и С для уравнения 6-го типа через пробел: "; double A_6, B_6, C_6; std::cin >> A_6 >> B_6 >> C_6;
	std::cout << "Введите коэффициенты А и В для уравнения 8-го типа через пробел: "; double A_8, B_8; std::cin >> A_8 >> B_8; std::cout << std::endl;

	Type4 equation4(A_4, C_4);
	Type5 equation5(B_5, C_5);
	Type6 equation6(A_6, B_6, C_6);
	Type8 equation8(A_8, B_8);

	equation4.show();
	equation4.Get_answer_podbor();

	equation5.show();
	equation5.Get_answer_podbor();

	equation6.show();
	equation6.Get_answer_podbor();

	equation8.show();
	equation8.Get_answer_podbor();
}