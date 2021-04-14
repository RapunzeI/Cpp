#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	int getRadius() { return radius; }
};

void swap(Circle& c1, Circle& c2) {
	Circle temp = c1;
	c1 = c2;
	c2 = temp;
}
int main(void) {
	Circle c1, c2(5);
	cout << c1.getRadius() << " " << c2.getRadius() << endl;

	swap(c1, c2);
	cout << c1.getRadius() << " " << c2.getRadius() << endl;
}
