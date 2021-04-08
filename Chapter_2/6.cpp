#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;

	cout << "새 암호를 입력하세요>>";
	cin >> A;

	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> B;

	if (A == B) cout << "같습니다\n";
	else cout << "같지 않습니다\n";

	return 0;
}