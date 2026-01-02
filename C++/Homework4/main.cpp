#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];

    cout << "5개 정수를 입력하세요 ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "max = " << max  << "입니다" << endl;

    delete[] arr;
    return 0;
}