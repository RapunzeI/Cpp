#include <iostream>
using namespace std;
class ArrayUtil {
public:
	//s1 s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
	static int* concat(int s1[], int s2[], int size);

	//s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���������Ͽ� ����.
	//�����ϴ� �迭�� ũ��� retSize�� ����. retSize�� 0�� ��� NULL ����.
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

	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> x[i];
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>>";
	for (int i = 0; i < 5; i++) cin >> y[i];
	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;

	int* newArr = ArrayUtil::concat(x, y, 10); // concat ���ϰ� ���缭 ���� ����
	for (int i = 0; i < 10; i++) cout << newArr[i] << ' '; // ���� ���

	int cnt;
	int* remArr = ArrayUtil::remove(x, y, 5, cnt);
	cout << endl << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << cnt << endl;
	for (int i = 0; i < cnt; i++) cout << remArr[i] << ' ';

	delete[]newArr;
	delete[]remArr;
}