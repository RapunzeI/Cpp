#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	Person* p = new Person[3];
	string name, tel, search;
	int n;

	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name;
		getline(cin, tel);
		p[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 " + p[0].getName() + " " + p[1].getName() + " " + p[2].getName() << endl;
	cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
	cin >> search;
	
	for (int i = 0; i < 3; i++) {
		if (p[i].getName() == search) n = i;
	}

	cout << p[n].getTel();
}