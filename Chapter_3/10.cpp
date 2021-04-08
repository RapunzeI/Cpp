#include <iostream>
using namespace std;

class Add {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Sub {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Mul {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Div {
	int a;
	int b;
public:
	void setValue(int x, int y);
	int calculate();
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

int Add::calculate() {
	return a + b;
}

int Sub::calculate() {
	return a - b;
}

int Mul::calculate() {
	return a * b;
}

int Div::calculate() {
	return a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char c;

	cout << "두 정수와 연산자를 입력하세요 >> ";
	cin >> x >> y >> c;
	
	if (c == '+') {
		a.setValue(x, y);
		cout << a.calculate() << endl;
	}
	else if (c == '-') {
		s.setValue(x, y);
		cout << s.calculate() << endl;
	}
	else if (c == '*') {
		m.setValue(x, y);
		cout << m.calculate() << endl;
	}
	else if (c == '/') {
		d.setValue(x, y);
		cout << d.calculate() << endl;
	}
}