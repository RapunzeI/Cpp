#include <iostream>
using namespace std;

class Trace {
public:
	static int index;
	static void put(string a, string b);
	static void print();
	static void print(string a);
};
int Trace::index = 0;
string Tag[100];
string Debug[100];

void Trace::put(string a, string b) {
	Tag[index] = a;
	Debug[index] = b;
	index++;
}
void Trace::print() {
	cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
	for (int i = 0; i < index; i++) {
		cout << Tag[i] << ":" << Debug[i] << endl;
	}
}
void Trace::print(string a) {
	cout << "----- " << a << "�±��� Trace ������ ����մϴ�. -----" << endl;
	for (int i = 0; i < 100; i++) {
		if (Tag[i] == a) {
			cout << a << ":" << Debug[i] << endl;
		}
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���"); // ����� ���� ����
	c = a + b;
	Trace::put("f()", "�� ���"); // ����� ���� ����
	cout << "���� " << c << endl;
}

int main() {
	string tag[100];
	string debug[100];
	Trace::put("main()", "���α׷� �����մϴ�"); //����� ���� ����
	f();
	Trace::put("main()", "����"); // put()�� ù ��° �Ű� ������ �±��̰� �� ��° �Ű������� ����� �����̴�.
	Trace::print("f()"); // "f()" �±׸� ���� ����� ������ ��� ����Ѵ�.
	Trace::print(); // ��� ����� ������ ����Ѵ�.
}