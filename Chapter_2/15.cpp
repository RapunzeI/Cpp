#include <iostream>
using namespace std;

int main(){
	char opt;
	int a, b;

	while (1)
	{
		cout << "?  ";
		cin >> a >> opt >> b;

		cout << a << " " << opt << " " << b << " = ";

		switch (opt){
		case '+': cout << a + b << "\n"; break;
		case '-': cout << a - b << "\n"; break;
		case '*': cout << a * b << "\n"; break;
		case '/': cout << a / b << "\n"; break;
		case '%': cout << a % b << "\n"; break;
		}
	}
}