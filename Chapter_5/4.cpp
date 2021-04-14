#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) return true;
	else if (a > b) big = a;
	else if (a < b) big = b;
	return false;
}

int main(void) {
	int a, b, big = 0;
	cin >> a >> b;
	cout << bigger(a, b, big) << endl; // ture / false 출력
	if (big) cout << big; // 큰 값 출력
}