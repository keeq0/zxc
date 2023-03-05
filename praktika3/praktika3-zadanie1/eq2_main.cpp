#include "eq2.h"
#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	double a, b, c;
	cout << "Введите коэффициенты a,b,c первого уравнения через пробел: "; cin >> a >> b >> c;
	eq2 first_equation(a, b, c);
	cout << "Введите коэффициенты a,b,c второго уравнения через пробел: "; cin >> a >> b >> c;
	eq2 second_equation(a, b, c);

	cout << endl << "Первое уравнение" << endl;
	first_equation.find_X();
	cout << "Значение, при заданном x = 5: " << first_equation.find_Y(5);

	cout << endl;

	cout << endl << "Второе уравнение" << endl;
	second_equation.find_X();
	cout << "Значение, при заданном x = 5: " << second_equation.find_Y(5);

	eq2 equation_sum = first_equation + second_equation;

	cout << endl;

	cout << endl << "Уравнение, полученное путём сложения первых двух (cложения коэффициентов)" << endl;
	equation_sum.find_X();
	cout << "Значение, при заданном x = 5: " << equation_sum.find_Y(5) << endl;

}