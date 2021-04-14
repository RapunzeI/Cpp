#include <iostream>
using namespace std;

class Stack {
	int p[10]; // �ִ� 10���� ���� ����
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	Stack();
	bool push(int n); // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
	bool pop(int& n); // ���Ͽ� n�� ����. ������ ��� ������ false, �ƴϸ� true ����
};
Stack::Stack() {
	tos = 0;
}
bool Stack::push(int n) {
	if (tos >= 10) {
		return false;
	}
	else {
		p[tos] = n;
		tos++;
		return true;
	}
}
bool Stack::pop(int& n) {
	if (tos <= 0) {
		return false;
	}
	else {
		tos--;
		n = p[tos];
		return true;
	}
}

int main(void) {
	Stack a;
	for (int i = 0; i < 11; i++) {
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " ��° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {
		if (a.pop(n))cout << n << ' ';
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;
}