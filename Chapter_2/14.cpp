#include <iostream>
#include <string>
using namespace std;

int main(){

	char coffee[11];
	int num, income = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

	while (1) {
		cout << "�ֹ�>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0){
			cout << 2000 * num << "���Դϴ�. ���ְ� �弼��\n";
			income += 2000 * num;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0){
			cout << 2300 * num << "���Դϴ�. ���ְ� �弼��\n";
			income += 2300 * num;
		}
		else if (strcmp(coffee, "īǪġ��") == 0){
			cout << 2500 * num << "���Դϴ�. ���ְ� �弼��\n";
			income += 2500 * num;
		}
		if (income >= 20000)
			break;
	}

	cout << "���� " << income << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~\n";


	return 0;
}