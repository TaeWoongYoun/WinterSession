#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle() { width = 1; height = 1; }
	Rectangle(int w, int h) { width = w; height = h; }
	int getArea();
	~Rectangle() { cout << "Rectangle ¼Ò¸ê" << endl; }
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle r1;
	Rectangle r2(4, 5);
	cout << r1.getArea() << endl;
	cout << r2.getArea() << endl;

	return 0;
}