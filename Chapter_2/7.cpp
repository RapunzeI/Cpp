#include <iostream>
using namespace std;;

int main()
{
	char ch[20];

	while (1)
	{
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";

		cin.getline(ch, 100, '\n');

		if (strcmp(ch, "yes") == 0)
		{
			cout << "�����մϴ�...\n";
			break;
		}
	}
	
	return 0;
}