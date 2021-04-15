#include <iostream>
#include <string>
using namespace std;

class Book {
	char *title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price);
	Book(const Book& b);
	~Book() { delete[]title; }
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
};
Book::Book(const char* title, int price) {
	int len = strlen(title) + 1;
	this->title = new char[len];
	strcpy(this->title, title);
	this->price = price;
}
void Book::set(const char* title, int price) {
	if (this->title) delete []this->title;
	int len = strlen(title) + 1;
	this->title = new char[len];
	strcpy(this->title, title);
	this->price = price;
}
Book::Book(const Book& b) {
	int len = strlen(b.title) + 1;
	title = new char[len];
	strcpy(title, b.title);
	price = b.price;
}
int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp; // 복사 생성자 호출
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}