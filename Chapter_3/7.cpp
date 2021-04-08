#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	int ranNum;
public:
	Random();
	int next();
	int nextInRange(int a, int b);
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	return (rand() / 2) * 2;
}

int Random::nextInRange(int a, int b) {
	ranNum = rand() % (b - a + 1) + a;
	if (ranNum % 2 == 1)
		return ranNum;
	else if(ranNum % 2 == 0)
		return ranNum + 1;
}

int main() {
	Random r;
	cout << "== 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10�� ==" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << "   ";
	}
	cout << endl << endl << "== 2���� " << "4 ������ Ȧ�� ���� ���� 10�� ==" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << "   ";
	}
	cout << endl;
}