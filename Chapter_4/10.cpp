#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void set(string s) { name = s; }
};

class Family {
	Person* p;
	int size;
	string Familyname;
public:
	Family(string n, int size) { p = new Person[size]; Person pname(n); Familyname = n; this->size = size; }
	void setName(int a, string s) { p[a].set(s); }
	void show();
	~Family() { delete []p; }
};

void Family::show() {
	cout << Familyname << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t";
	}
	cout << endl;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs.Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}