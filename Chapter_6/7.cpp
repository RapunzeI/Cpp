#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(NULL)); }
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble ();
};
int Random::nextInt(int min, int max) {
	return rand() % (max + 1 - min) + min;
}
char Random::nextAlphabet() {
	int n = rand() % 2;
	if (n == 0) {
		n = 65 + rand() % 26;
		return n;
	}
	else {
		n `= 97 + rand() % 26;
		return n;
	}
}
double Random::nextDouble() {
	double a = 0.0, b = 1.0;
	return ((b - a) * ((double)rand() / RAND_MAX)) + a; // rand() / (double)(RAND_MAX + 1)
}

int main() {
	Random::seed(); // 난수 시드 설정
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl << "알파벳을 랜덤하게 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl << "랜덤한 실수를 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
		if ((i + 1) % 5 == 0) cout << endl;
	}
}