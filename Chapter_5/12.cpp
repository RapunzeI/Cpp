#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size) {
		this->size = size;
		scores = new int[size];
	}
	//Dept(const Dept& dept);
	~Dept() { delete[]scores; }
	int getSize() { return size; }
	void read();
	bool isOver60(int index);
};
//Dept::Dept(const Dept& dept) {
//	size = dept.size;
//	scores = new int[size];
//	for (int i = 0; i < size; i++) {
//		scores[i] = dept.scores[i];
//	}
//}
void Dept::read() {
	cout << size << "�� ���� �Է�>> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}
bool Dept::isOver60(int index) {
	if (scores[index] > 60) return true;
	else return false;
}
int countPass(Dept &dept) {
	int cnt = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) cnt++;
	}
	return cnt;
}

int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60�� �̻��� " << n << "��";
}