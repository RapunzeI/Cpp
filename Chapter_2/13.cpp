#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, p;
	string menu[3] = { "짬뽕", "짜장", "군만두" };

	cout << "***** 승리장에 오신 것을 환영합니다. *****\n";

	while (1){
		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4>>  ";
		cin >> n;

		if (n == 4){
			cout << "오늘 영업은 끝났습니다.\n";
			break;
		}
		else if (n > 0 && n < 4){
			cout << "몇인분?";
			cin >> p;
			cout << menu[n - 1] + " " << p << "인분 나왔습니다\n";
		}
		else
			cout << "다시 주문하세요!!\n";
	}

	return 0;
}