#include <iostream>

class type3
{
private:

	double a;

public:

	type3(double _a) {
		a = _a;
	}
	void get_answer() {
		if (a != 0)
		{
			std::cout << "������� ��������� ���" << std::endl;
		}
		else
		{
			std::cout << "�������� ��������� �������� ����� ����� �" << std::endl;
		}
	}
	void show() {
		std::cout << "���������: " << a << " = 0" << std::endl;
	}

};

class type4
{
private:
	double b, c;
public:
	type4(double _b, double _c) {
		b = _b;
		c = _c;
	}
	void get_answer() {
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

	void show() {
		std::cout << "���������: " << b << "x^2 + " << c << " = 0" << std::endl;
	}
};


