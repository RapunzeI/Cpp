#include <iostream>
#include <string>
using namespace std;

class Str {
	string s;
public:
	Str() {};
	void Rev(string a);
};

void Str::Rev(string a) {
	s = a;
	int n = s.length();

	for (int i = 0; i <= n; i++) {
		cout << s[n - i];
	}

	cout << endl;
}

int main() {
	string str;
	Str s;

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;

	while (1) {
		cout << ">>";
		getline(cin, str);
		s.Rev(str);
	}
}