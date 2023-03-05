#include <iostream>

using namespace std;

class rational {
private:
	int a; // Числитель
	int b; // Знаменатель
public:
	rational(int a1, int b1) {
		if (b1 != 0) {
			if ((a1 > b1)and(a1 % b1 == 0)) {
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

	void set(int a1, int b1) {
		a = a1;
		b = b1;
	}

	void show() {
		if (a == 0) {
			cout << 0;
		}
		else cout << a << "/" << b;
	}
};
