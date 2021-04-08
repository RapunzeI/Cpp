#include <iostream>
using namespace std;;

int main()
{
	char ch[20];

	while (1)
	{
		cout << "종료하고 싶으면 yes를 입력하세요>>";

		cin.getline(ch, 100, '\n');

		if (strcmp(ch, "yes") == 0)
		{
			cout << "종료합니다...\n";
			break;
		}
	}
	
	return 0;
}