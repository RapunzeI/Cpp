#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};
Buffer& append(Buffer& b, string s) {
	b.add(s);
	return b;
}

int main(void) {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print(); // HelloGuys
	buf.print(); // HelloGuys
}