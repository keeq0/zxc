#include "type.h"
#include <iostream>

void type1::show() 
{

	std::cout << "���������: 0 = 0" << std::endl;

}

void type1::get_answer()
{
	std::cout << "�������� ��������� �������� ����� ����� �" << std::endl;
}

type2::type2(double _a)
{
	a = _a;
}

void type2::show() 
{
	std::cout << "���������: " << a << "x^2 = 0" << std::endl;
}

void type2::get_answer()
{
	std::cout << "�������� ��������� " << a << "x^2 = 0 �������� � = 0" << std::endl;
}