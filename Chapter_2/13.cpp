#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, p;
	string menu[3] = { "«��", "¥��", "������" };

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

	while (1){
		cout << "«�� : 1, ¥�� : 2, ������ : 3, ���� : 4>>  ";
		cin >> n;

		if (n == 4){
			cout << "���� ������ �������ϴ�.\n";
			break;
		}
		else if (n > 0 && n < 4){
			cout << "���κ�?";
			cin >> p;
			cout << menu[n - 1] + " " << p << "�κ� ���Խ��ϴ�\n";
		}
		else
			cout << "�ٽ� �ֹ��ϼ���!!\n";
	}

	return 0;
}