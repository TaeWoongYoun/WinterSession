#include <iostream>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int k, int p) { kick = k; punch = p; }
    bool operator!();
};

bool Power::operator!() {
    if (kick == 0 && punch == 0) return true;
    else return false;
}

int main() {
    Power a(0, 0), b(5, 5);

    if (!a) cout << "a는 파워가 0이다" << endl;
    else cout << "a는 파워가 0이 아니다" << endl;

    if (!b) cout << "b는 파워가 0이다" << endl;
    else cout << "b는 파워가 0이 아니다" << endl;

    return 0;
}