#include "Type7_8.h"
#include <iostream>


Type7::Type7(double c1) 
{
	C = c1;
}

void Type7::get_answer()
{
	std::cout << "Корень уравнения: х = 0" << std::endl;
}

void Type7::show()
{
	std::cout << "Уравнение: " << C << "x = 0" << std::endl;
}

Type8::Type8(double a1, double b1)
{
	A = a1;
	B = b1;
}

void Type8::get_answer()
{
	std::cout << "Корни уравнения: " << std::endl << "x1 = 0" << std::endl << "x2 = " << -B / A << std::endl;
}

void Type8::show() 
{
	std::cout << "Уравнение: " << A << "x^2 + " << B << "x = 0" << std::endl;
}