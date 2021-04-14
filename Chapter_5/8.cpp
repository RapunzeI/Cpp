#include <iostream>
using namespace std;

class Stack {
	int *p; // ���� �޸𸮷� ����� ������
	int size; // ������ �ִ� ũ��
	int tos; // ������ ž�� ����Ű�� �ε���
public:
	Stack() { tos = 0; size = 0; };
	Stack(int size);
	Stack(const Stack& s);
	~Stack() { delete[]p;  }
	bool push(int n); // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
	bool pop(int& n); // ������ ž�� �ִ� ���� ���Ͽ� n�� ����. ������ ��� ������ false, �ƴϸ� true ����
};
Stack::Stack(int size) {
	this->size = size;
	p = new int[size];
	tos = 0;
}
Stack::Stack(const Stack& s) {
	delete[]p;
	size = s.size;
	p = new int[size];
	tos = s.tos;
}
bool Stack::push(int n) {
	if (tos >= size) {
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
	Stack a(10);
	a.push(10);
	a.push(20);
	Stack b = a; // ���� ����
	b.push(30);
	
	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}