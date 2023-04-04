#include "type.h"
#include <iostream>

void type1::show() 
{

	std::cout << "Уравнение: 0 = 0" << std::endl;

}

void type1::get_answer()
{
	std::cout << "Решением уравнения является любое число х" << std::endl;
}

type2::type2(double _a)
{
	a = _a;
}

void type2::show() 
{
	std::cout << "Уравнение: " << a << "x^2 = 0" << std::endl;
}

void type2::get_answer()
{
	std::cout << "Решением уравнения " << a << "x^2 = 0 является х = 0" << std::endl;
}