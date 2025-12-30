#include <iostream>
using namespace std;

int& RefFunc(int& val) {
	val++;
	return val;
}

int& RefFunc2(int val) {
	val++;
	return val;
}

int main() {
	int n1 = 10;
	int& ref1 = RefFunc(n1);
	int n2 = 10;
	int& ref2 = RefFunc2(n2);

	n1++;
	ref1++;
	n2++;
	ref2++;

	cout << "n1 : " << n1 << endl;
	cout << "ref1 : " << ref1 << endl;
	cout << "n2 : " << n2 << endl;
	cout << "ref2 : " << ref2 << endl; // ref2를 증가시켰을 때 Func2에 접근을 못해서 값이 깨지니까 여기서 저 함수의 값이 출력되도록 해보자 목표 예상 출력 : 12, 안나오면 왜 안나오는지 이해하고 알아오고.
	return 0;
}
