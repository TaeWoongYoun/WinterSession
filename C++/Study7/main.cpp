#include <iostream>
using namespace std;

int main() {
	int idx;
	cout << "몇 개? ";
	cin >> idx;

	int* cnt = new int[idx];
	cout << "정수 입력: ";
	
	for (int i = 0; i < idx; i++) {
		cin >> cnt[i];
	}

	cout << "출력: ";
	for (int i = 0; i < idx; i++) {
		cout << cnt[i] << " ";
	}

	delete[] cnt;

	return 0;
}