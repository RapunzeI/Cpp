#include <iostream>
using namespace std;
int main(){
	char ch[20];
	int strl;

	cout << "���ڿ� �Է�>>";
	cin >> ch;

	strl = strlen(ch);
	for (int i = 0; i < strl; i++){
		for (int k = 0; k <= i; k++)
			cout << ch[k];
		cout << endl;
	}
}