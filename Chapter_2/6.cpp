#include <iostream>
#include <string>
using namespace std;

int main() {
	string A, B;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> A;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> B;

	if (A == B) cout << "�����ϴ�\n";
	else cout << "���� �ʽ��ϴ�\n";

	return 0;
}