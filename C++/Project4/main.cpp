#include <iostream>
using namespace std;

int main() {
	int cnt;
	cout << "입력할 정수의 개수는? : ";
	cin >> cnt;
	int* p = new int [cnt];

	for (int i = 0; i < cnt; i++) {
		cout << i + 1 << "번째 정수 : ";
		cin >> p[i];
	}

	int sum = 0;

	for (int i = 0; i < cnt; i++) {
		sum += p[i];
	}

	cout << "평균 = " << sum / cnt << endl;

	delete[] p;

	return 0;
}