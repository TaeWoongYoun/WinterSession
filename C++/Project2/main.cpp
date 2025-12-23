#include <iostream>
using namespace std;

// 2개의 생성자를 가진 Circle 클래스
class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}

// Rectangle 클래스 만들기
//class Rectangle {
//public:
//	int width;
//	int height;
//	int getArea();
//
//};
//
//int Rectangle::getArea() {
//	return width * height;
//}
//
//int main() {
//	Rectangle rect;
//	rect.width = 3;
//	rect.height = 5;
//	cout << "사각형의 면적은 " << rect.getArea() << endl;
//}
