#include <iostream>
using namespace std;

int main(){
	int *p = new int[5];
	double sum = 0, avg;

	cout << "���� 5�� �Է� >> ";

	for (int i = 0; i < 5; i++){
		cin >> p[i];
		sum += p[i];
	}
	
	avg = sum / 5;
	cout << avg << endl;
}