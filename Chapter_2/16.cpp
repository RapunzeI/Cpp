#include <iostream>
#include <string>
using namespace std;

int main(){
	char c[10000];
	int strl, n[26] = { 0 }, cnt = 0;

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	cin.getline(c, 10000, ';');

	strl = strlen(c);
	for (int i = 0; i < strl; i++){
		c[i] = tolower(c[i]);
	}

	for (int i = 0; i < strl; i++){
		if (isalpha(c[i])) {
			n[c[i] - 'a']++;
			cnt++;
		}
	}

	cout << "\n�� ���ĺ� �� " << cnt << "\n\n";
	for (char i = 'a'; i <= 'z'; i++){
		cout << i << " " << "(" << n[i - 'a'] << ")" << "\t" << " : ";
		for (int k = 0; k < n[i - 'a']; k++)
			cout << "*";
		cout << "\n";
	}
}