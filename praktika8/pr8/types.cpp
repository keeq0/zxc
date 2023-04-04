#include "types.h"
#include <iostream>

type3::type3(double _a)
{
	a = _a;
}

void type3::get_answer()
if (a != 0)
{
	std::cout << "������� ��������� ���" << std::endl;
}
else
{
	std::cout << "�������� ��������� �������� ����� ����� �" << std::endl;
}

void type3::show()
{
	std::cout << "���������: " << a << " = 0" << std::endl;
}

type4::type4(double _b, double _c)
{
	b = _b;
	c = _c;
}

void type4::get_answer()
{
	double right, answer;
	right = c * (-1) / b;
	if (right <= 0) 
	{
		std::cout << "������ ���";
	}
	else
	{
		answer = sqrt(right);
		std::cout << "������� ���������: x1 = " << answer << " x2 = " << answer * (-1) << std::endl;
	}
}

void type4::show()
{
	std::cout << "���������: " << b << "x^2 + " << c << " = 0" << std::endl;
}

