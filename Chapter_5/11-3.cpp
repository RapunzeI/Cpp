#include <iostream>
#include <string>
using namespace std;

class Book {
	char *title; // ���� ���ڿ�
	int price; // ����
public:
	Book(const char* title, int price);
	Book(const Book& b);
	~Book() { delete[]title; }
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "��" << endl; }
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
	Book cpp("��ǰC++", 10000);
	Book java = cpp; // ���� ������ ȣ��
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}