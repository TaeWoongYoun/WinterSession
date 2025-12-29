#include <iostream>
using namespace std;

class Student {
	string name;
	int score;
public:
	Student();
	~Student() {};
	void setName(string n);
	void setScore(int s);
	string getName();
	int getScore();
};

Student::Student() {
	name = "";
	score = 0;
}

void Student::setName(string n) {
	name = n;
}

void Student::setScore(int s) {
	score = s;
}

string Student::getName() {
	return name;
}

int Student::getScore() {
	return score;
}

int main() {
	cout << "학생 수 : ";
	int cnt;
	cin >> cnt;
	Student* pArray = new Student[cnt];

	for (int i = 0; i < cnt; i++) {
		cout << "학생" << i + 1 << " 이름 : ";
		string n;
		cin >> n;
		cout << "학생" << i + 1 << " 점수 : ";
		int s;
		cin >> s;
		pArray[i].setName(n);
		pArray[i].setScore(s);
	}

	for (int i = 0; i < cnt; i++) {
		cout << pArray[i].getName() << ": " << pArray[i].getScore() << endl;
	}

	int sum = 0;
	int num = 0;
	for (int i = 0; i < cnt; i++) {
		sum += pArray[i].getScore();
		if (pArray[i].getScore() >= 80) {
			num++;
		}
	}
	cout << "평균 점수 : " << sum / cnt << endl;
	cout << "80점 이상 : " << num << "명";

	delete[] pArray;

	return 0;
}