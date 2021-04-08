#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int i = -1, cnt = 0, strSize, k = -1;

	cout << "문자열 입력>> ";
	getline(cin, s);

	while (1){
		i = (int)s.find('a', i + 1);
		if (i == -1) break;
		cnt++;
	}

	cout << cnt << endl;
}