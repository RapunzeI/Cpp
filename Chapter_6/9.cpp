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
	cout << "************ 게시판입니다. ************" << endl;
	for (int i = 0; i < index; i++) {
		cout << i << ": " << post[i] << endl;
	}
	cout << endl;
}
int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}