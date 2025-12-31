#include <iostream>
using namespace std;

int sum(int a, int b) {
	int num = 0;
	for (int i = a; i <= b; i++) {
		num += i;
	}
	return num;
}

int sum(int a) {
	int num = 0;
	for (int i = 0; i <= a; i++) {
		num += i;
	}
	return num;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}