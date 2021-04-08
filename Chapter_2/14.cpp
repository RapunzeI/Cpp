#include <iostream>
#include <string>
using namespace std;

int main(){

	char coffee[11];
	int num, income = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

	while (1) {
		cout << "주문>> ";
		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0){
			cout << 2000 * num << "원입니다. 맛있게 드세요\n";
			income += 2000 * num;
		}
		else if (strcmp(coffee, "아메리카노") == 0){
			cout << 2300 * num << "원입니다. 맛있게 드세요\n";
			income += 2300 * num;
		}
		else if (strcmp(coffee, "카푸치노") == 0){
			cout << 2500 * num << "원입니다. 맛있게 드세요\n";
			income += 2500 * num;
		}
		if (income >= 20000)
			break;
	}

	cout << "오늘 " << income << "원을 판매하여 카페를 닫습니다. 내일 봐요~~\n";


	return 0;
}