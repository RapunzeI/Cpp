#include <iostream>
using namespace std;

class Account {
	string name;
	int id, balance = 0;
public:
	Account();
	Account(string a, int b, int c);

	void deposit(int d);
	string getOwner();
	int withdraw(int w);
	int inquiry();
};

void Account::deposit(int d) {
	balance += d;
}

string Account::getOwner() {
	return name;
}

int Account::withdraw(int w) {
	balance -= w;
	return 0;
}

int Account::inquiry() {
	return balance;
}

Account::Account(string a, int b, int c) {
	name = a;
	id = b;
	balance = c;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}