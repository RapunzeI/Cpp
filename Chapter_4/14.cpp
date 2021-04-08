#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Player {
	string name;
	int score[3];
public:
	void setName(string a) { name = a; }
	string getName() { return name; }
	void setScore();
	void showScore();
};

class GamblingGame {
public:
	Player p[2];

	void Game();
};
void Player::setScore() {
	srand((unsigned)time(0));
	for (int i = 0; i < 3; i++) {
		score[i] = rand() % 3;
	}
}
void Player::showScore() {
	cout << score[0] << "\t" << score[1] << "\t" << score[2] << "\t";
	if (score[0] == score[1] && score[1] == score[2]) cout << name <<"�� �¸�!!" << endl;
	else cout << "�ƽ�����!" << endl;
}

void GamblingGame::Game() {
	string name, enter;

	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	cout << "ù��° ���� �̸�>>";
	getline(cin, name);
	p[0].setName(name);
	cout << "�ι�° ���� �̸�>>";
	getline(cin, name);
	p[1].setName(name);

	while (1) {
		cout << p[0].getName() << ":";
		cin >> enter;
		if (enter == "<Enter>")
		{
			p[0].setScore();
			cout << "\t\t";
			p[0].showScore();
		}

		cout << p[1].getName() << ":";
		cin >> enter;
		if (enter == "<Enter>")
		{
			p[1].setScore();
			cout << "\t\t";
			p[1].showScore();
		}
	}
}

int main() {
	GamblingGame gm;
	gm.Game();
}