#include "specification.h";
#include <iostream>

using namespace std;

float x1, x2, x3, x4; // ���������� � ������ ����������������
float y1, y2, y3, y4; // ���������� � ������ ����������������
float S;		      // ������� ����������������
float P;			  // �������� ����������������

figure(float a, float b, float c, float d, float a1, float b1, float c1, float d1) {
	x1 = a;
	x2 = b;
	x3 = c;
	x4 = d;
	y1 = a1;
	y2 = b1;
	y3 = c1;
	y4 = d1;

	P = storona(a, a1, b, b1) + storona(b, b1, c, c1) + storona(c, c1, d, d1) + storona(d, d1, a, a1);

}

set_figure(float a, float b, float c, float d, float a1, float b1, float c1, float d1) {
	x1 = a;
	x2 = b;
	x3 = c;
	x4 = d;
	y1 = a1;
	y2 = b1;
	y3 = c1;
	y4 = d1;

	P = storona(a, a1, b, b1) + storona(b, b1, c, c1) + storona(c, c1, d, d1) + storona(d, d1, a, a1);

}

void show() {
	cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	cout << "������� ���������������: " << S << endl;
	cout << "�������� ���������������: " << P << endl;
}

bool is_prug() {

}

bool is_romb() {

}

bool is_in_circle() {

}

bool is_out_circle() {

}
};