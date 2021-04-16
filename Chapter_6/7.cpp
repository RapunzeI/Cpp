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
	Random::seed(); // ���� �õ� ����
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl << "���ĺ��� �����ϰ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl << "������ �Ǽ��� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
		if ((i + 1) % 5 == 0) cout << endl;
	}
}