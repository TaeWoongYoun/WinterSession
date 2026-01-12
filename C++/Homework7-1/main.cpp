#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

class NameCircle : public Circle {
    char* name;
public:
    NameCircle(int radius, const char* name) : Circle(radius) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    ~NameCircle() {
        delete[] name;
    }

    void show() {
        cout << "반지름 = " << getRadius() << ", 이름 = " << name << endl;
    }
};

int main() {
    NameCircle waffle(3, "waffle");
    waffle.show();
    return 0;
}