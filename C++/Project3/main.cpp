#include <iostream>
using namespace std;
#include "Adder.h";
#include "Calculator.h";

int main() {
	Calculator calc; // calc 객체 생성
	calc.run(); // 계산기 시작
}

//CIrcle Code
//#include "Circle.h"
//
//int main() {
//	Circle donut;
//	double area = donut.getArea();
//	cout << "donut 면적은 ";
//	cout << area << endl;
//
//	Circle pizza(30);
//	area = pizza.getArea();
//	cout << "pizza 면적은 ";
//	cout << area << endl;
//}