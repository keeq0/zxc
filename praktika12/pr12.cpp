#include "pr12.h"
#include <iostream>

//////////////////////////////////////////////////////////////////
Type4::Type4(double a1, double c1)
{
	A = a1;
	C = c1;
}

void Type4::show()
{
	std::cout << "Уравнение: " << A << "x^2 + " << C << " = 0" << std::endl;
}

void Type4::Get_answer_podbor()
{
	if ((-(C) / A) < 0)
	{
		std::cout << "Корней нет" << std::endl;
	}
	else
	{
		double min = abs(0 - A * (-20) * (-20) - C);
		double x = -20;
		for (double i = -20; i < 20.01; i += 0.01)
		{
			double temp = abs(0 - A * i * i - C);
			if (temp < min)
			{
				min = temp;
				x = i;
			}
		}
		std::cout << "Корни уравнения: х1 = " << x << " | x2 = " << -(x) << std::endl << std::endl;
	}
}
//////////////////////////////////////////////////////////////////
Type5::Type5(double b1, double c1)
{
	B = b1;
	C = c1;
}

void Type5::Get_answer_podbor()
{
	double min = abs(0 - B * (-20) - C);
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		double temp = abs(0 - B * (i)-C);
		if (temp < min) {
			min = temp;
			x = i;
		}
	}
	std::cout << "Корень уравнения: " << x << std::endl << std::endl;
}

void Type5::show()
{
	std::cout << "Уравнение: " << B << "x + " << C << " = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////
Type6::Type6(double a1, double b1, double c1)
{
	A = a1;
	B = b1;
	C = c1;
}

void Type6::Get_answer_podbor()
{
	double D = B * B - 4 * A * C;
	if (D < 0) {
		std::cout << "Корней нет" << std::endl << std::endl;
	}
	else {
		double min = abs(0 - A * (-20) * (-20) - B * (-20) - C);
		double x = -20;
			for (double i = -20; i < 20.01; i = i + 0.01) {
				double temp = abs(0 - A * (i) * (i)-B * i - C);
				if (temp < min) {
					min = temp;
					x = i;
				}
			}
			std::cout << "Корень уравнения: " << x << std::endl << std::endl;
	}
}

void Type6::show()
{
	std::cout << "Уравнение: " << A << "x^2 + " << B << "x + " << C << " = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////
Type8::Type8(double a1, double b1)
{
	A = a1;
	B = b1;
}

void Type8::Get_answer_podbor()
{
	double min = abs(0 - A * (-20) * (-20) - B * (-20));
	double x = -20;
	for (double i = -20; i < 20.01; i = i + 0.01) {
		if (i != 0) {
			double temp = abs(0 - A * (i) * (i) - B * (i));
			if (temp < min) {
				min = temp;
				x = i;
			}
		}
	}
	std::cout << "Корень уравнения: " << x << std::endl;
}

void Type8::show()
{
	std::cout << "Уравнение: " << A << "x^2 + " << B << "x = 0" << std::endl;
}
//////////////////////////////////////////////////////////////////