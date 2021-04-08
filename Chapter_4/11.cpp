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
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0 && tong[2].getSize() > 0) {
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
	else cout << "���ᰡ �����մϴ�." << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0 && tong[2].getSize() > 0) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
	else cout << "���ᰡ �����մϴ�." << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() > 0 && tong[1].getSize() > 0 && tong[2].getSize() > 0) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
	else cout << "���ᰡ �����մϴ�." << endl;
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int n;
	CoffeeVendingMachine c;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;

	while (1) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
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