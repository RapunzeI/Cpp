#include <iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int k = 1; k <= 10; k++)
		{
			cout << 10 * i + k;
			if (i == 0) cout << "	";
			else cout << "	";
		}
		cout << endl;
	}

	return 0;
}
