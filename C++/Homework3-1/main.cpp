#include <iostream>
using namespace std;

class CRect {
	int left = 0;
	int top = 0;
	int right = 20;
	string bottom = "20";

public:
	void print();
};

void CRect::print() {
	cout << "( " << left << ", " << top << ", " << right << ", " << bottom << " )" << endl;
}

void main() {

	CRect rc;
	rc.print();
}