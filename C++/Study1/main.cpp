#include <iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    Circle() {
        radius = 1;
    }
    Circle(int r) {
        radius = r;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
    void setRadius(int r) {
        radius = r;
    }
};

int main() {
    int x = 5;
    int& ref = x;
    ref = 10;
    cout << x;
}