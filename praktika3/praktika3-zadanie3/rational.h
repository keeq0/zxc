#include <iostream>

using namespace std;

class rational {
private:
	int a; // Числитель
	int b; // Знаменатель
public:

	void set(int a1, int b1) {
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

	rational(int a1 = 1, int b1 = 1) {
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

	void show() {
		if (a == 0) {
			cout << 0;
		}
		else cout << a << "/" << b;
	}
	rational operator + (rational& q) {
		int a1, b1, a2, b2; a1 = a; b1 = b; a2 = q.a; b2 = q.b;
		return rational(a1 * b2 + a2 * b1, b1 * b2);
	}
	rational operator ++ () {
		return rational(a + 1, b);
	}
	friend rational operator - (rational& q, rational& x) {
		int a1, b1, a2, b2;
		a1 = x.a; b1 = x.b; a2 = q.a; b2 = q.b;
		return rational(a1 * b2 - a2 * b1, b1 * b2);
	}
	bool operator > (rational& x) {
		double a1, b1, a2, b2;
		a1 = a; b1 = b; a2 = x.a; b2 = x.b;
		return ((a1 / b1) > (a2 / b2));
	}
	rational& operator = (const rational& x) {
		a = x.a; b = x.b;
		return *this;
	}
	bool operator == (rational& x) {
		double a1, b1, a2, b2;
		a1 = a; b1 = b; a2 = x.a; b2 = x.b;
		return ((a1 / b1) == (a2 / b2));
	}
};
