#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class str {
public:
	str() {}
	int ranChar();
	int ranNum(int a);
};

int str::ranChar() { //알파벳 26개 중 하나 랜덤추출
	srand((unsigned)time(0));
	return rand() % 26;
}

int str::ranNum(int a) { // 입력된 문자열 중 하나의 문자 랜덤추출
	srand((unsigned)time(0));
	return rand() % a;
}

int main() {
	string s;
	int n, numIndex, charIndex;
	str sData;
	char c;
	string ch;

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;
	while (1) {
		cout << ">>";
		getline(cin, s);

		if (s == "exit") break;
		else {
			n = s.length();

			numIndex = sData.ranNum(n);
			charIndex = sData.ranChar() + 97;

			c = (char)charIndex;
			ch = c;

			s.erase(numIndex, 1);
			s.insert(numIndex, ch);

			cout << s << endl;
		}
	}
}