#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(string t, int p) { title = t; price = p; }
	void show() {cout << "제목: " << title << ", " << "가격: " << price << endl;}
};

int main() {
	Book* user1 = new Book("C++ 입문", 25000);
	Book* user2 = new Book("알고리즘", 30000);

	user1->show();
	user2->show();

	delete user1;
	delete user2;
	return 0;
}