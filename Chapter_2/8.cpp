#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	char name[20];
	string namestr[5];
	int maxlen = 0, n;

	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 20, ';');
		namestr[i] = name;

		if (strlen(name) >= maxlen)
		{
			maxlen = strlen(name);
			n = i;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " : " << namestr[i] << "\n";
	}

	cout << "가장 긴 이름은 " << namestr[n] << "\n";

	return 0;
}