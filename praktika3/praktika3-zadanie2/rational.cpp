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
}