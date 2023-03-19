#include "rational.h"
#include <iostream>
#include <cmath>

using namespace std;

rational::rational(int a1, int b1) {
	if (b1 == 0) {
		cout << endl << "Знаменатель не может быть нулём" << endl;
		exit(1);
	}
	else {
		if ((a1 >= b1) and (a1 % b1 == 0)) {
			a1 = 0;
			b1 = 0;
		}
		else {
			if (a1 > b1) {
				a1 = a1 - ((a1 / b1) * b1);
			}
			if (b1 % a1 == 0) {
				b1 = b1 / a1;
				a1 = a1 / a1;
			}
		}
		a = a1;
		b = b1;
	}
}

void rational::set(int a1, int b1) {
	if (b1 == 0) {
		cout << endl << "Знаменатель не может быть нулём" << endl;
		exit(1);
	}
	else {
		if ((a1 >= b1) and (a1 % b1 == 0)) {
			a1 = 0;
			b1 = 0;
		}
		else {
			if (a1 > b1) {
				a1 = a1 - ((a1 / b1) * b1);
			}
			if (b1 % a1 == 0) {
				b1 = b1 / a1;
				a1 = a1 / a1;
			}
		}
		a = a1;
		b = b1;
	}
}

void rational::show() {
	cout << "Дробь: " << a << "/" << b;

rational rational::operator + (rational & q) {
	int a1, b1, a2, b2; a1 = a; b1 = b; a2 = q.a; b2 = q.b;
	return rational(a1 * b2 + a2 * b1, b1 * b2);
}
rational operator - (rational & q, rational & x) {
	int a1, b1, a2, b2;
	a1 = x.a; b1 = x.b; a2 = q.a; b2 = q.b;
	return rational(a1 * b2 - a2 * b1, b1 * b2);
}
rational rational::operator ++ () {
	return rational(a + 1, b);
}
bool rational::operator == (rational & x) {
	double a1, b1, a2, b2;
	a1 = a; b1 = b; a2 = x.a; b2 = x.b;
	return ((a1 / b1) == (a2 / b2));
}
bool rational::operator > (rational & x) {
	double a1, b1, a2, b2;
	a1 = a; b1 = b; a2 = x.a; b2 = x.b;
	return ((a1 / b1) > (a2 / b2));
}
rational& rational::operator = (const rational & x) {
	a = x.a; b = x.b;
	return *this;
}