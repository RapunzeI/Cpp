#include <iostream>
using namespace std;

class Stack {
	int *p; // 스택 메모리로 사용할 포인터
	int size; // 스택의 최대 크기
	int tos; // 스택의 탑을 가리키는 인덱스
public:
	Stack() { tos = 0; size = 0; };
	Stack(int size);
	Stack(const Stack& s);
	~Stack() { delete[]p;  }
	bool push(int n); // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
	bool pop(int& n); // 스택의 탑에 있는 값을 팝하여 n에 저장. 스택이 비어 있으면 false, 아니면 true 리턴
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
	Stack b = a; // 복사 생성
	b.push(30);
	
	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}