#include "rational.h"
#include <iostream>
#include <cmath>

using namespace std;

rational::rational(int a1, int b1) {
	if (b1 != 0) {
		if (a1 > b1) {
			a1 = a1 - ((a1 / b1) * b1);
		}
		if (b1 % a1 == 0) {
			b1 = b1 / a1;
			a1 = a1 / a1;
		}
		a = a1;
		b = b1;
	}
}

void set(int a1, int b1) {
	a = a1;
	b = b1;
}

void show() {
	cout << "ִנמבü: " << a << "/" << b;
}