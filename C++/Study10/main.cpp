#include <iostream>
using namespace std;

class Point {
    int x;
    int y;
public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    bool operator==(Point other) {
        if (other.x == x && y == other.y) return true;
        else return false;
    }
};

int main() {
    Point a(3, 4);
    Point b(3, 4);
    Point c(1, 2);

    if (a == b) cout << "a와 b는 같다" << endl;
    else cout << "a와 b는 다르다" << endl;

    if (a == c) cout << "a와 c는 같다" << endl;
    else cout << "a와 c는 다르다" << endl;

    return 0;
}