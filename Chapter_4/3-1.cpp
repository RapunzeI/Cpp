#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int strl, cnt = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, str);

	strl = str.size();

	for (int i = 0; i < strl; i++){
		if (str.at(i) == 'a'){
			cnt++;
		}
	}
	cout << cnt << endl;
}

