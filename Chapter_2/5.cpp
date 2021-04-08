#include <iostream>
using namespace std;

int main()
{
	char ch[100];
	int strl, cnt = 0;

	cout << "문자들을 입력하라(100개 미만).";
	cin.getline(ch, 100, '\n');

	strl = strlen(ch);

	for (int i = 0; i < strl; i++)
		if (ch[0] == 'x') cnt++;

	cout << cnt << endl;

	return 0;
}