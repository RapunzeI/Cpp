#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
	string name; // ���� �̸�
public:
	void setCircle(string name, int radius); // �̸��� ������ ����
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
	int radius;
	string name;
public:
	CircleManager(int size); // size ũ���� �迭�� ���� ����. ����ڷκ��� �Է� �Ϸ�
	~CircleManager() { delete[]p; }
	void searchByName(string name); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ���
	void searchByArea(int a); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ���
};

void Circle::setCircle(string name, int radius) {
	this->radius = radius;
	this->name = name;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}
string Circle::getName() {
	return name;
}

CircleManager::CircleManager(int size) {
	p = new Circle[size];
	this->size = size;

	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}

	string searchName;
	int a;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> searchName;
	searchByName(searchName);
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> a;
	cout << a << "���� ū ���� �˻��մϴ�." << endl;
	searchByArea(a);
}
void CircleManager::searchByName(string name) {
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << "������ ������ " << p[i].getArea() << endl;
		}
	}
}
void CircleManager::searchByArea(int a) {
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > a) {
			cout << p[i].getName() + "�� ������ " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	int n, r;
	string s;

	cout << "���� ���� >> ";
	cin >> n;

	CircleManager cm(n);
}