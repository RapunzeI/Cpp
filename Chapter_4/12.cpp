#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
	string name; // 원의 이름
public:
	void setCircle(string name, int radius); // 이름과 반지름 설정
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
	int radius;
	string name;
public:
	CircleManager(int size); // size 크기의 배열을 동적 생성. 사용자로부터 입력 완료
	~CircleManager() { delete[]p; }
	void searchByName(string name); // 사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByArea(int a); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
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
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}

	string searchName;
	int a;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> searchName;
	searchByName(searchName);
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> a;
	cout << a << "보다 큰 원을 검색합니다." << endl;
	searchByArea(a);
}
void CircleManager::searchByName(string name) {
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << "도넛의 면적은 " << p[i].getArea() << endl;
		}
	}
}
void CircleManager::searchByArea(int a) {
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > a) {
			cout << p[i].getName() + "의 면적은 " << p[i].getArea() << ", ";
		}
	}
}

int main() {
	int n, r;
	string s;

	cout << "원의 개수 >> ";
	cin >> n;

	CircleManager cm(n);
}