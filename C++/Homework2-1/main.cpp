#include <iostream>
using namespace std;

int main() {

	char city[21];

	cout << "이름을 입력하라(20개 미만) ";
	cin.getline(city, 21, '.');
	cout << "이름은 " << city << endl;

	return 0;
}