#include <iostream>
using namespace std;

int arr[] = { 0, };
int add(int a[], int b, int c[] = arr) {
	int sum = 0;
	for (int i = 0; i < b; i++){
		sum += a[i] + c[i];
	}
	return sum;
}

int main(){
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c = add(a, 5);
	int d = add(a, 5, b);
	cout << c << endl;
	cout << d << endl;
}