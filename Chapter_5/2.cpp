#include <iostream>
using namespace std;

void half(double &n) {
	n = 10;
}

int main(void) {
	double n = 20;
	half(n);
	cout << n;
}