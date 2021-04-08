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
	cout << "== 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10개 ==" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << "   ";
	}
	cout << endl << endl << "== 2에서 " << "4 까지의 홀수 랜덤 정수 10개 ==" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << "   ";
	}
	cout << endl;
}