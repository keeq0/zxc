#include "classification.h";
#include <iostream>

using namespace std;

double a, b, c, D;

eq2(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = b * b - 4 * a * c;
}

void set(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = b * b - 4 * a * c;
}

double find_X() {
	if (D < 0) {
		cout << "Корней нет";
	}
	else {
		if (D == 0) {
			cout << "Корень один: ";
			double x = (b * sqrt(b)) / (2 * a);
			cout << x << endl;
			return x;
		}
		else {
			cout << "Корней 2, наибольший: ";
			double x1 = (-b - sqrt(D)) / (2 * a);
			double x2 = (-b + sqrt(D)) / (2 * a);
			cout << max(x1, x2);
			return max(x1, x2);
		}
	}
}

double find_Y(double x1) {
	return a * x1 * x1 + b * x1 + c;
}