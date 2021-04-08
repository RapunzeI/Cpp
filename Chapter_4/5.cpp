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

int str::ranChar() { //���ĺ� 26�� �� �ϳ� ��������
	srand((unsigned)time(0));
	return rand() % 26;
}

int str::ranNum(int a) { // �Էµ� ���ڿ� �� �ϳ��� ���� ��������
	srand((unsigned)time(0));
	return rand() % a;
}

int main() {
	string s;
	int n, numIndex, charIndex;
	str sData;
	char c;
	string ch;

	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;
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