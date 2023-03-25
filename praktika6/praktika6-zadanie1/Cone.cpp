#include "Cone.h"
#include <iostream>

using namespace std;

// ����� ������.
class Cone {
    double x, y, z;        // ���������� ����������
    double radius;         // ������
    double height;         // ������
    const double pi = 3.14159265;
public:
    // ����������� �� ���������
    Cone() { x = y = z = radius = height = 0; }
    // ����������� � ������� � ������ ���������
    Cone(double r, double h) {
        x = y = z = 0.0;
        radius = r;
        height = h;
    }
    // ����������� ��� Cone
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }

    // ������� �������
    void setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
    void setRadius(double r) { radius = r; }
    void setHeight(double h) { height = h; }
    double getRadius() { return radius; }
    double getHeight() { return height; }

    // ������� ������ �����������
    double area() {
        double l = sqrt(height * height + radius * radius);
        return pi * radius * (radius + l);
    }
    // �����
    double volume() {
        return pi * radius * radius * height / 3;
    }

    // ���������� ��������� ������
    friend ostream& operator<<(ostream& stream, Cone obj);
};

// ����� ������ ������
ostream& operator<<(ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
}