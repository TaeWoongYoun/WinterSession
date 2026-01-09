#include <iostream>
#include <vector>
#include <string>
using namespace std;

string lastname(vector<string>& v) {
    string last = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (last < v[i]) {
            last = v[i];
        }
    }
    return last;    
}

int main() {
    vector<string> v;
    string name;
    cout << "이름을 5개 입력하라" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << ">>";
        cin >> name;
        v.push_back(name);
    }
    cout << "사전에서 가장 뒤에 나오는 이름: " << lastname(v) << endl;
    return 0;
}