#include <iostream>
#include <string>
using namespace std;

class Person{
	int id;
	double weight;
	string name;
public:
	Person();
	Person(int a, string s);
	Person(int a, string s, double b);
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

Person::Person(){
	id = 1;
	name = "Grace";
	weight = 20.5;
}
Person::Person(int a, string s){
	id = a;
	name = s;
	weight = 20.5;
}
Person::Person(int a, string s, double b){
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