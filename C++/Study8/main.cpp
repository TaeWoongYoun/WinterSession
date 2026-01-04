#include <iostream>
using namespace std;

int main() {
	int idx;
	cout << "몇 개? ";
	cin >> idx;

	cout << "정수 입력: ";
	int* cnt = new int[idx];
	for (int i = 0; i < idx; i++) {
		cin >> cnt[i];
	}

	int max = cnt[0];
	for (int i = 1; i < idx; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
		}
	}

	cout << "max = " << max;

	delete[] cnt;

	return 0;
}