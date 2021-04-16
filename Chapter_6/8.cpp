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
	cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
	for (int i = 0; i < index; i++) {
		cout << Tag[i] << ":" << Debug[i] << endl;
	}
}
void Trace::print(string a) {
	cout << "----- " << a << "태그의 Trace 정보를 출력합니다. -----" << endl;
	for (int i = 0; i < 100; i++) {
		if (Tag[i] == a) {
			cout << a << ":" << Debug[i] << endl;
		}
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음"); // 디버깅 정보 저장
	c = a + b;
	Trace::put("f()", "합 계산"); // 디버깅 정보 저장
	cout << "합은 " << c << endl;
}

int main() {
	string tag[100];
	string debug[100];
	Trace::put("main()", "프로그램 시작합니다"); //디버깅 정보 저장
	f();
	Trace::put("main()", "종료"); // put()의 첫 번째 매개 변수는 태그이고 두 번째 매개변수는 디버깅 정보이다.
	Trace::print("f()"); // "f()" 태그를 가진 디버깅 정보를 모두 출력한다.
	Trace::print(); // 모든 디버깅 정보를 출력한다.
}