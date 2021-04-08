#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "두 수를 입력하라>>";
	cin >> a >> b;

	if (a >= b) cout << a << endl;
	else if (a <= b) cout << b << endl;

	return 0;
}