#include <iostream>
using namespace std;

class MyVector{
	int *mem;
public:
	MyVector(int n = 100, int val = 0);
	~MyVector(){ delete []mem; }
};

MyVector::MyVector(int n, int val){
	mem = new int[n];
	for (int i = 0; i < n; i++){
		mem[i] = val;
		cout << mem[i] << ' ';
	}
	cout << endl;
}

int main(){
	MyVector V;
	MyVector Vec(20, 1);

}