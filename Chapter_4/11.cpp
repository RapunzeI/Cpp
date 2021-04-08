#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size--; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
	~CoffeeVendingMachine() {}
};

void CoffeeVendingMachine::fill() {
	tong[0].fill(); 
	tong[1].fill(); 
	tong[2].fill(); 
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0 && tong[2].getSize() > 0) {
		tong[0].consume();
		tong[1].consume();
		cout << "에스프레소 드세요" << endl;
	}
	else cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0 && tong[2].getSize() > 0) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "아메리카노 드세요" << endl;
	}
	else cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0 && tong[2].getSize() > 0) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 드세요" << endl;
	}
	else cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int n;
	CoffeeVendingMachine c;
	cout << "***** 커피자판기를 작동합니다. *****" << endl;

	while (1) {
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		cin >> n;


		switch (n) {
		case 1:
			c.selectEspresso();
			break;
		case 2:
			c.selectAmericano();
			break;
		case 3:
			c.selectSugarCoffee();
			break;
		case 4:
			c.show();
			break;
		case 5:
			c.fill();
			break;
		default:
			break;
		}
	}
}

int main() {
	CoffeeVendingMachine c;
	c.run();
}