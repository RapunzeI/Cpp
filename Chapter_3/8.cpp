#include <iostream>
#include <string>
using namespace std;

class Integer {
	int n;
public:
	Integer();
	Integer(int a) {
		n = a;
	}
	Integer(string s) {
		n = stoi(s);
	}
	int get() {
		return n;
	}
	void set(int a) {
		n = a;
	}
	int isEven() {
		return true;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}