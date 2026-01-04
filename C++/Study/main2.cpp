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
	ScoreManager(const ScoreManager& other) {
		size = other.size;
		scores = new int[size];
		for (int i = 0; i < size; i++) {
			scores[i] = other.scores[i];
		}
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

int main2() {
    ScoreManager sm1(3);
    sm1.setScore(0, 85);
    sm1.setScore(1, 90);
    sm1.setScore(2, 78);

    ScoreManager sm2 = sm1;

    cout << "sm1 ÃÖ´ñ°ª: " << sm1.getMax() << endl;
    cout << "sm2 ÃÖ´ñ°ª: " << sm2.getMax() << endl;

    return 0;
}