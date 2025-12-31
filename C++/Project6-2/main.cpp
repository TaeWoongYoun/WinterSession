#include <iostream>
using namespace std;

void f(char text = ' ', int line = 1) {
	for (int i = 0; i < line; i++) {
		for (int i = 0; i < 10; i++) {
			cout << text;
		}
		cout << endl;
	}
}

int main() {

	f();
	f('%');
	f('@', 5);

	return 0;
}