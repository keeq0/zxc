#pragma once
#include <iostream>

using namespace std;

class eq2 {

private:
	double a, b, c; // Коэффициенты уравнения
	double D; // Дискриминант

public:
	eq2(double a1, double b1, double c1) {
		a = a1; b = b1; c = c1;
		D = b * b - 4 * a * c;
	}

	void set(double a1, double b1, double c1) {
		a = a1; b = b1; c = c1;
		D = b * b - 4 * a * c;
	}

	double find_X() {
		if (D < 0) {
			cout << "Корней нет" << endl;
			return 0;
		}
		else {
			if (D == 0) {
				cout << "Корень один: ";
				double x = (b - sqrt(D)) / (2 * a);
				cout << x << endl;
				return x;
			}
			else {
				cout << "Корней 2, наибольший: ";
				double x1 = (-b + sqrt(D)) / (2 * a);
				double x2 = (-b - sqrt(D)) / (2 * a);
				cout << max(x1, x2) << endl;
				return max(x1, x2);
			}
		}
	}

	double find_Y(double x1) {
		return a * x1 * x1 + b * x1 + c;
	}

	eq2 operator+(eq2& sum) {
		double sum_a = a + sum.a;
		double sum_b = b + sum.b;
		double sum_c = c + sum.c;
		return eq2(sum_a, sum_b, sum_c);
	}

};