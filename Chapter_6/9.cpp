#include <iostream>
using namespace std;
class Board {
public:
	static string *post;
	static int index;
	static void add(string s);
	static void print();
};
string *Board::post = new string[100];
int Board::index = 0;

void Board::add(string s) {
	post[index] = s;
	index++;
}
void Board::print() {
	cout << "************ �Խ����Դϴ�. ************" << endl;
	for (int i = 0; i < index; i++) {
		cout << i << ": " << post[i] << endl;
	}
	cout << endl;
}
int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}