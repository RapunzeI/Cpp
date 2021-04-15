#include <iostream>
using namespace std;
class ArrayUtil {
public:
	//s1 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size);

	//s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적생성하여 리턴.
	//리턴하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL 리턴.
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtil::concat(int s1[], int s2[], int size) {
	int *newS = new int[size];
	for (int i = 0; i < 5; i++) {
		newS[i] = s1[i];
	}
	for (int i = 5; i < 10; i++) {
		newS[i] = s2[i - 5];
	}
	return newS;
	delete[]newS;
}

int* ArrayUtil::remove(int s1[], int s2[], int size, int& retSize) {
	int cnt = 0;
	bool b = false;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j]) {
				s1[i] = NULL;
				b = true;
				break;
			}
		}
		if (!b) cnt++;
		b = false;
	}
	int index = 0;
	int* newArr = new int[cnt];
	for (int i = 0; i < size; i++) {
		if (s1[i] != NULL) {
			newArr[index] = s1[i];
			index++;
		}
	}
	retSize = cnt;
	return newArr;
}


int main() {
	int x[5], y[5];

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> y[i];
	cout << "합친 정수 배열을 출력한다." << endl;

	int* newArr = ArrayUtil::concat(x, y, 10); // concat 리턴값 맞춰서 변수 생성
	for (int i = 0; i < 10; i++) cout << newArr[i] << ' '; // 변수 출력

	int cnt;
	int* remArr = ArrayUtil::remove(x, y, 5, cnt);
	cout << endl << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << cnt << endl;
	for (int i = 0; i < cnt; i++) cout << remArr[i] << ' ';

	delete[]newArr;
	delete[]remArr;
}