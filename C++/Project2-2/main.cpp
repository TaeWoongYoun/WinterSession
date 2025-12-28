#include <iostream>
using namespace std;

/*
과제: Book 클래스
요구사항:

멤버 변수: title (string), author (string), price (int)
생성자 3개 작성:

기본 생성자: title="제목없음", author="저자미상", price=0
title, author만 받는 생성자: price=0
title, author, price 모두 받는 생성자


멤버 함수: display() - 책 정보 출력
*/

class Book {
public:
    string title;
    string author;
    int price;
    Book();
    Book(string title, string author);
    Book(string title, string author, int price);
    void display();
};

Book::Book(){
    title = "제목없음";
    author = "저자미상";
    price = 0;
}

Book::Book(string t, string a) {
    title = t;
    author = a;
    price = 0;
}

Book::Book(string t, string a, int p) {
    title = t;
    author = a;
    price = p;
}

void Book::display() {
    cout << "제목 : " << title << ", " << "저자 : " << author << ", " << "가격 : " << price << endl;
}

int main() {
    Book book1;
    Book book2("C++ 프로그래밍", "윤태웅");
    Book book3("자료구조", "홍길동", 25000);

    book1.display();
    book2.display();
    book3.display();

    return 0;
}

/*
과제: Car 클래스
요구사항:

멤버 변수: brand (string), speed (int)
생성자 3개 작성 (오버로딩):

기본 생성자: brand="Unknown", speed=0 으로 초기화
brand만 받는 생성자: speed=0 으로 초기화
brand와 speed 모두 받는 생성자


멤버 함수: printInfo() - 브랜드와 속도 출력
*/
/*class Car {
public:
    string brand;
    int speed;
    Car();
    Car(string brand);
    Car(string brand, int speed);
    void printInfo();
};

Car::Car() {
    brand = "Unknown";
    speed = 0;
    
}

Car::Car(string b) {
    brand = b;
    speed = 0;
}

Car::Car(string b, int s) {
    brand = b;
    speed = s;
}

void Car::printInfo() {
    cout << "Brand : " << brand << ", " << "Speed : " << speed << endl;
}

int main() {
    Car car1;
    Car car2("Hyundai");
    Car car3("Tesla", 120);

    car1.printInfo();
    car2.printInfo();
    car3.printInfo();

    return 0;
}*/

/*===================================================================================*/

/*
과제 1: Rectangle 클래스
요구사항:

멤버 변수: width, height (int 타입)
멤버 함수:

getArea() : 넓이 반환
getPerimeter() : 둘레 반환


선언부와 구현부를 분리하여 작성
main에서 객체 생성 후 width=5, height=3 대입하고 결과 출력
*/
/*class Rectangle {
public:
    int width;
    int height;
    int getArea();
    int getPerimeter();
};

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getPerimeter() {
    return 2 * (width + height);
}

int main() {
    Rectangle test;
    test.width = 5;
    test.height = 3;
    int result1 = test.getArea();
    int result2 = test.getPerimeter();
    cout << "면적은 : " << result1 << endl << "둘레는 : " << result2;
    return 0;
}*/