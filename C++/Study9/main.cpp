#include <iostream>
using namespace std;

class Power {
    int kick;    // private
    int punch;   // private
public:
    // 외부 함수를 친구로 선언!
    friend void showPower(Power p);
};

// 외부 함수인데 private 멤버 접근 가능!
void showPower(Power p) {
    cout << p.kick << " " << p.punch;  // OK!
}

int main() {

}