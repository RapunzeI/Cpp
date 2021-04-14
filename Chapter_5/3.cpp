#include <iostream>
#include <string>
using namespace std;

void combine(string &a, string &b, string &c) {
	c = a.append(" " + b);
}

int main(void) {
	string text1("I love you"), text2("very much"), text3;
	combine(text1, text2, text3);
	cout << text3;
}