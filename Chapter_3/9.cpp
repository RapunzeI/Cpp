#include <iostream>
using namespace std;

class Oval{
	int width, height;
public:
	Oval();
	Oval(int a, int b);
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

Oval::Oval(){
	width = 1;
	height = 1;
}

Oval::Oval(int a, int b){
	width = a;
	height = b;
}

Oval::~Oval(){
	cout << "너비 : " << width << "높이 : " << height << endl;
}

int Oval::getWidth(){
	return width;
}

int Oval::getHeight(){
	return height;
}

void Oval::set(int w, int h){
	width = w;
	height = h;
}

void Oval::show(){
	cout << "타원의 너비 : " << width << "타원의 높이 : " << height << endl;
}