#include <iostream>
using namespace std;

class Student {
	int score;
public:
	Student() { score = 0; }
	void setScore(int s) { score = s; }
	int getScore() { return score; }
};

int main() {

	Student student[4];
	student[0].setScore(85);
	student[1].setScore(90);
	student[2].setScore(78);
	student[3].setScore(92);

	cout << "[배열 접근]" << endl;
	for (int i = 0; i < 4; i++) {
		cout << "Student " << i << "의 점수: " << student[i].getScore() << endl;
	}

	cout << "[포인터 접근]" << endl;
	Student *p = student;
	for (int i = 0; i < 4; i++) {
		cout << "Student " << i << "의 점수: " << p->getScore() << endl;
		p++;
	}

	return 0;
}