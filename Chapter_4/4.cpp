#include <iostream>
//#include <algorithm>
using namespace std;

class Sample{
	int *p;
	int size;
public:
	Sample(int n){
		size = n; p = new int[n];
	}
	void read();
	void write();
	int big();
	~Sample();
};

Sample::~Sample(){
	delete p;
}

void Sample::read(){
	int n;
	for (int i = 0; i < size; i++){
		cin >> n;
		p[i] = n;
	}
}

void Sample::write(){
	for (int i = 0; i < size; i++){
		cout << p[i] << ' ';
	}
	cout << endl;
}

int Sample::big(){
	int max = p[0];
	for (int i = 0; i < size; i++){
		if (max <= p[i]){
			max = p[i];
		}
	}
	return max;

	//return *max_element(p, p + size);
}

int main(){
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}