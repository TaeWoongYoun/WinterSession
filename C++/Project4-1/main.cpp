#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle() {};
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

int main() {
	
	cout << "생성하고자 하는 원의 개수? : ";
	int cnt;
	cin >> cnt;
	Circle* pArray = new Circle[cnt];

	for (int i = 0; i < cnt; i++) {
		cout << "원" << i + 1 << ": ";
		int r;
		cin >> r;
		pArray[i].setRadius(r);
	}

	for (int i = 0; i < cnt; i++) {
		cout << pArray[i].getArea() << " ";
	}

	int num = 0;

	for (int i = 0; i < cnt; i++) {
		double area = pArray[i].getArea();
		if (area >= 100 && area <= 200) {
			num++;
		}
	}

	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << num;

	delete[] pArray;

	return 0;
}