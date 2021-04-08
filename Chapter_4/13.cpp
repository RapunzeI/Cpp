#include <iostream>
#include <cctype>
using namespace std;

class Histogram {
	int alpha[26] = { 0 };
	int cnt = 0;
	string text;
public:
	Histogram() {}
	Histogram(char c[]);
	~Histogram() {  };
	void put(char c[]);
	void putc(char c);
	void print();
};

Histogram::Histogram(char c[]) {
	text += c;
	cout << c << endl;
}
void Histogram::put(char c[]) {
	text += c;
	cout << c;
}

void Histogram::putc(char c) {
	cout << c;
}

void Histogram::print() {
	int size = text.length();

	for (int i = 0; i < size; i++) {
		if (isalpha(text[i]) != 0) {
			text[i] = tolower(text[i]);
			alpha[text[i] - 'a']++;
			cnt++;
		}
	}

	cout << endl << endl << "ÃÑ ¾ËÆÄºª ¼ö " << cnt << endl << endl;

	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << "  " << "(" << alpha[i] << ")" << "\t : ";
		for (int k = 0; k < alpha[i]; k++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	Histogram elvis("Wise men say, only fools rush in But I can't help, ");
	elvis.put("falling in love with you");
	elvis.putc('-');
	elvis.put("Elvis Presley");
	elvis.print();
}