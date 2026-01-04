#include <iostream>
using namespace std;

class Product {
	string name;
	int price;
public:
	Product() { name = "없음"; price = 0; }
	void setProduct(string n, int p) { name = n; price = p; }
	void show() { cout << "상품: " << name << ", " << "가격: " << price << endl; }
};

int main() {
	
	Product* pProduct = new Product[3];
	pProduct[0].setProduct("사과", 1000);
	pProduct[1].setProduct("바나나", 1500);
	pProduct[2].setProduct("오렌지", 2000);

	for (int i = 0; i < 3; i++) {
		pProduct[i].show();
	}

	delete[] pProduct;

	return 0;
}