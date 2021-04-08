#include <iostream>
#include <string>
using namespace std;

class Person{
	int id;
	double weight;
	string name;
public:
	Person(int a = 1, string s = "Grace", double b = 20.5);
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};
Person::Person(int a = 1, string s = "Grace", double b = 20.5){
	id = a;
	name = s;
	weight = b;
}

int main(){
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}