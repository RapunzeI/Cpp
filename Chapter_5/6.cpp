#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int len = strlen(a);
	int loc = NULL;
	success = false;
	for (int i = 0; i < len; i++) {
		if (a[i] == c) {
			success = true;
			loc = i;
		}
	}
	return a[loc];
}

int main(void) {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}