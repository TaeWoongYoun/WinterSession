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
	cout << "ref2 : " << ref2 << endl;

}