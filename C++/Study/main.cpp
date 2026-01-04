#include <iostream>
using namespace std;

class ScoreManager {
	int* scores;
	int size;
public:
	ScoreManager(int s) {
		size = s;
		scores = new int[s];
	}
	void setScore(int idx, int value) { 
		scores[idx] = value; 
	}
	int getMax() {
		int max = scores[0];
		for (int i = 1; i < size; i++) {
			if (max < scores[i]) {
				max = scores[i];
			}
		}
		return max;
	}
	~ScoreManager() {
		delete[] scores;
	}
};

int main() {
	ScoreManager sm(4);
	sm.setScore(0, 80);
	sm.setScore(1, 95);
	sm.setScore(2, 70);
	sm.setScore(3, 88);

	cout << "�ִ밪: " << sm.getMax();

	return 0;
}