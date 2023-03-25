#include "Cone.h"
#include <iostream>

using namespace std;

// Класс конуса.
class Cone {
    double x, y, z;        // трехмерные координаты
    double radius;         // радиус
    double height;         // высота
    const double pi = 3.14159265;
public:
    // Конструктор по умолчанию
    Cone() { x = y = z = radius = height = 0; }
    // Конструктор с центром в начале координат
    Cone(double r, double h) {
        x = y = z = 0.0;
        radius = r;
        height = h;
    }
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }

    // Функции доступа
    void setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
    void setRadius(double r) { radius = r; }
    void setHeight(double h) { height = h; }
    double getRadius() { return radius; }
    double getHeight() { return height; }

    // Площадь полной поверхности
    double area() {
        double l = sqrt(height * height + radius * radius);
        return pi * radius * (radius + l);
    }
    // Объем
    double volume() {
        return pi * radius * radius * height / 3;
    }

    // Перегрузка оператора вывода
    friend ostream& operator<<(ostream& stream, Cone obj);
};

// Вывод данных конуса
ostream& operator<<(ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
}