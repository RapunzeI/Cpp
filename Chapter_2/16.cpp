#include <iostream>
#include <string>
using namespace std;

int main(){
	char c[10000];
	int strl, n[26] = { 0 }, cnt = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
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

	cout << "\n총 알파벳 수 " << cnt << "\n\n";
	for (char i = 'a'; i <= 'z'; i++){
		cout << i << " " << "(" << n[i - 'a'] << ")" << "\t" << " : ";
		for (int k = 0; k < n[i - 'a']; k++)
			cout << "*";
		cout << "\n";
	}
}