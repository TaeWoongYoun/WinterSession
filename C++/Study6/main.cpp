#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char* name;
    int score;
public:
    Student(const char* n, int s) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        score = s;
    }

    Student(const Student& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        score = other.score;
    }

    ~Student() {
        delete[] name;
    }

    void show() {
        cout << "이름: " << name << ", 점수: " << score << endl;
    }
};

int main() {
    Student s1("Kim", 90);
    Student s2 = s1;  // 복사 생성자 호출

    s1.show();
    s2.show();

    return 0;
}