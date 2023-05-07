#include "pr13.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	double A, B, C;

	std::cout << "Введите коэффициенты А, В и С для уравнения 1-го типа через пробел: "; std::cin >> A >> B >> C; Type1 equation1;
	std::cout << "Введите коэффициенты А, В и С для уравнения 2-го типа через пробел: "; std::cin >> A >> B >> C; Type2 equation2(A);
	std::cout << "Введите коэффициенты А, В и С для уравнения 3-го типа через пробел: "; std::cin >> A >> B >> C; Type3 equation3(C);
	std::cout << "Введите коэффициенты А, В и С для уравнения 4-го типа через пробел: "; std::cin >> A >> B >> C; Type4 equation4(A, C);
	std::cout << "Введите коэффициенты А, В и С для уравнения 5-го типа через пробел: "; std::cin >> A >> B >> C; Type5 equation5(B, C);
	std::cout << "Введите коэффициенты А, В и С для уравнения 6-го типа через пробел: "; std::cin >> A >> B >> C; Type6 equation6(A, B, C);
	std::cout << "Введите коэффициенты А, В и С для уравнения 7-го типа через пробел: "; std::cin >> A >> B >> C; Type7 equation7(B);
	std::cout << "Введите коэффициенты А, В и С для уравнения 8-го типа через пробел: "; std::cin >> A >> B >> C; Type8 equation8(A, B);
	std::cout << std::endl;

	equation1.show();
	equation1.get_answer();

	equation2.show();
	equation2.get_answer();

	equation3.show();
	equation3.get_answer();

	equation4.show();
	equation4.get_answer();
	equation4.Get_answer_podbor();

	equation5.show();
	equation5.get_answer();
	equation5.Get_answer_podbor();

	equation6.show();
	equation6.get_answer();
	equation6.Get_answer_podbor();

	equation7.show();
	equation7.get_answer();

	equation8.show();
	equation8.get_answer();
	equation8.Get_answer_podbor();

}